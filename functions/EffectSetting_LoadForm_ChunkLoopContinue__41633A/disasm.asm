0x41633A: mov     ecx, edi
0x41633C: call    TESFile_GetNextChunk
0x416341: test    al, al
0x416343: jz      short EffectSetting_LoadForm___Return_1
0x416345: mov     ecx, edi
0x416347: call    TESFile_GetChunkType
0x41634C: test    eax, eax
0x41634E: jnz     EffectSetting_LoadForm___ChunkLoopBody
