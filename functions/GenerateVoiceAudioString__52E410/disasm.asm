0x52E410: push    0FFFFFFFFh
0x52E412: push    offset GenerateVoiceAudioString_SEH
0x52E417: mov     eax, large fs:0
0x52E41D: push    eax
0x52E41E: sub     esp, 14h
0x52E421: push    ebx
0x52E422: push    ebp
0x52E423: push    esi
0x52E424: push    edi
0x52E425: mov     eax, ds:0B30AACh
0x52E42A: xor     eax, esp
0x52E42C: push    eax
0x52E42D: lea     eax, [esp+34h+var_C]
0x52E431: mov     large fs:0, eax
0x52E437: mov     [esp+34h+var_20], ecx
0x52E43B: xor     ebx, ebx
0x52E43D: mov     [esp+34h+var_14], ebx
0x52E441: mov     [esp+34h+var_10], bx
0x52E446: mov     [esp+34h+var_E], bx
0x52E44B: mov     [esp+34h+var_4], ebx
0x52E44F: mov     [esp+34h+var_1C.m_data], ebx
0x52E453: mov     [esp+34h+var_1C.m_dataLen], bx
0x52E458: mov     [esp+34h+var_1C.m_bufLen], bx
0x52E45D: mov     esi, [esp+34h+arg_C]
0x52E461: mov     edx, [esp+34h+arg_8]
0x52E465: push    ebx
0x52E466: lea     eax, [esp+38h+var_1C]
0x52E46A: push    eax
0x52E46B: mov     eax, [esp+3Ch+arg_4]
0x52E46F: push    esi
0x52E470: push    edx
0x52E471: push    eax
0x52E472: mov     byte ptr [esp+48h+var_4], 1
0x52E477: call    CreateDialogueFileName
0x52E47C: mov     ecx, [esp+34h+arg_0]
0x52E480: push    ebx; int
0x52E481: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x52E486: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x52E48B: push    ebx; int
0x52E48C: push    ecx; void *
0x52E48D: call    OblivionDynamicCast
0x52E492: mov     edi, eax
0x52E494: add     esp, 14h
0x52E497: cmp     edi, ebx
0x52E499: jnz     short loc_52E4B3
0x52E49B: mov     edx, [esp+34h+var_1C.m_data]
0x52E49F: push    edx
0x52E4A0: call    FormHeapFree
0x52E4A5: push    ebx
0x52E4A6: call    FormHeapFree
0x52E4AB: add     esp, 8
0x52E4AE: jmp     loc_52E639
0x52E4B3: push    0FFFFFFFFh; a2
0x52E4B5: mov     ecx, esi; this
0x52E4B7: call    TESForm_GetOverrideFile
0x52E4BC: mov     ebp, eax
0x52E4BE: push    ebx; a2
0x52E4BF: mov     ecx, esi; this
0x52E4C1: mov     [esp+38h+arg_C], ebp
0x52E4C5: call    TESForm_GetOverrideFile
0x52E4CA: cmp     ebp, ebx
0x52E4CC: mov     [esp+34h+arg_0], eax
0x52E4D0: jnz     short loc_52E4F4
0x52E4D2: cmp     eax, ebx
0x52E4D4: mov     [esp+34h+arg_C], eax
0x52E4D8: jnz     short loc_52E4F2
0x52E4DA: mov     eax, [esp+34h+var_1C.m_data]
0x52E4DE: push    eax
0x52E4DF: call    FormHeapFree
0x52E4E4: push    ebx
0x52E4E5: call    FormHeapFree
0x52E4EA: add     esp, 8
0x52E4ED: jmp     loc_52E639
0x52E4F2: mov     ebp, eax
0x52E4F4: mov     ecx, edi; this
0x52E4F6: mov     [esp+34h+arg_4], ebx
0x52E4FA: call    Actor_IsFemale
0x52E4FF: mov     ecx, edi
0x52E501: mov     esi, eax
0x52E503: call    Actor__GetRaceIfNPC
0x52E508: cmp     eax, ebx
0x52E50A: jnz     short loc_52E524
0x52E50C: mov     ecx, [esp+34h+var_1C.m_data]
0x52E510: push    ecx
0x52E511: call    FormHeapFree
0x52E516: push    ebx
0x52E517: call    FormHeapFree
0x52E51C: add     esp, 8
0x52E51F: jmp     loc_52E639
0x52E524: push    esi
0x52E525: mov     ecx, eax
0x52E527: call    TESRace__GetRaceVoiceOverride
0x52E52C: cmp     eax, ebx
0x52E52E: jz      loc_52E49B
0x52E534: mov     eax, [eax+1Ch]
0x52E537: cmp     eax, ebx
0x52E539: mov     [esp+34h+arg_8], eax
0x52E53D: jnz     short loc_52E547
0x52E53F: mov     [esp+34h+arg_8], offset EmptyString
0x52E547: cmp     [esp+34h+arg_8], ebx
0x52E54B: jz      loc_52E61B
0x52E551: cmp     ebp, ebx
0x52E553: jz      short loc_52E577
0x52E555: lea     eax, [ebp+1Ch]
0x52E558: cmp     eax, ebx
0x52E55A: mov     [esp+34h+arg_4], eax
0x52E55E: jnz     short loc_52E577
0x52E560: mov     eax, [esp+34h+arg_0]
0x52E564: mov     [esp+34h+arg_C], eax
0x52E568: add     eax, 1Ch
0x52E56B: cmp     eax, ebx
0x52E56D: mov     [esp+34h+arg_4], eax
0x52E571: jz      loc_52E61B
0x52E577: mov     ecx, edi; this
0x52E579: call    Actor_IsFemale
0x52E57E: sub     eax, ebx
0x52E580: jz      short loc_52E595
0x52E582: sub     eax, 1
0x52E585: jz      short loc_52E58E
0x52E587: mov     edi, offset EmptyString
0x52E58C: jmp     short loc_52E59A
0x52E58E: mov     edi, offset aF_0; "F"
0x52E593: jmp     short loc_52E59A
0x52E595: mov     edi, offset aM; "M"
0x52E59A: mov     esi, ds:0B10D60h
0x52E5A0: mov     ebp, [esp+34h+var_1C.m_data]
0x52E5A4: mov     eax, [esp+34h+arg_8]
0x52E5A8: mov     ecx, [esp+34h+arg_4]
0x52E5AC: mov     edx, [esp+34h+arg_10]
0x52E5B0: push    esi
0x52E5B1: push    ebp
0x52E5B2: push    edi
0x52E5B3: push    eax
0x52E5B4: push    ecx
0x52E5B5: mov     ecx, [esp+48h+var_20]
0x52E5B9: push    offset aDataSoundVoice; "Data\\Sound\\Voice"
0x52E5BE: push    edx
0x52E5BF: call    BSStringT__SetDialogueAndFindFile
0x52E5C4: cmp     al, bl
0x52E5C6: jz      short loc_52E5EA
0x52E5C8: lea     ecx, [esp+34h+var_1C]; void *
0x52E5CC: mov     byte ptr [esp+34h+var_4], bl
0x52E5D0: call    BSStringT_Clear
0x52E5D5: lea     ecx, [esp+34h+var_14]; void *
0x52E5D9: mov     [esp+34h+var_4], 0FFFFFFFFh
0x52E5E1: call    BSStringT_Clear
0x52E5E6: mov     al, 1
0x52E5E8: jmp     short loc_52E63B
0x52E5EA: mov     eax, [esp+34h+arg_0]
0x52E5EE: cmp     [esp+34h+arg_C], eax
0x52E5F2: jz      short loc_52E61B
0x52E5F4: add     eax, 1Ch
0x52E5F7: cmp     eax, ebx
0x52E5F9: jz      short loc_52E61B
0x52E5FB: mov     ecx, [esp+34h+arg_8]
0x52E5FF: mov     edx, [esp+34h+arg_10]
0x52E603: push    esi
0x52E604: push    ebp
0x52E605: push    edi
0x52E606: push    ecx
0x52E607: mov     ecx, [esp+44h+var_20]
0x52E60B: push    eax
0x52E60C: push    offset aDataSoundVoice; "Data\\Sound\\Voice"
0x52E611: push    edx
0x52E612: call    BSStringT__SetDialogueAndFindFile
0x52E617: cmp     al, bl
0x52E619: jnz     short loc_52E5C8
0x52E61B: lea     ecx, [esp+34h+var_1C]; void *
0x52E61F: mov     byte ptr [esp+34h+var_4], bl
0x52E623: call    BSStringT_Clear
0x52E628: lea     ecx, [esp+34h+var_14]; void *
0x52E62C: mov     [esp+34h+var_4], 0FFFFFFFFh
0x52E634: call    BSStringT_Clear
0x52E639: xor     al, al
0x52E63B: mov     ecx, [esp+34h+var_C]
0x52E63F: mov     large fs:0, ecx
0x52E646: pop     ecx
0x52E647: pop     edi
0x52E648: pop     esi
0x52E649: pop     ebp
0x52E64A: pop     ebx
0x52E64B: add     esp, 20h
0x52E64E: retn    14h
0x52E651: int     3; Trap to Debugger
0x52E652: int     3; Trap to Debugger
