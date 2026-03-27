0x41B413: mov     ecx, ebx
0x41B415: call    TESFile_GetNextChunk
0x41B41A: test    al, al
0x41B41C: jz      short MagicItemForm_LoadForm___ChunkLoopExit
0x41B41E: mov     ecx, ebx
0x41B420: call    TESFile_GetChunkType
0x41B425: test    eax, eax
0x41B427: mov     [ebp-8], eax
0x41B42A: jnz     MagicItemForm_LoadForm___ChunkLoopBody
