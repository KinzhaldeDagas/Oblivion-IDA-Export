0x51BE70: push    esi
0x51BE71: mov     esi, ecx
0x51BE73: call    TESForm_InitializeFormRecord
0x51BE78: lea     ecx, [esi+18h]
0x51BE7B: call    TESFullName_Save
0x51BE80: lea     ecx, [esi+24h]
0x51BE83: call    TESDescription_Save
0x51BE88: push    4E4F4349h
0x51BE8D: lea     ecx, [esi+2Ch]
0x51BE90: call    TESTexture_Save
0x51BE95: push    34h ; '4'; Size
0x51BE97: lea     eax, [esi+38h]
0x51BE9A: push    eax; Src
0x51BE9B: mov     ecx, esi; this
0x51BE9D: call    TESForm_SaveGenericComponents
0x51BEA2: mov     ecx, esi
0x51BEA4: pop     esi
0x51BEA5: jmp     TESForm_FinalizeFormRecord
