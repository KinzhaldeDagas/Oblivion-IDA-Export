0x4AF793: push    0; a4
0x4AF795: lea     eax, [esi+31h]
0x4AF798: push    eax; Dst
0x4AF799: mov     ecx, edi; a1
0x4AF79B: call    TESFile_GetChunkData
0x4AF7A0: jmp     TESLevCreature_LoadForm___NextChunk
