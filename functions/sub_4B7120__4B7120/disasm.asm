0x4B7120: push    ecx
0x4B7121: push    esi
0x4B7122: push    edi
0x4B7123: mov     edi, ecx
0x4B7125: call    TESForm_InitializeFormRecord
0x4B712A: lea     ecx, [edi+24h]
0x4B712D: call    TESFullName_Save
0x4B7132: push    54444F4Dh
0x4B7137: push    42444F4Dh
0x4B713C: push    4C444F4Dh
0x4B7141: lea     ecx, [edi+30h]
0x4B7144: call    TESModel_Save
0x4B7149: lea     ecx, [edi+48h]
0x4B714C: call    TESScriptableForm_Save
0x4B7151: mov     eax, [edi+58h]
0x4B7154: test    eax, eax
0x4B7156: jz      short loc_4B7173
0x4B7158: mov     eax, [eax+0Ch]
0x4B715B: push    4; Size
0x4B715D: lea     ecx, [esp+10h+Src]
0x4B7161: push    ecx; Src
0x4B7162: push    4D414E53h; int
0x4B7167: mov     [esp+18h+Src], eax
0x4B716B: call    TESForm_PutFormRecordChunkData
0x4B7170: add     esp, 0Ch
0x4B7173: mov     eax, [edi+5Ch]
0x4B7176: test    eax, eax
0x4B7178: jz      short loc_4B7195
0x4B717A: mov     edx, [eax+0Ch]
0x4B717D: push    4; Size
0x4B717F: lea     eax, [esp+10h+Src]
0x4B7183: push    eax; Src
0x4B7184: push    4D414E41h; int
0x4B7189: mov     [esp+18h+Src], edx
0x4B718D: call    TESForm_PutFormRecordChunkData
0x4B7192: add     esp, 0Ch
0x4B7195: mov     eax, [edi+60h]
0x4B7198: test    eax, eax
0x4B719A: jz      short loc_4B71B7
0x4B719C: mov     ecx, [eax+0Ch]
0x4B719F: push    4; Size
0x4B71A1: lea     edx, [esp+10h+Src]
0x4B71A5: push    edx; Src
0x4B71A6: push    4D414E42h; int
0x4B71AB: mov     [esp+18h+Src], ecx
0x4B71AF: call    TESForm_PutFormRecordChunkData
0x4B71B4: add     esp, 0Ch
0x4B71B7: push    1; Size
0x4B71B9: lea     eax, [edi+64h]
0x4B71BC: push    eax; Src
0x4B71BD: push    4D414E46h; int
0x4B71C2: call    TESForm_PutFormRecordChunkData
0x4B71C7: lea     esi, [edi+68h]
0x4B71CA: add     esp, 0Ch
0x4B71CD: test    esi, esi
0x4B71CF: jz      short loc_4B7200
0x4B71D1: cmp     dword ptr [esi+4], 0
0x4B71D5: jnz     short loc_4B71DC
0x4B71D7: cmp     dword ptr [esi], 0
0x4B71DA: jz      short loc_4B7200
0x4B71DC: mov     ecx, [esi]
0x4B71DE: mov     edx, [ecx+0Ch]
0x4B71E1: push    4; Size
0x4B71E3: lea     eax, [esp+10h+Src]
0x4B71E7: push    eax; Src
0x4B71E8: push    4D414E54h; int
0x4B71ED: mov     [esp+18h+Src], edx
0x4B71F1: call    TESForm_PutFormRecordChunkData
0x4B71F6: mov     esi, [esi+4]
0x4B71F9: add     esp, 0Ch
0x4B71FC: test    esi, esi
0x4B71FE: jnz     short loc_4B71D1
0x4B7200: mov     ecx, edi; this
0x4B7202: call    TESForm_FinalizeFormRecord
0x4B7207: pop     edi
0x4B7208: pop     esi
0x4B7209: pop     ecx
0x4B720A: retn
