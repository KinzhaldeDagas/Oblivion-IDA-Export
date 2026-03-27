0x6F6F00: mov     eax, [ecx+20h]
0x6F6F03: cmp     dword ptr [eax], 0
0x6F6F06: jz      short loc_6F6F0E
0x6F6F08: mov     ecx, [ecx+30h]
0x6F6F0B: mov     eax, [ecx]
0x6F6F0D: retn
0x6F6F0E: xor     eax, eax
0x6F6F10: retn
