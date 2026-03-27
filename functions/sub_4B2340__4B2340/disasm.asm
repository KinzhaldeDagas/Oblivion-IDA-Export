0x4B2340: push    esi
0x4B2341: mov     esi, ecx
0x4B2343: push    edi
0x4B2344: mov     edi, [esi]
0x4B2346: push    esi
0x4B2347: call    GetFormModelPAth
0x4B234C: add     esp, 4
0x4B234F: push    eax
0x4B2350: mov     eax, [edi+118h]
0x4B2356: mov     ecx, esi
0x4B2358: call    eax
0x4B235A: pop     edi
0x4B235B: pop     esi
0x4B235C: retn
