0x4AF83A: xor     eax, eax
0x4AF83C: push    0Ch; a4
0x4AF83E: lea     edx, [ebp-18h]
0x4AF841: mov     [ebp-10h], eax
0x4AF844: push    edx; Dst
0x4AF845: mov     ecx, edi; a1
0x4AF847: mov     [ebp-18h], eax
0x4AF84A: mov     [ebp-14h], eax
0x4AF84D: mov     word ptr [ebp-10h], 1
0x4AF853: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4AF858: mov     eax, [ebp-14h]
0x4AF85B: mov     ecx, [ebp-10h]
0x4AF85E: mov     edx, [ebp-18h]
0x4AF861: push    eax
0x4AF862: push    ecx
0x4AF863: push    edx
0x4AF864: lea     ecx, [esi+24h]
0x4AF867: call    TESLeveledList_AddForm; CustomAnimSupport decode: TESLeveledList support evidence; leveled lists are not deterministic form-list animation targets and are not expanded for mappings.
0x4AF86C: jmp     short TESLevCreature_LoadForm___NextChunk
