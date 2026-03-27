0x569540: push    ebp
0x569541: mov     ebp, esp
0x569543: and     esp, 0FFFFFFF8h
0x569546: push    0FFFFFFFFh
0x569548: push    offset SEH_59BD80
0x56954D: mov     eax, large fs:0
0x569553: push    eax
0x569554: sub     esp, 18h
0x569557: push    ebx
0x569558: push    esi
0x569559: push    edi
0x56955A: mov     eax, ds:0B30AACh
0x56955F: xor     eax, esp
0x569561: push    eax
0x569562: lea     eax, [esp+34h+var_C]
0x569566: mov     large fs:0, eax
0x56956C: mov     esi, ecx
0x56956E: mov     ecx, [ebp+arg_0]; this
0x569571: xor     edi, edi
0x569573: xor     ebx, ebx
0x569575: cmp     ecx, edi
0x569577: jz      short loc_569586
0x569579: push    0FFFFFFFFh; a2
0x56957B: call    TESForm_GetOverrideFile
0x569580: mov     [esp+34h+a2], eax
0x569584: jmp     short loc_56958A
0x569586: mov     [esp+34h+a2], edi
0x56958A: cmp     esi, edi
0x56958C: jz      loc_56969A
0x569592: cmp     [esi+4], edi
0x569595: jnz     short loc_56959F
0x569597: cmp     [esi], edi
0x569599: jz      loc_56969A
0x56959F: cmp     [ebp+arg_0], edi
0x5695A2: mov     eax, [esi]
0x5695A4: mov     dword ptr [esp+34h+ArgList], eax
0x5695A8: jz      short loc_5695BC
0x5695AA: mov     ecx, [esp+34h+a2]
0x5695AE: push    ecx; a2
0x5695AF: lea     edx, [esp+38h+ArgList]
0x5695B3: push    edx; a1
0x5695B4: call    TESForm_ResolveFormID
0x5695B9: add     esp, 8
0x5695BC: mov     eax, dword ptr [esp+34h+ArgList]
0x5695C0: push    edi; int
0x5695C1: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x5695C6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5695CB: push    edi; int
0x5695CC: push    eax; a1
0x5695CD: call    TESForm_LookupByFormID
0x5695D2: add     esp, 4
0x5695D5: push    eax; void *
0x5695D6: call    OblivionDynamicCast
0x5695DB: add     esp, 14h
0x5695DE: cmp     eax, edi
0x5695E0: jnz     loc_56968B
0x5695E6: mov     [esp+34h+var_18.m_data], edi
0x5695EA: mov     [esp+34h+var_18.m_dataLen], di
0x5695EF: mov     [esp+34h+var_18.m_bufLen], di
0x5695F4: mov     ecx, [ebp+arg_0]
0x5695F7: cmp     ecx, edi
0x5695F9: mov     [esp+34h+var_4], edi
0x5695FD: jz      short loc_56960D
0x5695FF: mov     edx, [ecx]
0x569601: mov     edx, [edx+74h]
0x569604: lea     eax, [esp+34h+var_18]
0x569608: push    eax
0x569609: call    edx
0x56960B: jmp     short loc_56961C
0x56960D: push    edi; a3
0x56960E: push    offset aUnknownForm; "UNKNOWN form"
0x569613: lea     ecx, [esp+3Ch+var_18]; this
0x569617: call    BSStringT_Set
0x56961C: mov     eax, [esp+34h+var_18.m_data]
0x569620: mov     ecx, dword ptr [esp+34h+ArgList]
0x569624: push    eax
0x569625: push    ecx; ArgList
0x569626: push    offset aCouldNotFind_5; "Could not find Package (%08X) for %s."
0x56962B: call    PrintError
0x569630: add     esp, 0Ch
0x569633: cmp     ebx, edi
0x569635: jz      short loc_569648
0x569637: mov     edx, dword ptr [esp+34h+ArgList]
0x56963B: push    edx
0x56963C: mov     ecx, ebx
0x56963E: call    BSSimpleList_Remove
0x569643: mov     esi, [ebx+4]
0x569646: jmp     short loc_569666
0x569648: mov     eax, [esi+4]
0x56964B: cmp     eax, edi
0x56964D: jz      short loc_569664
0x56964F: mov     ecx, [eax+4]
0x569652: mov     [esi+4], ecx
0x569655: mov     edx, [eax]
0x569657: push    eax
0x569658: mov     [esi], edx
0x56965A: call    FormHeapFree
0x56965F: add     esp, 4
0x569662: jmp     short loc_569666
0x569664: mov     [esi], edi
0x569666: mov     eax, [esp+34h+var_18.m_data]
0x56966A: push    eax
0x56966B: mov     [esp+38h+var_4], 0FFFFFFFFh
0x569673: call    FormHeapFree
0x569678: add     esp, 4
0x56967B: mov     [esp+34h+var_18.m_data], edi
0x56967F: mov     [esp+34h+var_18.m_bufLen], di
0x569684: mov     [esp+34h+var_18.m_dataLen], di
0x569689: jmp     short loc_569692
0x56968B: mov     [esi], eax
0x56968D: mov     ebx, esi
0x56968F: mov     esi, [esi+4]
0x569692: cmp     esi, edi
0x569694: jnz     loc_569592
0x56969A: mov     ecx, [esp+34h+var_C]
0x56969E: mov     large fs:0, ecx
0x5696A5: pop     ecx
0x5696A6: pop     edi
0x5696A7: pop     esi
0x5696A8: pop     ebx
0x5696A9: mov     esp, ebp
0x5696AB: pop     ebp
0x5696AC: retn    4
