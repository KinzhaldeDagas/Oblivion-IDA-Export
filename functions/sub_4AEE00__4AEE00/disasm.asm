0x4AEE00: push    esi
0x4AEE01: mov     esi, ecx
0x4AEE03: call    TESForm_InitializeFormRecord
0x4AEE08: push    54444F4Dh
0x4AEE0D: push    42444F4Dh
0x4AEE12: push    4C444F4Dh
0x4AEE17: lea     ecx, [esi+24h]
0x4AEE1A: call    TESModel_Save
0x4AEE1F: push    20h ; ' '; Size
0x4AEE21: lea     eax, [esi+3Ch]
0x4AEE24: push    eax; Src
0x4AEE25: mov     ecx, esi; this
0x4AEE27: call    TESForm_SaveGenericComponents
0x4AEE2C: mov     ecx, esi
0x4AEE2E: pop     esi
0x4AEE2F: jmp     TESForm_FinalizeFormRecord
