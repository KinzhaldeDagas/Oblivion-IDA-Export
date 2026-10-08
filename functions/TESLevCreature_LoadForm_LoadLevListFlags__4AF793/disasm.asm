0x4AF793: push    0; a4
0x4AF795: lea     eax, [esi+31h]
0x4AF798: push    eax; Dst
0x4AF799: mov     ecx, edi; a1
0x4AF79B: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4AF7A0: jmp     TESLevCreature_LoadForm___NextChunk
