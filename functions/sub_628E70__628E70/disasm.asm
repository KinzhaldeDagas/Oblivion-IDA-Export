0x628E70: cmp     byte ptr [ecx+61h], 0
0x628E74: jz      short loc_628E82
0x628E76: cmp     dword ptr [ecx+64h], 0
0x628E7A: jbe     short loc_628E82
0x628E7C: mov     eax, 1
0x628E81: retn
0x628E82: xor     eax, eax
0x628E84: retn
