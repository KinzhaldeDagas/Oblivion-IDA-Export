0x48E9A0: push    0FFFFFFFFh
0x48E9A2: push    offset SEH_48E9A0
0x48E9A7: mov     eax, large fs:0
0x48E9AD: push    eax
0x48E9AE: sub     esp, 10h
0x48E9B1: push    ebx
0x48E9B2: push    ebp
0x48E9B3: push    esi
0x48E9B4: push    edi
0x48E9B5: mov     eax, ds:0B30AACh
0x48E9BA: xor     eax, esp
0x48E9BC: push    eax
0x48E9BD: lea     eax, [esp+30h+var_C]
0x48E9C1: mov     large fs:0, eax
0x48E9C7: mov     ebp, ecx
0x48E9C9: mov     [esp+30h+var_18], ebp
0x48E9CD: mov     ecx, [ebp+4]; this
0x48E9D0: test    ecx, ecx
0x48E9D2: jz      short loc_48E9DB
0x48E9D4: call    TESObjectREFR_GetContainer
0x48E9D9: jmp     short loc_48E9DD
0x48E9DB: xor     eax, eax
0x48E9DD: add     eax, 8
0x48E9E0: mov     [esp+30h+var_1C], eax
0x48E9E4: jz      loc_48ED3A
0x48E9EA: jmp     short loc_48E9F4
0x48E9EC: align 10h
0x48E9F0: mov     eax, [esp+30h+var_1C]
0x48E9F4: mov     ebx, [eax]
0x48E9F6: xor     esi, esi
0x48E9F8: cmp     ebx, esi
0x48E9FA: mov     [esp+30h+var_14], ebx
0x48E9FE: jz      loc_48ED3A
0x48EA04: mov     eax, [ebx+4]
0x48EA07: push    esi; int
0x48EA08: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x48EA0D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48EA12: push    esi; int
0x48EA13: push    eax; void *
0x48EA14: call    OblivionDynamicCast
0x48EA19: push    0Ch; Size
0x48EA1B: mov     edi, eax
0x48EA1D: call    FormHeapAlloc
0x48EA22: add     esp, 18h
0x48EA25: cmp     eax, esi
0x48EA27: jz      short loc_48EA33
0x48EA29: mov     [eax+8], esi
0x48EA2C: mov     [eax], esi
0x48EA2E: mov     [eax+4], esi
0x48EA31: mov     esi, eax
0x48EA33: cmp     dword ptr [esi], 0
0x48EA36: jnz     short loc_48EA59
0x48EA38: push    8; Size
0x48EA3A: call    FormHeapAlloc
0x48EA3F: add     esp, 4
0x48EA42: test    eax, eax
0x48EA44: jz      short loc_48EA55
0x48EA46: mov     dword ptr [eax], 0
0x48EA4C: mov     dword ptr [eax+4], 0
0x48EA53: jmp     short loc_48EA57
0x48EA55: xor     eax, eax
0x48EA57: mov     [esi], eax
0x48EA59: test    edi, edi
0x48EA5B: jnz     loc_48ECDE
0x48EA61: mov     eax, [ebp+0]
0x48EA64: test    eax, eax
0x48EA66: mov     edi, [ebx+4]
0x48EA69: mov     dl, 1
0x48EA6B: jz      short loc_48EA87
0x48EA6D: test    dl, dl
0x48EA6F: jz      short loc_48EA8E
0x48EA71: mov     ecx, [eax]
0x48EA73: test    ecx, ecx
0x48EA75: jz      short loc_48EA80
0x48EA77: cmp     [ecx+8], edi
0x48EA7A: jnz     short loc_48EA80
0x48EA7C: xor     dl, dl
0x48EA7E: jmp     short loc_48EA83
0x48EA80: mov     eax, [eax+4]
0x48EA83: test    eax, eax
0x48EA85: jnz     short loc_48EA6D
0x48EA87: xor     edi, edi
0x48EA89: jmp     loc_48EB43
0x48EA8E: test    eax, eax
0x48EA90: jz      short loc_48EA87
0x48EA92: mov     edi, [eax]
0x48EA94: test    edi, edi
0x48EA96: jz      loc_48EB43
0x48EA9C: mov     ebp, [edi]
0x48EA9E: test    ebp, ebp
0x48EAA0: jz      short loc_48EAC2
0x48EAA2: mov     ebx, [ebp+0]
0x48EAA5: test    ebx, ebx
0x48EAA7: jz      short loc_48EAC2
0x48EAA9: mov     ecx, ebx
0x48EAAB: call    sub_41E790
0x48EAB0: test    eax, eax
0x48EAB2: jz      short loc_48EABB
0x48EAB4: mov     ecx, ebx
0x48EAB6: call    sub_4234B0
0x48EABB: mov     ebp, [ebp+4]
0x48EABE: test    ebp, ebp
0x48EAC0: jnz     short loc_48EAA2
0x48EAC2: mov     ebp, [edi]
0x48EAC4: test    ebp, ebp
0x48EAC6: jz      short loc_48EAED
0x48EAC8: mov     ecx, [ebp+0]
0x48EACB: test    ecx, ecx
0x48EACD: jz      short loc_48EAED
0x48EACF: call    sub_41DEF0
0x48EAD4: test    al, al
0x48EAD6: jnz     short loc_48EAE1
0x48EAD8: mov     ebp, [ebp+4]
0x48EADB: test    ebp, ebp
0x48EADD: jnz     short loc_48EAC8
0x48EADF: jmp     short loc_48EAED
0x48EAE1: mov     ecx, edi
0x48EAE3: call    sub_484740
0x48EAE8: cmp     eax, 1
0x48EAEB: jge     short loc_48EAFA
0x48EAED: mov     ecx, [edi+4]
0x48EAF0: mov     ebx, [esp+30h+var_14]
0x48EAF4: add     ecx, [ebx]
0x48EAF6: jz      short loc_48EB20
0x48EAF8: jmp     short loc_48EAFE
0x48EAFA: mov     ebx, [esp+30h+var_14]
0x48EAFE: mov     ecx, [edi+8]
0x48EB01: mov     edx, [ecx]
0x48EB03: mov     eax, [edx+78h]
0x48EB06: call    eax
0x48EB08: test    al, al
0x48EB0A: jz      short loc_48EB13
0x48EB0C: cmp     byte ptr [esp+30h+arg_8], 0
0x48EB11: jnz     short loc_48EB20
0x48EB13: push    0
0x48EB15: mov     ecx, edi
0x48EB17: call    ContainerEntryExtraData_HasWorn
0x48EB1C: test    al, al
0x48EB1E: jz      short loc_48EB34
0x48EB20: mov     ecx, [esi]
0x48EB22: test    ecx, ecx
0x48EB24: jz      loc_48ED0C
0x48EB2A: call    BSSimpleList_Clear
0x48EB2F: jmp     loc_48ED0C
0x48EB34: mov     ecx, edi
0x48EB36: call    sub_4845D0
0x48EB3B: test    eax, eax
0x48EB3D: jnz     loc_48EC13
0x48EB43: mov     ebp, [ebx]
0x48EB45: test    ebp, ebp
0x48EB47: jge     short loc_48EB4B
0x48EB49: neg     ebp
0x48EB4B: test    edi, edi
0x48EB4D: jz      short loc_48EB62
0x48EB4F: mov     ecx, edi
0x48EB51: call    sub_4845D0
0x48EB56: mov     ecx, [edi+4]
0x48EB59: add     ecx, ebp
0x48EB5B: sub     ecx, eax
0x48EB5D: mov     [esi+4], ecx
0x48EB60: jmp     short loc_48EB65
0x48EB62: mov     [esi+4], ebp
0x48EB65: test    edi, edi
0x48EB67: mov     eax, [ebx+4]
0x48EB6A: mov     [esi+8], eax
0x48EB6D: jz      short loc_48EBC2
0x48EB6F: mov     ecx, edi
0x48EB71: call    sub_484F20
0x48EB76: test    eax, eax
0x48EB78: jz      short loc_48EBC2
0x48EB7A: mov     edi, [edi]
0x48EB7C: test    edi, edi
0x48EB7E: jz      loc_48ECD0
0x48EB84: mov     ebx, [esp+30h+arg_4]
0x48EB88: jmp     short loc_48EB90
0x48EB8A: align 10h
0x48EB90: mov     ecx, [edi]
0x48EB92: test    ecx, ecx
0x48EB94: jz      loc_48ECD0
0x48EB9A: push    ebx
0x48EB9B: call    sub_41E710
0x48EBA0: mov     eax, [edi]
0x48EBA2: mov     ecx, [esi]
0x48EBA4: push    eax
0x48EBA5: call    BSSimpleList_PushBack
0x48EBAA: mov     edi, [edi+4]
0x48EBAD: test    edi, edi
0x48EBAF: jnz     short loc_48EB90
0x48EBB1: mov     ecx, [esp+30h+arg_0]
0x48EBB5: push    1
0x48EBB7: push    esi
0x48EBB8: call    ContainerExtraData_AddEntry
0x48EBBD: jmp     loc_48ED23
0x48EBC2: xor     edi, edi
0x48EBC4: push    edi
0x48EBC5: mov     ecx, esi
0x48EBC7: call    ContainerEntryExtraData_HasWorn
0x48EBCC: test    al, al
0x48EBCE: jnz     short loc_48EBF9
0x48EBD0: push    14h; Size
0x48EBD2: call    FormHeapAlloc
0x48EBD7: add     esp, 4
0x48EBDA: mov     [esp+30h+var_14], eax
0x48EBDE: cmp     eax, edi
0x48EBE0: mov     [esp+30h+var_4], edi
0x48EBE4: jz      short loc_48EBEF
0x48EBE6: mov     ecx, eax
0x48EBE8: call    ExtraDataList_constr
0x48EBED: mov     edi, eax
0x48EBEF: mov     edx, [esp+30h+arg_4]
0x48EBF3: push    edx
0x48EBF4: jmp     loc_48ECAE
0x48EBF9: mov     ecx, [esi]
0x48EBFB: cmp     ecx, edi
0x48EBFD: jz      short loc_48EC04
0x48EBFF: call    BSSimpleList_Clear
0x48EC04: mov     eax, [esi]
0x48EC06: push    eax
0x48EC07: call    FormHeapFree
0x48EC0C: mov     [esi], edi
0x48EC0E: jmp     loc_48ED1A
0x48EC13: cmp     dword ptr [edi], 0
0x48EC16: jz      short loc_48EC20
0x48EC18: mov     ecx, edi
0x48EC1A: call    sub_4845D0
0x48EC1F: nop
0x48EC20: mov     ecx, edi
0x48EC22: call    sub_4845D0
0x48EC27: mov     ecx, [ebx]
0x48EC29: add     ecx, [edi+4]
0x48EC2C: cmp     eax, ecx
0x48EC2E: jge     loc_48ED23
0x48EC34: cmp     dword ptr [esi], 0
0x48EC37: jnz     short loc_48EC5A
0x48EC39: push    8; Size
0x48EC3B: call    FormHeapAlloc
0x48EC40: add     esp, 4
0x48EC43: test    eax, eax
0x48EC45: jz      short loc_48EC56
0x48EC47: mov     dword ptr [eax], 0
0x48EC4D: mov     dword ptr [eax+4], 0
0x48EC54: jmp     short loc_48EC58
0x48EC56: xor     eax, eax
0x48EC58: mov     [esi], eax
0x48EC5A: mov     ecx, edi
0x48EC5C: call    sub_4845D0
0x48EC61: mov     edx, [ebx]
0x48EC63: add     edx, [edi+4]
0x48EC66: push    0
0x48EC68: sub     edx, eax
0x48EC6A: mov     [esi+4], edx
0x48EC6D: mov     eax, [ebx+4]
0x48EC70: mov     ecx, esi
0x48EC72: mov     [esi+8], eax
0x48EC75: call    ContainerEntryExtraData_HasWorn
0x48EC7A: test    al, al
0x48EC7C: jnz     loc_48EB20
0x48EC82: push    14h; Size
0x48EC84: call    FormHeapAlloc
0x48EC89: add     esp, 4
0x48EC8C: mov     [esp+30h+var_14], eax
0x48EC90: test    eax, eax
0x48EC92: mov     [esp+30h+var_4], 1
0x48EC9A: jz      short loc_48ECA7
0x48EC9C: mov     ecx, eax
0x48EC9E: call    ExtraDataList_constr
0x48ECA3: mov     edi, eax
0x48ECA5: jmp     short loc_48ECA9
0x48ECA7: xor     edi, edi
0x48ECA9: mov     eax, [esp+30h+arg_4]
0x48ECAD: push    eax
0x48ECAE: mov     ecx, edi
0x48ECB0: mov     [esp+34h+var_4], 0FFFFFFFFh
0x48ECB8: call    sub_41E710
0x48ECBD: mov     eax, [esi+4]
0x48ECC0: push    eax
0x48ECC1: mov     ecx, edi
0x48ECC3: call    ExtraDataList_SetExtraCount
0x48ECC8: mov     ecx, [esi]
0x48ECCA: push    edi
0x48ECCB: call    BSSimpleList_PushFront
0x48ECD0: mov     ecx, [esp+30h+arg_0]
0x48ECD4: push    1
0x48ECD6: push    esi
0x48ECD7: call    ContainerExtraData_AddEntry
0x48ECDC: jmp     short loc_48ED23
0x48ECDE: mov     edi, [esi]
0x48ECE0: test    edi, edi
0x48ECE2: jz      short loc_48ED0C
0x48ECE4: cmp     dword ptr [edi+4], 0
0x48ECE8: jz      short loc_48ED06
0x48ECEA: lea     ebx, [ebx+0]
0x48ECF0: mov     eax, [edi+4]
0x48ECF3: mov     ebp, [eax+4]
0x48ECF6: push    eax
0x48ECF7: call    FormHeapFree
0x48ECFC: add     esp, 4
0x48ECFF: test    ebp, ebp
0x48ED01: mov     [edi+4], ebp
0x48ED04: jnz     short loc_48ECF0
0x48ED06: mov     dword ptr [edi], 0
0x48ED0C: mov     eax, [esi]
0x48ED0E: push    eax
0x48ED0F: call    FormHeapFree
0x48ED14: mov     dword ptr [esi], 0
0x48ED1A: push    esi
0x48ED1B: call    FormHeapFree
0x48ED20: add     esp, 8
0x48ED23: mov     ecx, [esp+30h+var_1C]
0x48ED27: mov     eax, [ecx+4]
0x48ED2A: test    eax, eax
0x48ED2C: mov     ebp, [esp+30h+var_18]
0x48ED30: mov     [esp+30h+var_1C], eax
0x48ED34: jnz     loc_48E9F0
0x48ED3A: mov     eax, [ebp+0]
0x48ED3D: test    eax, eax
0x48ED3F: mov     [esp+30h+var_1C], eax
0x48ED43: jz      loc_48F166
0x48ED49: jmp     short loc_48ED54
0x48ED4B: jmp     short loc_48ED50
0x48ED4D: align 10h
0x48ED50: mov     eax, [esp+30h+var_1C]
0x48ED54: xor     edi, edi
0x48ED56: cmp     [eax], edi
0x48ED58: jz      loc_48F166
0x48ED5E: push    0Ch; Size
0x48ED60: call    FormHeapAlloc
0x48ED65: add     esp, 4
0x48ED68: cmp     eax, edi
0x48ED6A: jz      short loc_48ED78
0x48ED6C: mov     [eax+8], edi
0x48ED6F: mov     [eax], edi
0x48ED71: mov     [eax+4], edi
0x48ED74: mov     esi, eax
0x48ED76: jmp     short loc_48ED7A
0x48ED78: xor     esi, esi
0x48ED7A: cmp     [esi], edi
0x48ED7C: jnz     short loc_48ED97
0x48ED7E: push    8; Size
0x48ED80: call    FormHeapAlloc
0x48ED85: add     esp, 4
0x48ED88: cmp     eax, edi
0x48ED8A: jz      short loc_48ED93
0x48ED8C: mov     [eax], edi
0x48ED8E: mov     [eax+4], edi
0x48ED91: jmp     short loc_48ED95
0x48ED93: xor     eax, eax
0x48ED95: mov     [esi], eax
0x48ED97: mov     edx, [esp+30h+var_1C]
0x48ED9B: mov     ebx, [edx]
0x48ED9D: test    ebx, ebx
0x48ED9F: mov     [esp+30h+var_14], ebx
0x48EDA3: jz      loc_48F10E
0x48EDA9: cmp     dword ptr [ebx+4], 0
0x48EDAD: jle     loc_48F10E
0x48EDB3: mov     edi, [esp+30h+var_18]
0x48EDB7: mov     ecx, [edi+4]; this
0x48EDBA: test    ecx, ecx
0x48EDBC: jz      short loc_48EDEA
0x48EDBE: call    TESObjectREFR_GetContainer
0x48EDC3: test    eax, eax
0x48EDC5: jz      short loc_48EDEA
0x48EDC7: mov     ecx, [edi+4]; this
0x48EDCA: test    ecx, ecx
0x48EDCC: jz      short loc_48EDD5
0x48EDCE: call    TESObjectREFR_GetContainer
0x48EDD3: jmp     short loc_48EDD7
0x48EDD5: xor     eax, eax
0x48EDD7: mov     ecx, [ebx+8]
0x48EDDA: push    ecx; a2
0x48EDDB: mov     ecx, eax; this
0x48EDDD: call    TESContainer_HasForm
0x48EDE2: test    al, al
0x48EDE4: jnz     loc_48F10E
0x48EDEA: mov     ecx, ebx
0x48EDEC: call    sub_4845D0
0x48EDF1: test    eax, eax
0x48EDF3: jz      loc_48EF21
0x48EDF9: mov     edx, [esp+30h+var_14]
0x48EDFD: mov     ebx, [edx]
0x48EDFF: test    ebx, ebx
0x48EE01: mov     [esp+30h+arg_8], 0
0x48EE09: jz      short loc_48EE65
0x48EE0B: mov     ebp, [ebx]
0x48EE0D: test    ebp, ebp
0x48EE0F: jz      short loc_48EE65
0x48EE11: mov     eax, [esp+30h+arg_4]
0x48EE15: push    eax
0x48EE16: mov     ecx, ebp
0x48EE18: call    sub_41E710
0x48EE1D: test    ebp, ebp
0x48EE1F: mov     edi, [esi]
0x48EE21: jz      short loc_48EE50
0x48EE23: cmp     dword ptr [edi], 0
0x48EE26: jz      short loc_48EE4E
0x48EE28: push    8; Size
0x48EE2A: call    FormHeapAlloc
0x48EE2F: add     esp, 4
0x48EE32: test    eax, eax
0x48EE34: jz      short loc_48EE43
0x48EE36: mov     ecx, [edi]
0x48EE38: mov     [eax], ecx
0x48EE3A: mov     dword ptr [eax+4], 0
0x48EE41: jmp     short loc_48EE45
0x48EE43: xor     eax, eax
0x48EE45: mov     edx, [edi+4]
0x48EE48: mov     [eax+4], edx
0x48EE4B: mov     [edi+4], eax
0x48EE4E: mov     [edi], ebp
0x48EE50: mov     ebx, [ebx+4]
0x48EE53: mov     ecx, ebp
0x48EE55: call    ExtraDataList_GetExtraCount
0x48EE5A: movsx   eax, ax
0x48EE5D: add     [esp+30h+arg_8], eax
0x48EE61: test    ebx, ebx
0x48EE63: jnz     short loc_48EE0B
0x48EE65: mov     edi, [esp+30h+var_14]
0x48EE69: mov     eax, [edi+8]
0x48EE6C: mov     [esi+8], eax
0x48EE6F: mov     eax, [edi+4]
0x48EE72: push    0
0x48EE74: mov     ecx, esi
0x48EE76: mov     [esi+4], eax
0x48EE79: call    ContainerEntryExtraData_HasWorn
0x48EE7E: test    al, al
0x48EE80: jnz     short loc_48EEE3
0x48EE82: mov     ecx, [esp+30h+arg_8]
0x48EE86: cmp     ecx, [edi+4]
0x48EE89: jge     short loc_48EEE3
0x48EE8B: push    14h; Size
0x48EE8D: call    FormHeapAlloc
0x48EE92: add     esp, 4
0x48EE95: mov     [esp+30h+var_10], eax
0x48EE99: test    eax, eax
0x48EE9B: mov     [esp+30h+var_4], 2
0x48EEA3: jz      short loc_48EEB0
0x48EEA5: mov     ecx, eax
0x48EEA7: call    ExtraDataList_constr
0x48EEAC: mov     edi, eax
0x48EEAE: jmp     short loc_48EEB2
0x48EEB0: xor     edi, edi
0x48EEB2: mov     edx, [esp+30h+arg_4]
0x48EEB6: push    edx
0x48EEB7: mov     ecx, edi
0x48EEB9: mov     [esp+34h+var_4], 0FFFFFFFFh
0x48EEC1: call    sub_41E710
0x48EEC6: mov     eax, [esp+30h+var_14]
0x48EECA: movzx   ecx, word ptr [eax+4]
0x48EECE: sub     cx, word ptr [esp+30h+arg_8]
0x48EED3: push    ecx
0x48EED4: mov     ecx, edi
0x48EED6: call    ExtraDataList_SetExtraCount
0x48EEDB: mov     ecx, [esi]
0x48EEDD: push    edi
0x48EEDE: call    BSSimpleList_PushFront
0x48EEE3: push    0
0x48EEE5: mov     ecx, esi
0x48EEE7: call    ContainerEntryExtraData_HasWorn
0x48EEEC: test    al, al
0x48EEEE: jnz     short loc_48EF01
0x48EEF0: mov     ecx, [esp+30h+arg_0]
0x48EEF4: push    1
0x48EEF6: push    esi
0x48EEF7: call    ContainerExtraData_AddEntry
0x48EEFC: jmp     loc_48F153
0x48EF01: mov     edx, [esi]
0x48EF03: mov     ecx, [edx]
0x48EF05: test    ecx, ecx
0x48EF07: jz      short loc_48EF0E
0x48EF09: call    sub_4234B0
0x48EF0E: mov     ecx, [esi]
0x48EF10: test    ecx, ecx
0x48EF12: jz      short loc_48EF19
0x48EF14: call    BSSimpleList_Clear
0x48EF19: mov     eax, [esi]
0x48EF1B: push    eax
0x48EF1C: jmp     loc_48F13F
0x48EF21: mov     ebp, [ebx]
0x48EF23: xor     edi, edi
0x48EF25: cmp     ebp, edi
0x48EF27: jz      loc_48F0A5
0x48EF2D: mov     [esp+30h+arg_8], edi
0x48EF31: mov     eax, [ebp+0]
0x48EF34: test    eax, eax
0x48EF36: jz      short loc_48EF62
0x48EF38: test    edi, edi
0x48EF3A: jnz     short loc_48EF6A
0x48EF3C: mov     edi, eax
0x48EF3E: mov     ecx, edi
0x48EF40: call    ExtraDataList_GetExtraCount
0x48EF45: movsx   ecx, ax
0x48EF48: add     [esp+30h+arg_8], ecx
0x48EF4C: push    0
0x48EF4E: mov     ecx, edi
0x48EF50: call    ExtraDataList_IsExtraDefaultForContainer
0x48EF55: test    al, al
0x48EF57: jnz     short loc_48EF5B
0x48EF59: xor     edi, edi
0x48EF5B: mov     ebp, [ebp+4]
0x48EF5E: test    ebp, ebp
0x48EF60: jnz     short loc_48EF31
0x48EF62: test    edi, edi
0x48EF64: jz      loc_48F005
0x48EF6A: cmp     dword ptr [esi], 0
0x48EF6D: jnz     short loc_48EF90
0x48EF6F: push    8; Size
0x48EF71: call    FormHeapAlloc
0x48EF76: add     esp, 4
0x48EF79: test    eax, eax
0x48EF7B: jz      short loc_48EF8C
0x48EF7D: mov     dword ptr [eax], 0
0x48EF83: mov     dword ptr [eax+4], 0
0x48EF8A: jmp     short loc_48EF8E
0x48EF8C: xor     eax, eax
0x48EF8E: mov     [esi], eax
0x48EF90: mov     ebp, [esp+30h+arg_4]
0x48EF94: push    ebp
0x48EF95: mov     ecx, edi
0x48EF97: call    sub_41E710
0x48EF9C: mov     ecx, [esi]
0x48EF9E: push    edi
0x48EF9F: call    BSSimpleList_PushFront
0x48EFA4: push    0
0x48EFA6: mov     ecx, esi
0x48EFA8: call    ContainerEntryExtraData_HasWorn
0x48EFAD: test    al, al
0x48EFAF: jnz     loc_48F054
0x48EFB5: mov     edx, [esp+30h+arg_8]
0x48EFB9: cmp     edx, [ebx+4]
0x48EFBC: jge     loc_48F054
0x48EFC2: push    14h; Size
0x48EFC4: call    FormHeapAlloc
0x48EFC9: add     esp, 4
0x48EFCC: mov     [esp+30h+var_10], eax
0x48EFD0: test    eax, eax
0x48EFD2: mov     [esp+30h+var_4], 3
0x48EFDA: jz      short loc_48EFE7
0x48EFDC: mov     ecx, eax
0x48EFDE: call    ExtraDataList_constr
0x48EFE3: mov     edi, eax
0x48EFE5: jmp     short loc_48EFE9
0x48EFE7: xor     edi, edi
0x48EFE9: push    ebp
0x48EFEA: mov     ecx, edi
0x48EFEC: mov     [esp+34h+var_4], 0FFFFFFFFh
0x48EFF4: call    sub_41E710
0x48EFF9: movzx   eax, word ptr [ebx+4]
0x48EFFD: sub     ax, word ptr [esp+30h+arg_8]
0x48F002: push    eax
0x48F003: jmp     short loc_48F045
0x48F005: push    14h; Size
0x48F007: call    FormHeapAlloc
0x48F00C: add     esp, 4
0x48F00F: mov     [esp+30h+arg_8], eax
0x48F013: test    eax, eax
0x48F015: mov     [esp+30h+var_4], 4
0x48F01D: jz      short loc_48F02A
0x48F01F: mov     ecx, eax
0x48F021: call    ExtraDataList_constr
0x48F026: mov     edi, eax
0x48F028: jmp     short loc_48F02C
0x48F02A: xor     edi, edi
0x48F02C: mov     ecx, [esp+30h+arg_4]
0x48F030: push    ecx
0x48F031: mov     ecx, edi
0x48F033: mov     [esp+34h+var_4], 0FFFFFFFFh
0x48F03B: call    sub_41E710
0x48F040: movzx   edx, word ptr [esi+4]
0x48F044: push    edx
0x48F045: mov     ecx, edi
0x48F047: call    ExtraDataList_SetExtraCount
0x48F04C: mov     ecx, [esi]
0x48F04E: push    edi
0x48F04F: call    BSSimpleList_PushFront
0x48F054: mov     eax, [ebx+8]
0x48F057: mov     [esi+8], eax
0x48F05A: mov     ecx, [ebx+4]
0x48F05D: mov     [esi+4], ecx
0x48F060: push    0
0x48F062: mov     ecx, esi
0x48F064: call    ContainerEntryExtraData_HasWorn
0x48F069: test    al, al
0x48F06B: jnz     short loc_48F084
0x48F06D: mov     edx, [ebx+4]
0x48F070: mov     ecx, [esp+30h+arg_0]
0x48F074: push    1
0x48F076: push    esi
0x48F077: mov     [esi+4], edx
0x48F07A: call    ContainerExtraData_AddEntry
0x48F07F: jmp     loc_48F153
0x48F084: mov     eax, [esi]
0x48F086: mov     ecx, [eax]
0x48F088: test    ecx, ecx
0x48F08A: jz      short loc_48F091
0x48F08C: call    sub_4234B0
0x48F091: mov     ecx, [esi]
0x48F093: test    ecx, ecx
0x48F095: jz      loc_48F13C
0x48F09B: call    BSSimpleList_Clear
0x48F0A0: jmp     loc_48F13C
0x48F0A5: mov     eax, [ebx+8]
0x48F0A8: mov     [esi+8], eax
0x48F0AB: mov     eax, [ebx+4]
0x48F0AE: push    14h; Size
0x48F0B0: mov     [esi+4], eax
0x48F0B3: call    FormHeapAlloc
0x48F0B8: add     esp, 4
0x48F0BB: mov     [esp+30h+arg_8], eax
0x48F0BF: test    eax, eax
0x48F0C1: mov     [esp+30h+var_4], 5
0x48F0C9: jz      short loc_48F0D6
0x48F0CB: mov     ecx, eax
0x48F0CD: call    ExtraDataList_constr
0x48F0D2: mov     edi, eax
0x48F0D4: jmp     short loc_48F0D8
0x48F0D6: xor     edi, edi
0x48F0D8: mov     edx, [esp+30h+arg_4]
0x48F0DC: push    edx
0x48F0DD: mov     ecx, edi
0x48F0DF: mov     [esp+34h+var_4], 0FFFFFFFFh
0x48F0E7: call    sub_41E710
0x48F0EC: movzx   eax, word ptr [esi+4]
0x48F0F0: push    eax
0x48F0F1: mov     ecx, edi
0x48F0F3: call    ExtraDataList_SetExtraCount
0x48F0F8: mov     ecx, [esi]
0x48F0FA: push    edi
0x48F0FB: call    BSSimpleList_PushFront
0x48F100: mov     ecx, [esp+30h+arg_0]
0x48F104: push    1
0x48F106: push    esi
0x48F107: call    ContainerExtraData_AddEntry
0x48F10C: jmp     short loc_48F153
0x48F10E: mov     edi, [esi]
0x48F110: test    edi, edi
0x48F112: jz      short loc_48F13C
0x48F114: cmp     dword ptr [edi+4], 0
0x48F118: jz      short loc_48F136
0x48F11A: lea     ebx, [ebx+0]
0x48F120: mov     eax, [edi+4]
0x48F123: mov     ebp, [eax+4]
0x48F126: push    eax
0x48F127: call    FormHeapFree
0x48F12C: add     esp, 4
0x48F12F: test    ebp, ebp
0x48F131: mov     [edi+4], ebp
0x48F134: jnz     short loc_48F120
0x48F136: mov     dword ptr [edi], 0
0x48F13C: mov     ecx, [esi]
0x48F13E: push    ecx
0x48F13F: call    FormHeapFree
0x48F144: push    esi
0x48F145: mov     dword ptr [esi], 0
0x48F14B: call    FormHeapFree
0x48F150: add     esp, 8
0x48F153: mov     edx, [esp+30h+var_1C]
0x48F157: mov     eax, [edx+4]
0x48F15A: test    eax, eax
0x48F15C: mov     [esp+30h+var_1C], eax
0x48F160: jnz     loc_48ED50
0x48F166: mov     ecx, [esp+30h+var_C]
0x48F16A: mov     large fs:0, ecx
0x48F171: pop     ecx
0x48F172: pop     edi
0x48F173: pop     esi
0x48F174: pop     ebp
0x48F175: pop     ebx
0x48F176: add     esp, 1Ch
0x48F179: retn    0Ch
