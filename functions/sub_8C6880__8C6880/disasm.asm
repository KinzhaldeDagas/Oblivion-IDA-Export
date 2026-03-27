0x8C6880: push    ebx
0x8C6881: mov     ebx, [esp+4+arg_0]
0x8C6885: push    esi
0x8C6886: push    edi
0x8C6887: mov     edi, ecx
0x8C6889: mov     esi, [edi]
0x8C688B: cmp     esi, [ebx]
0x8C688D: jz      short loc_8C68C1
0x8C688F: test    esi, esi
0x8C6891: jz      short loc_8C68AF
0x8C6893: lea     eax, [esi+4]
0x8C6896: push    eax; lpAddend
0x8C6897: call    dword ptr ds:0A2807Ch
0x8C689D: test    eax, eax
0x8C689F: jnz     short loc_8C68AF
0x8C68A1: test    esi, esi
0x8C68A3: jz      short loc_8C68AF
0x8C68A5: mov     edx, [esi]
0x8C68A7: mov     eax, [edx]
0x8C68A9: push    1
0x8C68AB: mov     ecx, esi
0x8C68AD: call    eax
0x8C68AF: mov     eax, [ebx]
0x8C68B1: test    eax, eax
0x8C68B3: mov     [edi], eax
0x8C68B5: jz      short loc_8C68C1
0x8C68B7: add     eax, 4
0x8C68BA: push    eax; lpAddend
0x8C68BB: call    dword ptr ds:0A28078h
0x8C68C1: mov     ecx, [ebx+4]
0x8C68C4: mov     [edi+4], ecx
0x8C68C7: mov     eax, edi
0x8C68C9: pop     edi
0x8C68CA: pop     esi
0x8C68CB: pop     ebx
0x8C68CC: retn    4
