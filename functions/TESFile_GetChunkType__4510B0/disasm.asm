0x4510B0: push    esi
0x4510B1: mov     esi, ecx
0x4510B3: cmp     dword ptr [esi+250h], 0
0x4510BA: jnz     short TESFile_GetChunkType___Return_ChunkType
0x4510BC: call    TESFile_LoadChunkHeader
0x4510C1: test    al, al
0x4510C3: jnz     short TESFile_GetChunkType___Return_ChunkType
0x4510C5: xor     eax, eax
0x4510C7: pop     esi
0x4510C8: retn
0x4510C9: mov     eax, [esi+250h]
0x4510CF: pop     esi
0x4510D0: retn
