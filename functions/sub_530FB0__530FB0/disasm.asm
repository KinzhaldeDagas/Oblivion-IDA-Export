0x530FB0: sub     esp, 10h
0x530FB3: push    ebx
0x530FB4: mov     ebx, dword ptr [esp+14h+ArgList]
0x530FB8: push    edi
0x530FB9: mov     edi, ecx
0x530FBB: mov     ecx, ebx
0x530FBD: call    TESFile_GetRecordType
0x530FC2: cmp     al, 3Ah ; ':'
0x530FC4: jz      short loc_530FD0
0x530FC6: pop     edi
0x530FC7: xor     al, al
0x530FC9: pop     ebx
0x530FCA: add     esp, 10h
0x530FCD: retn    4
0x530FD0: mov     ecx, ebx
0x530FD2: call    sub_44FAB0
0x530FD7: test    al, al
0x530FD9: jnz     short loc_530FE4
0x530FDB: mov     eax, [ebx+25Ch]
0x530FE1: mov     [edi+34h], eax
0x530FE4: push    ebp
0x530FE5: xor     ebp, ebp
0x530FE7: push    edi
0x530FE8: mov     ecx, ebx
0x530FEA: mov     dword ptr [esp+20h+ArgList], 0FFFFFFFFh
0x530FF2: mov     [esp+20h+var_10], ebp
0x530FF6: call    TESFile_InitializeFormFromRecord
0x530FFB: mov     ecx, ebx
0x530FFD: call    TESFile_GetChunkType
0x531002: cmp     eax, ebp
0x531004: jz      loc_5311A0
0x53100A: push    esi
0x53100B: jmp     short loc_531010
0x53100D: align 10h
0x531010: cmp     eax, 49545351h
0x531015: jg      loc_5310FE
0x53101B: jz      loc_5310EA
0x531021: cmp     eax, 454D414Eh
0x531026: jg      short loc_531098
0x531028: jz      short loc_531076
0x53102A: cmp     eax, 41445443h
0x53102F: jz      loc_53115A
0x531035: cmp     eax, 41544144h
0x53103A: jnz     loc_531185
0x531040: push    3; a4
0x531042: lea     esi, [edi+23h]
0x531045: push    esi; Dst
0x531046: mov     ecx, ebx; a1
0x531048: call    TESFile_GetChunkData
0x53104D: cmp     byte ptr [esi], 7
0x531050: jl      short loc_531060
0x531052: mov     edx, [edi]
0x531054: mov     eax, [edx+8Ch]
0x53105A: push    1
0x53105C: mov     ecx, edi
0x53105E: call    eax
0x531060: cmp     byte ptr [esi], 1
0x531063: jnz     loc_531185
0x531069: push    ebp
0x53106A: mov     ecx, edi
0x53106C: call    sub_530BA0
0x531071: jmp     loc_531185
0x531076: lea     ecx, [esp+20h+var_C]
0x53107A: push    ecx
0x53107B: mov     ecx, ebx
0x53107D: mov     [esp+24h+var_C], ebp
0x531081: call    TESFile_GetChunkData4
0x531086: mov     edx, [esp+20h+var_C]
0x53108A: push    edx
0x53108B: lea     ecx, [edi+28h]
0x53108E: call    BSSimpleList_PushBack
0x531093: jmp     loc_531185
0x531098: cmp     eax, 464C4354h
0x53109D: jnz     loc_531185
0x5310A3: cmp     [edi+30h], ebp
0x5310A6: jnz     short loc_5310C8
0x5310A8: push    10h; Size
0x5310AA: call    FormHeapAlloc
0x5310AF: add     esp, 4
0x5310B2: cmp     eax, ebp
0x5310B4: jz      short loc_5310C3
0x5310B6: mov     [eax], ebp
0x5310B8: mov     [eax+4], ebp
0x5310BB: mov     [eax+8], ebp
0x5310BE: mov     [eax+0Ch], ebp
0x5310C1: jmp     short loc_5310C5
0x5310C3: xor     eax, eax
0x5310C5: mov     [edi+30h], eax
0x5310C8: lea     eax, [esp+20h+var_8]
0x5310CC: push    eax
0x5310CD: mov     ecx, ebx
0x5310CF: mov     [esp+24h+var_8], ebp
0x5310D3: call    TESFile_GetChunkData4
0x5310D8: mov     ecx, [esp+20h+var_8]
0x5310DC: push    ecx
0x5310DD: mov     ecx, [edi+30h]
0x5310E0: call    BSSimpleList_PushBack
0x5310E5: jmp     loc_531185
0x5310EA: lea     edx, [esp+20h+var_10]
0x5310EE: push    edx
0x5310EF: mov     ecx, ebx
0x5310F1: call    TESFile_GetChunkData4
0x5310F6: push    ebx
0x5310F7: lea     eax, [esp+24h+var_10]
0x5310FB: push    eax
0x5310FC: jmp     short loc_53117D
0x5310FE: cmp     eax, 4D414E50h
0x531103: jz      short loc_531165
0x531105: cmp     eax, 54445443h
0x53110A: jz      short loc_53115A
0x53110C: cmp     eax, 544C4354h
0x531111: jnz     short loc_531185
0x531113: cmp     [edi+30h], ebp
0x531116: jnz     short loc_531138
0x531118: push    10h; Size
0x53111A: call    FormHeapAlloc
0x53111F: add     esp, 4
0x531122: cmp     eax, ebp
0x531124: jz      short loc_531133
0x531126: mov     [eax], ebp
0x531128: mov     [eax+4], ebp
0x53112B: mov     [eax+8], ebp
0x53112E: mov     [eax+0Ch], ebp
0x531131: jmp     short loc_531135
0x531133: xor     eax, eax
0x531135: mov     [edi+30h], eax
0x531138: lea     ecx, [esp+20h+var_4]
0x53113C: push    ecx
0x53113D: mov     ecx, ebx
0x53113F: mov     [esp+24h+var_4], ebp
0x531143: call    TESFile_GetChunkData4
0x531148: mov     edx, [esp+20h+var_4]
0x53114C: mov     ecx, [edi+30h]
0x53114F: push    edx
0x531150: add     ecx, 8
0x531153: call    BSSimpleList_PushBack
0x531158: jmp     short loc_531185
0x53115A: push    ebx
0x53115B: lea     ecx, [edi+18h]
0x53115E: call    ConditionList_LoadCondition
0x531163: jmp     short loc_531185
0x531165: lea     eax, [esp+20h+ArgList]
0x531169: push    eax
0x53116A: mov     ecx, ebx
0x53116C: call    TESFile_GetChunkData4
0x531171: cmp     dword ptr [esp+20h+ArgList], ebp
0x531175: jz      short loc_531185
0x531177: push    ebx; a2
0x531178: lea     ecx, [esp+24h+ArgList]
0x53117C: push    ecx; a1
0x53117D: call    TESForm_ResolveFormID
0x531182: add     esp, 8
0x531185: mov     ecx, ebx
0x531187: call    TESFile_GetNextChunk
0x53118C: test    al, al
0x53118E: jz      short loc_53119F
0x531190: mov     ecx, ebx
0x531192: call    TESFile_GetChunkType
0x531197: cmp     eax, ebp
0x531199: jnz     loc_531010
0x53119F: pop     esi
0x5311A0: mov     edx, [edi+8]
0x5311A3: shr     edx, 5
0x5311A6: test    dl, 1
0x5311A9: pop     ebp
0x5311AA: jnz     short loc_5311F1
0x5311AC: mov     eax, dword ptr [esp+18h+ArgList]
0x5311B0: mov     ecx, [esp+18h+var_10]
0x5311B4: push    eax; ArgList
0x5311B5: push    edi; int
0x5311B6: push    ecx; int
0x5311B7: mov     ecx, ds:0B3650Ch
0x5311BD: call    sub_52FD20
0x5311C2: test    al, al
0x5311C4: jnz     short loc_5311F1
0x5311C6: mov     ecx, ds:0B3650Ch
0x5311CC: mov     edx, [esp+18h+var_10]
0x5311D0: mov     eax, [ecx+0Ch]
0x5311D3: mov     edi, [edi+0Ch]
0x5311D6: push    edx
0x5311D7: push    eax
0x5311D8: mov     eax, [ecx]
0x5311DA: mov     edx, [eax+0D4h]
0x5311E0: call    edx
0x5311E2: push    eax
0x5311E3: push    edi; ArgList
0x5311E4: push    offset aUnableToInsert; "Unable to insert topic info (%08X) into"...
0x5311E9: call    PrintError
0x5311EE: add     esp, 14h
0x5311F1: pop     edi
0x5311F2: mov     al, 1
0x5311F4: pop     ebx
0x5311F5: add     esp, 10h
0x5311F8: retn    4
