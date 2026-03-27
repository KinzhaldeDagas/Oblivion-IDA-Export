0x6E2C40: push    esi
0x6E2C41: push    edi
0x6E2C42: mov     edi, [esp+8+arg_0]
0x6E2C46: push    edi
0x6E2C47: mov     esi, ecx
0x6E2C49: call    sub_6ECF50
0x6E2C4E: test    al, al
0x6E2C50: jnz     short loc_6E2C57
0x6E2C52: pop     edi
0x6E2C53: pop     esi
0x6E2C54: retn    4
0x6E2C57: mov     eax, [esi+48h]
0x6E2C5A: cmp     eax, [edi+48h]
0x6E2C5D: pop     edi
0x6E2C5E: setz    al
0x6E2C61: pop     esi
0x6E2C62: retn    4
