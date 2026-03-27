0x4CAF90: movzx   eax, byte ptr [ecx+24h]
0x4CAF94: test    al, 1
0x4CAF96: jz      short loc_4CAFAA
0x4CAF98: shr     eax, 7
0x4CAF9B: test    al, 1
0x4CAF9D: jnz     short loc_4CAFA2
0x4CAF9F: xor     eax, eax
0x4CAFA1: retn
0x4CAFA2: add     ecx, 28h ; '('; this
0x4CAFA5: jmp     loc_41F9E0
0x4CAFAA: mov     ecx, [ecx+50h]
0x4CAFAD: jmp     sub_4EF7A0
