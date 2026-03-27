0x6D6C40: push    esi
0x6D6C41: push    edi
0x6D6C42: mov     edi, [esp+8+arg_0]
0x6D6C46: push    edi
0x6D6C47: mov     esi, ecx
0x6D6C49: call    sub_6EC5C0
0x6D6C4E: test    al, al
0x6D6C50: jz      short loc_6D6C79
0x6D6C52: mov     eax, [edi+40h]
0x6D6C55: cmp     eax, [esi+40h]
0x6D6C58: jnz     short loc_6D6C79
0x6D6C5A: mov     cl, [edi+48h]
0x6D6C5D: cmp     cl, [esi+48h]
0x6D6C60: jnz     short loc_6D6C79
0x6D6C62: mov     edx, [edi+4Ch]
0x6D6C65: cmp     edx, [esi+4Ch]
0x6D6C68: jnz     short loc_6D6C79
0x6D6C6A: mov     eax, [edi+50h]
0x6D6C6D: cmp     eax, [esi+50h]
0x6D6C70: jnz     short loc_6D6C79
0x6D6C72: pop     edi
0x6D6C73: mov     al, 1
0x6D6C75: pop     esi
0x6D6C76: retn    4
0x6D6C79: pop     edi
0x6D6C7A: xor     al, al
0x6D6C7C: pop     esi
0x6D6C7D: retn    4
