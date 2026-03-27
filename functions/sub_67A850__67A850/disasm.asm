0x67A850: push    esi
0x67A851: mov     esi, ecx
0x67A853: push    edi
0x67A854: mov     edi, [esi+4]
0x67A857: test    edi, edi
0x67A859: jz      short loc_67A895
0x67A85B: mov     eax, [edi+4]
0x67A85E: push    edi
0x67A85F: mov     [esi+4], eax
0x67A862: call    sub_55E2A0
0x67A867: mov     esi, [edi]
0x67A869: test    esi, esi
0x67A86B: jz      short loc_67A889
0x67A86D: lea     ecx, [esi+4]
0x67A870: push    ecx; lpAddend
0x67A871: call    dword ptr ds:0A2807Ch
0x67A877: test    eax, eax
0x67A879: jnz     short loc_67A889
0x67A87B: test    esi, esi
0x67A87D: jz      short loc_67A889
0x67A87F: mov     edx, [esi]
0x67A881: mov     eax, [edx]
0x67A883: push    1
0x67A885: mov     ecx, esi
0x67A887: call    eax
0x67A889: push    edi
0x67A88A: call    FormHeapFree
0x67A88F: add     esp, 4
0x67A892: pop     edi
0x67A893: pop     esi
0x67A894: retn
0x67A895: mov     edi, [esi]
0x67A897: test    edi, edi
0x67A899: jz      short loc_67A8BD
0x67A89B: lea     ecx, [edi+4]
0x67A89E: push    ecx; lpAddend
0x67A89F: call    dword ptr ds:0A2807Ch
0x67A8A5: test    eax, eax
0x67A8A7: jnz     short loc_67A8B7
0x67A8A9: test    edi, edi
0x67A8AB: jz      short loc_67A8B7
0x67A8AD: mov     edx, [edi]
0x67A8AF: mov     eax, [edx]
0x67A8B1: push    1
0x67A8B3: mov     ecx, edi
0x67A8B5: call    eax
0x67A8B7: mov     dword ptr [esi], 0
0x67A8BD: pop     edi
0x67A8BE: pop     esi
0x67A8BF: retn
