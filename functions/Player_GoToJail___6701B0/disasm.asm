0x6701B0: push    0FFFFFFFFh
0x6701B2: push    offset Player_GoToJail?_SEH
0x6701B7: mov     eax, large fs:0
0x6701BD: push    eax
0x6701BE: push    ecx
0x6701BF: push    ebx
0x6701C0: push    ebp
0x6701C1: push    esi
0x6701C2: push    edi
0x6701C3: mov     eax, ds:0B30AACh
0x6701C8: xor     eax, esp
0x6701CA: push    eax; ArgList
0x6701CB: lea     eax, [esp+24h+var_C]
0x6701CF: mov     large fs:0, eax
0x6701D5: mov     esi, ecx
0x6701D7: cmp     byte ptr [esp+24h+arg_0], 0
0x6701DC: jnz     loc_67028E
0x6701E2: mov     byte ptr [esi+12Ch], 1
0x6701E9: mov     byte ptr [esi+738h], 0
0x6701F0: mov     ecx, ds:0B33B00h
0x6701F6: call    sub_45A500
0x6701FB: xor     edi, edi
0x6701FD: test    al, al
0x6701FF: jnz     short loc_670226
0x670201: mov     eax, ds:0B3BAD0h
0x670206: push    1
0x670208: push    eax
0x670209: push    edi
0x67020A: mov     ecx, offset ActorProcessManager_ptr
0x67020F: call    sub_6765F0
0x670214: mov     [esi+608h], edi
0x67021A: mov     ds:0B3BAD4h, edi
0x670220: mov     ds:0B3BAD0h, edi
0x670226: push    edi
0x670227: push    edi
0x670228: mov     ecx, offset ActorProcessManager_ptr
0x67022D: mov     byte ptr [esi+610h], 0
0x670234: call    sub_675D50
0x670239: mov     edx, [esi]
0x67023B: mov     eax, [edx+250h]
0x670241: mov     ecx, esi
0x670243: mov     byte ptr [esi+200h], 1
0x67024A: mov     ds:0B3BAD0h, edi
0x670250: call    eax
0x670252: fidiv   dword ptr ds:0B376F0h
0x670258: call    Double_To_SInt32
0x67025D: mov     edx, [esi]
0x67025F: mov     [esi+608h], eax
0x670265: mov     eax, [edx+354h]
0x67026B: mov     ecx, esi
0x67026D: call    eax
0x67026F: test    al, al
0x670271: jz      short loc_67027B
0x670273: lea     ecx, [esi+44h]; this
0x670276: call    sub_4246F0
0x67027B: mov     ecx, esi
0x67027D: call    sub_65FDA0
0x670282: mov     ecx, esi
0x670284: call    sub_5F0410
0x670289: jmp     loc_6706E6
0x67028E: mov     ebx, 1
0x670293: push    ebx
0x670294: lea     ecx, [esi+68h]
0x670297: call    MagicTarget_RemoveNonPersistentEffects
0x67029C: cmp     [esi+608h], ebx
0x6702A2: jge     short loc_6702AA
0x6702A4: mov     [esi+608h], ebx
0x6702AA: mov     ecx, ds:0B3BAD0h; this
0x6702B0: xor     ebp, ebp
0x6702B2: cmp     ecx, ebp
0x6702B4: jz      loc_6705C6
0x6702BA: call    GetTeleportExtraData
0x6702BF: mov     ecx, eax
0x6702C1: call    sub_42B410
0x6702C6: cmp     eax, ebp
0x6702C8: jz      loc_6705B4
0x6702CE: lea     ecx, [esi+44h]; this
0x6702D1: call    ExtraDataList_GetContainerChanges
0x6702D6: cmp     ds:0B3BAD4h, ebp
0x6702DC: mov     edi, eax
0x6702DE: jz      loc_6705D9
0x6702E4: mov     ecx, ds:0B35EC8h
0x6702EA: push    ebp
0x6702EB: push    ecx
0x6702EC: mov     ecx, edi
0x6702EE: call    sub_487D20
0x6702F3: mov     ebp, eax
0x6702F5: test    ebp, ebp
0x6702F7: jz      short loc_670319
0x6702F9: mov     edx, ds:0B35EC8h
0x6702FF: push    0
0x670301: push    0
0x670303: push    0
0x670305: push    0
0x670307: push    0
0x670309: push    0
0x67030B: push    0
0x67030D: push    ebx
0x67030E: push    0
0x670310: push    edx
0x670311: push    esi
0x670312: mov     ecx, edi
0x670314: call    ContainerExtraData_RemoveForm
0x670319: mov     eax, ds:0B3BAD4h
0x67031E: push    0
0x670320: push    0
0x670322: push    0
0x670324: push    eax
0x670325: push    esi
0x670326: mov     ecx, edi
0x670328: call    sub_492E70
0x67032D: fstp    st
0x67032F: test    ebp, ebp
0x670331: mov     ebx, ds:0B33AB0h
0x670337: jz      short loc_67034B
0x670339: mov     ecx, ds:0B35EC8h
0x67033F: push    1
0x670341: push    0
0x670343: push    ecx
0x670344: mov     ecx, edi
0x670346: call    ContainerExtraData_AddItem
0x67034B: push    ebx
0x67034C: xor     edi, edi
0x67034E: call    TESScriptableForm_GetScriptForForm
0x670353: mov     ebp, eax
0x670355: add     esp, 4
0x670358: test    ebp, ebp
0x67035A: jz      short loc_6703B2
0x67035C: push    14h; Size
0x67035E: call    FormHeapAlloc
0x670363: add     esp, 4
0x670366: mov     [esp+24h+arg_0], eax
0x67036A: cmp     eax, edi
0x67036C: mov     [esp+24h+var_4], edi
0x670370: jz      short loc_67037B
0x670372: mov     ecx, eax
0x670374: call    ExtraDataList_constr
0x670379: mov     edi, eax
0x67037B: push    1
0x67037D: mov     ecx, edi
0x67037F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x670387: call    ExtraDataList_SetExtraCount
0x67038C: test    edi, edi
0x67038E: jz      short loc_6703B2
0x670390: mov     ecx, edi
0x670392: call    ExtraDataList_GetExtraScript
0x670397: test    eax, eax
0x670399: jnz     short loc_6703B2
0x67039B: push    ebp
0x67039C: mov     ecx, edi
0x67039E: call    ExtraDataList_AddScript
0x6703A3: mov     ecx, ebp
0x6703A5: call    Script_CreateEventList
0x6703AA: push    eax
0x6703AB: mov     ecx, edi
0x6703AD: call    ExtraDataList_SetScriptEventList
0x6703B2: mov     edx, [esi]
0x6703B4: mov     eax, [edx+114h]
0x6703BA: push    1
0x6703BC: push    edi
0x6703BD: push    ebx
0x6703BE: mov     ecx, esi
0x6703C0: call    eax
0x6703C2: push    0
0x6703C4: push    1
0x6703C6: push    0
0x6703C8: push    1
0x6703CA: push    ebx
0x6703CB: mov     ecx, esi
0x6703CD: call    Actor_EquipItem
0x6703D2: mov     ebx, ds:0B33AB4h
0x6703D8: push    ebx
0x6703D9: call    TESScriptableForm_GetScriptForForm
0x6703DE: mov     ebp, eax
0x6703E0: add     esp, 4
0x6703E3: test    ebp, ebp
0x6703E5: jz      short loc_670445
0x6703E7: push    14h; Size
0x6703E9: call    FormHeapAlloc
0x6703EE: add     esp, 4
0x6703F1: mov     [esp+24h+arg_0], eax
0x6703F5: test    eax, eax
0x6703F7: mov     [esp+24h+var_4], 1
0x6703FF: jz      short loc_67040C
0x670401: mov     ecx, eax
0x670403: call    ExtraDataList_constr
0x670408: mov     edi, eax
0x67040A: jmp     short loc_67040E
0x67040C: xor     edi, edi
0x67040E: push    1
0x670410: mov     ecx, edi
0x670412: mov     [esp+28h+var_4], 0FFFFFFFFh
0x67041A: call    ExtraDataList_SetExtraCount
0x67041F: test    edi, edi
0x670421: jz      short loc_670445
0x670423: mov     ecx, edi
0x670425: call    ExtraDataList_GetExtraScript
0x67042A: test    eax, eax
0x67042C: jnz     short loc_670445
0x67042E: push    ebp
0x67042F: mov     ecx, edi
0x670431: call    ExtraDataList_AddScript
0x670436: mov     ecx, ebp
0x670438: call    Script_CreateEventList
0x67043D: push    eax
0x67043E: mov     ecx, edi
0x670440: call    ExtraDataList_SetScriptEventList
0x670445: mov     edx, [esi]
0x670447: mov     eax, [edx+114h]
0x67044D: push    1
0x67044F: push    edi
0x670450: push    ebx
0x670451: mov     ecx, esi
0x670453: call    eax
0x670455: push    0
0x670457: push    1
0x670459: push    0
0x67045B: push    1
0x67045D: push    ebx
0x67045E: mov     ecx, esi
0x670460: call    Actor_EquipItem
0x670465: mov     ebx, ds:0B33AB8h
0x67046B: push    ebx
0x67046C: call    TESScriptableForm_GetScriptForForm
0x670471: add     esp, 4
0x670474: test    eax, eax
0x670476: mov     [esp+24h+arg_0], eax
0x67047A: jz      short loc_6704E0
0x67047C: push    14h; Size
0x67047E: call    FormHeapAlloc
0x670483: add     esp, 4
0x670486: mov     [esp+24h+var_10], eax
0x67048A: test    eax, eax
0x67048C: mov     [esp+24h+var_4], 2
0x670494: jz      short loc_6704A1
0x670496: mov     ecx, eax
0x670498: call    ExtraDataList_constr
0x67049D: mov     edi, eax
0x67049F: jmp     short loc_6704A3
0x6704A1: xor     edi, edi
0x6704A3: push    1
0x6704A5: mov     ecx, edi
0x6704A7: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6704AF: call    ExtraDataList_SetExtraCount
0x6704B4: test    edi, edi
0x6704B6: jz      short loc_6704E0
0x6704B8: mov     ecx, edi
0x6704BA: call    ExtraDataList_GetExtraScript
0x6704BF: test    eax, eax
0x6704C1: jnz     short loc_6704E0
0x6704C3: mov     ecx, [esp+24h+arg_0]
0x6704C7: push    ecx
0x6704C8: mov     ecx, edi
0x6704CA: call    ExtraDataList_AddScript
0x6704CF: mov     ecx, [esp+24h+arg_0]
0x6704D3: call    Script_CreateEventList
0x6704D8: push    eax
0x6704D9: mov     ecx, edi
0x6704DB: call    ExtraDataList_SetScriptEventList
0x6704E0: mov     edx, [esi]
0x6704E2: mov     eax, [edx+114h]
0x6704E8: push    1
0x6704EA: push    edi
0x6704EB: push    ebx
0x6704EC: mov     ecx, esi
0x6704EE: call    eax
0x6704F0: push    0
0x6704F2: push    1
0x6704F4: push    0
0x6704F6: push    1
0x6704F8: push    ebx
0x6704F9: mov     ecx, esi
0x6704FB: call    Actor_EquipItem
0x670500: mov     ecx, [esi+58h]
0x670503: mov     edx, [ecx]
0x670505: mov     eax, [edx+308h]
0x67050B: push    0
0x67050D: call    eax
0x67050F: mov     edi, [esi+104h]
0x670515: mov     ecx, esi
0x670517: call    TESObjectREFR_GetAnimData
0x67051C: mov     ebx, eax
0x67051E: mov     ebp, 2
0x670523: cmp     ebp, 1
0x670526: jnz     short loc_670538
0x670528: push    ebp
0x670529: mov     ecx, esi
0x67052B: call    sub_6600D0
0x670530: mov     ebx, [esi+5CCh]
0x670536: mov     edi, eax
0x670538: mov     ecx, [esi+58h]
0x67053B: mov     edx, [ecx]
0x67053D: mov     eax, [edx+150h]
0x670543: push    esi
0x670544: push    ebx
0x670545: push    edi
0x670546: push    0
0x670548: call    eax
0x67054A: sub     ebp, 1
0x67054D: jnz     short loc_670523
0x67054F: mov     ecx, [esi+58h]
0x670552: mov     edx, [ecx]
0x670554: mov     eax, [edx+10Ch]
0x67055A: push    0
0x67055C: call    eax
0x67055E: mov     ecx, [esi+58h]
0x670561: mov     edx, [ecx]
0x670563: mov     eax, [edx+110h]
0x670569: push    0
0x67056B: call    eax
0x67056D: mov     ecx, [esi+58h]
0x670570: mov     edx, [ecx]
0x670572: mov     eax, [edx+108h]
0x670578: push    0
0x67057A: call    eax
0x67057C: mov     ecx, [esi+58h]
0x67057F: mov     edx, [ecx]
0x670581: mov     eax, [edx+104h]
0x670587: push    0
0x670589: push    0
0x67058B: call    eax
0x67058D: mov     ecx, [esi+58h]
0x670590: mov     edx, [ecx]
0x670592: mov     eax, [edx+308h]
0x670598: push    0
0x67059A: call    eax
0x67059C: mov     ecx, [esi+58h]
0x67059F: mov     edx, [ecx]
0x6705A1: mov     eax, [edx+300h]
0x6705A7: push    0
0x6705A9: call    eax
0x6705AB: push    0
0x6705AD: call    sub_57A3B0
0x6705B2: jmp     short loc_6705D6
0x6705B4: push    offset aNoInteriorLink; "No interior linked to Jail Marker"
0x6705B9: mov     [esi+608h], ebp
0x6705BF: call    PrintError
0x6705C4: jmp     short loc_6705D6
0x6705C6: push    offset aNoJailMarkerWa; "No Jail marker was found to put the Pla"...
0x6705CB: call    PrintError
0x6705D0: mov     [esi+608h], ebp
0x6705D6: add     esp, 4
0x6705D9: cmp     dword ptr [esi+608h], 0
0x6705E0: mov     byte ptr [esi+12Ch], 0
0x6705E7: jle     loc_6706E6
0x6705ED: mov     ecx, ds:0B3BAD0h; this
0x6705F3: call    GetTeleportExtraData
0x6705F8: mov     ebx, eax
0x6705FA: test    ebx, ebx
0x6705FC: jz      loc_6706CF
0x670602: mov     ecx, ds:0B3BAD0h
0x670608: push    1
0x67060A: push    0
0x67060C: push    ecx; int
0x67060D: mov     ecx, offset ActorProcessManager_ptr
0x670612: call    sub_6765F0
0x670617: mov     ecx, ebx
0x670619: call    sub_42B430
0x67061E: mov     ecx, ebx
0x670620: mov     edi, eax
0x670622: call    sub_6899C0
0x670627: push    1; char
0x670629: mov     ecx, ebx
0x67062B: mov     ebp, eax
0x67062D: call    sub_42B460
0x670632: mov     edx, [edi]
0x670634: mov     ecx, [edi+4]
0x670637: push    eax; int
0x670638: sub     esp, 0Ch
0x67063B: mov     eax, esp
0x67063D: mov     [eax], edx
0x67063F: mov     edx, [edi+8]
0x670642: mov     [eax+4], ecx
0x670645: mov     ecx, [ebp+0]
0x670648: mov     [eax+8], edx
0x67064B: mov     edx, [ebp+4]
0x67064E: sub     esp, 0Ch
0x670651: mov     eax, esp
0x670653: mov     [eax], ecx
0x670655: mov     ecx, [ebp+8]
0x670658: mov     [eax+4], edx
0x67065B: mov     [eax+8], ecx
0x67065E: mov     ecx, ds:0B333C4h; int
0x670664: call    sub_66EAF0
0x670669: mov     ecx, esi
0x67066B: call    sub_5E4140
0x670670: mov     eax, ds:0B333C4h
0x670675: cmp     byte ptr [eax+116h], 0
0x67067C: jnz     short loc_6706E6
0x67067E: mov     ecx, [esi+1E0h]
0x670684: test    ecx, ecx
0x670686: jz      short loc_6706E6
0x670688: push    1
0x67068A: push    eax
0x67068B: call    TESOBjectREFR_IsOwnedBy
0x670690: test    al, al
0x670692: jz      short loc_6706E6
0x670694: mov     ecx, [esi+1E0h]; this
0x67069A: call    TESObjectREFR_GetWorldSpace
0x67069F: mov     ecx, ds:0B333C4h; this
0x6706A5: mov     esi, eax
0x6706A7: call    TESObjectREFR_GetWorldSpace
0x6706AC: cmp     eax, esi
0x6706AE: jz      short loc_6706E6
0x6706B0: fld     dword ptr ds:0A30634h
0x6706B6: mov     edx, ds:0B38B50h
0x6706BC: push    ecx
0x6706BD: fstp    [esp+28h+duration]; duration
0x6706C0: push    1; unk2
0x6706C2: push    0; unk1
0x6706C4: push    edx; string
0x6706C5: call    GameUI_QueueMessage
0x6706CA: add     esp, 10h
0x6706CD: jmp     short loc_6706E6
0x6706CF: push    offset aNoTeleportOnTh; "no teleport on the interior jail marker"
0x6706D4: call    PrintError
0x6706D9: add     esp, 4
0x6706DC: mov     dword ptr [esi+608h], 0
0x6706E6: mov     ecx, [esp+24h+var_C]
0x6706EA: mov     large fs:0, ecx
0x6706F1: pop     ecx
0x6706F2: pop     edi
0x6706F3: pop     esi
0x6706F4: pop     ebp
0x6706F5: pop     ebx
0x6706F6: add     esp, 10h
0x6706F9: retn    4
