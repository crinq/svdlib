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

import sys
import json 

svd_prefix = ""

if len(sys.argv) <= 1:
  print("usage: %s json_file > header_file" % sys.argv[0])
  exit()
device = json.loads(open(sys.argv[1]).read())


print "/* header created by " + sys.argv[0] + " from " + sys.argv[1] + " */"
print "#include <stdint.h>\n"
print "#define " + svd_prefix + "CPU " + device["name"] + "\n"

reserved_count = 0

def get_type(s):
  if s <= 8:
    return "uint8_t"
  if s <= 16:
    return "uint16_t"
  return "uint32_t"

for p in sorted(device["peripherals"], key = lambda p: p["base"]):
  offset = 0
  print "/** "
  print "*  name: " + p["name"]
  print "*  description: " + p["description"]
  print "*  group: " + p["group"]
  print "*  address: 0x" + format(p["base"], "08X")
  print "*/"
  print "typedef struct{"
  for i, r in enumerate(sorted(p["registers"], key = lambda r: r["offset"])):
    if offset < r["offset"]:
      print "  const uint8_t _RESERVED_" + str(reserved_count) + "[" + str(r["offset"] - offset) + "];\n"
      reserved_count += 1
    offset = r["offset"] + r["size"]
    print "  /** " 
    print "  * name: " + r["name"]
    print "  * description: " + r["description"]
    print "  * address: 0x" + format(p["base"] + r["offset"], "08X")
    print "  * offset: 0x" + format(r["offset"], "X")
    if r["size"] <= 8:
      print "  * reset value: 0x" + format(r["reset"], "02X")
    elif r["size"] <= 16:
      print "  * reset value: 0x" + format(r["reset"], "04X")
    else:
      print "  * reset value: 0x" + format(r["reset"], "08X")
    print "  * size: 0x" + format(r["size"], "X")
    print "  * access: " + r["access"]
    print "  */"
    #print "  union{"
    if r["access"] == "read-only":
      print "  const struct " + p["name"] + "_" + r["name"] + "_t {"
    else:
      print "  struct " + p["name"] + "_" + r["name"] + "_t {"
    bit_offset = 0
    for i, f in enumerate(sorted(r["fields"], key = lambda f: f["start"])):
      if bit_offset < f["start"]:
        print "    " + get_type(r["size"]) + " _RESERVED_" + str(reserved_count) + " : " + str(f["start"] - bit_offset) + ";"
        reserved_count += 1
      bit_offset = f["start"] + f["size"]
      print "    " + get_type(r["size"]) + " " + f["name"] + " : " + str(f["size"]) + ";  ///< " + f["description"] + ", reset value: 0x" + format((r["reset"] >> f["start"]) & (pow(2, f["size"]) - 1), "X")
    #print "    };"
    #print "    uint32_t w;"
    print "  } " + r["name"] + ";\n"
  print "} " + svd_prefix + p["name"] + "_t;\n\n"


for p in sorted(device["peripherals"], key = lambda p: p["base"]):
  print "#define " + svd_prefix + p["name"] + " ((volatile " + p["name"] + "_t * ) 0x" + format(p["base"], "08X") + ")"
print "\n"

print "typedef enum{"
print "/******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/"
print "  NonMaskableInt_IRQn         = -14,    /*!< 2 Non Maskable Interrupt                                          */"
print "  MemoryManagement_IRQn       = -12,    /*!< 4 Cortex-M4 Memory Management Interrupt                           */"
print "  BusFault_IRQn               = -11,    /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */"
print "  UsageFault_IRQn             = -10,    /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */"
print "  SVCall_IRQn                 = -5,     /*!< 11 Cortex-M4 SV Call Interrupt                                    */"
print "  DebugMonitor_IRQn           = -4,     /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */"
print "  PendSV_IRQn                 = -2,     /*!< 14 Cortex-M4 Pend SV Interrupt                                    */"
print "  SysTick_IRQn                = -1,     /*!< 15 Cortex-M4 System Tick Interrupt                                */"
print "/******  " + device["name"] + " specific Interrupt Numbers *******************************************************************/"

irq = []
for p in device["peripherals"]:
  irq.extend(p["interrupts"])

irq = sorted(irq, key = lambda i: i["value"])
for j, i in enumerate(irq):
  if i["value"] != irq[j - 1]["value"]:
    print "  " + i["name"] + "_IRQn = " + str(i["value"]) + ", ///< " + i["description"]

print "} " + svd_prefix + "IRQn_Type;"