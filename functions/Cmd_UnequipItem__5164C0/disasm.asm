0x5164C0: push    0FFFFFFFFh
0x5164C2: push    offset Cmd_UnequipItem_SEH
0x5164C7: mov     eax, large fs:0
0x5164CD: push    eax
0x5164CE: sub     esp, 14h
0x5164D1: push    ebx
0x5164D2: push    esi
0x5164D3: push    edi
0x5164D4: mov     eax, ds:0B30AACh
0x5164D9: xor     eax, esp
0x5164DB: push    eax
0x5164DC: lea     eax, [esp+30h+var_C]
0x5164E0: mov     large fs:0, eax
0x5164E6: mov     edx, [esp+30h+l]
0x5164EA: mov     esi, [esp+30h+a4]
0x5164EE: lea     eax, [esp+30h+var_18]
0x5164F2: push    eax
0x5164F3: mov     eax, [esp+34h+arg_10]
0x5164F7: lea     ecx, [esp+34h+var_20]
0x5164FB: push    ecx; UInt16
0x5164FC: mov     ecx, [esp+38h+arg_C]
0x516500: push    edx; l
0x516501: mov     edx, [esp+3Ch+a3]
0x516505: push    eax; a6
0x516506: mov     eax, [esp+40h+arg_4]
0x51650A: push    ecx; a5
0x51650B: mov     ecx, [esp+44h+a1]
0x51650F: push    esi; a4
0x516510: push    edx; a3
0x516511: push    eax; a2
0x516512: xor     ebx, ebx
0x516514: push    ecx; a1
0x516515: mov     dword ptr [esp+54h+var_20], ebx
0x516519: mov     [esp+54h+var_18], ebx
0x51651D: call    Script_ExtractArgs
0x516522: add     esp, 24h
0x516525: test    al, al
0x516527: jnz     short loc_51653C
0x516529: mov     ecx, [esp+30h+var_C]
0x51652D: mov     large fs:0, ecx
0x516534: pop     ecx
0x516535: pop     edi
0x516536: pop     esi
0x516537: pop     ebx
0x516538: add     esp, 20h
0x51653B: retn
0x51653C: cmp     esi, ebx
0x51653E: jz      loc_516780
0x516544: push    ebx; int
0x516545: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x51654A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51654F: push    ebx; int
0x516550: push    esi; void *
0x516551: call    OblivionDynamicCast
0x516556: add     esp, 14h
0x516559: cmp     [esp+30h+var_18], ebx
0x51655D: mov     edi, eax
0x51655F: mov     byte ptr [esp+30h+var_1C], bl
0x516563: jle     short loc_51656A
0x516565: mov     byte ptr [esp+30h+var_1C], 1
0x51656A: cmp     dword ptr [esp+30h+var_20], ebx
0x51656E: jz      loc_516697
0x516574: cmp     edi, ebx
0x516576: jz      loc_516780
0x51657C: push    ebx; a2
0x51657D: mov     ecx, edi; this
0x51657F: call    Actor_GetActorBaseForm
0x516584: cmp     eax, ebx
0x516586: jz      short loc_51658D
0x516588: add     eax, 44h ; 'D'
0x51658B: jmp     short loc_51658F
0x51658D: xor     eax, eax
0x51658F: push    eax
0x516590: push    esi; a1
0x516591: call    ContainerExtraData_GetContainerExtraDataForRef
0x516596: add     esp, 8
0x516599: cmp     eax, ebx
0x51659B: jz      loc_516780
0x5165A1: mov     edx, dword ptr [esp+30h+var_20]
0x5165A5: push    ebx
0x5165A6: push    edx
0x5165A7: mov     ecx, eax
0x5165A9: call    ExtraContainerChanges_SetEquipped
0x5165AE: mov     esi, eax
0x5165B0: cmp     esi, ebx
0x5165B2: jz      loc_516780
0x5165B8: push    ebx
0x5165B9: mov     ecx, esi
0x5165BB: call    sub_41F370
0x5165C0: mov     eax, [esp+30h+var_1C]
0x5165C4: mov     ecx, dword ptr [esp+30h+var_20]
0x5165C8: push    ebx
0x5165C9: push    eax
0x5165CA: push    ebx
0x5165CB: push    esi
0x5165CC: push    1
0x5165CE: push    ecx
0x5165CF: mov     ecx, edi
0x5165D1: call    Actor_UnequipItem
0x5165D6: cmp     edi, ds:0B333C4h
0x5165DC: jnz     loc_516780
0x5165E2: mov     [esp+30h+string], ebx
0x5165E6: mov     [esp+30h+var_10], bx
0x5165EB: mov     [esp+30h+var_E], bx
0x5165F0: mov     edx, ds:0B382C0h
0x5165F6: mov     eax, dword ptr [esp+30h+var_20]
0x5165FA: push    edx
0x5165FB: push    eax; a1
0x5165FC: mov     [esp+38h+var_4], ebx
0x516600: call    TESFullName_GetNameForForm
0x516605: add     esp, 4
0x516608: push    eax; ArgList
0x516609: lea     ecx, [esp+38h+string]
0x51660D: push    offset aSS_; "%s %s."
0x516612: push    ecx; int
0x516613: call    BSStringT_Static_Format
0x516618: fld     dword ptr ds:0A30634h
0x51661E: mov     edx, [esp+40h+string]
0x516622: fstp    [esp+40h+duration]; duration
0x516626: add     esp, 0Ch
0x516629: push    1; unk2
0x51662B: push    ebx; unk1
0x51662C: push    edx; string
0x51662D: call    GameUI_QueueMessage
0x516632: mov     eax, dword ptr [esp+40h+var_20]
0x516636: mov     ecx, ds:0B333C4h
0x51663C: add     esp, 10h
0x51663F: push    ebx
0x516640: push    eax
0x516641: call    HideEquipment
0x516646: mov     ecx, ds:0B333C4h; Concurrency::details::SchedulerBase *
0x51664C: call    sub_668CC0
0x516651: mov     eax, ds:0B333C4h
0x516656: mov     ecx, [eax+58h]
0x516659: mov     edx, [ecx]
0x51665B: push    ebx
0x51665C: push    ebx
0x51665D: push    1
0x51665F: push    eax
0x516660: mov     eax, [edx+42Ch]
0x516666: call    eax
0x516668: push    ebx
0x516669: call    sub_57A3B0
0x51666E: add     esp, 4
0x516671: lea     ecx, [esp+30h+string]; void *
0x516675: mov     [esp+30h+var_4], 0FFFFFFFFh
0x51667D: call    BSStringT_Clear
0x516682: mov     al, 1
0x516684: mov     ecx, [esp+30h+var_C]
0x516688: mov     large fs:0, ecx
0x51668F: pop     ecx
0x516690: pop     edi
0x516691: pop     esi
0x516692: pop     ebx
0x516693: add     esp, 20h
0x516696: retn
0x516697: push    ebx; a2
0x516698: mov     ecx, edi; this
0x51669A: call    Actor_GetActorBaseForm
0x51669F: cmp     eax, ebx
0x5166A1: jz      short loc_5166A8
0x5166A3: add     eax, 44h ; 'D'
0x5166A6: jmp     short loc_5166AA
0x5166A8: xor     eax, eax
0x5166AA: push    eax
0x5166AB: push    esi; a1
0x5166AC: call    ContainerExtraData_GetContainerExtraDataForRef
0x5166B1: add     esp, 8
0x5166B4: cmp     eax, ebx
0x5166B6: jz      loc_516780
0x5166BC: mov     ecx, dword ptr [esp+30h+var_20]
0x5166C0: push    ebx
0x5166C1: push    ecx
0x5166C2: mov     ecx, eax
0x5166C4: call    sub_487D20
0x5166C9: mov     esi, eax
0x5166CB: cmp     esi, ebx
0x5166CD: jz      loc_516780
0x5166D3: mov     eax, [esi]
0x5166D5: cmp     eax, ebx
0x5166D7: jz      short loc_516728
0x5166D9: cmp     [eax], ebx
0x5166DB: jz      short loc_5166FE
0x5166DD: mov     edx, [esp+30h+var_1C]
0x5166E1: mov     ecx, [eax]
0x5166E3: push    edx
0x5166E4: call    sub_41F370
0x5166E9: mov     al, 1
0x5166EB: mov     ecx, [esp+30h+var_C]
0x5166EF: mov     large fs:0, ecx
0x5166F6: pop     ecx
0x5166F7: pop     edi
0x5166F8: pop     esi
0x5166F9: pop     ebx
0x5166FA: add     esp, 20h
0x5166FD: retn
0x5166FE: push    14h; Size
0x516700: call    FormHeapAlloc
0x516705: add     esp, 4
0x516708: mov     [esp+30h+string], eax
0x51670C: cmp     eax, ebx
0x51670E: mov     [esp+30h+var_4], 1
0x516716: jz      short loc_516721
0x516718: mov     ecx, eax
0x51671A: call    ExtraDataList_constr
0x51671F: mov     ebx, eax
0x516721: mov     eax, [esp+30h+var_1C]
0x516725: push    eax
0x516726: jmp     short loc_516769
0x516728: push    8; Size
0x51672A: call    FormHeapAlloc
0x51672F: add     esp, 4
0x516732: cmp     eax, ebx
0x516734: jz      short loc_51673D
0x516736: mov     [eax], ebx
0x516738: mov     [eax+4], ebx
0x51673B: jmp     short loc_51673F
0x51673D: xor     eax, eax
0x51673F: push    14h; Size
0x516741: mov     [esi], eax
0x516743: call    FormHeapAlloc
0x516748: add     esp, 4
0x51674B: mov     [esp+30h+string], eax
0x51674F: cmp     eax, ebx
0x516751: mov     [esp+30h+var_4], 2
0x516759: jz      short loc_516764
0x51675B: mov     ecx, eax
0x51675D: call    ExtraDataList_constr
0x516762: mov     ebx, eax
0x516764: mov     ecx, [esp+30h+var_1C]
0x516768: push    ecx
0x516769: mov     ecx, ebx
0x51676B: mov     [esp+34h+var_4], 0FFFFFFFFh
0x516773: call    sub_41F370
0x516778: mov     ecx, [esi]
0x51677A: push    ebx
0x51677B: call    BSSimpleList_PushFront
0x516780: mov     al, 1
0x516782: mov     ecx, [esp+30h+var_C]
0x516786: mov     large fs:0, ecx
0x51678D: pop     ecx
0x51678E: pop     edi
0x51678F: pop     esi
0x516790: pop     ebx
0x516791: add     esp, 20h
0x516794: retn
