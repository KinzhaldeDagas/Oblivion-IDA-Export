0x4BBB14: lea     eax, [ebp-8]
0x4BBB17: push    eax
0x4BBB18: mov     ecx, ebx
0x4BBB1A: mov     dword ptr [ebp-8], 0
0x4BBB21: call    TESFile_GetChunkData4
0x4BBB26: mov     ecx, [ebp-8]
0x4BBB29: mov     [esi+58h], ecx
0x4BBB2C: push    esi
0x4BBB2D: lea     ecx, [esi+54h]
0x4BBB30: call    TESScriptableForm_Link
0x4BBB35: jmp     short TESSigilStone_LoadForm___ChunkLoop_Next
