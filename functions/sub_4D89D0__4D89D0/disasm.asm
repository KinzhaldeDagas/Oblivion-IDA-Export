0x4D89D0: fld     [esp+radians]; TES4 authoritative: write reference rotation X at TESObjectREFR+0x20, then notify the reference through virtual slot +0x40 with change mask 4.
0x4D89D4: mov     eax, [ecx]
0x4D89D6: mov     edx, [eax+40h]
0x4D89D9: fstp    dword ptr [ecx+20h]
0x4D89DC: mov     [esp+radians], 4
0x4D89E4: jmp     edx
