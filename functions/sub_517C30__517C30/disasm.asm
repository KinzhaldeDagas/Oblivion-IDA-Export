0x517C30: push    esi
0x517C31: mov     esi, ecx
0x517C33: call    TESForm_InitializeFormRecord
0x517C38: lea     ecx, [esi+24h]
0x517C3B: call    sub_46F100
0x517C40: push    0Ch; Size
0x517C42: lea     eax, [esi+38h]
0x517C45: push    eax; Src
0x517C46: push    58444E53h; int
0x517C4B: call    TESForm_PutFormRecordChunkData
0x517C50: add     esp, 0Ch
0x517C53: mov     ecx, esi
0x517C55: pop     esi
0x517C56: jmp     TESForm_FinalizeFormRecord
