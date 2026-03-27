0x520970: push    ebp
0x520971: mov     ebp, esp
0x520973: push    0FFFFFFFFh
0x520975: push    offset TESIdleForm_LoadForm_SEH
0x52097A: mov     eax, large fs:0
0x520980: push    eax
0x520981: sub     esp, 20h
0x520984: mov     eax, ds:0B30AACh
0x520989: xor     eax, ebp
0x52098B: mov     dword ptr [ebp+a1.member.type], eax
0x52098E: push    ebx
0x52098F: push    esi
0x520990: push    edi
0x520991: push    eax
0x520992: lea     eax, [ebp+a1.member.flags]
0x520995: mov     large fs:0, eax
0x52099B: mov     esi, ecx
0x52099D: mov     ebx, [ebp+arg_0]
0x5209A0: mov     ecx, ebx
0x5209A2: call    TESFile_GetRecordType
0x5209A7: cmp     eax, 3Ch ; '<'
0x5209AA: jz      short loc_5209B3
0x5209AC: xor     al, al
0x5209AE: jmp     loc_520B8E
0x5209B3: push    esi
0x5209B4: mov     ecx, ebx; this
0x5209B6: call    TESFile_InitializeFormFromRecord
0x5209BB: mov     ecx, ebx
0x5209BD: call    TESFile_GetChunkType
0x5209C2: xor     edi, edi
0x5209C4: cmp     eax, edi
0x5209C6: jz      loc_520B8C
0x5209CC: lea     esp, [esp+0]
0x5209D0: cmp     eax, 4C444F4Dh
0x5209D5: jg      loc_520C8E
0x5209DB: jz      loc_520CB5
0x5209E1: cmp     eax, 42444F4Dh
0x5209E6: jg      loc_520C57
0x5209EC: jz      loc_520CB5
0x5209F2: cmp     eax, 41445443h
0x5209F7: jz      loc_520CA7
0x5209FD: cmp     eax, 41544144h
0x520A02: jnz     loc_520B70
0x520A08: xor     eax, eax
0x520A0A: mov     dword ptr [ebp+ArgList], eax
0x520A0D: mov     [ebp+a1.vtbl], eax
0x520A10: push    8; a4
0x520A12: lea     eax, [ebp+ArgList]
0x520A15: push    eax; Dst
0x520A16: mov     ecx, ebx; a1
0x520A18: call    TESFile_GetChunkData
0x520A1D: xor     ebx, ebx
0x520A1F: cmp     dword ptr [ebp+ArgList], edi
0x520A22: jz      short loc_520AA0
0x520A24: push    0FFFFFFFFh; a2
0x520A26: mov     ecx, esi; this
0x520A28: call    TESForm_GetOverrideFile
0x520A2D: push    eax; a2
0x520A2E: lea     ecx, [ebp+ArgList]
0x520A31: push    ecx; a1
0x520A32: call    TESForm_ResolveFormID
0x520A37: mov     edx, dword ptr [ebp+ArgList]
0x520A3A: add     esp, 8
0x520A3D: push    edi; int
0x520A3E: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520A43: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520A48: push    edi; int
0x520A49: push    edx; a1
0x520A4A: call    TESForm_LookupByFormID
0x520A4F: add     esp, 4
0x520A52: push    eax; void *
0x520A53: call    OblivionDynamicCast
0x520A58: mov     ebx, eax
0x520A5A: add     esp, 14h
0x520A5D: cmp     ebx, edi
0x520A5F: jnz     short loc_520AA0
0x520A61: mov     [ebp+var_24], edi
0x520A64: mov     [ebp+var_20], di
0x520A68: mov     [ebp+var_1E], di
0x520A6C: mov     eax, [esi]
0x520A6E: mov     edx, [eax+74h]
0x520A71: lea     ecx, [ebp+var_24]
0x520A74: push    ecx
0x520A75: mov     ecx, esi
0x520A77: mov     [ebp+a1.member.modlist.data], edi
0x520A7A: call    edx
0x520A7C: mov     eax, [ebp+var_24]
0x520A7F: mov     ecx, dword ptr [ebp+ArgList]
0x520A82: push    eax
0x520A83: push    ecx; ArgList
0x520A84: push    offset aCouldNotFind_1; "Could not find parent idle (%08X) for %"...
0x520A89: call    PrintError
0x520A8E: add     esp, 0Ch
0x520A91: lea     ecx, [ebp+var_24]; void *
0x520A94: mov     [ebp+a1.member.modlist.data], 0FFFFFFFFh
0x520A9B: call    BSStringT_Clear
0x520AA0: cmp     [ebp+a1.vtbl], 0
0x520AA4: mov     [esi+40h], ebx
0x520AA7: jz      loc_520B2F
0x520AAD: push    0FFFFFFFFh; a2
0x520AAF: mov     ecx, esi; this
0x520AB1: call    TESForm_GetOverrideFile
0x520AB6: push    eax; a2
0x520AB7: lea     edx, [ebp+a1]
0x520ABA: push    edx; a1
0x520ABB: call    TESForm_ResolveFormID
0x520AC0: mov     eax, [ebp+a1.vtbl]
0x520AC3: add     esp, 8
0x520AC6: push    0; int
0x520AC8: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520ACD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520AD2: push    0; int
0x520AD4: push    eax; a1
0x520AD5: call    TESForm_LookupByFormID
0x520ADA: add     esp, 4
0x520ADD: push    eax; void *
0x520ADE: call    OblivionDynamicCast
0x520AE3: mov     edi, eax
0x520AE5: add     esp, 14h
0x520AE8: test    edi, edi
0x520AEA: jnz     short loc_520B2F
0x520AEC: mov     [ebp+var_2C], eax
0x520AEF: mov     [ebp+var_28], ax
0x520AF3: mov     [ebp+var_26], ax
0x520AF7: mov     edx, [esi]
0x520AF9: mov     edx, [edx+74h]
0x520AFC: lea     eax, [ebp+var_2C]
0x520AFF: push    eax
0x520B00: mov     ecx, esi
0x520B02: mov     [ebp+a1.member.modlist.data], 1
0x520B09: call    edx
0x520B0B: mov     eax, [ebp+var_2C]
0x520B0E: mov     ecx, [ebp+a1.vtbl]
0x520B11: push    eax
0x520B12: push    ecx; ArgList
0x520B13: push    offset aCouldNotFindPr; "Could not find previous idle (%08X) for"...
0x520B18: call    PrintError
0x520B1D: add     esp, 0Ch
0x520B20: lea     ecx, [ebp+var_2C]; void *
0x520B23: mov     [ebp+a1.member.modlist.data], 0FFFFFFFFh
0x520B2A: call    BSStringT_Clear
0x520B2F: test    ebx, ebx
0x520B31: mov     [esi+44h], edi
0x520B34: jz      short loc_520BAF
0x520B36: xor     eax, eax
0x520B38: test    edi, edi
0x520B3A: jz      short loc_520B56
0x520B3C: mov     ecx, [ebx+3Ch]
0x520B3F: or      eax, 0FFFFFFFFh
0x520B42: test    ecx, ecx
0x520B44: jz      short loc_520B4C
0x520B46: push    edi
0x520B47: call    sub_494E90
0x520B4C: cmp     eax, 0FFFFFFFFh
0x520B4F: jz      short loc_520B64
0x520B51: add     eax, 1
0x520B54: jmp     short loc_520B64
0x520B56: mov     edx, [esi+8]
0x520B59: shr     edx, 5
0x520B5C: test    dl, 1
0x520B5F: jz      short loc_520B64
0x520B61: or      eax, 0FFFFFFFFh
0x520B64: push    esi
0x520B65: push    eax
0x520B66: mov     ecx, ebx
0x520B68: call    sub_520780
0x520B6D: mov     ebx, [ebp+arg_0]
0x520B70: mov     ecx, ebx
0x520B72: call    TESFile_GetNextChunk
0x520B77: test    al, al
0x520B79: jz      short loc_520B8C
0x520B7B: mov     ecx, ebx
0x520B7D: call    TESFile_GetChunkType
0x520B82: xor     edi, edi
0x520B84: cmp     eax, edi
0x520B86: jnz     loc_5209D0
0x520B8C: mov     al, 1
0x520B8E: lea     esp, [ebp-3Ch]
0x520B91: mov     ecx, [ebp+a1.member.flags]
0x520B94: mov     large fs:0, ecx
0x520B9B: pop     ecx
0x520B9C: pop     edi
0x520B9D: pop     esi
0x520B9E: pop     ebx
0x520B9F: mov     ecx, dword ptr [ebp+a1.member.type]
0x520BA2: xor     ecx, ebp
0x520BA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x520BA9: mov     esp, ebp
0x520BAB: pop     ebp
0x520BAC: retn    4
0x520BAF: mov     ecx, ds:0B362C0h
0x520BB5: push    esi
0x520BB6: call    sub_5216A0
0x520BBB: mov     ecx, eax
0x520BBD: test    ecx, ecx
0x520BBF: mov     [ebp+var_1C], ecx
0x520BC2: jz      short loc_520B6D
0x520BC4: xor     ebx, ebx
0x520BC6: test    edi, edi
0x520BC8: jz      short loc_520BDD
0x520BCA: push    edi
0x520BCB: call    sub_494E90
0x520BD0: cmp     eax, 0FFFFFFFFh
0x520BD3: jz      short loc_520BD8
0x520BD5: add     eax, 1
0x520BD8: mov     ecx, [ebp+var_1C]
0x520BDB: mov     ebx, eax
0x520BDD: mov     edi, [ecx+0Ch]
0x520BE0: test    edi, edi
0x520BE2: jnz     short loc_520C47
0x520BE4: test    ebx, ebx
0x520BE6: jz      short loc_520C3B
0x520BE8: cmp     ebx, edi
0x520BEA: jbe     short loc_520BEE
0x520BEC: mov     ebx, edi
0x520BEE: push    0; int
0x520BF0: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520BF5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520BFA: push    0; int
0x520BFC: push    ebx
0x520BFD: call    sub_494ED0
0x520C02: push    eax; void *
0x520C03: call    OblivionDynamicCast
0x520C08: add     esp, 14h
0x520C0B: test    eax, eax
0x520C0D: jz      short loc_520C12
0x520C0F: mov     [eax+44h], esi
0x520C12: push    0; int
0x520C14: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x520C19: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520C1E: push    0; int
0x520C20: lea     ecx, [ebx-1]
0x520C23: push    ecx
0x520C24: mov     ecx, [ebp+var_1C]
0x520C27: call    sub_494ED0
0x520C2C: push    eax; void *
0x520C2D: call    OblivionDynamicCast
0x520C32: mov     ecx, [ebp+var_1C]
0x520C35: add     esp, 14h
0x520C38: mov     [esi+44h], eax
0x520C3B: push    esi
0x520C3C: push    ebx
0x520C3D: call    sub_52F3C0
0x520C42: jmp     loc_520B6D
0x520C47: test    ebx, ebx
0x520C49: jnz     short loc_520BE8
0x520C4B: mov     eax, [esi+8]
0x520C4E: shr     eax, 5
0x520C51: test    al, 1
0x520C53: jnz     short loc_520BEC
0x520C55: jmp     short loc_520BEE
0x520C57: cmp     eax, 44494445h
0x520C5C: jnz     loc_520B70
0x520C62: mov     eax, [ebx+254h]
0x520C68: call    __alloca?
0x520C6D: mov     edi, esp
0x520C6F: push    200h; a4
0x520C74: push    edi; Dst
0x520C75: mov     ecx, ebx; a1
0x520C77: call    TESFile_GetChunkData
0x520C7C: mov     edx, [esi]
0x520C7E: mov     eax, [edx+0D8h]
0x520C84: push    edi
0x520C85: mov     ecx, esi
0x520C87: call    eax
0x520C89: jmp     loc_520B70
0x520C8E: cmp     eax, 4D414E41h
0x520C93: jz      short loc_520CDC
0x520C95: cmp     eax, 54444F4Dh
0x520C9A: jz      short loc_520CB5
0x520C9C: cmp     eax, 54445443h
0x520CA1: jnz     loc_520B70
0x520CA7: push    ebx
0x520CA8: lea     ecx, [esi+30h]
0x520CAB: call    ConditionList_LoadCondition
0x520CB0: jmp     loc_520B70
0x520CB5: cmp     esi, edi
0x520CB7: jz      short loc_520CCB
0x520CB9: lea     eax, [esi+18h]
0x520CBC: push    ebx
0x520CBD: push    eax
0x520CBE: call    TESModel_Load
0x520CC3: add     esp, 8
0x520CC6: jmp     loc_520B70
0x520CCB: xor     eax, eax
0x520CCD: push    ebx
0x520CCE: push    eax
0x520CCF: call    TESModel_Load
0x520CD4: add     esp, 8
0x520CD7: jmp     loc_520B70
0x520CDC: push    1; a4
0x520CDE: lea     ecx, [esi+38h]
0x520CE1: push    ecx; Dst
0x520CE2: mov     ecx, ebx; a1
0x520CE4: call    TESFile_GetChunkData
0x520CE9: jmp     loc_520B70
