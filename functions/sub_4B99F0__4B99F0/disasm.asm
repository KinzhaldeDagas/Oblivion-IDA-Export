0x4B99F0: push    esi
0x4B99F1: mov     esi, ecx
0x4B99F3: call    TESForm_InitializeFormRecord
0x4B99F8: push    54444F4Dh
0x4B99FD: push    42444F4Dh
0x4B9A02: push    4C444F4Dh
0x4B9A07: lea     ecx, [esi+24h]
0x4B9A0A: call    TESModel_Save
0x4B9A0F: mov     ecx, esi; int
0x4B9A11: call    sub_4B2C00
0x4B9A16: mov     ecx, esi
0x4B9A18: pop     esi
0x4B9A19: jmp     TESForm_FinalizeFormRecord
