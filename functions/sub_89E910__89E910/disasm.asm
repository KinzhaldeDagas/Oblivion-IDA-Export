0x89E910: movzx   eax, word ptr [ecx+0Ch]
0x89E914: test    al, 20h
0x89E916: jz      short loc_89E925
0x89E918: shr     al, 6
0x89E91B: test    al, 1
0x89E91D: jnz     short loc_89E925
0x89E91F: mov     eax, 1
0x89E924: retn
0x89E925: xor     eax, eax
0x89E927: retn
