0x4212F0: push    esi
0x4212F1: push    4Bh ; 'K'; a2
0x4212F3: call    BaseExtraList_GetExtraData
0x4212F8: mov     esi, eax
0x4212FA: test    esi, esi
0x4212FC: jz      short loc_421332
0x4212FE: mov     eax, [esi+14h]
0x421301: test    eax, eax
0x421303: jz      short loc_421332
0x421305: push    eax; void *
0x421306: mov     ecx, offset FormHeap
0x42130B: call    MemoryHeap_Free_checked
0x421310: push    1
0x421312: push    6
0x421314: mov     ecx, offset FormHeap
0x421319: call    j_MemoryHeap_Alloc
0x42131E: mov     [esi+14h], eax
0x421321: mov     word ptr [eax], 4
0x421326: mov     word ptr [eax+2], 0
0x42132C: mov     word ptr [eax+4], 0
0x421332: pop     esi
0x421333: retn
