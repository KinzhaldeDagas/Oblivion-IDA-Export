0x5162B0: push    0FFFFFFFFh
0x5162B2: push    offset Cmd_EquipItem_SEH
0x5162B7: mov     eax, large fs:0
0x5162BD: push    eax
0x5162BE: sub     esp, 10h
0x5162C1: push    ebx
0x5162C2: push    ebp
0x5162C3: push    esi
0x5162C4: push    edi
0x5162C5: mov     eax, ds:0B30AACh
0x5162CA: xor     eax, esp
0x5162CC: push    eax
0x5162CD: lea     eax, [esp+30h+var_C]
0x5162D1: mov     large fs:0, eax
0x5162D7: mov     edx, [esp+30h+l]
0x5162DB: mov     edi, [esp+30h+arg_10]
0x5162DF: mov     esi, [esp+30h+a4]
0x5162E3: lea     eax, [esp+30h+var_10]
0x5162E7: push    eax
0x5162E8: mov     eax, [esp+34h+arg_C]
0x5162EC: lea     ecx, [esp+34h+var_1C]
0x5162F0: push    ecx; UInt16
0x5162F1: mov     ecx, [esp+38h+a3]
0x5162F5: push    edx; l
0x5162F6: mov     edx, [esp+3Ch+arg_4]
0x5162FA: push    edi; a6
0x5162FB: push    eax; a5
0x5162FC: mov     eax, [esp+44h+a1]
0x516300: push    esi; a4
0x516301: push    ecx; a3
0x516302: push    edx; a2
0x516303: xor     ebx, ebx
0x516305: push    eax; a1
0x516306: mov     dword ptr [esp+54h+var_1C], ebx
0x51630A: mov     [esp+54h+var_10], ebx
0x51630E: call    Script_ExtractArgs
0x516313: add     esp, 24h
0x516316: test    al, al
0x516318: jnz     short loc_51632E
0x51631A: mov     ecx, [esp+30h+var_C]
0x51631E: mov     large fs:0, ecx
0x516325: pop     ecx
0x516326: pop     edi
0x516327: pop     esi
0x516328: pop     ebp
0x516329: pop     ebx
0x51632A: add     esp, 1Ch
0x51632D: retn
0x51632E: cmp     esi, ebx
0x516330: jz      loc_51649C
0x516336: push    ebx; int
0x516337: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51633C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x516341: push    ebx; int
0x516342: push    esi; void *
0x516343: call    OblivionDynamicCast
0x516348: add     esp, 14h
0x51634B: cmp     [esp+30h+var_10], ebx
0x51634F: mov     ebp, eax
0x516351: mov     byte ptr [esp+30h+string], bl
0x516355: jle     short loc_51635C
0x516357: mov     byte ptr [esp+30h+string], 1
0x51635C: cmp     dword ptr [esp+30h+var_1C], ebx
0x516360: jz      loc_516482
0x516366: cmp     ebp, ebx
0x516368: jz      loc_51649C
0x51636E: lea     ecx, [ebp+44h]; this
0x516371: call    ExtraDataList_GetContainerChanges
0x516376: cmp     eax, ebx
0x516378: jz      short loc_5163B0
0x51637A: mov     ecx, dword ptr [esp+30h+var_1C]
0x51637E: push    ebx
0x51637F: push    1
0x516381: push    ecx
0x516382: mov     ecx, eax
0x516384: call    ContainerExtraData_GetEntryForForm
0x516389: cmp     eax, ebx
0x51638B: jz      short loc_5163B0
0x51638D: mov     edi, [eax]
0x51638F: cmp     edi, ebx
0x516391: jz      short loc_5163B0
0x516393: mov     esi, [edi]
0x516395: cmp     esi, ebx
0x516397: jz      short loc_5163B0
0x516399: push    ebx
0x51639A: mov     ecx, esi
0x51639C: call    ExtraDataList_HasWorn
0x5163A1: test    al, al
0x5163A3: jnz     loc_516474
0x5163A9: mov     edi, [edi+4]
0x5163AC: cmp     edi, ebx
0x5163AE: jnz     short loc_516393
0x5163B0: mov     eax, [esp+30h+string]
0x5163B4: mov     ecx, dword ptr [esp+30h+var_1C]
0x5163B8: push    eax
0x5163B9: push    1
0x5163BB: push    ebx
0x5163BC: push    1
0x5163BE: push    ecx
0x5163BF: mov     ecx, ebp
0x5163C1: call    Actor_EquipItem
0x5163C6: cmp     ebp, ds:0B333C4h
0x5163CC: jnz     loc_51649C
0x5163D2: mov     [esp+30h+string], ebx
0x5163D6: mov     word ptr [esp+30h+var_14], bx
0x5163DB: mov     word ptr [esp+30h+var_14+2], bx
0x5163E0: mov     edx, ds:0B382B8h
0x5163E6: mov     eax, dword ptr [esp+30h+var_1C]
0x5163EA: push    edx
0x5163EB: push    eax; a1
0x5163EC: mov     [esp+38h+var_4], ebx
0x5163F0: call    TESFullName_GetNameForForm
0x5163F5: add     esp, 4
0x5163F8: push    eax; ArgList
0x5163F9: lea     ecx, [esp+38h+string]
0x5163FD: push    offset aSS_; "%s %s."
0x516402: push    ecx; int
0x516403: call    BSStringT_Static_Format
0x516408: fld     dword ptr ds:0A30634h
0x51640E: mov     edx, [esp+40h+string]
0x516412: fstp    [esp+40h+duration]; duration
0x516416: add     esp, 0Ch
0x516419: push    1; unk2
0x51641B: push    ebx; unk1
0x51641C: push    edx; string
0x51641D: call    GameUI_QueueMessage
0x516422: mov     eax, dword ptr [esp+40h+var_1C]
0x516426: mov     ecx, ds:0B333C4h
0x51642C: add     esp, 10h
0x51642F: push    ebx
0x516430: push    eax
0x516431: call    HideEquipment
0x516436: mov     ecx, ds:0B333C4h; Concurrency::details::SchedulerBase *
0x51643C: call    sub_668CC0
0x516441: mov     eax, ds:0B333C4h
0x516446: mov     ecx, [eax+58h]
0x516449: mov     edx, [ecx]
0x51644B: push    ebx
0x51644C: push    ebx
0x51644D: push    1
0x51644F: push    eax
0x516450: mov     eax, [edx+42Ch]
0x516456: call    eax
0x516458: push    ebx
0x516459: call    sub_57A3B0
0x51645E: add     esp, 4
0x516461: lea     ecx, [esp+30h+string]; void *
0x516465: mov     [esp+30h+var_4], 0FFFFFFFFh
0x51646D: call    BSStringT_Clear
0x516472: jmp     short loc_51649C
0x516474: mov     edx, [esp+30h+string]
0x516478: push    edx
0x516479: mov     ecx, esi
0x51647B: call    sub_41F370
0x516480: jmp     short loc_51649C
0x516482: mov     edx, [edi]
0x516484: mov     eax, [edx+0D4h]
0x51648A: mov     ecx, edi
0x51648C: call    eax
0x51648E: push    eax; ArgList
0x51648F: push    offset aEquipitemInScr; "EquipItem in script '%s' failed to gene"...
0x516494: call    PrintError
0x516499: add     esp, 8
0x51649C: mov     al, 1
0x51649E: mov     ecx, [esp+30h+var_C]
0x5164A2: mov     large fs:0, ecx
0x5164A9: pop     ecx
0x5164AA: pop     edi
0x5164AB: pop     esi
0x5164AC: pop     ebp
0x5164AD: pop     ebx
0x5164AE: add     esp, 1Ch
0x5164B1: retn
