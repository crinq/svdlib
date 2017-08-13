# This file is part of the SVDLIB project.

# Copyright (C) 2017 Nico Stute <crinq@crinq.de>

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import xml.etree.ElementTree as ET
import sys
import json 

if len(sys.argv) <= 1:
  print("usage: %s svd_file > json_file" % sys.argv[0])
  exit()
tree = ET.parse(sys.argv[1])
root = tree.getroot()


def parse_device(d):
  dev = {}
  dev["name"] = ""
  dev["peripherals"] = []

  for c in d:
    if c.tag.lower() == "cpu":
      parse_cpu(c)
      
    elif c.tag.lower() == "peripherals":
      for p in c:
        dev["peripherals"].append(parse_peripheral(p))
        if p.attrib != {}:
          for dp in dev["peripherals"]:
            if dp["name"] == p.attrib["derivedFrom"]:
              if dev["peripherals"][-1]["description"] == "":
                dev["peripherals"][-1]["description"] = dp["description"]
              if dev["peripherals"][-1]["group"] == "":
                dev["peripherals"][-1]["group"] = dp["group"]
              if dev["peripherals"][-1]["registers"] == []:
                dev["peripherals"][-1]["registers"] = dp["registers"]

    elif c.tag.lower() == "name":
      dev["name"] = c.text
  
  return(dev)

def parse_cpu(c):
  pass

def parse_peripheral(p):
  perip = {}
  perip["name"] = ""
  perip["group"] = ""
  perip["description"] = ""
  perip["base"] = 0
  perip["registers"] = []
  perip["interrupts"] = []
        
  for e in p:
    if e.tag.lower() == "name":
      perip["name"] = e.text

    elif e.tag.lower() == "description":
      perip["description"] = " ".join(e.text.split())

    elif e.tag.lower() == "groupname":
      perip["group"] = e.text

    elif e.tag.lower() == "baseaddress":
      perip["base"] = int(e.text, 0)

    elif e.tag.lower() == "interrupt":
      perip["interrupts"].append(parse_interrupt(e))

    elif e.tag.lower() == "registers":
      for r in e:
        perip["registers"].append(parse_register(r))
  
  return(perip)


def parse_interrupt(i):
  inter = {}
  inter["name"] = ""
  inter["description"] = ""
  inter["value"] = 0

  for e in i:
    if e.tag.lower() == "name":
      inter["name"] = e.text
    
    elif e.tag.lower() == "description":
      inter["description"] = " ".join(e.text.split())

    elif e.tag.lower() == "value":
      inter["value"] = int(e.text, 0)

  return(inter)

def parse_register(r):
  reg = {}
  reg["name"] = ""
  reg["description"] = ""
  reg["offset"] = 0
  reg["access"] = ""
  reg["size"] = 0
  reg["fields"] = []
  reg["reset"] = 0

  for e in r:
    if e.tag.lower() == "name":
      reg["name"] = e.text

    elif e.tag.lower() == "description":
      reg["description"] = " ".join(e.text.split())

    elif e.tag.lower() == "addressoffset":
       reg["offset"] = int(e.text, 0)

    elif e.tag.lower() == "access":
       reg["access"] = e.text

    elif e.tag.lower() == "resetvalue":
      reg["reset"] = int(e.text, 0)
    
    elif e.tag.lower() == "size":
      reg["size"] = int(e.text, 0)
    
    elif e.tag.lower() == "fields":
      for f in e:
        reg["fields"].append(parse_field(f))
  
  return(reg)

def parse_field(f):
  field = {}
  field["name"] = ""
  field["description"] = ""
  field["start"] = 0
  field["size"] = 0

  for e in f:
    if e.tag.lower() == "name":
      field["name"] = e.text

    elif e.tag.lower() == "description":
      field["description"] = " ".join(e.text.split())
    
    elif e.tag.lower() == "bitoffset":
      field["start"] = int(e.text, 0)

    elif e.tag.lower() == "bitwidth":
      field["size"] = int(e.text, 0)
    
  return(field)

d = parse_device(root)
print json.dumps(d)