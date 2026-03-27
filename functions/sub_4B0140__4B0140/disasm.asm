0x4B0140: push    esi
0x4B0141: mov     esi, ecx
0x4B0143: call    TESForm_InitializeFormRecord
0x4B0148: lea     ecx, [esi+24h]
0x4B014B: call    TESLeveledList_SaveComponent
0x4B0150: mov     ecx, esi
0x4B0152: pop     esi
0x4B0153: jmp     TESForm_FinalizeFormRecord
