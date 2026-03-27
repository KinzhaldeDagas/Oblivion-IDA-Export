0x512540: mov     ecx, ds:0B333C4h
0x512546: sub     esp, 1Ch
0x512549: push    ebx
0x51254A: push    ebp
0x51254B: mov     ebp, [esp+24h+arg_0]
0x51254F: cmp     ebp, ecx
0x512551: push    esi; int
0x512552: push    edi; int
0x512553: jnz     short loc_512569
0x512555: mov     eax, [ecx]
0x512557: mov     edx, [eax+198h]
0x51255D: push    0
0x51255F: call    edx
0x512561: test    al, al
0x512563: jnz     loc_51285F
0x512569: test    ebp, ebp
0x51256B: jz      loc_51285F
0x512571: mov     esi, [esp+30h+arg_0]
0x512575: test    esi, esi
0x512577: jz      loc_51285F
0x51257D: mov     eax, [ebp+0]
0x512580: mov     edx, [eax+190h]
0x512586: mov     ecx, ebp
0x512588: call    edx
0x51258A: test    al, al
0x51258C: jz      short loc_51259B
0x51258E: push    0; a4
0x512590: push    ebp; a3
0x512591: mov     ecx, offset ActorProcessManager_ptr
0x512596: call    sub_675D50
0x51259B: mov     ecx, esi; this
0x51259D: call    TESObjectREFR_GetParentCell
0x5125A2: mov     ecx, esi; this
0x5125A4: mov     edi, eax
0x5125A6: call    TESObjectREFR_GetWorldSpace
0x5125AB: mov     ecx, [esi+24h]
0x5125AE: mov     edx, [esi+28h]
0x5125B1: mov     ebx, eax
0x5125B3: mov     eax, [esi+20h]
0x5125B6: mov     [esp+30h+var_10], eax
0x5125BA: mov     eax, [esi]
0x5125BC: mov     [esp+30h+var_C], ecx
0x5125C0: mov     [esp+30h+var_8], edx
0x5125C4: mov     edx, [eax+174h]
0x5125CA: mov     ecx, esi
0x5125CC: mov     [esp+30h], ebx
0x5125D0: call    edx
0x5125D2: cmp     ebp, ds:0B333C4h
0x5125D8: mov     ecx, [eax]
0x5125DA: mov     edx, [eax+4]
0x5125DD: mov     eax, [eax+8]
0x5125E0: mov     [esp+30h+var_1C], ecx
0x5125E4: fld     [esp+30h+var_1C]
0x5125E8: fadd    [esp+30h+arg_4]
0x5125EC: mov     [esp+30h+var_18], edx
0x5125F0: mov     [esp+30h+var_14], eax
0x5125F4: fstp    [esp+30h+var_1C]
0x5125F8: fld     [esp+30h+var_18]
0x5125FC: fadd    [esp+30h+arg_8]
0x512600: fstp    [esp+30h+var_18]
0x512604: fld     [esp+30h+var_14]
0x512608: fadd    [esp+30h+arg_C]
0x51260C: fstp    [esp+30h+var_14]
0x512610: jnz     loc_512751
0x512616: mov     ecx, ds:0B35B90h
0x51261C: test    ecx, ecx
0x51261E: jz      short loc_512625
0x512620: call    sub_4BE5A0
0x512625: mov     ecx, ds:0B35B8Ch
0x51262B: test    ecx, ecx
0x51262D: jz      short loc_512634
0x51262F: call    sub_4BD980
0x512634: test    edi, edi
0x512636: jnz     short loc_5126AA
0x512638: test    ebx, ebx
0x51263A: jz      loc_512853
0x512640: fld     [esp+30h+var_1C]
0x512644: fistp   [esp+30h+a2]
0x512648: mov     esi, [esp+30h+a2]
0x51264C: sar     esi, 0Ch
0x51264F: fld     [esp+30h+var_18]
0x512653: fistp   [esp+30h+a2]
0x512657: mov     ebx, [esp+30h+a2]
0x51265B: mov     ecx, [esp+30h]; this
0x51265F: sar     ebx, 0Ch
0x512662: push    ebx; signed int
0x512663: push    esi; signed int
0x512664: call    TESWorldSpace__GetCellAtCellCoord
0x512669: mov     edi, eax
0x51266B: test    edi, edi
0x51266D: jnz     short loc_512695
0x51266F: mov     ecx, [esp+30h]
0x512673: push    ebx; int
0x512674: push    esi; ArgList
0x512675: call    sub_4F1630
0x51267A: mov     edi, eax
0x51267C: test    edi, edi
0x51267E: jnz     short loc_512695
0x512680: mov     ecx, [esp+30h]
0x512684: push    ecx
0x512685: mov     ecx, ds:0B33A98h
0x51268B: push    ebx
0x51268C: push    esi
0x51268D: push    eax
0x51268E: call    sub_4471D0
0x512693: mov     edi, eax
0x512695: test    edi, edi
0x512697: mov     edx, ds:0B333C4h
0x51269D: mov     byte ptr [edx+117h], 1
0x5126A4: jz      loc_512853
0x5126AA: push    1
0x5126AC: call    GetGlobalScriptStateObj??
0x5126B1: add     esp, 4
0x5126B4: cmp     byte ptr [eax+31h], 0
0x5126B8: jle     short loc_5126D8
0x5126BA: mov     ecx, eax
0x5126BC: call    sub_5859C0
0x5126C1: push    0
0x5126C3: push    3
0x5126C5: push    1; arg1
0x5126C7: push    0; canCreate
0x5126C9: call    InterfaceManager_GetSingleton
0x5126CE: add     esp, 8
0x5126D1: mov     ecx, eax
0x5126D3: call    sub_57CFE0
0x5126D8: fldz
0x5126DA: push    1; char
0x5126DC: push    edi; int
0x5126DD: fst     [esp+38h+var_10]
0x5126E1: mov     ecx, [esp+38h+var_10]
0x5126E5: fstp    [esp+38h+var_C]
0x5126E9: mov     edx, [esp+38h+var_C]
0x5126ED: sub     esp, 0Ch
0x5126F0: mov     eax, esp
0x5126F2: mov     [eax], ecx
0x5126F4: mov     ecx, [esp+44h+var_8]
0x5126F8: mov     [eax+4], edx
0x5126FB: mov     edx, [esp+44h+var_1C]
0x5126FF: mov     [eax+8], ecx
0x512702: mov     ecx, [esp+44h+var_18]
0x512706: sub     esp, 0Ch
0x512709: mov     eax, esp
0x51270B: mov     [eax], edx
0x51270D: mov     edx, [esp+50h+var_14]
0x512711: mov     [eax+4], ecx
0x512714: mov     ecx, ds:0B333C4h; int
0x51271A: mov     [eax+8], edx
0x51271D: call    sub_66EAF0
0x512722: mov     eax, [ebp+0]
0x512725: mov     edx, [eax+178h]
0x51272B: push    0
0x51272D: mov     ecx, ebp
0x51272F: call    edx
0x512731: mov     eax, ds:0B333C4h
0x512736: mov     byte ptr [eax+117h], 1
0x51273D: mov     ecx, ds:0B333C4h
0x512743: push    ebp
0x512744: call    sub_665260
0x512749: pop     edi
0x51274A: pop     esi
0x51274B: pop     ebp
0x51274C: pop     ebx
0x51274D: add     esp, 1Ch
0x512750: retn
0x512751: mov     ecx, [esp+30h+var_1C]
0x512755: mov     edx, [esp+30h+var_18]
0x512759: sub     esp, 0Ch
0x51275C: mov     eax, esp
0x51275E: mov     [eax], ecx
0x512760: mov     ecx, [esp+3Ch+var_14]
0x512764: mov     [eax+4], edx
0x512767: mov     [eax+8], ecx
0x51276A: mov     ecx, ebp; this
0x51276C: call    TESObjectREFR_SetPosition
0x512771: mov     edx, [ebp+0]
0x512774: mov     eax, [edx+178h]
0x51277A: push    0
0x51277C: mov     ecx, ebp
0x51277E: call    eax
0x512780: mov     edx, [ebp+0]
0x512783: mov     eax, [edx+188h]
0x512789: mov     ecx, ebp
0x51278B: call    eax
0x51278D: test    al, al
0x51278F: jz      short loc_5127A8
0x512791: mov     ecx, ebp; this
0x512793: call    MobileObject_GetCharProxy
0x512798: test    eax, eax
0x51279A: jz      short loc_5127A8
0x51279C: lea     ecx, [esp+34h+a2]
0x5127A0: push    ecx; a2
0x5127A1: mov     ecx, eax; this
0x5127A3: call    sub_452A10
0x5127A8: test    edi, edi
0x5127AA: jz      short loc_5127D1
0x5127AC: mov     ecx, ds:0B333A0h
0x5127B2: push    0; a2
0x5127B4: push    edi; a1
0x5127B5: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5127BA: test    al, al
0x5127BC: jz      short loc_5127D1
0x5127BE: fld     [esp+34h+var_C]
0x5127C2: push    ecx
0x5127C3: mov     ecx, ebp
0x5127C5: fstp    [esp+38h+var_38]; float
0x5127C8: call    sub_4D8A10
0x5127CD: fldz
0x5127CF: jmp     short loc_5127DF
0x5127D1: cmp     ebp, ds:0B333C4h
0x5127D7: jz      short loc_5127EA
0x5127D9: fld     dword ptr ds:0A32048h
0x5127DF: push    ecx
0x5127E0: mov     ecx, ebp
0x5127E2: fstp    [esp+3Ch+var_3C]; float
0x5127E5: call    sub_4D89D0
0x5127EA: push    ebx; int
0x5127EB: push    edi; int
0x5127EC: push    ebp; Concurrency::details::SchedulerBase *
0x5127ED: call    sub_4DD4B0
0x5127F2: push    0; int
0x5127F4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5127F9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5127FE: push    0; int
0x512800: push    ebp; void *
0x512801: call    OblivionDynamicCast
0x512806: mov     esi, eax
0x512808: add     esp, 20h
0x51280B: test    esi, esi
0x51280D: jz      short loc_512853
0x51280F: mov     ecx, [esi+58h]
0x512812: test    ecx, ecx
0x512814: jz      short loc_512846
0x512816: mov     edx, [ecx]
0x512818: mov     eax, [edx+20h]
0x51281B: call    eax
0x51281D: mov     ecx, esi; int
0x51281F: call    EvaluatePackage
0x512824: mov     ecx, [esi+58h]
0x512827: mov     edx, [ecx]
0x512829: mov     eax, [edx+0B8h]
0x51282F: push    esi
0x512830: call    eax
0x512832: mov     ecx, ds:0B333C4h
0x512838: push    ebp
0x512839: call    sub_665260
0x51283E: pop     edi
0x51283F: pop     esi
0x512840: pop     ebp
0x512841: pop     ebx
0x512842: add     esp, 1Ch
0x512845: retn
0x512846: push    offset aActorBeingMove; "Actor being moved is Disabled he has no"...
0x51284B: call    PrintError
0x512850: add     esp, 4
0x512853: mov     ecx, ds:0B333C4h
0x512859: push    ebp
0x51285A: call    sub_665260
0x51285F: pop     edi
0x512860: pop     esi
0x512861: pop     ebp
0x512862: pop     ebx
0x512863: add     esp, 1Ch
0x512866: retn
