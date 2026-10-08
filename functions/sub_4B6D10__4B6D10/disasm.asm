0x4B6D10: mov     al, [ecx+64h]; Verified: tests bit 0x08 at TESObjectDOOR +0x64. CalcLowPathToPoint prints the suffix '-MinUse' when this helper succeeds; travel search adds a penalty for either endpoint door carrying the bit unless ignore-min-use is enabled.
0x4B6D13: shr     al, 3
0x4B6D16: and     al, 1
0x4B6D18: retn
