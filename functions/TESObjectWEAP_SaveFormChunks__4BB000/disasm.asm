0x4BB000: push    esi
0x4BB001: mov     esi, ecx
0x4BB003: call    TESForm_InitializeFormRecord
0x4BB008: lea     ecx, [esi+24h]
0x4BB00B: call    TESFullName_Save
0x4BB010: push    54444F4Dh
0x4BB015: push    42444F4Dh
0x4BB01A: push    4C444F4Dh
0x4BB01F: lea     ecx, [esi+30h]
0x4BB022: call    TESModel_Save
0x4BB027: push    4E4F4349h
0x4BB02C: lea     ecx, [esi+48h]
0x4BB02F: call    TESTexture_Save
0x4BB034: lea     ecx, [esi+54h]
0x4BB037: call    TESScriptableForm_Save
0x4BB03C: lea     ecx, [esi+60h]
0x4BB03F: call    TESEnchantableForm_SaveComponent
0x4BB044: push    10h; Size
0x4BB046: lea     eax, [esi+90h]
0x4BB04C: push    eax; Src
0x4BB04D: mov     ecx, esi; this
0x4BB04F: call    TESForm_SaveGenericComponents
0x4BB054: mov     ecx, esi
0x4BB056: pop     esi
0x4BB057: jmp     TESForm_FinalizeFormRecord
