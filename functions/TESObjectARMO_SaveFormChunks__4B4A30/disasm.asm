0x4B4A30: push    esi
0x4B4A31: mov     esi, ecx
0x4B4A33: call    TESForm_InitializeFormRecord
0x4B4A38: lea     ecx, [esi+24h]
0x4B4A3B: call    TESFullName_Save
0x4B4A40: lea     ecx, [esi+30h]
0x4B4A43: call    TESScriptableForm_Save
0x4B4A48: lea     ecx, [esi+3Ch]
0x4B4A4B: call    TESEnchantableForm_SaveComponent
0x4B4A50: lea     ecx, [esi+64h]
0x4B4A53: call    TESBipedModelForm_SaveComponent
0x4B4A58: push    2; Size
0x4B4A5A: lea     eax, [esi+0E4h]
0x4B4A60: push    eax; Src
0x4B4A61: mov     ecx, esi; this
0x4B4A63: call    TESForm_SaveGenericComponents
0x4B4A68: mov     ecx, esi
0x4B4A6A: pop     esi
0x4B4A6B: jmp     TESForm_FinalizeFormRecord
