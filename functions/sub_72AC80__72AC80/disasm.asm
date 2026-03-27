0x72AC80: push    esi
0x72AC81: push    edi
0x72AC82: mov     edi, [esp+8+arg_0]
0x72AC86: push    edi
0x72AC87: mov     esi, ecx
0x72AC89: call    sub_71FDE0
0x72AC8E: test    al, al
0x72AC90: jz      short loc_72ACAD
0x72AC92: mov     ax, [esi+58h]
0x72AC96: cmp     ax, [edi+58h]
0x72AC9A: jnz     short loc_72ACAD
0x72AC9C: mov     cx, [esi+5Ah]
0x72ACA0: cmp     cx, [edi+5Ah]
0x72ACA4: jnz     short loc_72ACAD
0x72ACA6: pop     edi
0x72ACA7: mov     al, 1
0x72ACA9: pop     esi
0x72ACAA: retn    4
0x72ACAD: pop     edi
0x72ACAE: xor     al, al
0x72ACB0: pop     esi
0x72ACB1: retn    4
