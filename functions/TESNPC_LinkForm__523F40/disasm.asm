0x523F40: push    ecx
0x523F41: push    esi
0x523F42: mov     esi, ecx
0x523F44: mov     eax, [esi+8]
0x523F47: shr     eax, 3
0x523F4A: test    al, 1
0x523F4C: jnz     loc_5240F1
0x523F52: push    ebx
0x523F53: push    esi
0x523F54: lea     ecx, [esi+0C4h]
0x523F5A: call    TESScriptableForm_Link
0x523F5F: push    esi
0x523F60: lea     ecx, [esi+44h]
0x523F63: call    TESContainer_LinkComponent
0x523F68: push    esi
0x523F69: lea     ecx, [esi+68h]
0x523F6C: call    TESAIForm_LinkComponent
0x523F71: push    esi
0x523F72: lea     ecx, [esi+0E4h]
0x523F78: call    sub_46E4F0
0x523F7D: lea     ebx, [esi+24h]
0x523F80: push    esi
0x523F81: mov     ecx, ebx
0x523F83: call    TESActorBaseData_LinkComponent
0x523F88: push    esi
0x523F89: lea     ecx, [esi+54h]
0x523F8C: call    TESSpellList_LinkComponent
0x523F91: mov     eax, [esi+104h]
0x523F97: test    eax, eax
0x523F99: jz      short loc_523FE0
0x523F9B: push    0FFFFFFFFh; a2
0x523F9D: mov     ecx, esi; this
0x523F9F: mov     dword ptr [esp+10h+ArgList], eax
0x523FA3: call    TESForm_GetOverrideFile
0x523FA8: push    eax; a2
0x523FA9: lea     ecx, [esp+10h+ArgList]
0x523FAD: push    ecx; a1
0x523FAE: call    TESForm_ResolveFormID
0x523FB3: mov     edx, dword ptr [esp+14h+ArgList]
0x523FB7: add     esp, 8
0x523FBA: push    0; int
0x523FBC: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x523FC1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x523FC6: push    0; int
0x523FC8: push    edx; a1
0x523FC9: call    TESForm_LookupByFormID
0x523FCE: add     esp, 4
0x523FD1: push    eax; void *
0x523FD2: call    OblivionDynamicCast
0x523FD7: add     esp, 14h
0x523FDA: mov     [esi+104h], eax
0x523FE0: mov     eax, [esi]
0x523FE2: mov     edx, [eax+0E4h]
0x523FE8: mov     ecx, esi
0x523FEA: call    edx
0x523FEC: test    al, al
0x523FEE: jz      short loc_523FF9
0x523FF0: push    0
0x523FF2: mov     ecx, esi
0x523FF4: call    sub_5222D0
0x523FF9: mov     eax, [esi]
0x523FFB: mov     edx, [eax+120h]
0x524001: mov     ecx, esi
0x524003: call    edx
0x524005: test    eax, eax
0x524007: jz      loc_524090
0x52400D: mov     eax, [esi]
0x52400F: mov     edx, [eax+120h]
0x524015: mov     ecx, esi
0x524017: call    edx
0x524019: test    eax, eax
0x52401B: mov     dword ptr [esp+0Ch+ArgList], eax
0x52401F: jz      short loc_524090
0x524021: push    0FFFFFFFFh; a2
0x524023: mov     ecx, esi; this
0x524025: call    TESForm_GetOverrideFile
0x52402A: push    eax; a2
0x52402B: lea     eax, [esp+10h+ArgList]
0x52402F: push    eax; a1
0x524030: call    TESForm_ResolveFormID
0x524035: mov     ecx, dword ptr [esp+14h+ArgList]
0x524039: add     esp, 8
0x52403C: push    0; int
0x52403E: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x524043: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x524048: push    0; int
0x52404A: push    ecx; a1
0x52404B: call    TESForm_LookupByFormID
0x524050: add     esp, 4
0x524053: push    eax; void *
0x524054: call    OblivionDynamicCast
0x524059: mov     edx, [esi]
0x52405B: add     esp, 14h
0x52405E: test    eax, eax
0x524060: mov     ecx, esi
0x524062: jz      short loc_52406F
0x524064: push    eax
0x524065: mov     eax, [edx+124h]
0x52406B: call    eax
0x52406D: jmp     short loc_524090
0x52406F: mov     eax, [edx+0D4h]
0x524075: push    edi
0x524076: mov     edi, [esi+0Ch]
0x524079: call    eax
0x52407B: mov     ecx, dword ptr [esp+10h+ArgList]
0x52407F: push    eax
0x524080: push    edi
0x524081: push    ecx; ArgList
0x524082: push    offset aCombatStyle0_0; "Combat Style (%08X) not found in InitIt"...
0x524087: call    PrintError
0x52408C: add     esp, 10h
0x52408F: pop     edi
0x524090: mov     edx, [esi+80h]
0x524096: mov     eax, [edx+10h]
0x524099: lea     ecx, [esi+80h]
0x52409F: call    eax
0x5240A1: test    eax, eax
0x5240A3: mov     ecx, esi
0x5240A5: ja      short loc_5240AB
0x5240A7: push    1
0x5240A9: jmp     short loc_5240AD
0x5240AB: push    0
0x5240AD: call    sub_46AB40
0x5240B2: cmp     dword ptr [esi+0Ch], 7
0x5240B6: jnz     short loc_5240E0
0x5240B8: push    0
0x5240BA: mov     ecx, ebx
0x5240BC: call    TESActorBaseData_SetFatigue
0x5240C1: push    0
0x5240C3: mov     ecx, esi
0x5240C5: call    TESActorBase_SetHealth
0x5240CA: push    0
0x5240CC: mov     ecx, ebx
0x5240CE: call    TESActorBaseData_SetMagicka
0x5240D3: push    1; a2
0x5240D5: mov     ecx, esi; this
0x5240D7: call    TESForm_SetIsLinked
0x5240DC: pop     ebx
0x5240DD: pop     esi
0x5240DE: pop     ecx
0x5240DF: retn
0x5240E0: mov     ecx, esi
0x5240E2: call    sub_5239C0
0x5240E7: push    1; a2
0x5240E9: mov     ecx, esi; this
0x5240EB: call    TESForm_SetIsLinked
0x5240F0: pop     ebx
0x5240F1: pop     esi
0x5240F2: pop     ecx
0x5240F3: retn
