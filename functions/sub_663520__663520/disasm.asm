0x663520: push    ebx
0x663521: push    esi
0x663522: mov     esi, ecx
0x663524: mov     ecx, [esi+764h]
0x66352A: test    ecx, ecx
0x66352C: jz      short loc_663542
0x66352E: call    sub_6B7260
0x663533: test    al, al
0x663535: jz      short loc_663542
0x663537: mov     ecx, [esi+764h]
0x66353D: call    sub_6B7240
0x663542: mov     ecx, [esi+764h]
0x663548: test    ecx, ecx
0x66354A: mov     ebx, [esp+8+a2]
0x66354E: jz      short loc_66358E
0x663550: cmp     ebx, [esi+760h]
0x663556: jnz     short loc_66358E
0x663558: call    sub_6B73A0
0x66355D: test    al, al
0x66355F: jz      short loc_66358E
0x663561: mov     eax, ds:0B33398h
0x663566: mov     ecx, [eax+24h]
0x663569: test    ecx, ecx
0x66356B: jz      short loc_66357C
0x66356D: mov     edx, [esi+764h]
0x663573: mov     eax, [edx]
0x663575: push    esi
0x663576: push    eax
0x663577: call    sub_6AC3E0
0x66357C: mov     ecx, [esi+764h]
0x663582: push    0
0x663584: call    sub_6B7190
0x663589: pop     esi
0x66358A: pop     ebx
0x66358B: retn    4
0x66358E: push    edi
0x66358F: mov     edi, [esi+764h]
0x663595: test    edi, edi
0x663597: jz      short loc_6635BD
0x663599: mov     ecx, edi; this
0x66359B: call    sub_6B73E0
0x6635A0: push    edi
0x6635A1: call    FormHeapFree
0x6635A6: add     esp, 4
0x6635A9: mov     dword ptr [esi+764h], 0
0x6635B3: mov     dword ptr [esi+760h], 0
0x6635BD: push    1; a5
0x6635BF: push    2; a4
0x6635C1: push    0; a3
0x6635C3: push    ebx; a2
0x6635C4: mov     ecx, esi; this
0x6635C6: mov     [esi+760h], ebx
0x6635CC: call    sub_65AC50
0x6635D1: pop     edi
0x6635D2: mov     [esi+764h], eax
0x6635D8: pop     esi
0x6635D9: pop     ebx
0x6635DA: retn    4
