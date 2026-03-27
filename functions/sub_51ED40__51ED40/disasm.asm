0x51ED40: push    esi
0x51ED41: mov     esi, ecx
0x51ED43: call    TESForm_InitializeFormRecord
0x51ED48: lea     ecx, [esi+18h]
0x51ED4B: call    TESFullName_Save
0x51ED50: push    4E4F4349h
0x51ED55: lea     ecx, [esi+24h]
0x51ED58: call    TESTexture_Save
0x51ED5D: push    1; Size
0x51ED5F: lea     eax, [esi+30h]
0x51ED62: push    eax; Src
0x51ED63: mov     ecx, esi; this
0x51ED65: call    TESForm_SaveGenericComponents
0x51ED6A: mov     ecx, esi
0x51ED6C: pop     esi
0x51ED6D: jmp     TESForm_FinalizeFormRecord
