0x426270: sub     esp, 8
0x426273: push    ebx
0x426274: push    ebp
0x426275: push    esi
0x426276: push    edi
0x426277: mov     ebp, ecx
0x426279: push    offset aExtradatalis_0; lpCriticalSection
0x42627E: mov     ecx, offset BSExtraDataCS
0x426283: call    NiEnterCriticalSection
0x426288: mov     ebx, [esp+18h+arg_0]
0x42628C: mov     esi, [ebp+4]
0x42628F: push    0FFFFFFFFh; a2
0x426291: mov     ecx, ebx; this
0x426293: call    TESForm_GetOverrideFile
0x426298: test    esi, esi
0x42629A: mov     edi, eax
0x42629C: jz      loc_42670B
0x4262A2: jmp     short loc_4262A8
0x4262A4: mov     ebx, [esp+18h+arg_0]
0x4262A8: mov     eax, [esi+8]
0x4262AB: mov     [esp+18h+var_4], eax
0x4262AF: movzx   eax, byte ptr [esi+4]
0x4262B3: add     eax, 0FFFFFFFBh; switch 84 cases
0x4262B6: cmp     eax, 53h
0x4262B9: ja      ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4262BF: movzx   ecx, ds:byte_426758[eax]
0x4262C6: jmp     ds:jpt_4262C6[ecx*4]; switch jump
0x4262CD: mov     ebx, [esi+0Ch]; jumptable 004262C6 case 49
0x4262D0: mov     eax, [ebx+4]
0x4262D3: test    eax, eax
0x4262D5: jz      ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4262DB: lea     edx, [esp+18h+ArgList]
0x4262DF: push    edi; a2
0x4262E0: push    edx; a1
0x4262E1: mov     dword ptr [esp+20h+ArgList], eax
0x4262E5: call    TESForm_ResolveFormID
0x4262EA: mov     eax, dword ptr [esp+20h+ArgList]
0x4262EE: add     esp, 8
0x4262F1: push    0; int
0x4262F3: push    offset ??_R0?AVTESKey@@@8; struct TypeDescriptor *
0x4262F8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4262FD: push    0; int
0x4262FF: push    eax; a1
0x426300: call    TESForm_LookupByFormID
0x426305: add     esp, 4
0x426308: push    eax; void *
0x426309: call    OblivionDynamicCast
0x42630E: add     esp, 14h
0x426311: test    eax, eax
0x426313: mov     [ebx+4], eax
0x426316: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x42631C: mov     ecx, dword ptr [esp+18h+ArgList]
0x426320: push    ecx
0x426321: push    offset aUnableToFindKe; "Unable to find key %08X for lock data. "...
0x426326: jmp     loc_4266ED
0x42632B: mov     ecx, [esi+0Ch]; jumptable 004262C6 case 50
0x42632E: push    ebx
0x42632F: call    sub_42B700
0x426334: test    al, al
0x426336: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x42633C: jmp     loc_4266F5
0x426341: mov     edx, [esi+0Ch]; jumptable 004262C6 case 39
0x426344: lea     eax, [esp+18h+ArgList]
0x426348: push    edi; a2
0x426349: push    eax; a1
0x42634A: mov     dword ptr [esp+20h+ArgList], edx
0x42634E: call    TESForm_ResolveFormID
0x426353: mov     ecx, dword ptr [esp+20h+ArgList]
0x426357: push    ecx; a1
0x426358: call    TESForm_LookupByFormID
0x42635D: add     esp, 0Ch
0x426360: test    eax, eax
0x426362: mov     [esi+0Ch], eax
0x426365: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x42636B: mov     edx, dword ptr [esp+18h+ArgList]
0x42636F: push    edx
0x426370: push    offset aUnableToFindOw; "Unable to find ownership owner form %08"...
0x426375: jmp     loc_4266ED
0x42637A: mov     eax, [esi+0Ch]; jumptable 004262C6 case 40
0x42637D: lea     ecx, [esp+18h+ArgList]
0x426381: push    edi; a2
0x426382: push    ecx; a1
0x426383: mov     dword ptr [esp+20h+ArgList], eax
0x426387: call    TESForm_ResolveFormID
0x42638C: mov     edx, dword ptr [esp+20h+ArgList]
0x426390: add     esp, 8
0x426393: push    0; int
0x426395: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x42639A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42639F: push    0; int
0x4263A1: push    edx; a1
0x4263A2: call    TESForm_LookupByFormID
0x4263A7: add     esp, 4
0x4263AA: push    eax; void *
0x4263AB: call    OblivionDynamicCast
0x4263B0: add     esp, 14h
0x4263B3: test    eax, eax
0x4263B5: mov     [esi+0Ch], eax
0x4263B8: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4263BE: mov     eax, dword ptr [esp+18h+ArgList]
0x4263C2: push    eax
0x4263C3: push    offset aUnableToFind_3; "Unable to find ownership condition glob"...
0x4263C8: jmp     loc_4266ED
0x4263CD: mov     ecx, [esi+0Ch]; jumptable 004262C6 case 72
0x4263D0: lea     edx, [esp+18h+ArgList]
0x4263D4: push    edi; a2
0x4263D5: push    edx; a1
0x4263D6: mov     dword ptr [esp+20h+ArgList], ecx
0x4263DA: call    TESForm_ResolveFormID
0x4263DF: mov     eax, dword ptr [esp+20h+ArgList]
0x4263E3: add     esp, 8
0x4263E6: push    0; int
0x4263E8: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x4263ED: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4263F2: push    0; int
0x4263F4: push    eax; a1
0x4263F5: call    TESForm_LookupByFormID
0x4263FA: add     esp, 4
0x4263FD: push    eax; void *
0x4263FE: call    OblivionDynamicCast
0x426403: add     esp, 14h
0x426406: test    eax, eax
0x426408: mov     [esi+0Ch], eax
0x42640B: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x426411: mov     ecx, dword ptr [esp+18h+ArgList]
0x426415: push    ecx
0x426416: push    offset aUnableToFindPo; "Unable to find poison %08X. Poison data"...
0x42641B: jmp     loc_4266ED
0x426420: mov     edx, [esi+0Ch]; jumptable 004262C6 case 12
0x426423: lea     eax, [esp+18h+ArgList]
0x426427: push    edi; a2
0x426428: push    eax; a1
0x426429: mov     dword ptr [esp+20h+ArgList], edx
0x42642D: call    TESForm_ResolveFormID
0x426432: mov     ecx, dword ptr [esp+20h+ArgList]
0x426436: add     esp, 8
0x426439: push    0; int
0x42643B: push    offset ??_R0?AVTESClimate@@@8; struct TypeDescriptor *
0x426440: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426445: push    0; int
0x426447: push    ecx; a1
0x426448: call    TESForm_LookupByFormID
0x42644D: add     esp, 4
0x426450: push    eax; void *
0x426451: call    OblivionDynamicCast
0x426456: add     esp, 14h
0x426459: test    eax, eax
0x42645B: mov     [esi+0Ch], eax
0x42645E: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x426464: mov     edx, dword ptr [esp+18h+ArgList]
0x426468: push    edx
0x426469: push    offset aUnableToFindCe; "Unable to find cell climate %08X. Clima"...
0x42646E: jmp     loc_4266ED
0x426473: mov     eax, [esi+0Ch]; jumptable 004262C6 case 5
0x426476: lea     ecx, [esp+18h+ArgList]
0x42647A: push    edi; a2
0x42647B: push    ecx; a1
0x42647C: mov     dword ptr [esp+20h+ArgList], eax
0x426480: call    TESForm_ResolveFormID
0x426485: mov     edx, dword ptr [esp+20h+ArgList]
0x426489: add     esp, 8
0x42648C: push    0; int
0x42648E: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x426493: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426498: push    0; int
0x42649A: push    edx; a1
0x42649B: call    TESForm_LookupByFormID
0x4264A0: add     esp, 4
0x4264A3: push    eax; void *
0x4264A4: call    OblivionDynamicCast
0x4264A9: add     esp, 14h
0x4264AC: test    eax, eax
0x4264AE: mov     [esi+0Ch], eax
0x4264B1: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4264B7: mov     eax, dword ptr [esp+18h+ArgList]
0x4264BB: push    eax
0x4264BC: push    offset aUnableToFind_4; "Unable to find cell water type %08X. Wa"...
0x4264C1: jmp     loc_4266ED
0x4264C6: mov     ecx, [esi+0Ch]; jumptable 004262C6 case 30
0x4264C9: lea     edx, [esp+18h+ArgList]
0x4264CD: push    edi; a2
0x4264CE: push    edx; a1
0x4264CF: mov     dword ptr [esp+20h+ArgList], ecx
0x4264D3: call    TESForm_ResolveFormID
0x4264D8: mov     eax, dword ptr [esp+20h+ArgList]
0x4264DC: push    eax; a1
0x4264DD: call    TESForm_LookupByFormID
0x4264E2: add     esp, 0Ch
0x4264E5: test    eax, eax
0x4264E7: mov     [esi+0Ch], eax
0x4264EA: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4264F0: mov     ecx, dword ptr [esp+18h+ArgList]
0x4264F4: push    ecx
0x4264F5: push    offset aUnableToFindPa; "Unable to find package start location c"...
0x4264FA: jmp     loc_4266ED
0x4264FF: mov     edx, [esi+0Ch]; jumptable 004262C6 case 63
0x426502: lea     eax, [esp+18h+ArgList]
0x426506: push    edi; a2
0x426507: push    eax; a1
0x426508: mov     dword ptr [esp+20h+ArgList], edx
0x42650C: call    TESForm_ResolveFormID
0x426511: mov     ecx, dword ptr [esp+20h+ArgList]
0x426515: add     esp, 8
0x426518: push    0; int
0x42651A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42651F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426524: push    0; int
0x426526: push    ecx; a1
0x426527: call    TESForm_LookupByFormID
0x42652C: add     esp, 4
0x42652F: push    eax; void *
0x426530: call    OblivionDynamicCast
0x426535: add     esp, 14h
0x426538: test    eax, eax
0x42653A: mov     [esi+0Ch], eax
0x42653D: jnz     short loc_42654E
0x42653F: mov     edx, dword ptr [esp+18h+ArgList]
0x426543: push    edx
0x426544: push    offset aUnableToFindEn; "Unable to find enable state parent %08X"...
0x426549: jmp     loc_4266ED
0x42654E: push    0; int
0x426550: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x426555: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x42655A: push    0; int
0x42655C: push    ebx; void *
0x42655D: call    OblivionDynamicCast
0x426562: mov     ebx, eax
0x426564: add     esp, 14h
0x426567: test    ebx, ebx
0x426569: jz      short loc_426587
0x42656B: mov     ecx, ebx
0x42656D: call    ??0?$NiTPointerMap@PAVTESObjectREFR@@_N@@QAE@XZ; NiTPointerMap<TESObjectREFR *,bool>::NiTPointerMap<TESObjectREFR *,bool>(void)
0x426572: test    al, al
0x426574: jz      short loc_426587
0x426576: mov     ecx, [esi+0Ch]
0x426579: push    ebx
0x42657A: add     ecx, 44h ; 'D'
0x42657D: call    sub_424A70
0x426582: jmp     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x426587: push    offset aEnableStatePar; "Enable state parent loop detected. Pare"...
0x42658C: call    PrintError
0x426591: add     esp, 4
0x426594: jmp     loc_4266F5
0x426599: mov     eax, [esi+0Ch]; jumptable 004262C6 case 67
0x42659C: lea     ecx, [esp+18h+ArgList]
0x4265A0: push    edi; a2
0x4265A1: push    ecx; a1
0x4265A2: mov     dword ptr [esp+20h+ArgList], eax
0x4265A6: call    TESForm_ResolveFormID
0x4265AB: mov     edx, dword ptr [esp+20h+ArgList]
0x4265AF: add     esp, 8
0x4265B2: push    0; int
0x4265B4: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4265B9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4265BE: push    0; int
0x4265C0: push    edx; a1
0x4265C1: call    TESForm_LookupByFormID
0x4265C6: add     esp, 4
0x4265C9: push    eax; void *
0x4265CA: call    OblivionDynamicCast
0x4265CF: add     esp, 14h
0x4265D2: test    eax, eax
0x4265D4: mov     [esi+0Ch], eax
0x4265D7: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4265DD: mov     eax, dword ptr [esp+18h+ArgList]
0x4265E1: push    eax
0x4265E2: push    offset aUnableToFindRa; "Unable to find random door teleport mar"...
0x4265E7: jmp     loc_4266ED
0x4265EC: mov     ecx, [esi+0Ch]; jumptable 004262C6 case 68
0x4265EF: lea     edx, [esp+18h+ArgList]
0x4265F3: push    edi; a2
0x4265F4: push    edx; a1
0x4265F5: mov     dword ptr [esp+20h+ArgList], ecx
0x4265F9: call    TESForm_ResolveFormID
0x4265FE: mov     eax, dword ptr [esp+20h+ArgList]
0x426602: add     esp, 8
0x426605: push    0; int
0x426607: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42660C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426611: push    0; int
0x426613: push    eax; a1
0x426614: call    TESForm_LookupByFormID
0x426619: add     esp, 4
0x42661C: push    eax; void *
0x42661D: call    OblivionDynamicCast
0x426622: add     esp, 14h
0x426625: test    eax, eax
0x426627: mov     [esi+0Ch], eax
0x42662A: jnz     ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x426630: mov     ecx, dword ptr [esp+18h+ArgList]
0x426634: push    ecx
0x426635: push    offset aUnableToFindMe; "Unable to find merchant container %08X."...
0x42663A: jmp     loc_4266ED
0x42663F: mov     edx, [esi+0Ch]; jumptable 004262C6 case 88
0x426642: lea     eax, [esp+18h+ArgList]
0x426646: push    edi; a2
0x426647: push    eax; a1
0x426648: mov     dword ptr [esp+20h+ArgList], edx
0x42664C: call    TESForm_ResolveFormID
0x426651: mov     ecx, dword ptr [esp+20h+ArgList]
0x426655: add     esp, 8
0x426658: push    0; int
0x42665A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x42665F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x426664: push    0; int
0x426666: push    ecx; a1
0x426667: call    TESForm_LookupByFormID
0x42666C: add     esp, 4
0x42666F: push    eax; void *
0x426670: call    OblivionDynamicCast
0x426675: add     esp, 14h
0x426678: test    eax, eax
0x42667A: mov     [esi+0Ch], eax
0x42667D: jz      short loc_426691
0x42667F: mov     ecx, eax
0x426681: call    sub_4D74D0
0x426686: test    al, al
0x426688: jnz     short loc_426691
0x42668A: mov     dword ptr [esi+0Ch], 0
0x426691: cmp     dword ptr [esi+0Ch], 0
0x426695: jnz     short ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x426697: mov     edx, dword ptr [esp+18h+ArgList]
0x42669B: push    edx
0x42669C: push    offset aUnableToFindTr; "Unable to find travel horse %08X. Trave"...
0x4266A1: jmp     short loc_4266ED
0x4266A3: mov     eax, [esi+0Ch]; jumptable 004262C6 case 77
0x4266A6: lea     ecx, [esp+18h+ArgList]
0x4266AA: push    edi; a2
0x4266AB: push    ecx; a1
0x4266AC: mov     dword ptr [esp+20h+ArgList], eax
0x4266B0: call    TESForm_ResolveFormID
0x4266B5: mov     edx, dword ptr [esp+20h+ArgList]
0x4266B9: add     esp, 8
0x4266BC: push    0; int
0x4266BE: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4266C3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4266C8: push    0; int
0x4266CA: push    edx; a1
0x4266CB: call    TESForm_LookupByFormID
0x4266D0: add     esp, 4
0x4266D3: push    eax; void *
0x4266D4: call    OblivionDynamicCast
0x4266D9: add     esp, 14h
0x4266DC: test    eax, eax
0x4266DE: mov     [esi+0Ch], eax
0x4266E1: jnz     short ExtraDataList_Link?___def_4262C6; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x4266E3: mov     eax, dword ptr [esp+18h+ArgList]
0x4266E7: push    eax; ArgList
0x4266E8: push    offset aUnableToFindXm; "Unable to find XMarker target %08X. XMa"...
0x4266ED: call    PrintError
0x4266F2: add     esp, 8
0x4266F5: push    1
0x4266F7: push    esi
0x4266F8: mov     ecx, ebp
0x4266FA: call    BaseExtraList_RemoveExtraByPtr
0x4266FF: mov     esi, [esp+18h+var_4]; jumptable 004262C6 default case, cases 6-11,13-29,31-38,41-48,51-62,64-66,69-71,73-76,78-87
0x426703: test    esi, esi
0x426705: jnz     loc_4262A4
0x42670B: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x426710: call    NiLeaveCriticalSection_0
0x426715: pop     edi
0x426716: pop     esi
0x426717: pop     ebp
0x426718: pop     ebx
0x426719: add     esp, 8
0x42671C: retn    4
