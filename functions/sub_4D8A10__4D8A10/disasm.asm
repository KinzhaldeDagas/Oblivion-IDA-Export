0x4D8A10: fld     [esp+radians]; TES4 authoritative: write reference rotation Z at TESObjectREFR+0x28, then notify the reference through virtual slot +0x40 with change mask 4.
0x4D8A14: mov     eax, [ecx]
0x4D8A16: mov     edx, [eax+40h]
0x4D8A19: fstp    dword ptr [ecx+28h]
0x4D8A1C: mov     [esp+radians], 4
0x4D8A24: jmp     edx
