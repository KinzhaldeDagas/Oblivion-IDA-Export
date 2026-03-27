0x4B3F10: push    esi
0x4B3F11: mov     esi, ecx
0x4B3F13: call    TESForm_InitializeFormRecord
0x4B3F18: lea     ecx, [esi+24h]
0x4B3F1B: call    TESFullName_Save
0x4B3F20: push    54444F4Dh
0x4B3F25: push    42444F4Dh
0x4B3F2A: push    4C444F4Dh
0x4B3F2F: lea     ecx, [esi+30h]
0x4B3F32: call    TESModel_Save
0x4B3F37: lea     ecx, [esi+48h]
0x4B3F3A: call    TESScriptableForm_Save
0x4B3F3F: mov     eax, [esi+54h]
0x4B3F42: test    eax, eax
0x4B3F44: jz      short loc_4B3F57
0x4B3F46: mov     eax, [eax+0Ch]
0x4B3F49: push    eax
0x4B3F4A: push    4D414E53h
0x4B3F4F: call    TESForm_PutCurrentChunkData4
0x4B3F54: add     esp, 8
0x4B3F57: mov     ecx, esi
0x4B3F59: pop     esi
0x4B3F5A: jmp     TESForm_FinalizeFormRecord
