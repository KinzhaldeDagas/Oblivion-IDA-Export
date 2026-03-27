0x6B7450: push    esi
0x6B7451: mov     esi, ecx
0x6B7453: test    esi, esi
0x6B7455: jz      short loc_6B749E
0x6B7457: push    edi
0x6B7458: mov     ecx, esi
0x6B745A: call    BSSimpleList_IsEmpty
0x6B745F: test    al, al
0x6B7461: jnz     short loc_6B749D
0x6B7463: mov     edi, [esi]
0x6B7465: test    edi, edi
0x6B7467: jz      short loc_6B7479
0x6B7469: mov     ecx, edi
0x6B746B: call    sub_6B81D0
0x6B7470: push    edi
0x6B7471: call    FormHeapFree
0x6B7476: add     esp, 4
0x6B7479: mov     eax, [esi+4]
0x6B747C: test    eax, eax
0x6B747E: jz      short loc_6B7495
0x6B7480: mov     ecx, [eax+4]
0x6B7483: mov     [esi+4], ecx
0x6B7486: mov     edx, [eax]
0x6B7488: push    eax
0x6B7489: mov     [esi], edx
0x6B748B: call    FormHeapFree
0x6B7490: add     esp, 4
0x6B7493: jmp     short loc_6B7458
0x6B7495: mov     dword ptr [esi], 0
0x6B749B: jmp     short loc_6B7458
0x6B749D: pop     edi
0x6B749E: mov     dword ptr [esi+8], 0
0x6B74A5: pop     esi
0x6B74A6: retn
