0x4CA9C0: push    esi
0x4CA9C1: mov     esi, ecx
0x4CA9C3: mov     ecx, ds:0B33B00h
0x4CA9C9: push    edi
0x4CA9CA: call    sub_45A500
0x4CA9CF: test    al, al
0x4CA9D1: mov     edi, [esp+8+arg_0]
0x4CA9D5: jz      short loc_4CA9DB
0x4CA9D7: test    edi, edi
0x4CA9D9: jnz     short loc_4CA9E8
0x4CA9DB: push    edi
0x4CA9DC: lea     ecx, [esi+28h]
0x4CA9DF: call    ExtraDataList?_SetDetachTime
0x4CA9E4: test    edi, edi
0x4CA9E6: jz      short loc_4CA9FB
0x4CA9E8: mov     eax, [esi]
0x4CA9EA: mov     edx, [eax+40h]
0x4CA9ED: push    8000000h
0x4CA9F2: mov     ecx, esi
0x4CA9F4: call    edx
0x4CA9F6: pop     edi
0x4CA9F7: pop     esi
0x4CA9F8: retn    4
0x4CA9FB: mov     eax, [esi]
0x4CA9FD: mov     edx, [eax+44h]
0x4CAA00: push    0E000000h
0x4CAA05: mov     ecx, esi
0x4CAA07: call    edx
0x4CAA09: pop     edi
0x4CAA0A: pop     esi
0x4CAA0B: retn    4
