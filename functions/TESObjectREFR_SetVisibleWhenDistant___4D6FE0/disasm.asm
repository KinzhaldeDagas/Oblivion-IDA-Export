0x4D6FE0: cmp     [esp+a2], 0
0x4D6FE5: mov     eax, [ecx+8]
0x4D6FE8: jz      short loc_4D6FF5
0x4D6FEA: or      eax, 8000h
0x4D6FEF: mov     [ecx+8], eax
0x4D6FF2: retn    4
0x4D6FF5: and     eax, 0FFFF7FFFh
0x4D6FFA: mov     [ecx+8], eax
0x4D6FFD: retn    4
