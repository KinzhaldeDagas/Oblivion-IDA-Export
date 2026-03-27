0x6DD1F0: push    esi
0x6DD1F1: push    edi
0x6DD1F2: mov     edi, [esp+8+arg_0]
0x6DD1F6: push    edi
0x6DD1F7: mov     esi, ecx
0x6DD1F9: call    sub_715E40
0x6DD1FE: mov     ecx, [esi+48h]
0x6DD201: test    ecx, ecx
0x6DD203: jz      short loc_6DD20D
0x6DD205: mov     eax, [ecx]
0x6DD207: mov     edx, [eax+38h]
0x6DD20A: push    edi
0x6DD20B: call    edx
0x6DD20D: mov     ecx, [esi+4Ch]
0x6DD210: test    ecx, ecx
0x6DD212: jz      short loc_6DD21C
0x6DD214: mov     eax, [ecx]
0x6DD216: mov     edx, [eax+38h]
0x6DD219: push    edi
0x6DD21A: call    edx
0x6DD21C: pop     edi
0x6DD21D: pop     esi
0x6DD21E: retn    4
