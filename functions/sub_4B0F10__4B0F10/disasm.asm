0x4B0F10: push    ecx
0x4B0F11: push    esi
0x4B0F12: mov     esi, ecx
0x4B0F14: call    TESForm_InitializeFormRecord
0x4B0F19: push    54444F4Dh
0x4B0F1E: push    42444F4Dh
0x4B0F23: push    4C444F4Dh
0x4B0F28: lea     ecx, [esi+30h]
0x4B0F2B: call    TESModel_Save
0x4B0F30: lea     ecx, [esi+54h]
0x4B0F33: call    TESScriptableForm_Save
0x4B0F38: mov     eax, [esi+7Ch]
0x4B0F3B: test    al, 2
0x4B0F3D: jz      short loc_4B0F56
0x4B0F3F: lea     ecx, [esi+24h]
0x4B0F42: call    TESFullName_Save
0x4B0F47: push    4E4F4349h
0x4B0F4C: lea     ecx, [esi+48h]
0x4B0F4F: call    TESTexture_Save
0x4B0F54: jmp     short loc_4B0F63
0x4B0F56: and     eax, 0FFFFFFDFh
0x4B0F59: mov     [esi+7Ch], eax
0x4B0F5C: mov     dword ptr [esi+70h], 0FFFFFFFFh
0x4B0F63: push    18h; Size
0x4B0F65: lea     eax, [esi+70h]
0x4B0F68: push    eax; Src
0x4B0F69: mov     ecx, esi; this
0x4B0F6B: call    TESForm_SaveGenericComponents
0x4B0F70: push    4; Size
0x4B0F72: lea     ecx, [esi+88h]
0x4B0F78: push    ecx; Src
0x4B0F79: push    4D414E46h; int
0x4B0F7E: call    TESForm_PutFormRecordChunkData
0x4B0F83: mov     eax, [esi+8Ch]
0x4B0F89: add     esp, 0Ch
0x4B0F8C: test    eax, eax
0x4B0F8E: jz      short loc_4B0FAB
0x4B0F90: mov     edx, [eax+0Ch]
0x4B0F93: push    4; Size
0x4B0F95: lea     eax, [esp+0Ch+Src]
0x4B0F99: push    eax; Src
0x4B0F9A: push    4D414E53h; int
0x4B0F9F: mov     [esp+14h+Src], edx
0x4B0FA3: call    TESForm_PutFormRecordChunkData
0x4B0FA8: add     esp, 0Ch
0x4B0FAB: mov     ecx, esi; this
0x4B0FAD: call    TESForm_FinalizeFormRecord
0x4B0FB2: pop     esi
0x4B0FB3: pop     ecx
0x4B0FB4: retn
