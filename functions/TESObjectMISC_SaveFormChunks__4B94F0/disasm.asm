0x4B94F0: push    esi
0x4B94F1: mov     esi, ecx
0x4B94F3: call    TESForm_InitializeFormRecord
0x4B94F8: lea     ecx, [esi+24h]
0x4B94FB: call    TESFullName_Save
0x4B9500: push    54444F4Dh
0x4B9505: push    42444F4Dh
0x4B950A: push    4C444F4Dh
0x4B950F: lea     ecx, [esi+30h]
0x4B9512: call    TESModel_Save
0x4B9517: push    4E4F4349h
0x4B951C: lea     ecx, [esi+48h]
0x4B951F: call    TESTexture_Save
0x4B9524: lea     ecx, [esi+54h]
0x4B9527: call    TESScriptableForm_Save
0x4B952C: push    0; Size
0x4B952E: push    0; Src
0x4B9530: mov     ecx, esi; this
0x4B9532: call    TESForm_SaveGenericComponents
0x4B9537: mov     ecx, esi
0x4B9539: pop     esi
0x4B953A: jmp     TESForm_FinalizeFormRecord
