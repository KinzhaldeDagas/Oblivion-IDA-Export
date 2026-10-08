0x4D89F0: fld     [esp+radians]; TES4 authoritative: write reference rotation Y at TESObjectREFR+0x24, then notify the reference through virtual slot +0x40 with change mask 4.
0x4D89F4: mov     eax, [ecx]
0x4D89F6: mov     edx, [eax+40h]
0x4D89F9: fstp    dword ptr [ecx+24h]
0x4D89FC: mov     [esp+radians], 4
0x4D8A04: jmp     edx
