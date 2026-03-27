0x4CA3D0: push    esi
0x4CA3D1: push    edi
0x4CA3D2: mov     esi, ecx
0x4CA3D4: call    TESForm_InitializeFormRecord
0x4CA3D9: lea     ecx, [esi+18h]
0x4CA3DC: call    TESFullName_Save
0x4CA3E1: push    1
0x4CA3E3: lea     edi, [esi+24h]
0x4CA3E6: push    edi
0x4CA3E7: push    41544144h
0x4CA3EC: call    j_TESForm_PutCurrentChunkData
0x4CA3F1: mov     eax, [esi+3Ch]
0x4CA3F4: add     esp, 0Ch
0x4CA3F7: test    byte ptr [edi], 1
0x4CA3FA: jz      short loc_4CA40A
0x4CA3FC: test    eax, eax
0x4CA3FE: jz      short loc_4CA41E
0x4CA400: push    28h ; '('
0x4CA402: push    eax
0x4CA403: push    4C4C4358h
0x4CA408: jmp     short loc_4CA416
0x4CA40A: test    eax, eax
0x4CA40C: jz      short loc_4CA41E
0x4CA40E: push    8; Size
0x4CA410: push    eax; Src
0x4CA411: push    434C4358h; int
0x4CA416: call    TESForm_PutFormRecordChunkData
0x4CA41B: add     esp, 0Ch
0x4CA41E: lea     ecx, [esi+28h]
0x4CA421: call    ExtraDataList_Save
0x4CA426: pop     edi
0x4CA427: mov     ecx, esi
0x4CA429: pop     esi
0x4CA42A: jmp     TESForm_FinalizeFormRecord
