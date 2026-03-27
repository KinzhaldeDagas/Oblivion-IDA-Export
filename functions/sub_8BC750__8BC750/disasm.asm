0x8BC750: mov     edx, [ecx+48h]
0x8BC753: push    esi
0x8BC754: xor     eax, eax
0x8BC756: test    edx, edx
0x8BC758: push    edi
0x8BC759: mov     edi, [esp+8+arg_0]
0x8BC75D: jle     short loc_8BC76E
0x8BC75F: mov     esi, [ecx+44h]
0x8BC762: cmp     [esi], edi
0x8BC764: jz      short loc_8BC7AB
0x8BC766: inc     eax
0x8BC767: add     esi, 10h
0x8BC76A: cmp     eax, edx
0x8BC76C: jl      short loc_8BC762
0x8BC76E: mov     eax, [ecx+4Ch]
0x8BC771: lea     esi, [ecx+44h]
0x8BC774: mov     ecx, [esi+4]
0x8BC777: and     eax, 3FFFFFFFh
0x8BC77C: cmp     ecx, eax
0x8BC77E: jnz     short loc_8BC78B
0x8BC780: push    10h
0x8BC782: push    esi
0x8BC783: call    sub_8A6EE0
0x8BC788: add     esp, 8
0x8BC78B: mov     ecx, [esi+4]
0x8BC78E: mov     edx, [esi]
0x8BC790: mov     eax, ecx
0x8BC792: shl     eax, 4
0x8BC795: add     eax, edx
0x8BC797: mov     edx, [esp+8+arg_8]
0x8BC79B: inc     ecx
0x8BC79C: mov     [esi+4], ecx
0x8BC79F: mov     ecx, [esp+8+arg_4]
0x8BC7A3: mov     [eax+8], ecx
0x8BC7A6: mov     [eax+0Ch], edx
0x8BC7A9: mov     [eax], edi
0x8BC7AB: pop     edi
0x8BC7AC: pop     esi
0x8BC7AD: retn    0Ch
