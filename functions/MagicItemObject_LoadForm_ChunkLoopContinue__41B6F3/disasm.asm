0x41B6F3: mov     ecx, ebx
0x41B6F5: call    TESFile_GetNextChunk
0x41B6FA: test    al, al
0x41B6FC: jz      short MagicItemObject_LoadForm___ChunkLoopExit
0x41B6FE: mov     ecx, ebx
0x41B700: call    TESFile_GetChunkType
0x41B705: test    eax, eax
0x41B707: mov     [ebp-8], eax
0x41B70A: jnz     MagicItemObject_LoadForm___ChunkLoopBody
