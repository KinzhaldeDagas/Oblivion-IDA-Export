0x6CE350: push    esi
0x6CE351: push    edi
0x6CE352: mov     edi, [esp+8+arg_0]
0x6CE356: push    edi
0x6CE357: mov     esi, ecx
0x6CE359: call    sub_754EA0
0x6CE35E: test    al, al
0x6CE360: jnz     short loc_6CE367
0x6CE362: pop     edi
0x6CE363: pop     esi
0x6CE364: retn    4
0x6CE367: mov     ecx, [esi+3Ch]
0x6CE36A: test    ecx, ecx
0x6CE36C: jz      short loc_6CE376
0x6CE36E: mov     eax, [ecx]
0x6CE370: mov     edx, [eax+24h]
0x6CE373: push    edi
0x6CE374: call    edx
0x6CE376: pop     edi
0x6CE377: mov     al, 1
0x6CE379: pop     esi
0x6CE37A: retn    4
