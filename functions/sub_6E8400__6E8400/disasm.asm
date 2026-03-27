0x6E8400: push    esi
0x6E8401: push    edi
0x6E8402: mov     edi, [esp+8+arg_0]
0x6E8406: push    edi
0x6E8407: mov     esi, ecx
0x6E8409: call    sub_6EC2C0
0x6E840E: test    al, al
0x6E8410: jnz     short loc_6E8417
0x6E8412: pop     edi
0x6E8413: pop     esi
0x6E8414: retn    4
0x6E8417: mov     ecx, [esi+10h]
0x6E841A: test    ecx, ecx
0x6E841C: jz      short loc_6E8426
0x6E841E: mov     eax, [ecx]
0x6E8420: mov     edx, [eax+24h]
0x6E8423: push    edi
0x6E8424: call    edx
0x6E8426: pop     edi
0x6E8427: mov     al, 1
0x6E8429: pop     esi
0x6E842A: retn    4
