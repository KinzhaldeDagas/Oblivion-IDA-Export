0x52EC30: push    esi
0x52EC31: mov     esi, ecx
0x52EC33: call    TESForm_InitializeFormRecord
0x52EC38: push    4; Size
0x52EC3A: lea     eax, [esi+30h]
0x52EC3D: push    eax; Src
0x52EC3E: push    58444958h; int
0x52EC43: call    TESForm_PutFormRecordChunkData
0x52EC48: add     esp, 0Ch
0x52EC4B: mov     ds:0B3650Ch, esi
0x52EC51: mov     ecx, esi
0x52EC53: pop     esi
0x52EC54: jmp     TESForm_FinalizeFormRecord
