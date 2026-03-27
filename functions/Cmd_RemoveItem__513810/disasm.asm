0x513810: push    0FFFFFFFFh
0x513812: push    offset Cmd_RemoveItem_SEH
0x513817: mov     eax, large fs:0
0x51381D: push    eax
0x51381E: sub     esp, 120h
0x513824: mov     eax, ds:0B30AACh
0x513829: xor     eax, esp
0x51382B: mov     [esp+12Ch+var_10], eax
0x513832: push    ebx
0x513833: push    ebp
0x513834: push    esi
0x513835: push    edi
0x513836: mov     eax, ds:0B30AACh
0x51383B: xor     eax, esp
0x51383D: push    eax
0x51383E: lea     eax, [esp+140h+var_C]
0x513845: mov     large fs:0, eax
0x51384B: mov     ebx, [esp+140h+arg_1C]
0x513852: mov     ebp, [esp+140h+l]
0x513859: mov     esi, [esp+140h+arg_10]
0x513860: mov     edx, [esp+140h+arg_C]
0x513867: mov     edi, [esp+140h+a4]
0x51386E: mov     ecx, [esp+140h+arg_4]
0x513875: mov     eax, [esp+140h+a1]
0x51387C: mov     [esp+140h+a3], ebx
0x513880: xor     ebx, ebx
0x513882: mov     [esp+140h+var_12C], ebx
0x513886: mov     dword ptr [esp+140h+ArgList], ebx
0x51388A: lea     ebx, [esp+140h+ArgList]
0x51388E: push    ebx
0x51388F: lea     ebx, [esp+144h+var_12C]
0x513893: push    ebx; UInt16
0x513894: push    ebp; l
0x513895: push    esi; a6
0x513896: push    edx; a5
0x513897: mov     edx, [esp+154h+a3]
0x51389B: push    edi; a4
0x51389C: push    edx; a3
0x51389D: push    ecx; a2
0x51389E: push    eax; a1
0x51389F: call    Script_ExtractArgs
0x5138A4: add     esp, 24h
0x5138A7: test    al, al
0x5138A9: jz      loc_513B34
0x5138AF: test    edi, edi
0x5138B1: jz      loc_513B32
0x5138B7: mov     eax, [esp+140h+var_12C]
0x5138BB: push    0; int
0x5138BD: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x5138C2: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5138C7: push    0; int
0x5138C9: push    eax; void *
0x5138CA: call    OblivionDynamicCast
0x5138CF: mov     esi, eax
0x5138D1: add     esp, 14h
0x5138D4: test    esi, esi
0x5138D6: jz      short loc_5138F0
0x5138D8: lea     ecx, [edi+44h]; this
0x5138DB: call    ExtraDataList_GetContainerChanges
0x5138E0: test    eax, eax
0x5138E2: jz      short loc_5138F0
0x5138E4: push    esi
0x5138E5: mov     ecx, eax
0x5138E7: call    sub_487760
0x5138EC: mov     [esp+140h+var_12C], eax
0x5138F0: push    0; int
0x5138F2: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5138F7: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5138FC: push    0; int
0x5138FE: push    edi; void *
0x5138FF: call    OblivionDynamicCast
0x513904: mov     esi, eax
0x513906: add     esp, 14h
0x513909: test    esi, esi
0x51390B: jz      loc_513B0C
0x513911: mov     edx, [esp+140h+var_12C]
0x513915: fild    dword ptr [esp+140h+ArgList]
0x513919: lea     ecx, [esp+140h+var_11C]
0x51391D: push    ecx
0x51391E: push    0
0x513920: fstp    [esp+148h+var_11C]
0x513924: push    edx
0x513925: push    edi
0x513926: call    Cmd_GetItemCount
0x51392B: fild    dword ptr [esp+150h+ArgList]
0x51392F: fld     [esp+150h+var_11C]
0x513933: add     esp, 10h
0x513936: fcom    st(1)
0x513938: fnstsw  ax
0x51393A: fstp    st(1)
0x51393C: test    ah, 5
0x51393F: jp      short loc_51394C
0x513941: call    Double_To_SInt32
0x513946: mov     dword ptr [esp+140h+ArgList], eax
0x51394A: jmp     short loc_51394E
0x51394C: fstp    st
0x51394E: mov     eax, [esp+140h+var_12C]
0x513952: push    eax
0x513953: mov     ecx, esi
0x513955: xor     ebp, ebp
0x513957: call    Actor_IsObjectEquipped
0x51395C: test    al, al
0x51395E: jz      short loc_51399E
0x513960: push    ebp; a2
0x513961: mov     ecx, esi; this
0x513963: call    Actor_GetActorBaseForm
0x513968: test    eax, eax
0x51396A: jz      short loc_513971
0x51396C: add     eax, 44h ; 'D'
0x51396F: jmp     short loc_513973
0x513971: xor     eax, eax
0x513973: push    eax
0x513974: push    edi; a1
0x513975: call    ContainerExtraData_GetContainerExtraDataForRef
0x51397A: add     esp, 8
0x51397D: test    eax, eax
0x51397F: jz      short loc_51399E
0x513981: mov     ecx, [esp+140h+var_12C]
0x513985: push    0
0x513987: push    ecx
0x513988: mov     ecx, eax
0x51398A: call    ExtraContainerChanges_SetEquipped
0x51398F: mov     ebp, eax
0x513991: test    ebp, ebp
0x513993: jz      short loc_51399E
0x513995: push    0
0x513997: mov     ecx, ebp
0x513999: call    sub_41F370
0x51399E: cmp     dword ptr [esp+140h+ArgList], 0
0x5139A3: jle     loc_513B32
0x5139A9: mov     edx, [esp+140h+var_12C]
0x5139AD: push    edx
0x5139AE: mov     ecx, esi
0x5139B0: call    Actor_IsObjectEquipped
0x5139B5: mov     bl, al
0x5139B7: test    bl, bl
0x5139B9: jz      short loc_5139CA
0x5139BB: mov     eax, [esp+140h+var_12C]
0x5139BF: push    1
0x5139C1: push    eax
0x5139C2: lea     ecx, [esi+68h]
0x5139C5: call    MagicTarget_RemoveBoundObj
0x5139CA: mov     eax, dword ptr [esp+140h+ArgList]
0x5139CE: mov     ecx, [esp+140h+var_12C]
0x5139D2: mov     edx, [esi]
0x5139D4: mov     edx, [edx+100h]
0x5139DA: xor     edi, edi
0x5139DC: push    edi
0x5139DD: push    1
0x5139DF: push    edi
0x5139E0: push    edi
0x5139E1: push    edi
0x5139E2: push    edi
0x5139E3: push    edi
0x5139E4: push    eax
0x5139E5: push    ebp
0x5139E6: push    ecx
0x5139E7: mov     ecx, esi
0x5139E9: call    edx
0x5139EB: cmp     esi, ds:0B333C4h
0x5139F1: jnz     loc_513AE2
0x5139F7: mov     [esp+140h+a3], edi
0x5139FB: mov     [esp+140h+var_120], di
0x513A00: mov     [esp+140h+var_11E], di
0x513A05: cmp     dword ptr [esp+140h+ArgList], 1
0x513A0A: mov     [esp+140h+var_4], edi
0x513A11: jle     short loc_513A47
0x513A13: mov     eax, ds:0B382B0h
0x513A18: mov     ecx, ds:0B38298h
0x513A1E: mov     edx, [esp+140h+var_12C]
0x513A22: push    eax
0x513A23: push    ecx
0x513A24: push    edx; a1
0x513A25: call    TESFullName_GetNameForForm
0x513A2A: add     esp, 4
0x513A2D: push    eax
0x513A2E: mov     eax, dword ptr [esp+14Ch+ArgList]
0x513A32: push    eax; ArgList
0x513A33: lea     ecx, [esp+150h+a3]
0x513A37: push    offset aISSS; "%i %s%s %s"
0x513A3C: push    ecx; int
0x513A3D: call    BSStringT_Static_Format
0x513A42: add     esp, 18h
0x513A45: jmp     short loc_513A6E
0x513A47: mov     edx, ds:0B382B0h
0x513A4D: mov     eax, [esp+140h+var_12C]
0x513A51: push    edx
0x513A52: push    eax; a1
0x513A53: call    TESFullName_GetNameForForm
0x513A58: add     esp, 4
0x513A5B: push    eax; ArgList
0x513A5C: lea     ecx, [esp+148h+a3]
0x513A60: push    offset aSS; "%s %s"
0x513A65: push    ecx; int
0x513A66: call    BSStringT_Static_Format
0x513A6B: add     esp, 10h
0x513A6E: mov     edx, ds:0B333C4h
0x513A74: mov     eax, [esp+140h+var_12C]
0x513A78: push    edx
0x513A79: push    eax
0x513A7A: call    sub_4702D0
0x513A7F: push    eax
0x513A80: push    offset aIcons; "Icons"
0x513A85: lea     ecx, [esp+150h+var_114]
0x513A89: push    offset aSS_2; "%s\\%s"
0x513A8E: push    ecx
0x513A8F: call    __sprintf
0x513A94: mov     edx, [esp+158h+var_12C]
0x513A98: mov     ecx, ds:0B333C4h
0x513A9E: add     esp, 18h
0x513AA1: push    edi
0x513AA2: push    edi
0x513AA3: push    edx
0x513AA4: call    GetItemUpDownSound
0x513AA9: fld     dword ptr ds:0A379B4h
0x513AAF: push    eax; int
0x513AB0: lea     eax, [esp+144h+var_114]
0x513AB4: push    eax; int
0x513AB5: push    ecx
0x513AB6: mov     ecx, [esp+14Ch+a3]
0x513ABA: fstp    [esp+14Ch+var_14C]; float
0x513ABD: push    ecx; int
0x513ABE: call    QueueUIMessage
0x513AC3: push    edi
0x513AC4: call    sub_57A3B0
0x513AC9: add     esp, 14h
0x513ACC: lea     ecx, [esp+140h+a3]; void *
0x513AD0: mov     [esp+140h+var_4], 0FFFFFFFFh
0x513ADB: call    BSStringT_Clear
0x513AE0: jmp     short loc_513B32
0x513AE2: test    bl, bl
0x513AE4: jz      short loc_513B32
0x513AE6: cmp     [esi+58h], edi
0x513AE9: jz      short loc_513B32
0x513AEB: mov     edx, [esi]
0x513AED: mov     eax, [edx+154h]
0x513AF3: mov     ecx, esi
0x513AF5: call    eax
0x513AF7: test    eax, eax
0x513AF9: jz      short loc_513B32
0x513AFB: mov     ecx, [esi+58h]
0x513AFE: mov     edx, [ecx]
0x513B00: mov     eax, [edx+80h]
0x513B06: push    edi
0x513B07: push    esi
0x513B08: call    eax
0x513B0A: jmp     short loc_513B32
0x513B0C: mov     eax, dword ptr [esp+140h+ArgList]
0x513B10: mov     ecx, [esp+140h+var_12C]
0x513B14: mov     edx, [edi]
0x513B16: mov     edx, [edx+100h]
0x513B1C: push    0
0x513B1E: push    1
0x513B20: push    0
0x513B22: push    0
0x513B24: push    0
0x513B26: push    0
0x513B28: push    0
0x513B2A: push    eax
0x513B2B: push    0
0x513B2D: push    ecx
0x513B2E: mov     ecx, edi
0x513B30: call    edx
0x513B32: mov     al, 1
0x513B34: mov     ecx, dword ptr [esp+140h+var_C]
0x513B3B: mov     large fs:0, ecx
0x513B42: pop     ecx
0x513B43: pop     edi
0x513B44: pop     esi
0x513B45: pop     ebp
0x513B46: pop     ebx
0x513B47: mov     ecx, [esp+12Ch+var_10]
0x513B4E: xor     ecx, esp
0x513B50: call    @__security_check_cookie@4; __security_check_cookie(x)
0x513B55: add     esp, 12Ch
0x513B5B: retn
