0x723A60: push    esi
0x723A61: push    edi
0x723A62: mov     edi, [esp+8+arg_0]
0x723A66: push    edi
0x723A67: mov     esi, ecx
0x723A69: call    sub_721A50
0x723A6E: test    al, al
0x723A70: jnz     short loc_723A77
0x723A72: pop     edi
0x723A73: pop     esi
0x723A74: retn    4
0x723A77: mov     ecx, [esi+0FCh]
0x723A7D: test    ecx, ecx
0x723A7F: jz      short loc_723A89
0x723A81: mov     eax, [ecx]
0x723A83: mov     edx, [eax+24h]
0x723A86: push    edi
0x723A87: call    edx
0x723A89: pop     edi
0x723A8A: mov     al, 1
0x723A8C: pop     esi
0x723A8D: retn    4
