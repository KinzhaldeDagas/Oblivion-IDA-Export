0x4B5260: push    esi
0x4B5261: mov     esi, ecx
0x4B5263: call    TESForm_InitializeFormRecord
0x4B5268: lea     ecx, [esi+24h]
0x4B526B: call    TESFullName_Save
0x4B5270: push    54444F4Dh
0x4B5275: push    42444F4Dh
0x4B527A: push    4C444F4Dh
0x4B527F: lea     ecx, [esi+30h]
0x4B5282: call    TESModel_Save
0x4B5287: push    4E4F4349h
0x4B528C: lea     ecx, [esi+48h]
0x4B528F: call    TESTexture_Save
0x4B5294: lea     ecx, [esi+54h]
0x4B5297: call    TESScriptableForm_Save
0x4B529C: lea     ecx, [esi+60h]
0x4B529F: call    TESEnchantableForm_SaveComponent
0x4B52A4: lea     ecx, [esi+80h]
0x4B52AA: call    TESDescription_Save
0x4B52AF: push    2; Size
0x4B52B1: lea     eax, [esi+88h]
0x4B52B7: push    eax; Src
0x4B52B8: mov     ecx, esi; this
0x4B52BA: call    TESForm_SaveGenericComponents
0x4B52BF: mov     ecx, esi
0x4B52C1: pop     esi
0x4B52C2: jmp     TESForm_FinalizeFormRecord
