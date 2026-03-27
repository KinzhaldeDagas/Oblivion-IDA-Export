0x723400: push    esi
0x723401: push    edi
0x723402: mov     edi, [esp+8+arg_0]
0x723406: push    edi
0x723407: mov     esi, ecx
0x723409: call    sub_707AF0
0x72340E: test    al, al
0x723410: jnz     short loc_723417
0x723412: pop     edi
0x723413: pop     esi
0x723414: retn    4
0x723417: mov     ecx, [esi+0B4h]
0x72341D: mov     eax, [ecx]
0x72341F: mov     edx, [eax+24h]
0x723422: push    edi
0x723423: call    edx
0x723425: mov     ecx, [esi+0B8h]
0x72342B: test    ecx, ecx
0x72342D: jz      short loc_723437
0x72342F: mov     eax, [ecx]
0x723431: mov     edx, [eax+24h]
0x723434: push    edi
0x723435: call    edx
0x723437: pop     edi
0x723438: mov     al, 1
0x72343A: pop     esi
0x72343B: retn    4
