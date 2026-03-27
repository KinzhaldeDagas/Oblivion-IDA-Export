0x4B4500: push    esi
0x4B4501: mov     esi, ecx
0x4B4503: call    TESForm_InitializeFormRecord
0x4B4508: lea     ecx, [esi+24h]
0x4B450B: call    TESFullName_Save
0x4B4510: push    54444F4Dh
0x4B4515: push    42444F4Dh
0x4B451A: push    4C444F4Dh
0x4B451F: lea     ecx, [esi+30h]
0x4B4522: call    TESModel_Save
0x4B4527: push    4E4F4349h
0x4B452C: lea     ecx, [esi+48h]
0x4B452F: call    TESTexture_Save
0x4B4534: lea     ecx, [esi+54h]
0x4B4537: call    TESScriptableForm_Save
0x4B453C: push    1; Size
0x4B453E: lea     eax, [esi+78h]
0x4B4541: push    eax; Src
0x4B4542: mov     ecx, esi; this
0x4B4544: call    TESForm_SaveGenericComponents
0x4B4549: mov     ecx, esi
0x4B454B: pop     esi
0x4B454C: jmp     TESForm_FinalizeFormRecord
