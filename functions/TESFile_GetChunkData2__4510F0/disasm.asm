0x4510F0: mov     eax, [esp+Dst]
0x4510F4: push    2; a4
0x4510F6: push    eax; Dst
0x4510F7: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4510FC: retn    4
