0x4BB7B0: push    esi
0x4BB7B1: mov     esi, ecx
0x4BB7B3: call    TESForm_InitializeFormRecord
0x4BB7B8: lea     ecx, [esi+24h]
0x4BB7BB: call    TESFullName_Save
0x4BB7C0: push    54444F4Dh
0x4BB7C5: push    42444F4Dh
0x4BB7CA: push    4C444F4Dh
0x4BB7CF: lea     ecx, [esi+30h]
0x4BB7D2: call    TESModel_Save
0x4BB7D7: push    4E4F4349h
0x4BB7DC: lea     ecx, [esi+48h]
0x4BB7DF: call    TESTexture_Save
0x4BB7E4: lea     ecx, [esi+54h]
0x4BB7E7: call    TESScriptableForm_Save
0x4BB7EC: lea     ecx, [esi+78h]
0x4BB7EF: call    EffectItemList_Save
0x4BB7F4: push    0; Size
0x4BB7F6: push    0; Src
0x4BB7F8: mov     ecx, esi; this
0x4BB7FA: call    TESForm_SaveGenericComponents
0x4BB7FF: mov     ecx, esi
0x4BB801: pop     esi
0x4BB802: jmp     TESForm_FinalizeFormRecord
