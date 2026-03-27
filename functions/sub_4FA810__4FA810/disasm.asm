0x4FA810: push    esi
0x4FA811: mov     esi, ecx
0x4FA813: call    TESForm_InitializeFormRecord
0x4FA818: push    14h; Size
0x4FA81A: lea     eax, [esi+18h]
0x4FA81D: push    eax; Src
0x4FA81E: push    52484353h; int
0x4FA823: call    TESForm_PutFormRecordChunkData
0x4FA828: add     esp, 0Ch
0x4FA82B: mov     ecx, esi
0x4FA82D: pop     esi
0x4FA82E: jmp     TESForm_FinalizeFormRecord
