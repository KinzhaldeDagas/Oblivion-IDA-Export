0x4BBB14: lea     eax, [ebp-8]
0x4BBB17: push    eax
0x4BBB18: mov     ecx, ebx
0x4BBB1A: mov     dword ptr [ebp-8], 0
0x4BBB21: call    TESFile_GetChunkData4; 0x4510E0: UInt32 wrapper used by WRLD CNAM0x4F20D2, NAM2 0x4F1FBF, WNAM0x4F2135, SNAM0x4F2104. Delegates to0x450C20 max4; overlong payload gives3 source bytes plus zero, not all4 source bytes.
0x4BBB26: mov     ecx, [ebp-8]
0x4BBB29: mov     [esi+58h], ecx
0x4BBB2C: push    esi
0x4BBB2D: lea     ecx, [esi+54h]
0x4BBB30: call    TESScriptableForm_Link
0x4BBB35: jmp     short TESSigilStone_LoadForm___ChunkLoop_Next
