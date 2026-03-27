0x6E4BE0: push    esi
0x6E4BE1: push    edi
0x6E4BE2: mov     edi, [esp+8+arg_0]
0x6E4BE6: push    edi
0x6E4BE7: mov     esi, ecx
0x6E4BE9: call    sub_6ED370
0x6E4BEE: test    al, al
0x6E4BF0: jz      short loc_6E4C21
0x6E4BF2: lea     eax, [edi+1Ch]
0x6E4BF5: push    eax
0x6E4BF6: lea     ecx, [esi+1Ch]
0x6E4BF9: call    sub_6CE450
0x6E4BFE: test    al, al
0x6E4C00: jz      short loc_6E4C21
0x6E4C02: mov     ecx, [edi+3Ch]
0x6E4C05: cmp     ecx, [esi+3Ch]
0x6E4C08: jnz     short loc_6E4C21
0x6E4C0A: mov     edx, [edi+40h]
0x6E4C0D: cmp     edx, [esi+40h]
0x6E4C10: jnz     short loc_6E4C21
0x6E4C12: mov     eax, [edi+44h]
0x6E4C15: cmp     eax, [esi+44h]
0x6E4C18: jnz     short loc_6E4C21
0x6E4C1A: pop     edi
0x6E4C1B: mov     al, 1
0x6E4C1D: pop     esi
0x6E4C1E: retn    4
0x6E4C21: pop     edi
0x6E4C22: xor     al, al
0x6E4C24: pop     esi
0x6E4C25: retn    4
