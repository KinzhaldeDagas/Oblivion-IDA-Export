0x51FDA0: push    esi
0x51FDA1: mov     esi, ecx
0x51FDA3: call    TESForm_InitializeFormRecord
0x51FDA8: lea     ecx, [esi+18h]
0x51FDAB: call    TESFullName_Save
0x51FDB0: push    54444F4Dh
0x51FDB5: push    42444F4Dh
0x51FDBA: push    4C444F4Dh
0x51FDBF: lea     ecx, [esi+24h]
0x51FDC2: call    TESModel_Save
0x51FDC7: push    4E4F4349h
0x51FDCC: lea     ecx, [esi+3Ch]
0x51FDCF: call    TESTexture_Save
0x51FDD4: push    1; Size
0x51FDD6: lea     eax, [esi+48h]
0x51FDD9: push    eax; Src
0x51FDDA: mov     ecx, esi; this
0x51FDDC: call    TESForm_SaveGenericComponents
0x51FDE1: mov     ecx, esi
0x51FDE3: pop     esi
0x51FDE4: jmp     TESForm_FinalizeFormRecord
