0x5EA380: push    0FFFFFFFFh
0x5EA382: push    offset SEH_5EA380
0x5EA387: mov     eax, large fs:0
0x5EA38D: push    eax
0x5EA38E: sub     esp, 20h
0x5EA391: push    ebx
0x5EA392: push    ebp
0x5EA393: push    esi
0x5EA394: push    edi
0x5EA395: mov     eax, ds:0B30AACh
0x5EA39A: xor     eax, esp
0x5EA39C: push    eax
0x5EA39D: lea     eax, [esp+40h+var_C]
0x5EA3A1: mov     large fs:0, eax
0x5EA3A7: mov     ebx, ecx
0x5EA3A9: mov     eax, [ebx]
0x5EA3AB: mov     edx, [eax+128h]
0x5EA3B1: call    edx
0x5EA3B3: mov     esi, eax
0x5EA3B5: mov     eax, [ebx]
0x5EA3B7: mov     edx, [eax+170h]
0x5EA3BD: mov     ecx, ebx
0x5EA3BF: call    edx
0x5EA3C1: test    esi, esi
0x5EA3C3: mov     edi, eax
0x5EA3C5: jnz     short loc_5EA3DD
0x5EA3C7: test    edi, edi
0x5EA3C9: jz      short loc_5EA3DD
0x5EA3CB: mov     eax, [ebx]
0x5EA3CD: mov     edx, [eax+190h]
0x5EA3D3: mov     ecx, ebx
0x5EA3D5: call    edx
0x5EA3D7: test    al, al
0x5EA3D9: jz      short loc_5EA3DD
0x5EA3DB: mov     esi, edi
0x5EA3DD: mov     esi, [esi+38h]
0x5EA3E0: test    esi, esi
0x5EA3E2: jnz     short loc_5EA415
0x5EA3E4: mov     eax, [ebx]
0x5EA3E6: mov     edx, [eax+170h]
0x5EA3EC: mov     ecx, ebx
0x5EA3EE: xor     edi, edi
0x5EA3F0: call    edx
0x5EA3F2: mov     esi, eax
0x5EA3F4: test    esi, esi
0x5EA3F6: jz      short loc_5EA40A
0x5EA3F8: mov     eax, [ebx]
0x5EA3FA: mov     edx, [eax+190h]
0x5EA400: mov     ecx, ebx
0x5EA402: call    edx
0x5EA404: test    al, al
0x5EA406: jz      short loc_5EA40A
0x5EA408: mov     edi, esi
0x5EA40A: mov     esi, [edi+38h]
0x5EA40D: test    esi, esi
0x5EA40F: jz      loc_5EA5AD
0x5EA415: lea     ecx, [esp+40h+var_1C]
0x5EA419: call    TESContainer_constr
0x5EA41E: mov     eax, [ebx]
0x5EA420: mov     edx, [eax+170h]
0x5EA426: mov     ecx, ebx
0x5EA428: mov     [esp+40h+var_4], 0
0x5EA430: xor     edi, edi
0x5EA432: call    edx
0x5EA434: mov     ebp, eax
0x5EA436: test    ebp, ebp
0x5EA438: jz      short loc_5EA44C
0x5EA43A: mov     eax, [ebx]
0x5EA43C: mov     edx, [eax+190h]
0x5EA442: mov     ecx, ebx
0x5EA444: call    edx
0x5EA446: test    al, al
0x5EA448: jz      short loc_5EA44C
0x5EA44A: mov     edi, ebp
0x5EA44C: lea     eax, [esp+40h+var_1C]
0x5EA450: push    eax; int
0x5EA451: push    1
0x5EA453: lea     ecx, [edi+24h]
0x5EA456: call    TESActorBaseData_GetLevel
0x5EA45B: lea     ecx, [esi+24h]; this
0x5EA45E: push    eax; int
0x5EA45F: call    TESLeveledList_CalcLeveledForm
0x5EA464: mov     ebp, [esp+40h+var_14]
0x5EA468: lea     edi, [esp+40h+var_14]
0x5EA46C: mov     [esp+40h+var_28], edi
0x5EA470: jmp     short loc_5EA476
0x5EA472: mov     edi, [esp+40h+var_28]
0x5EA476: mov     eax, [edi]
0x5EA478: test    eax, eax
0x5EA47A: jz      loc_5EA59C
0x5EA480: cmp     dword ptr [eax+4], 0
0x5EA484: jz      loc_5EA58D
0x5EA48A: mov     eax, [eax+4]
0x5EA48D: mov     edx, [eax]
0x5EA48F: mov     ecx, eax
0x5EA491: mov     eax, [edx+0A4h]
0x5EA497: call    eax
0x5EA499: test    al, al
0x5EA49B: jz      loc_5EA58D
0x5EA4A1: mov     eax, [edi]
0x5EA4A3: mov     esi, [eax+4]
0x5EA4A6: test    esi, esi
0x5EA4A8: mov     [esp+40h+var_24], esi
0x5EA4AC: jz      loc_5EA58D
0x5EA4B2: mov     eax, [ebp+4]
0x5EA4B5: push    0; int
0x5EA4B7: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x5EA4BC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5EA4C1: push    0; int
0x5EA4C3: push    eax; void *
0x5EA4C4: call    OblivionDynamicCast
0x5EA4C9: add     esp, 14h
0x5EA4CC: test    eax, eax
0x5EA4CE: jz      short loc_5EA4D9
0x5EA4D0: mov     ecx, [eax+4]
0x5EA4D3: mov     [esp+40h+var_2C], ecx
0x5EA4D7: jmp     short loc_5EA4E1
0x5EA4D9: mov     [esp+40h+var_2C], 0
0x5EA4E1: cmp     [esp+40h+var_2C], 0
0x5EA4E6: jz      loc_5EA57A
0x5EA4EC: xor     edi, edi
0x5EA4EE: xor     esi, esi
0x5EA4F0: cmp     [ebp+0], edi
0x5EA4F3: jbe     short loc_5EA560
0x5EA4F5: push    14h; Size
0x5EA4F7: call    FormHeapAlloc
0x5EA4FC: add     esp, 4
0x5EA4FF: mov     [esp+40h+var_20], eax
0x5EA503: test    eax, eax
0x5EA505: mov     byte ptr [esp+40h+var_4], 1
0x5EA50A: jz      short loc_5EA517
0x5EA50C: mov     ecx, eax
0x5EA50E: call    ExtraDataList_constr
0x5EA513: mov     esi, eax
0x5EA515: jmp     short loc_5EA519
0x5EA517: xor     esi, esi
0x5EA519: push    1
0x5EA51B: mov     ecx, esi
0x5EA51D: mov     byte ptr [esp+44h+var_4], 0
0x5EA522: call    ExtraDataList_SetExtraCount
0x5EA527: test    esi, esi
0x5EA529: jz      short loc_5EA558
0x5EA52B: mov     ecx, esi
0x5EA52D: call    ExtraDataList_GetExtraScript
0x5EA532: test    eax, eax
0x5EA534: jnz     short loc_5EA558
0x5EA536: mov     edx, [esp+40h+var_2C]
0x5EA53A: push    edx
0x5EA53B: mov     ecx, esi
0x5EA53D: call    ExtraDataList_AddScript
0x5EA542: mov     ecx, esi
0x5EA544: call    ExtraDataList_GetExtraScript
0x5EA549: mov     ecx, eax
0x5EA54B: call    Script_CreateEventList
0x5EA550: push    eax
0x5EA551: mov     ecx, esi
0x5EA553: call    ExtraDataList_SetScriptEventList
0x5EA558: add     edi, 1
0x5EA55B: cmp     edi, [ebp+0]
0x5EA55E: jb      short loc_5EA4F5
0x5EA560: mov     ecx, [esp+40h+var_24]
0x5EA564: mov     eax, [ebx]
0x5EA566: mov     edx, [eax+114h]
0x5EA56C: push    1
0x5EA56E: push    esi
0x5EA56F: push    ecx
0x5EA570: mov     ecx, ebx
0x5EA572: call    edx
0x5EA574: mov     edi, [esp+40h+var_28]
0x5EA578: jmp     short loc_5EA58D
0x5EA57A: mov     ecx, [ebp+0]
0x5EA57D: mov     eax, [ebx]
0x5EA57F: mov     edx, [eax+114h]
0x5EA585: push    ecx
0x5EA586: push    0
0x5EA588: push    esi
0x5EA589: mov     ecx, ebx
0x5EA58B: call    edx
0x5EA58D: mov     eax, [edi+4]
0x5EA590: test    eax, eax
0x5EA592: mov     [esp+40h+var_28], eax
0x5EA596: jnz     loc_5EA472
0x5EA59C: lea     ecx, [esp+40h+var_1C]
0x5EA5A0: mov     [esp+40h+var_4], 0FFFFFFFFh
0x5EA5A8: call    TESContainer_destr
0x5EA5AD: lea     ecx, [ebx+44h]; this
0x5EA5B0: call    ExtraDataList_GetContainerChanges
0x5EA5B5: test    eax, eax
0x5EA5B7: jz      short loc_5EA5C0
0x5EA5B9: mov     ecx, eax
0x5EA5BB: call    ExtraContainerChanges_RunScripts
0x5EA5C0: mov     ecx, dword ptr [esp+40h+var_C]
0x5EA5C4: mov     large fs:0, ecx
0x5EA5CB: pop     ecx
0x5EA5CC: pop     edi
0x5EA5CD: pop     esi
0x5EA5CE: pop     ebp
0x5EA5CF: pop     ebx
0x5EA5D0: add     esp, 2Ch
0x5EA5D3: retn
