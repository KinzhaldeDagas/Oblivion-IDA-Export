0x4D7880: push    esi
0x4D7881: mov     esi, ecx
0x4D7883: push    edi
0x4D7884: lea     edi, [esi+44h]
0x4D7887: test    edi, edi
0x4D7889: jz      short loc_4D78CC
0x4D788B: mov     eax, [esi]
0x4D788D: mov     edx, [eax+170h]
0x4D7893: call    edx
0x4D7895: cmp     byte ptr [eax+4], 1Eh
0x4D7899: jnz     short loc_4D78CC
0x4D789B: mov     eax, [esi]
0x4D789D: mov     edx, [eax+170h]
0x4D78A3: mov     ecx, esi
0x4D78A5: call    edx
0x4D78A7: test    eax, eax
0x4D78A9: jz      short loc_4D78CC
0x4D78AB: mov     ecx, [esp+8+arg_0]
0x4D78AF: mov     edx, [eax]
0x4D78B1: mov     edx, [edx+124h]
0x4D78B7: push    ecx
0x4D78B8: mov     ecx, eax
0x4D78BA: call    edx
0x4D78BC: mov     byte ptr [esp+8+arg_0], al
0x4D78C0: mov     eax, [esp+8+arg_0]
0x4D78C4: push    eax
0x4D78C5: mov     ecx, edi
0x4D78C7: call    sub_423BD0
0x4D78CC: pop     edi
0x4D78CD: pop     esi
0x4D78CE: retn    4
