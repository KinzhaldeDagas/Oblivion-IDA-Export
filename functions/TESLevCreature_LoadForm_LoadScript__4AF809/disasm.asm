0x4AF809: lea     eax, [ebp-8]
0x4AF80C: push    eax
0x4AF80D: mov     ecx, edi
0x4AF80F: mov     dword ptr [ebp-8], 0
0x4AF816: call    TESFile_GetChunkData4
0x4AF81B: mov     ecx, [ebp-8]
0x4AF81E: mov     [esi+38h], ecx
0x4AF821: push    esi
0x4AF822: lea     ecx, [esi+34h]
0x4AF825: call    TESScriptableForm_Link
0x4AF82A: jmp     short TESLevCreature_LoadForm___NextChunk
