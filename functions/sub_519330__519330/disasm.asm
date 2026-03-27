0x519330: push    esi
0x519331: mov     esi, ecx
0x519333: call    TESForm_InitializeFormRecord
0x519338: lea     ecx, [esi+18h]
0x51933B: call    TESFullName_Save
0x519340: push    4E4F4349h
0x519345: lea     ecx, [esi+24h]
0x519348: call    TESTexture_Save
0x51934D: lea     ecx, [esi+30h]
0x519350: call    TESDescription_Save
0x519355: lea     ecx, [esi+38h]
0x519358: call    TESSpellList_SaveComponent
0x51935D: mov     ecx, esi
0x51935F: pop     esi
0x519360: jmp     TESForm_FinalizeFormRecord
