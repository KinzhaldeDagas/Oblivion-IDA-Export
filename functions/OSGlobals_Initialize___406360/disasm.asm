0x406360: push    0FFFFFFFFh
0x406362: push    offset OSGlobals_Initialize???_SEH
0x406367: mov     eax, large fs:0
0x40636D: push    eax
0x40636E: sub     esp, 3Ch
0x406371: push    ebx
0x406372: push    ebp
0x406373: push    esi
0x406374: push    edi; int
0x406375: mov     eax, ___security_cookie
0x40637A: xor     eax, esp
0x40637C: push    eax; ArgList
0x40637D: lea     eax, [esp+5Ch+var_C]
0x406381: mov     large fs:0, eax
0x406387: mov     [esp+5Ch+var_48], ecx
0x40638B: push    offset aInitializingSk; "Initializing Sky..."
0x406390: call    PrintToLog???
0x406395: add     esp, 4
0x406398: call    Sky_CreateOrGetGlobalObject
0x40639D: mov     ecx, dword_B333E4
0x4063A3: mov     edx, dword_B333D8
0x4063A9: push    ecx
0x4063AA: push    edx
0x4063AB: mov     ecx, eax
0x4063AD: mov     dword_B333B0, eax
0x4063B2: call    sub_5411D0
0x4063B7: mov     eax, dword_B333B0
0x4063BC: mov     eax, [eax+28h]
0x4063BF: mov     ecx, dword_B333DC
0x4063C5: mov     eax, [eax+0Ch]
0x4063C8: mov     edx, [ecx]
0x4063CA: xor     edi, edi
0x4063CC: push    edi
0x4063CD: push    eax
0x4063CE: mov     eax, [edx+84h]
0x4063D4: call    eax
0x4063D6: mov     ebp, ObjectLODRoot
0x4063DC: mov     ecx, dword_B333B0
0x4063E2: push    ebp
0x4063E3: call    Sky__GetSunDirectionalLight
0x4063E8: mov     ecx, eax
0x4063EA: call    sub_708E40
0x4063EF: mov     ecx, dword_B333B0
0x4063F5: call    Sky__GetSunDirectionalLight
0x4063FA: push    eax
0x4063FB: push    edi
0x4063FC: call    GetShadowSceneNode
0x406401: add     esp, 4
0x406404: mov     ecx, eax
0x406406: call    sub_7C5850
0x40640B: mov     ecx, dword_B333D8; this
0x406411: call    NiAVObject_InitializePropertyState
0x406416: mov     ecx, dword_B333D8
0x40641C: call    NiNode_UpdateDynamicEffectState
0x406421: fldz
0x406423: push    1; a3
0x406425: push    ecx
0x406426: mov     ecx, dword_B333D8; this
0x40642C: fstp    [esp+64h+a2+4]; a2
0x40642F: call    NiAVObject_UpdateNiAVObject
0x406434: mov     ecx, dword_B333DC; this
0x40643A: call    NiAVObject_InitializePropertyState
0x40643F: mov     ecx, dword_B333DC
0x406445: call    NiNode_UpdateDynamicEffectState
0x40644A: fldz
0x40644C: push    1; a3
0x40644E: push    ecx
0x40644F: mov     ecx, dword_B333DC; this
0x406455: fstp    [esp+64h+a2+4]; a2
0x406458: call    NiAVObject_UpdateNiAVObject
0x40645D: mov     ecx, dword_B333D8
0x406463: push    1
0x406465: push    edi
0x406466: push    0Ah
0x406468: push    ecx
0x406469: call    sub_7B8940
0x40646E: mov     edx, dword_B333DC
0x406474: push    1
0x406476: push    edi
0x406477: push    0Ah
0x406479: push    edx
0x40647A: call    sub_7B8940
0x40647F: mov     eax, dword_B333B0
0x406484: mov     ecx, [eax+20h]
0x406487: add     esp, 20h
0x40648A: call    sub_452A60
0x40648F: cmp     eax, edi
0x406491: jz      short loc_4064B8
0x406493: push    4
0x406495: mov     ecx, eax
0x406497: call    NiNode_GetNiPropertyByID
0x40649C: push    eax
0x40649D: push    offset dword_B4335C
0x4064A2: call    NiRTTI_Cast
0x4064A7: add     esp, 8
0x4064AA: cmp     eax, edi
0x4064AC: jz      short loc_4064B8
0x4064AE: mov     dword ptr [eax+88h], 2
0x4064B8: mov     ecx, dword_B333B0
0x4064BE: mov     ecx, [ecx+20h]
0x4064C1: call    sub_95F870
0x4064C6: cmp     eax, edi
0x4064C8: jz      short loc_4064EF
0x4064CA: push    4
0x4064CC: mov     ecx, eax
0x4064CE: call    NiNode_GetNiPropertyByID
0x4064D3: push    eax
0x4064D4: push    offset dword_B4335C
0x4064D9: call    NiRTTI_Cast
0x4064DE: add     esp, 8
0x4064E1: cmp     eax, edi
0x4064E3: jz      short loc_4064EF
0x4064E5: mov     dword ptr [eax+88h], 4
0x4064EF: mov     edx, dword_B333B0
0x4064F5: mov     eax, [edx+28h]
0x4064F8: mov     ecx, [eax+10h]
0x4064FB: cmp     ecx, edi
0x4064FD: jz      short loc_40651E
0x4064FF: push    4
0x406501: call    NiNode_GetNiPropertyByID
0x406506: push    eax
0x406507: push    offset dword_B4335C
0x40650C: call    NiRTTI_Cast
0x406511: add     esp, 8
0x406514: cmp     eax, edi
0x406516: jz      short loc_40651E
0x406518: mov     [eax+88h], edi
0x40651E: mov     eax, dword_B333B0
0x406523: mov     eax, [eax+28h]
0x406526: mov     ecx, [eax+14h]
0x406529: cmp     ecx, edi
0x40652B: jz      short loc_406550
0x40652D: push    4
0x40652F: call    NiNode_GetNiPropertyByID
0x406534: push    eax
0x406535: push    offset dword_B4335C
0x40653A: call    NiRTTI_Cast
0x40653F: add     esp, 8
0x406542: cmp     eax, edi
0x406544: jz      short loc_406550
0x406546: mov     dword ptr [eax+88h], 1
0x406550: mov     ebx, 3
0x406555: mov     ecx, dword_B333B0
0x40655B: mov     eax, [ecx+2Ch]
0x40655E: mov     ecx, [eax+edi*4+8]
0x406562: test    ecx, ecx
0x406564: jz      short loc_4065A5
0x406566: push    4
0x406568: call    NiNode_GetNiPropertyByID
0x40656D: mov     esi, eax
0x40656F: test    esi, esi
0x406571: jz      short loc_4065A5
0x406573: mov     edx, [esi]
0x406575: mov     eax, [edx+4]
0x406578: mov     ecx, esi
0x40657A: call    eax
0x40657C: test    eax, eax
0x40657E: jz      short loc_40658E
0x406580: cmp     eax, offset dword_B4335C
0x406585: jz      short loc_4065F4
0x406587: mov     eax, [eax+4]
0x40658A: test    eax, eax
0x40658C: jnz     short loc_406580
0x40658E: xor     al, al
0x406590: neg     al
0x406592: sbb     eax, eax
0x406594: and     eax, esi
0x406596: jz      short loc_4065A5
0x406598: mov     [eax+88h], ebx
0x40659E: mov     [eax+84h], di
0x4065A5: lea     eax, [edi+1]
0x4065A8: xor     edx, edx
0x4065AA: mov     ecx, ebx
0x4065AC: div     ecx
0x4065AE: mov     edi, edx
0x4065B0: cmp     edi, 2
0x4065B3: jl      short loc_406555
0x4065B5: mov     esi, LODRoot
0x4065BB: xor     edi, edi
0x4065BD: cmp     esi, edi
0x4065BF: jz      short loc_4065FA
0x4065C1: mov     ecx, dword_B333B0
0x4065C7: push    esi
0x4065C8: call    Sky__GetSunDirectionalLight
0x4065CD: mov     ecx, eax
0x4065CF: call    sub_708E40
0x4065D4: cmp     [esi+0B6h], di
0x4065DB: jbe     short loc_4065F8
0x4065DD: mov     edx, [esi+0B0h]
0x4065E3: mov     ecx, [edx]
0x4065E5: cmp     ecx, edi
0x4065E7: jz      short loc_4065F8
0x4065E9: mov     eax, [ecx]
0x4065EB: mov     edx, [eax+8]
0x4065EE: call    edx
0x4065F0: mov     esi, eax
0x4065F2: jmp     short loc_4065FA
0x4065F4: mov     al, 1
0x4065F6: jmp     short loc_406590
0x4065F8: xor     esi, esi
0x4065FA: push    offset aInitializingTe; "Initializing TES..."
0x4065FF: call    PrintToLog???
0x406604: push    0ACh ; '¬'; Size
0x406609: call    FormHeapAlloc
0x40660E: add     esp, 8
0x406611: mov     [esp+5Ch+var_44], eax
0x406615: cmp     eax, edi
0x406617: mov     [esp+5Ch+var_4], edi
0x40661B: jz      short loc_406634
0x40661D: mov     ecx, dword_B333B0
0x406623: push    ecx
0x406624: push    esi
0x406625: push    ebp
0x406626: push    offset aData; "Data\\"
0x40662B: mov     ecx, eax
0x40662D: call    TES_constr
0x406632: jmp     short loc_406636
0x406634: xor     eax, eax
0x406636: or      ebp, 0FFFFFFFFh
0x406639: mov     ecx, eax
0x40663B: mov     [esp+5Ch+var_4], ebp
0x40663F: mov     TES, eax
0x406644: call    sub_43F560
0x406649: push    offset aInitializingTr; "Initializing TreeManager..."
0x40664E: call    PrintToLog???
0x406653: push    edi; ArgList
0x406654: call    sub_55F750
0x406659: push    offset aInitializingMe; "Initializing Menus..."
0x40665E: call    PrintToLog???
0x406663: mov     esi, [esp+68h+arg_0]
0x406667: add     esp, 0Ch
0x40666A: mov     ecx, esi; this
0x40666C: call    NiAVObject_InitializePropertyState
0x406671: mov     ecx, esi
0x406673: call    NiNode_UpdateDynamicEffectState
0x406678: fldz
0x40667A: push    1; a3
0x40667C: push    ecx
0x40667D: mov     ecx, esi; this
0x40667F: fstp    [esp+64h+a2+4]; a2
0x406682: call    NiAVObject_UpdateNiAVObject
0x406687: xor     bl, bl
0x406689: mov     [esp+5Ch+var_34], offset off_B02C90
0x406691: mov     [esp+5Ch+var_30], offset off_B02C98
0x406699: mov     [esp+5Ch+var_2C], offset off_B02CA0
0x4066A1: mov     [esp+5Ch+var_28], offset off_B02CA8
0x4066A9: mov     [esp+5Ch+var_24], offset off_B02CB0
0x4066B1: mov     [esp+5Ch+var_20], offset off_B02CB8
0x4066B9: mov     [esp+5Ch+var_1C], offset off_B02CC0
0x4066C1: mov     [esp+5Ch+var_18], offset off_B02CC8
0x4066C9: mov     [esp+5Ch+var_14], offset off_B02CD0
0x4066D1: mov     [esp+5Ch+var_10], offset off_B02CD8
0x4066D9: lea     esp, [esp+0]
0x4066E0: mov     edx, [esp+edi*4+5Ch+var_34]
0x4066E4: test    edx, edx
0x4066E6: jz      short loc_406732
0x4066E8: cmp     dword ptr [edx], 0
0x4066EB: jz      short loc_406732
0x4066ED: test    edx, edx
0x4066EF: jz      short loc_4066F5
0x4066F1: mov     eax, [edx]
0x4066F3: jmp     short loc_4066F7
0x4066F5: xor     eax, eax
0x4066F7: lea     esi, [eax+1]
0x4066FA: lea     ebx, [ebx+0]
0x406700: mov     cl, [eax]
0x406702: add     eax, 1
0x406705: test    cl, cl
0x406707: jnz     short loc_406700
0x406709: sub     eax, esi
0x40670B: jz      short loc_406732
0x40670D: test    edx, edx
0x40670F: jz      short loc_406715
0x406711: mov     edx, [edx]
0x406713: jmp     short loc_406717
0x406715: xor     edx, edx
0x406717: mov     ecx, TESDataHandler
0x40671D: push    edx
0x40671E: call    sub_447C50
0x406723: test    eax, eax
0x406725: jz      short loc_406732
0x406727: push    1
0x406729: mov     ecx, eax
0x40672B: call    TESFile_SetIsLoaded
0x406730: mov     bl, 1
0x406732: add     edi, 1
0x406735: cmp     edi, 0Ah
0x406738: jl      short loc_4066E0
0x40673A: mov     edx, PluginsTXT
0x406740: mov     ecx, [esp+5Ch+var_48]
0x406744: push    edx
0x406745: push    offset AppDataPath
0x40674A: call    sub_404B00
0x40674F: test    al, al
0x406751: jnz     short loc_406774
0x406753: test    bl, bl
0x406755: jnz     short loc_406774
0x406757: mov     ecx, TESDataHandler
0x40675D: push    offset aOblivion_esm; "Oblivion.esm"
0x406762: call    sub_447C50
0x406767: test    eax, eax
0x406769: jz      short loc_406774
0x40676B: push    1
0x40676D: mov     ecx, eax
0x40676F: call    TESFile_SetIsLoaded
0x406774: push    804h; Size
0x406779: call    FormHeapAlloc
0x40677E: add     esp, 4
0x406781: mov     [esp+5Ch+arg_0], eax
0x406785: test    eax, eax
0x406787: mov     [esp+5Ch+var_4], 1
0x40678F: jz      short loc_40679A
0x406791: mov     ecx, eax; int
0x406793: call    PlayerCharacter_constr
0x406798: jmp     short loc_40679C
0x40679A: xor     eax, eax
0x40679C: push    1; a3
0x40679E: push    14h; a2
0x4067A0: mov     ecx, eax; this
0x4067A2: mov     [esp+64h+var_4], ebp
0x4067A6: mov     TESDataHandler_g_PlayerRef, eax
0x4067AB: call    TESForm_SetFormID
0x4067B0: push    offset aLoadingFiles__; "Loading Files..."
0x4067B5: call    PrintToLog???
0x4067BA: mov     ecx, TESDataHandler
0x4067C0: add     esp, 4
0x4067C3: push    0
0x4067C5: push    0
0x4067C7: call    TESDataHandler_LoadFiles?
0x4067CC: mov     ecx, TES
0x4067D2: call    sub_443550
0x4067D7: push    offset aInitializingPl; "Initializing Player..."
0x4067DC: call    PrintToLog???
0x4067E1: add     esp, 4
0x4067E4: push    0; int
0x4067E6: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4067EB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4067F0: push    0; int
0x4067F2: push    7; a1
0x4067F4: call    TESForm_LookupByFormID
0x4067F9: add     esp, 4
0x4067FC: push    eax; void *
0x4067FD: call    OblivionDynamicCast
0x406802: mov     ecx, TESDataHandler_g_PlayerRef; this
0x406808: add     esp, 14h
0x40680B: mov     esi, eax
0x40680D: push    esi; a2
0x40680E: call    TESObjectREFR_SetBaseForm
0x406813: fld     ds:flt_A2FF44
0x406819: mov     ecx, TESDataHandler_g_PlayerRef
0x40681F: fst     [esp+5Ch+var_40]
0x406823: fstp    [esp+5Ch+var_3C]
0x406827: lea     edx, [esp+5Ch+var_40]
0x40682B: fldz
0x40682D: push    edx
0x40682E: fstp    [esp+60h+var_38]
0x406832: mov     eax, [ecx]
0x406834: mov     eax, [eax+1CCh]
0x40683A: call    eax
0x40683C: mov     ecx, dword ptr Vector3_InitValue?
0x406842: mov     edx, dword ptr Vector3_InitValue?+4
0x406848: sub     esp, 0Ch
0x40684B: mov     eax, esp
0x40684D: mov     [eax], ecx
0x40684F: mov     ecx, dword_B3F9B0
0x406855: mov     [eax+4], edx
0x406858: mov     [eax+8], ecx
0x40685B: mov     ecx, TESDataHandler_g_PlayerRef
0x406861: call    sub_4D89A0
0x406866: mov     ecx, TESDataHandler_g_PlayerRef
0x40686C: mov     edx, [ecx]
0x40686E: mov     eax, [edx+6Ch]
0x406871: call    eax
0x406873: mov     ecx, TESDataHandler_g_PlayerRef
0x406879: mov     edx, [ecx]
0x40687B: mov     eax, [edx+284h]
0x406881: push    0Ah
0x406883: call    eax
0x406885: test    eax, eax
0x406887: jnz     short loc_4068A2
0x406889: push    eax; a2
0x40688A: mov     ecx, esi; this
0x40688C: call    TESForm_GetOverrideFile
0x406891: add     eax, 1Ch
0x406894: push    eax; ArgList
0x406895: push    offset aErrorFatigueVa; "ERROR: Fatigue value is 0 on the Player"...
0x40689A: call    sub_404EC0
0x40689F: add     esp, 8
0x4068A2: mov     ecx, TESDataHandler_g_PlayerRef
0x4068A8: mov     edx, [ecx]
0x4068AA: mov     eax, [edx+284h]
0x4068B0: push    8
0x4068B2: call    eax
0x4068B4: test    eax, eax
0x4068B6: jnz     short loc_4068D1
0x4068B8: push    eax; a2
0x4068B9: mov     ecx, esi; this
0x4068BB: call    TESForm_GetOverrideFile
0x4068C0: add     eax, 1Ch
0x4068C3: push    eax; ArgList
0x4068C4: push    offset aErrorHealthVal; "ERROR: Health value is 0 on the Player."...
0x4068C9: call    sub_404EC0
0x4068CE: add     esp, 8
0x4068D1: push    offset aInitializingSc; "Initializing Scripts..."
0x4068D6: call    PrintToLog???
0x4068DB: mov     ecx, TESDataHandler
0x4068E1: add     esp, 4
0x4068E4: call    sub_447D80
0x4068E9: push    offset aInitializingSo; "Initializing Sound System..."
0x4068EE: call    PrintToLog???
0x4068F3: push    0
0x4068F5: call    sub_6AF850
0x4068FA: mov     eax, dword_B02D10
0x4068FF: lea     ecx, [eax-1]
0x406902: add     esp, 8
0x406905: cmp     ecx, 0C6h ; 'Æ'
0x40690B: ja      short loc_406931
0x40690D: test    eax, eax
0x40690F: jz      short loc_406929
0x406911: mov     [esp+5Ch+arg_0], eax
0x406915: fild    [esp+5Ch+arg_0]
0x406919: jge     short loc_406921
0x40691B: fadd    ds:flt_A2FC78
0x406921: fdivr   ds:dbl_A2FC70
0x406927: jmp     short loc_40692B
0x406929: fldz
0x40692B: fstp    g_FPSGlobal
0x406931: mov     ecx, [esp+5Ch+var_C]
0x406935: mov     large fs:0, ecx
0x40693C: pop     ecx
0x40693D: pop     edi
0x40693E: pop     esi
0x40693F: pop     ebp
0x406940: pop     ebx
0x406941: add     esp, 48h
0x406944: retn    4
