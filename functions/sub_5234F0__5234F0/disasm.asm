0x5234F0: sub     esp, 3Ch
0x5234F3: push    ebx
0x5234F4: push    ebp
0x5234F5: push    esi
0x5234F6: push    edi
0x5234F7: push    8; Size
0x5234F9: mov     edi, ecx
0x5234FB: call    FormHeapAlloc
0x523500: xor     ebx, ebx
0x523502: add     esp, 4
0x523505: cmp     eax, ebx
0x523507: jz      short loc_523514
0x523509: mov     [eax], ebx
0x52350B: mov     [eax+4], ebx
0x52350E: mov     [esp+4Ch+var_3C], eax
0x523512: jmp     short loc_523518
0x523514: mov     [esp+4Ch+var_3C], ebx
0x523518: mov     ecx, edi
0x52351A: call    TESActorBase_IsFemale
0x52351F: cmp     edi, ebx
0x523521: mov     [esp+4Ch+var_38], eax
0x523525: jz      short loc_52352C
0x523527: lea     esi, [edi+44h]
0x52352A: jmp     short loc_52352E
0x52352C: xor     esi, esi
0x52352E: xor     eax, eax
0x523530: xor     ebp, ebp
0x523532: cmp     byte ptr [esp+4Ch+arg_0], al
0x523536: mov     [esp+4Ch+var_34], ebx
0x52353A: mov     [esp+4Ch+var_2C], ebx
0x52353E: mov     [esp+4Ch+var_28], eax
0x523542: mov     [esp+4Ch+var_30], eax
0x523546: mov     [esp+4Ch+var_24], eax
0x52354A: mov     [esp+4Ch+var_18], eax
0x52354E: jz      short loc_5235AD
0x523550: push    2
0x523552: push    edi
0x523553: mov     ecx, esi
0x523555: call    TESContainer_GetBestArmorForSlot
0x52355A: push    3
0x52355C: push    edi
0x52355D: mov     ecx, esi
0x52355F: mov     ebx, eax
0x523561: call    TESContainer_GetBestArmorForSlot
0x523566: push    5
0x523568: push    edi
0x523569: mov     ecx, esi
0x52356B: mov     [esp+54h+var_34], eax
0x52356F: call    TESContainer_GetBestArmorForSlot
0x523574: push    4
0x523576: push    edi
0x523577: mov     ecx, esi
0x523579: mov     [esp+54h+var_2C], eax
0x52357D: call    TESContainer_GetBestArmorForSlot
0x523582: push    1
0x523584: push    edi
0x523585: mov     ecx, esi
0x523587: mov     [esp+54h+var_30], eax
0x52358B: call    TESContainer_GetBestArmorForSlot
0x523590: push    ebp
0x523591: push    edi
0x523592: mov     ecx, esi
0x523594: mov     [esp+54h+var_28], eax
0x523598: call    TESContainer_GetBestArmorForSlot
0x52359D: push    0Dh
0x52359F: push    edi
0x5235A0: mov     ecx, esi
0x5235A2: mov     ebp, eax
0x5235A4: call    TESContainer_GetBestArmorForSlot
0x5235A9: mov     [esp+4Ch+var_24], eax
0x5235AD: cmp     [esp+4Ch+arg_4], 0
0x5235B2: jz      short loc_5235C0
0x5235B4: push    edi
0x5235B5: mov     ecx, esi
0x5235B7: call    TESContainer_GetBestWeapon
0x5235BC: mov     [esp+4Ch+var_18], eax
0x5235C0: test    ebx, ebx
0x5235C2: jnz     short loc_5235D0
0x5235C4: push    2
0x5235C6: push    edi
0x5235C7: mov     ecx, esi
0x5235C9: call    TESContainer_GetBestClothingForSlot
0x5235CE: mov     ebx, eax
0x5235D0: cmp     [esp+4Ch+var_34], 0
0x5235D5: jnz     short loc_5235E5
0x5235D7: push    3
0x5235D9: push    edi
0x5235DA: mov     ecx, esi
0x5235DC: call    TESContainer_GetBestClothingForSlot
0x5235E1: mov     [esp+4Ch+var_34], eax
0x5235E5: cmp     [esp+4Ch+var_2C], 0
0x5235EA: jnz     short loc_5235FA
0x5235EC: push    5
0x5235EE: push    edi
0x5235EF: mov     ecx, esi
0x5235F1: call    TESContainer_GetBestClothingForSlot
0x5235F6: mov     [esp+4Ch+var_2C], eax
0x5235FA: cmp     [esp+4Ch+var_30], 0
0x5235FF: jnz     short loc_52360F
0x523601: push    4
0x523603: push    edi
0x523604: mov     ecx, esi
0x523606: call    TESContainer_GetBestClothingForSlot
0x52360B: mov     [esp+4Ch+var_30], eax
0x52360F: cmp     [esp+4Ch+var_28], 0
0x523614: jnz     short loc_523624
0x523616: push    1
0x523618: push    edi
0x523619: mov     ecx, esi
0x52361B: call    TESContainer_GetBestClothingForSlot
0x523620: mov     [esp+4Ch+var_28], eax
0x523624: test    ebp, ebp
0x523626: jnz     short loc_523631
0x523628: push    ebp
0x523629: push    edi
0x52362A: mov     ecx, esi
0x52362C: call    TESContainer_GetBestClothingForSlot
0x523631: cmp     [esp+4Ch+var_24], 0
0x523636: jnz     short loc_523646
0x523638: push    0Dh
0x52363A: push    edi
0x52363B: mov     ecx, esi
0x52363D: call    TESContainer_GetBestClothingForSlot
0x523642: mov     [esp+4Ch+var_24], eax
0x523646: xor     esi, esi
0x523648: xor     ebp, ebp
0x52364A: cmp     ebx, esi
0x52364C: mov     [esp+4Ch+arg_0], esi
0x523650: mov     dword ptr [esp+4Ch+arg_4], esi
0x523654: mov     [esp+4Ch+var_20], esi
0x523658: mov     [esp+4Ch+var_1C], esi
0x52365C: jz      short loc_5236A6
0x52365E: push    esi; int
0x52365F: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x523664: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x523669: push    esi; int
0x52366A: push    ebx; void *
0x52366B: call    OblivionDynamicCast
0x523670: mov     ebp, eax
0x523672: add     esp, 14h
0x523675: test    ebp, ebp
0x523677: jz      short loc_5236A6
0x523679: mov     eax, [esp+4Ch+var_38]
0x52367D: push    eax
0x52367E: mov     ecx, ebp
0x523680: call    TESBipedModelForm_GetModelPath
0x523685: test    eax, eax
0x523687: mov     ebx, [esp+4Ch+var_3C]
0x52368B: jz      short loc_523695
0x52368D: push    eax
0x52368E: mov     ecx, ebx
0x523690: call    BSSimpleList_PushFront
0x523695: push    0
0x523697: push    3
0x523699: mov     ecx, ebp
0x52369B: call    TESBipedModelForm_CoversSlot
0x5236A0: test    al, al
0x5236A2: jnz     short loc_5236ED
0x5236A4: jmp     short loc_5236AA
0x5236A6: mov     ebx, [esp+4Ch+var_3C]
0x5236AA: mov     eax, [esp+4Ch+var_34]
0x5236AE: test    eax, eax
0x5236B0: jz      short loc_5236ED
0x5236B2: push    0; int
0x5236B4: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x5236B9: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5236BE: push    0; int
0x5236C0: push    eax; void *
0x5236C1: call    OblivionDynamicCast
0x5236C6: add     esp, 14h
0x5236C9: test    eax, eax
0x5236CB: mov     [esp+4Ch+arg_0], eax
0x5236CF: jz      short loc_5236E9
0x5236D1: mov     ecx, [esp+4Ch+var_38]
0x5236D5: push    ecx
0x5236D6: mov     ecx, eax
0x5236D8: call    TESBipedModelForm_GetModelPath
0x5236DD: test    eax, eax
0x5236DF: jz      short loc_5236E9
0x5236E1: push    eax
0x5236E2: mov     ecx, ebx
0x5236E4: call    BSSimpleList_PushFront
0x5236E9: mov     esi, [esp+4Ch+arg_0]
0x5236ED: test    ebp, ebp
0x5236EF: jz      short loc_523700
0x5236F1: push    0
0x5236F3: push    4
0x5236F5: mov     ecx, ebp
0x5236F7: call    TESBipedModelForm_CoversSlot
0x5236FC: test    al, al
0x5236FE: jnz     short loc_523752
0x523700: test    esi, esi
0x523702: jz      short loc_523713
0x523704: push    0
0x523706: push    4
0x523708: mov     ecx, esi
0x52370A: call    TESBipedModelForm_CoversSlot
0x52370F: test    al, al
0x523711: jnz     short loc_523752
0x523713: mov     eax, [esp+4Ch+var_30]
0x523717: test    eax, eax
0x523719: jz      short loc_523752
0x52371B: push    0; int
0x52371D: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x523722: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x523727: push    0; int
0x523729: push    eax; void *
0x52372A: call    OblivionDynamicCast
0x52372F: add     esp, 14h
0x523732: test    eax, eax
0x523734: mov     dword ptr [esp+4Ch+arg_4], eax
0x523738: jz      short loc_523752
0x52373A: mov     edx, [esp+4Ch+var_38]
0x52373E: push    edx
0x52373F: mov     ecx, eax
0x523741: call    TESBipedModelForm_GetModelPath
0x523746: test    eax, eax
0x523748: jz      short loc_523752
0x52374A: push    eax
0x52374B: mov     ecx, ebx
0x52374D: call    BSSimpleList_PushFront
0x523752: test    ebp, ebp
0x523754: jz      short loc_523765
0x523756: push    0
0x523758: push    5
0x52375A: mov     ecx, ebp
0x52375C: call    TESBipedModelForm_CoversSlot
0x523761: test    al, al
0x523763: jnz     short loc_5237CE
0x523765: test    esi, esi
0x523767: jz      short loc_523778
0x523769: push    0
0x52376B: push    5
0x52376D: mov     ecx, esi
0x52376F: call    TESBipedModelForm_CoversSlot
0x523774: test    al, al
0x523776: jnz     short loc_5237CE
0x523778: mov     ecx, dword ptr [esp+4Ch+arg_4]
0x52377C: test    ecx, ecx
0x52377E: jz      short loc_52378D
0x523780: push    0
0x523782: push    5
0x523784: call    TESBipedModelForm_CoversSlot
0x523789: test    al, al
0x52378B: jnz     short loc_5237CE
0x52378D: mov     eax, [esp+4Ch+var_2C]
0x523791: test    eax, eax
0x523793: jz      short loc_5237CE
0x523795: push    0; int
0x523797: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x52379C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5237A1: push    0; int
0x5237A3: push    eax; void *
0x5237A4: call    OblivionDynamicCast
0x5237A9: add     esp, 14h
0x5237AC: test    eax, eax
0x5237AE: mov     [esp+4Ch+var_20], eax
0x5237B2: jz      short loc_5237CE
0x5237B4: mov     eax, [esp+4Ch+var_38]
0x5237B8: mov     ecx, [esp+4Ch+var_20]
0x5237BC: push    eax
0x5237BD: call    TESBipedModelForm_GetModelPath
0x5237C2: test    eax, eax
0x5237C4: jz      short loc_5237CE
0x5237C6: push    eax
0x5237C7: mov     ecx, ebx
0x5237C9: call    BSSimpleList_PushFront
0x5237CE: test    ebp, ebp
0x5237D0: jz      short loc_5237E1
0x5237D2: push    0
0x5237D4: push    1
0x5237D6: mov     ecx, ebp
0x5237D8: call    TESBipedModelForm_CoversSlot
0x5237DD: test    al, al
0x5237DF: jnz     short loc_52385D
0x5237E1: test    esi, esi
0x5237E3: jz      short loc_5237F4
0x5237E5: push    0
0x5237E7: push    1
0x5237E9: mov     ecx, esi
0x5237EB: call    TESBipedModelForm_CoversSlot
0x5237F0: test    al, al
0x5237F2: jnz     short loc_52385D
0x5237F4: mov     ecx, dword ptr [esp+4Ch+arg_4]
0x5237F8: test    ecx, ecx
0x5237FA: jz      short loc_523809
0x5237FC: push    0
0x5237FE: push    1
0x523800: call    TESBipedModelForm_CoversSlot
0x523805: test    al, al
0x523807: jnz     short loc_52385D
0x523809: mov     ecx, [esp+4Ch+var_20]
0x52380D: test    ecx, ecx
0x52380F: jz      short loc_52381E
0x523811: push    0
0x523813: push    1
0x523815: call    TESBipedModelForm_CoversSlot
0x52381A: test    al, al
0x52381C: jnz     short loc_52385D
0x52381E: mov     eax, [esp+4Ch+var_28]
0x523822: test    eax, eax
0x523824: jz      short loc_52385D
0x523826: push    0; int
0x523828: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x52382D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x523832: push    0; int
0x523834: push    eax; void *
0x523835: call    OblivionDynamicCast
0x52383A: add     esp, 14h
0x52383D: test    eax, eax
0x52383F: mov     [esp+4Ch+var_1C], eax
0x523843: jz      short loc_52385D
0x523845: mov     ecx, [esp+4Ch+var_38]
0x523849: push    ecx
0x52384A: mov     ecx, eax
0x52384C: call    TESBipedModelForm_GetModelPath
0x523851: test    eax, eax
0x523853: jz      short loc_52385D
0x523855: push    eax
0x523856: mov     ecx, ebx
0x523858: call    BSSimpleList_PushFront
0x52385D: mov     eax, [esp+4Ch+var_24]
0x523861: test    eax, eax
0x523863: jz      short loc_523898
0x523865: push    0; int
0x523867: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x52386C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x523871: push    0; int
0x523873: push    eax; void *
0x523874: call    OblivionDynamicCast
0x523879: add     esp, 14h
0x52387C: test    eax, eax
0x52387E: jz      short loc_523898
0x523880: mov     edx, [esp+4Ch+var_38]
0x523884: push    edx
0x523885: mov     ecx, eax
0x523887: call    TESBipedModelForm_GetModelPath
0x52388C: test    eax, eax
0x52388E: jz      short loc_523898
0x523890: push    eax
0x523891: mov     ecx, ebx
0x523893: call    BSSimpleList_PushFront
0x523898: mov     [esp+4Ch+var_14], 2
0x5238A0: mov     [esp+4Ch+var_10], 3
0x5238A8: mov     [esp+4Ch+var_C], 4
0x5238B0: mov     [esp+4Ch+var_8], 5
0x5238B8: mov     [esp+4Ch+var_4], 0Fh
0x5238C0: xor     ebx, ebx
0x5238C2: test    ebp, ebp
0x5238C4: mov     esi, [esp+ebx*4+4Ch+var_14]
0x5238C8: jz      short loc_5238D8
0x5238CA: push    0
0x5238CC: push    esi
0x5238CD: mov     ecx, ebp
0x5238CF: call    TESBipedModelForm_CoversSlot
0x5238D4: test    al, al
0x5238D6: jnz     short loc_523954
0x5238D8: mov     ecx, [esp+4Ch+arg_0]
0x5238DC: test    ecx, ecx
0x5238DE: jz      short loc_5238EC
0x5238E0: push    0
0x5238E2: push    esi
0x5238E3: call    TESBipedModelForm_CoversSlot
0x5238E8: test    al, al
0x5238EA: jnz     short loc_523954
0x5238EC: mov     ecx, dword ptr [esp+4Ch+arg_4]
0x5238F0: test    ecx, ecx
0x5238F2: jz      short loc_523900
0x5238F4: push    0
0x5238F6: push    esi
0x5238F7: call    TESBipedModelForm_CoversSlot
0x5238FC: test    al, al
0x5238FE: jnz     short loc_523954
0x523900: mov     ecx, [esp+4Ch+var_20]
0x523904: test    ecx, ecx
0x523906: jz      short loc_523914
0x523908: push    0
0x52390A: push    esi
0x52390B: call    TESBipedModelForm_CoversSlot
0x523910: test    al, al
0x523912: jnz     short loc_523954
0x523914: mov     ecx, [esp+4Ch+var_1C]
0x523918: test    ecx, ecx
0x52391A: jz      short loc_523928
0x52391C: push    0
0x52391E: push    esi
0x52391F: call    TESBipedModelForm_CoversSlot
0x523924: test    al, al
0x523926: jnz     short loc_523954
0x523928: mov     eax, [esp+4Ch+var_38]
0x52392C: mov     ecx, [edi+0E8h]
0x523932: push    esi
0x523933: push    eax
0x523934: call    TESRace_GetBodyModel??
0x523939: test    eax, eax
0x52393B: jz      short loc_523954
0x52393D: mov     edx, [eax]
0x52393F: mov     ecx, eax
0x523941: mov     eax, [edx+14h]
0x523944: call    eax
0x523946: test    eax, eax
0x523948: jz      short loc_523954
0x52394A: mov     ecx, [esp+4Ch+var_3C]
0x52394E: push    eax
0x52394F: call    BSSimpleList_PushFront
0x523954: add     ebx, 1
0x523957: cmp     ebx, 5
0x52395A: jb      loc_5238C2
0x523960: mov     eax, [esp+4Ch+var_18]
0x523964: test    eax, eax
0x523966: jz      short loc_5239A8
0x523968: push    0; int
0x52396A: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x52396F: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x523974: push    0; int
0x523976: push    eax; void *
0x523977: call    OblivionDynamicCast
0x52397C: add     esp, 14h
0x52397F: test    eax, eax
0x523981: jz      short loc_5239A8
0x523983: mov     edx, [eax]
0x523985: mov     ecx, eax
0x523987: mov     eax, [edx+14h]
0x52398A: call    eax
0x52398C: test    eax, eax
0x52398E: jz      short loc_5239A8
0x523990: mov     esi, [esp+4Ch+var_3C]
0x523994: push    eax
0x523995: mov     ecx, esi
0x523997: call    BSSimpleList_PushFront
0x52399C: pop     edi
0x52399D: mov     eax, esi
0x52399F: pop     esi
0x5239A0: pop     ebp
0x5239A1: pop     ebx
0x5239A2: add     esp, 3Ch
0x5239A5: retn    8
0x5239A8: mov     eax, [esp+4Ch+var_3C]
0x5239AC: pop     edi
0x5239AD: pop     esi
0x5239AE: pop     ebp
0x5239AF: pop     ebx
0x5239B0: add     esp, 3Ch
0x5239B3: retn    8
