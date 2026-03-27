0x4BBBA0: mov     ecx, ebx
0x4BBBA2: call    TESFile_GetNextChunk
0x4BBBA7: test    al, al
0x4BBBA9: jz      short TESSigilStone_LoadForm___Return_1
0x4BBBAB: mov     ecx, ebx
0x4BBBAD: call    TESFile_GetChunkType
0x4BBBB2: test    eax, eax
0x4BBBB4: jnz     TESSigilStone_LoadForm___SwitchChunkType
