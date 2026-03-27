0x4B5B30: push    esi
0x4B5B31: mov     esi, ecx
0x4B5B33: call    TESForm_InitializeFormRecord
0x4B5B38: lea     ecx, [esi+24h]
0x4B5B3B: call    TESFullName_Save
0x4B5B40: lea     ecx, [esi+30h]
0x4B5B43: call    TESScriptableForm_Save
0x4B5B48: lea     ecx, [esi+3Ch]
0x4B5B4B: call    TESEnchantableForm_SaveComponent
0x4B5B50: lea     ecx, [esi+5Ch]
0x4B5B53: call    TESBipedModelForm_SaveComponent
0x4B5B58: push    0; Size
0x4B5B5A: push    0; Src
0x4B5B5C: mov     ecx, esi; this
0x4B5B5E: call    TESForm_SaveGenericComponents
0x4B5B63: mov     ecx, esi
0x4B5B65: pop     esi
0x4B5B66: jmp     TESForm_FinalizeFormRecord
