0x4A8F00: push    esi
0x4A8F01: mov     esi, ecx
0x4A8F03: call    TESForm_InitializeFormRecord
0x4A8F08: lea     ecx, [esi+24h]
0x4A8F0B: call    TESFullName_Save
0x4A8F10: push    54444F4Dh
0x4A8F15: push    42444F4Dh
0x4A8F1A: push    4C444F4Dh
0x4A8F1F: lea     ecx, [esi+30h]
0x4A8F22: call    TESModel_Save
0x4A8F27: push    4E4F4349h
0x4A8F2C: lea     ecx, [esi+48h]
0x4A8F2F: call    TESTexture_Save
0x4A8F34: lea     ecx, [esi+54h]
0x4A8F37: call    TESEnchantableForm_SaveComponent
0x4A8F3C: push    8; Size
0x4A8F3E: lea     eax, [esi+7Ch]
0x4A8F41: push    eax; Src
0x4A8F42: mov     ecx, esi; this
0x4A8F44: call    TESForm_SaveGenericComponents
0x4A8F49: mov     ecx, esi
0x4A8F4B: pop     esi
0x4A8F4C: jmp     TESForm_FinalizeFormRecord
