0x44D340: sub     esp, 10h
0x44D343: mov     eax, [esp+10h+arg_0]
0x44D347: mov     eax, [eax+8]
0x44D34A: push    ebx
0x44D34B: push    esi
0x44D34C: push    0
0x44D34E: mov     esi, ecx
0x44D350: mov     ecx, [esi+0CDCh]
0x44D356: push    1
0x44D358: push    eax
0x44D359: mov     [esp+24h+var_4], esi
0x44D35D: call    ContainerExtraData_GetEntryForForm
0x44D362: mov     ebx, eax
0x44D364: test    ebx, ebx
0x44D366: jz      short loc_44D3CB
0x44D368: cmp     [esp+18h+arg_4], 0
0x44D36D: mov     eax, [ebx]
0x44D36F: mov     byte ptr [esp+18h+var_10+3], 0
0x44D374: jz      short loc_44D3CB
0x44D376: push    ebp
0x44D377: push    edi
0x44D378: jmp     short loc_44D384
0x44D37A: align 10h
0x44D380: mov     eax, [esp+20h+var_C]
0x44D384: test    eax, eax
0x44D386: jnz     short loc_44D3D3
0x44D388: cmp     byte ptr [esp+20h+var_10+3], al
0x44D38C: jnz     short loc_44D3C9
0x44D38E: mov     edx, [esp+20h+arg_8]
0x44D392: push    edx
0x44D393: mov     ecx, esi
0x44D395: call    sub_448F40
0x44D39A: mov     eax, [esp+20h+arg_0]
0x44D39E: mov     eax, [eax+8]
0x44D3A1: mov     ecx, [esi+0CDCh]
0x44D3A7: push    0
0x44D3A9: push    1
0x44D3AB: push    eax
0x44D3AC: mov     byte ptr [esp+2Ch+var_10+3], 1
0x44D3B1: call    ContainerExtraData_GetEntryForForm
0x44D3B6: mov     ebx, eax
0x44D3B8: test    ebx, ebx
0x44D3BA: jz      short loc_44D3C9
0x44D3BC: mov     ecx, [ebx]
0x44D3BE: mov     [esp+20h+var_C], ecx
0x44D3C2: cmp     [esp+20h+arg_4], 0
0x44D3C7: jnz     short loc_44D380
0x44D3C9: pop     edi
0x44D3CA: pop     ebp
0x44D3CB: pop     esi
0x44D3CC: pop     ebx
0x44D3CD: add     esp, 10h
0x44D3D0: retn    0Ch
0x44D3D3: mov     edi, [eax]
0x44D3D5: test    edi, edi
0x44D3D7: mov     ecx, [eax+4]
0x44D3DA: mov     [esp+20h+var_C], ecx
0x44D3DE: jz      loc_44D5F8
0x44D3E4: mov     ecx, edi
0x44D3E6: call    ExtraDataList_GetExtraCount
0x44D3EB: movsx   ebp, ax
0x44D3EE: test    ebp, ebp
0x44D3F0: mov     [esp+20h+var_8], ebp
0x44D3F4: jle     loc_44D5F8
0x44D3FA: mov     ecx, edi
0x44D3FC: call    sub_41E790
0x44D401: mov     esi, eax
0x44D403: mov     eax, [esp+20h+arg_4]
0x44D407: cmp     eax, ebp
0x44D409: jl      short loc_44D414
0x44D40B: mov     ecx, edi
0x44D40D: call    sub_4234B0
0x44D412: jmp     short loc_44D418
0x44D414: mov     [esp+20h+var_8], eax
0x44D418: test    esi, esi
0x44D41A: jz      loc_44D5F4
0x44D420: mov     ecx, esi; this
0x44D422: call    TESObjectREFR_GetContainer
0x44D427: test    eax, eax
0x44D429: jz      loc_44D57E
0x44D42F: mov     ecx, edi
0x44D431: xor     ebp, ebp
0x44D433: call    BaseExtraList_Count
0x44D438: cmp     eax, 1
0x44D43B: ja      short loc_44D44A
0x44D43D: mov     ecx, edi
0x44D43F: call    ExtraDataList_GetExtraCount
0x44D444: cmp     ax, 1
0x44D448: jle     short loc_44D44C
0x44D44A: mov     ebp, edi
0x44D44C: mov     eax, ds:0B333C4h
0x44D451: mov     ecx, [esp+20h+var_8]
0x44D455: mov     edx, [esi]
0x44D457: mov     edx, [edx+100h]
0x44D45D: push    0
0x44D45F: push    1
0x44D461: push    0
0x44D463: push    0
0x44D465: push    eax
0x44D466: mov     eax, [ebx+8]
0x44D469: push    0
0x44D46B: push    0
0x44D46D: push    ecx
0x44D46E: push    ebp
0x44D46F: push    eax
0x44D470: mov     ecx, esi
0x44D472: call    edx
0x44D474: lea     ecx, [esi+44h]; this
0x44D477: call    ExtraDataList_GetContainerChanges
0x44D47C: test    eax, eax
0x44D47E: mov     byte ptr [esp+20h+var_10+2], 1
0x44D483: jz      short loc_44D4BF
0x44D485: mov     ecx, [ebx+8]
0x44D488: push    0
0x44D48A: push    1
0x44D48C: push    ecx
0x44D48D: mov     ecx, eax
0x44D48F: call    ContainerExtraData_GetEntryForForm
0x44D494: test    eax, eax
0x44D496: jz      short loc_44D4BF
0x44D498: mov     eax, [eax]
0x44D49A: test    eax, eax
0x44D49C: jz      short loc_44D4BF
0x44D49E: mov     ecx, eax
0x44D4A0: mov     eax, [ecx]
0x44D4A2: test    eax, eax
0x44D4A4: jz      short loc_44D4BF
0x44D4A6: cmp     byte ptr [esp+20h+var_10+2], 0
0x44D4AB: jz      short loc_44D4BF
0x44D4AD: cmp     eax, edi
0x44D4AF: jnz     short loc_44D4B8
0x44D4B1: mov     byte ptr [esp+20h+var_10+2], 0
0x44D4B6: jmp     short loc_44D4BB
0x44D4B8: mov     ecx, [ecx+4]
0x44D4BB: test    ecx, ecx
0x44D4BD: jnz     short loc_44D4A0
0x44D4BF: mov     ecx, ds:0B333C4h
0x44D4C5: add     ecx, 44h ; 'D'; this
0x44D4C8: call    ExtraDataList_GetContainerChanges
0x44D4CD: test    eax, eax
0x44D4CF: jz      short loc_44D50F
0x44D4D1: mov     ecx, [ebx+8]
0x44D4D4: push    0
0x44D4D6: push    1
0x44D4D8: push    ecx
0x44D4D9: mov     ecx, eax
0x44D4DB: call    ContainerExtraData_GetEntryForForm
0x44D4E0: test    eax, eax
0x44D4E2: jz      short loc_44D50F
0x44D4E4: mov     eax, [eax]
0x44D4E6: test    eax, eax
0x44D4E8: jz      short loc_44D50F
0x44D4EA: mov     ecx, eax
0x44D4EC: lea     esp, [esp+0]
0x44D4F0: mov     eax, [ecx]
0x44D4F2: test    eax, eax
0x44D4F4: jz      short loc_44D50F
0x44D4F6: cmp     byte ptr [esp+20h+var_10+2], 0
0x44D4FB: jz      short loc_44D54D
0x44D4FD: cmp     eax, edi
0x44D4FF: jnz     short loc_44D508
0x44D501: mov     byte ptr [esp+20h+var_10+2], 0
0x44D506: jmp     short loc_44D50B
0x44D508: mov     ecx, [ecx+4]
0x44D50B: test    ecx, ecx
0x44D50D: jnz     short loc_44D4F0
0x44D50F: cmp     byte ptr [esp+20h+var_10+2], 0
0x44D514: jz      short loc_44D54D
0x44D516: mov     ecx, edi
0x44D518: call    BaseExtraList_Count
0x44D51D: cmp     eax, 2
0x44D520: jnb     short loc_44D54D
0x44D522: mov     ecx, edi
0x44D524: call    ExtraDataList_GetExtraCount
0x44D529: cmp     ax, 1
0x44D52D: jg      short loc_44D54D
0x44D52F: mov     ecx, edi
0x44D531: call    ExtraDataList_GetExtraScript
0x44D536: test    eax, eax
0x44D538: jnz     short loc_44D54D
0x44D53A: mov     ecx, [ebx]
0x44D53C: push    edi
0x44D53D: call    BSSimpleList_Remove
0x44D542: mov     eax, [ebx]
0x44D544: mov     [esp+20h+var_C], eax
0x44D548: jmp     loc_44D5D9
0x44D54D: mov     ecx, edi
0x44D54F: call    ExtraDataList_GetExtraCount
0x44D554: cmp     ax, 1
0x44D558: jle     short loc_44D566
0x44D55A: mov     ecx, edi
0x44D55C: call    BaseExtraList_Count
0x44D561: cmp     eax, 2
0x44D564: jb      short loc_44D5E3
0x44D566: mov     ecx, edi
0x44D568: call    BaseExtraList_Count
0x44D56D: mov     ecx, [esp+20h+var_8]
0x44D571: sub     [esp+20h+arg_4], ecx
0x44D575: mov     esi, [esp+20h+var_4]
0x44D579: jmp     loc_44D3C2
0x44D57E: lea     ebp, [esi+44h]
0x44D581: mov     ecx, ebp
0x44D583: call    ExtraDataList_RemoveOwner
0x44D588: mov     ecx, ebp
0x44D58A: call    sub_4234B0
0x44D58F: mov     ecx, ds:0B333C4h
0x44D595: mov     eax, [esp+20h+var_8]
0x44D599: mov     edx, [ecx]
0x44D59B: mov     edx, [edx+2CCh]
0x44D5A1: push    0
0x44D5A3: push    eax
0x44D5A4: push    esi
0x44D5A5: call    edx
0x44D5A7: mov     ecx, [ebx]
0x44D5A9: push    edi
0x44D5AA: call    BSSimpleList_Remove
0x44D5AF: mov     eax, [ebx]
0x44D5B1: mov     ecx, edi
0x44D5B3: mov     [esp+20h+var_C], eax
0x44D5B7: call    BaseExtraList_Count
0x44D5BC: cmp     eax, 2
0x44D5BF: jnb     short loc_44D5E3
0x44D5C1: mov     ecx, edi
0x44D5C3: call    ExtraDataList_GetExtraCount
0x44D5C8: cmp     ax, 1
0x44D5CC: jg      short loc_44D5E3
0x44D5CE: mov     ecx, edi
0x44D5D0: call    ExtraDataList_GetExtraScript
0x44D5D5: test    eax, eax
0x44D5D7: jnz     short loc_44D5E3
0x44D5D9: mov     edx, [edi]
0x44D5DB: mov     eax, [edx]
0x44D5DD: push    1
0x44D5DF: mov     ecx, edi
0x44D5E1: call    eax
0x44D5E3: mov     ecx, [esp+20h+var_8]
0x44D5E7: sub     [esp+20h+arg_4], ecx
0x44D5EB: mov     esi, [esp+20h+var_4]
0x44D5EF: jmp     loc_44D3C2
0x44D5F4: mov     esi, [esp+20h+var_4]
0x44D5F8: cmp     [esp+20h+var_C], 0
0x44D5FD: jz      loc_44D3C9
0x44D603: jmp     loc_44D3C2
