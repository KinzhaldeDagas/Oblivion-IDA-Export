0x4BBAC2: mov     eax, [ebx+254h]
0x4BBAC8: call    __alloca?
0x4BBACD: mov     edi, esp
0x4BBACF: push    200h; a4
0x4BBAD4: push    edi; Dst
0x4BBAD5: mov     ecx, ebx; a1
0x4BBAD7: call    TESFile_GetChunkData
0x4BBADC: mov     eax, [esi]
0x4BBADE: mov     edx, [eax+0D8h]
0x4BBAE4: push    edi
0x4BBAE5: mov     ecx, esi
0x4BBAE7: call    edx
0x4BBAE9: jmp     TESSigilStone_LoadForm___ChunkLoop_Next
