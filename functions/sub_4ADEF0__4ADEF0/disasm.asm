0x4ADEF0: push    esi
0x4ADEF1: mov     esi, ecx
0x4ADEF3: call    TESForm_InitializeFormRecord
0x4ADEF8: lea     ecx, [esi+24h]
0x4ADEFB: call    TESFullName_Save
0x4ADF00: push    54444F4Dh
0x4ADF05: push    42444F4Dh
0x4ADF0A: push    4C444F4Dh
0x4ADF0F: lea     ecx, [esi+30h]
0x4ADF12: call    TESModel_Save
0x4ADF17: lea     ecx, [esi+48h]
0x4ADF1A: call    TESScriptableForm_Save
0x4ADF1F: lea     ecx, [esi-0Ch]
0x4ADF22: call    sub_46E0D0
0x4ADF27: mov     ecx, esi
0x4ADF29: pop     esi
0x4ADF2A: jmp     TESForm_FinalizeFormRecord
