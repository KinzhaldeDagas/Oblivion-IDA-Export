0x6B7C30: push    esi
0x6B7C31: mov     esi, ecx
0x6B7C33: mov     ecx, [esi+0Ch]; int
0x6B7C36: test    ecx, ecx
0x6B7C38: jz      short loc_6B7C56
0x6B7C3A: movzx   eax, byte ptr [ecx+25h]
0x6B7C3E: shr     eax, 3
0x6B7C41: test    al, 1
0x6B7C43: jnz     short loc_6B7C56
0x6B7C45: call    sub_5308D0
0x6B7C4A: mov     ecx, [esi+18h]
0x6B7C4D: push    ecx
0x6B7C4E: mov     ecx, [esi+0Ch]
0x6B7C51: call    sub_531470
0x6B7C56: pop     esi
0x6B7C57: retn
