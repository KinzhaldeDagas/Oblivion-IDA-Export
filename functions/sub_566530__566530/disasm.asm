0x566530: push    ebp
0x566531: mov     ebp, esp
0x566533: push    0FFFFFFFFh
0x566535: push    offset SEH_566530
0x56653A: mov     eax, large fs:0
0x566540: push    eax
0x566541: sub     esp, 50h
0x566544: mov     eax, ds:0B30AACh
0x566549: xor     eax, ebp
0x56654B: mov     [ebp+var_10], eax
0x56654E: push    ebx
0x56654F: push    esi
0x566550: push    edi
0x566551: push    eax
0x566552: lea     eax, [ebp+var_C]
0x566555: mov     large fs:0, eax
0x56655B: mov     esi, ecx
0x56655D: mov     edi, [ebp+a1]
0x566560: mov     ecx, edi
0x566562: call    TESFile_GetRecordType
0x566567: cmp     al, 3Dh ; '='
0x566569: jz      short loc_566572
0x56656B: xor     al, al
0x56656D: jmp     loc_5667CA
0x566572: push    esi
0x566573: mov     ecx, edi
0x566575: call    TESFile_InitializeFormFromRecord
0x56657A: lea     ebx, [ebx+0]
0x566580: mov     ecx, edi
0x566582: call    TESFile_GetChunkType
0x566587: cmp     eax, 54444C50h
0x56658C: jg      loc_566705
0x566592: jz      loc_5666BB
0x566598: cmp     eax, 41445443h
0x56659D: jz      loc_566763
0x5665A3: cmp     eax, 44494445h
0x5665A8: jz      loc_56668F
0x5665AE: cmp     eax, 54444B50h
0x5665B3: jnz     loc_5667B0
0x5665B9: mov     eax, [edi+254h]
0x5665BF: cmp     eax, 4
0x5665C2: jnz     short loc_5665EF
0x5665C4: push    eax; a4
0x5665C5: lea     eax, [ebp+Dst]
0x5665C8: push    eax; Dst
0x5665C9: mov     ecx, edi; a1
0x5665CB: mov     dword ptr [ebp+Dst], 0
0x5665D2: call    TESFile_GetChunkData
0x5665D7: movzx   ecx, word ptr [ebp+Dst]
0x5665DB: movsx   edx, [ebp+Dst+2]
0x5665DF: mov     [esi+1Ch], ecx
0x5665E2: push    edx
0x5665E3: mov     ecx, esi
0x5665E5: call    TESPackage_SetType?
0x5665EA: jmp     loc_5667B0
0x5665EF: cmp     eax, 8
0x5665F2: jnz     short loc_566620
0x5665F4: xor     eax, eax
0x5665F6: mov     dword ptr [ebp+var_1C], eax
0x5665F9: mov     [ebp+var_18], eax
0x5665FC: push    8; a4
0x5665FE: lea     eax, [ebp+var_1C]
0x566601: push    eax; Dst
0x566602: mov     ecx, edi; a1
0x566604: call    TESFile_GetChunkData
0x566609: mov     ecx, dword ptr [ebp+var_1C]
0x56660C: movsx   edx, byte ptr [ebp+var_18]
0x566610: mov     [esi+1Ch], ecx
0x566613: push    edx
0x566614: mov     ecx, esi
0x566616: call    TESPackage_SetType?
0x56661B: jmp     loc_5667B0
0x566620: lea     eax, [edi+1Ch]
0x566623: push    eax; ArgList
0x566624: push    offset aFileSContainsP; "File '%s' contains package data of unre"...
0x566629: call    PrintError
0x56662E: add     esp, 8
0x566631: cmp     byte ptr [esi+20h], 0
0x566635: mov     dword ptr [esi+1Ch], 0
0x56663C: jz      loc_5667B0
0x566642: cmp     dword ptr [esi+28h], 0
0x566646: jnz     short loc_566686
0x566648: push    0Ch; Size
0x56664A: call    FormHeapAlloc
0x56664F: add     esp, 4
0x566652: mov     dword ptr [ebp+Dst], eax
0x566655: test    eax, eax
0x566657: mov     [ebp+var_4], 4
0x56665E: jz      short loc_56667A
0x566660: mov     ecx, eax
0x566662: call    TESPackage_TargetData_constr
0x566667: mov     [ebp+var_4], 0FFFFFFFFh
0x56666E: mov     [esi+28h], eax
0x566671: mov     byte ptr [esi+20h], 0
0x566675: jmp     loc_5667B0
0x56667A: xor     eax, eax
0x56667C: mov     [ebp+var_4], 0FFFFFFFFh
0x566683: mov     [esi+28h], eax
0x566686: mov     byte ptr [esi+20h], 0
0x56668A: jmp     loc_5667B0
0x56668F: mov     eax, [edi+254h]
0x566695: call    __alloca?
0x56669A: mov     ebx, esp
0x56669C: push    200h; a4
0x5666A1: push    ebx; Dst
0x5666A2: mov     ecx, edi; a1
0x5666A4: call    TESFile_GetChunkData
0x5666A9: mov     edx, [esi]
0x5666AB: mov     eax, [edx+0D8h]
0x5666B1: push    ebx
0x5666B2: mov     ecx, esi
0x5666B4: call    eax
0x5666B6: jmp     loc_5667B0
0x5666BB: xor     eax, eax
0x5666BD: push    0Ch; a4
0x5666BF: lea     ecx, [ebp+var_3C]
0x5666C2: push    ecx; Dst
0x5666C3: mov     ecx, edi; a1
0x5666C5: mov     dword ptr [ebp+var_3C], eax
0x5666C8: mov     [ebp+var_38], eax
0x5666CB: mov     [ebp+var_34], eax
0x5666CE: call    TESFile_GetChunkData
0x5666D3: lea     edx, [ebp+var_3C]
0x5666D6: push    edx
0x5666D7: lea     ecx, [ebp+var_50]
0x5666DA: call    sub_5696C0
0x5666DF: lea     eax, [ebp+var_50]
0x5666E2: push    eax
0x5666E3: mov     ecx, esi
0x5666E5: mov     [ebp+var_4], 6
0x5666EC: call    TESPackage_SetLocation
0x5666F1: lea     ecx, [ebp+var_50]
0x5666F4: mov     [ebp+var_4], 0FFFFFFFFh
0x5666FB: call    TESPackage_LocationData_destr
0x566700: jmp     loc_5667B0
0x566705: sub     eax, 54445350h
0x56670A: jz      short loc_56676E
0x56670C: sub     eax, 0F3h ; 'ó'
0x566711: jz      short loc_566763
0x566713: sub     eax, 0Dh
0x566716: jnz     loc_5667B0
0x56671C: xor     eax, eax
0x56671E: push    0Ch; a4
0x566720: lea     ecx, [ebp+var_30]
0x566723: push    ecx; Dst
0x566724: mov     ecx, edi; a1
0x566726: mov     dword ptr [ebp+var_30], eax
0x566729: mov     [ebp+var_2C], eax
0x56672C: mov     [ebp+var_28], eax
0x56672F: call    TESFile_GetChunkData
0x566734: lea     edx, [ebp+var_30]
0x566737: push    edx
0x566738: lea     ecx, [ebp+var_5C]
0x56673B: call    sub_56A0A0
0x566740: lea     eax, [ebp+var_5C]
0x566743: push    eax
0x566744: mov     ecx, esi
0x566746: mov     [ebp+var_4], 8
0x56674D: call    TESPackage_SetTarget
0x566752: lea     ecx, [ebp+var_5C]; void *
0x566755: mov     [ebp+var_4], 0FFFFFFFFh
0x56675C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x566761: jmp     short loc_5667B0
0x566763: push    edi
0x566764: lea     ecx, [esi+34h]
0x566767: call    ConditionList_LoadCondition
0x56676C: jmp     short loc_5667B0
0x56676E: push    8; a4
0x566770: lea     ecx, [ebp+var_24]
0x566773: xor     eax, eax
0x566775: push    ecx; Dst
0x566776: mov     ecx, edi; a1
0x566778: mov     dword ptr [ebp+var_24], eax
0x56677B: mov     [ebp+var_20], eax
0x56677E: call    TESFile_GetChunkData
0x566783: lea     edx, [ebp+var_24]
0x566786: push    edx
0x566787: lea     ecx, [ebp+var_44]
0x56678A: call    sub_569D80
0x56678F: lea     eax, [ebp+var_44]
0x566792: push    eax
0x566793: mov     ecx, esi
0x566795: mov     [ebp+var_4], 7
0x56679C: call    sub_565F80
0x5667A1: lea     ecx, [ebp+var_44]; void *
0x5667A4: mov     [ebp+var_4], 0FFFFFFFFh
0x5667AB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x5667B0: mov     ecx, edi
0x5667B2: call    TESFile_GetNextChunk
0x5667B7: test    al, al
0x5667B9: jnz     loc_566580
0x5667BF: push    0; a2
0x5667C1: mov     ecx, esi; this
0x5667C3: call    TESForm_SetIsLinked
0x5667C8: mov     al, 1
0x5667CA: lea     esp, [ebp-6Ch]
0x5667CD: mov     ecx, [ebp+var_C]
0x5667D0: mov     large fs:0, ecx
0x5667D7: pop     ecx
0x5667D8: pop     edi
0x5667D9: pop     esi
0x5667DA: pop     ebx
0x5667DB: mov     ecx, [ebp+var_10]
0x5667DE: xor     ecx, ebp
0x5667E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5667E5: mov     esp, ebp
0x5667E7: pop     ebp
0x5667E8: retn    4
