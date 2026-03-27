0x5E5C80: push    ebx
0x5E5C81: push    ebp
0x5E5C82: push    esi
0x5E5C83: mov     ebx, ecx
0x5E5C85: push    edi
0x5E5C86: lea     edi, [ebx+44h]
0x5E5C89: mov     ecx, edi; this
0x5E5C8B: xor     ebp, ebp
0x5E5C8D: call    ExtraDataList_GetContainerChanges
0x5E5C92: test    eax, eax
0x5E5C94: jz      short loc_5E5CD7
0x5E5C96: push    1
0x5E5C98: push    ebp
0x5E5C99: mov     ecx, eax
0x5E5C9B: call    ContainerExtraData_GetEquippedInstance
0x5E5CA0: mov     esi, eax
0x5E5CA2: test    esi, esi
0x5E5CA4: jz      short loc_5E5CD7
0x5E5CA6: mov     ecx, [esi+8]
0x5E5CA9: test    ecx, ecx
0x5E5CAB: jz      short loc_5E5CC7
0x5E5CAD: cmp     byte ptr [ecx+4], 14h
0x5E5CB1: jnz     short loc_5E5CC7
0x5E5CB3: call    TESObjectARMO_ISHeavyArmor
0x5E5CB8: movzx   eax, al
0x5E5CBB: cmp     eax, [esp+10h+arg_0]
0x5E5CBF: jnz     short loc_5E5CC7
0x5E5CC1: mov     ebp, ds:0B36EC8h
0x5E5CC7: mov     ecx, esi
0x5E5CC9: call    ContainerEntryExtraData_DestroyDataTable
0x5E5CCE: push    esi
0x5E5CCF: call    FormHeapFree
0x5E5CD4: add     esp, 4
0x5E5CD7: mov     ecx, edi; this
0x5E5CD9: call    ExtraDataList_GetContainerChanges
0x5E5CDE: test    eax, eax
0x5E5CE0: jz      short loc_5E5D24
0x5E5CE2: push    1
0x5E5CE4: push    1
0x5E5CE6: mov     ecx, eax
0x5E5CE8: call    ContainerExtraData_GetEquippedInstance
0x5E5CED: mov     esi, eax
0x5E5CEF: test    esi, esi
0x5E5CF1: jz      short loc_5E5D24
0x5E5CF3: mov     ecx, [esi+8]
0x5E5CF6: test    ecx, ecx
0x5E5CF8: jz      short loc_5E5D14
0x5E5CFA: cmp     byte ptr [ecx+4], 14h
0x5E5CFE: jnz     short loc_5E5D14
0x5E5D00: call    TESObjectARMO_ISHeavyArmor
0x5E5D05: movzx   ecx, al
0x5E5D08: cmp     ecx, [esp+10h+arg_0]
0x5E5D0C: jnz     short loc_5E5D14
0x5E5D0E: add     ebp, ds:0B36EC8h
0x5E5D14: mov     ecx, esi
0x5E5D16: call    ContainerEntryExtraData_DestroyDataTable
0x5E5D1B: push    esi
0x5E5D1C: call    FormHeapFree
0x5E5D21: add     esp, 4
0x5E5D24: mov     ecx, edi; this
0x5E5D26: call    ExtraDataList_GetContainerChanges
0x5E5D2B: test    eax, eax
0x5E5D2D: jz      short loc_5E5D71
0x5E5D2F: push    1
0x5E5D31: push    2
0x5E5D33: mov     ecx, eax
0x5E5D35: call    ContainerExtraData_GetEquippedInstance
0x5E5D3A: mov     esi, eax
0x5E5D3C: test    esi, esi
0x5E5D3E: jz      short loc_5E5D71
0x5E5D40: mov     ecx, [esi+8]
0x5E5D43: test    ecx, ecx
0x5E5D45: jz      short loc_5E5D61
0x5E5D47: cmp     byte ptr [ecx+4], 14h
0x5E5D4B: jnz     short loc_5E5D61
0x5E5D4D: call    TESObjectARMO_ISHeavyArmor
0x5E5D52: movzx   edx, al
0x5E5D55: cmp     edx, [esp+10h+arg_0]
0x5E5D59: jnz     short loc_5E5D61
0x5E5D5B: add     ebp, ds:0B36EB8h
0x5E5D61: mov     ecx, esi
0x5E5D63: call    ContainerEntryExtraData_DestroyDataTable
0x5E5D68: push    esi
0x5E5D69: call    FormHeapFree
0x5E5D6E: add     esp, 4
0x5E5D71: mov     ecx, edi; this
0x5E5D73: call    ExtraDataList_GetContainerChanges
0x5E5D78: test    eax, eax
0x5E5D7A: jz      short loc_5E5DBE
0x5E5D7C: push    1
0x5E5D7E: push    3
0x5E5D80: mov     ecx, eax
0x5E5D82: call    ContainerExtraData_GetEquippedInstance
0x5E5D87: mov     esi, eax
0x5E5D89: test    esi, esi
0x5E5D8B: jz      short loc_5E5DBE
0x5E5D8D: mov     ecx, [esi+8]
0x5E5D90: test    ecx, ecx
0x5E5D92: jz      short loc_5E5DAE
0x5E5D94: cmp     byte ptr [ecx+4], 14h
0x5E5D98: jnz     short loc_5E5DAE
0x5E5D9A: call    TESObjectARMO_ISHeavyArmor
0x5E5D9F: movzx   eax, al
0x5E5DA2: cmp     eax, [esp+10h+arg_0]
0x5E5DA6: jnz     short loc_5E5DAE
0x5E5DA8: add     ebp, ds:0B36EC0h
0x5E5DAE: mov     ecx, esi
0x5E5DB0: call    ContainerEntryExtraData_DestroyDataTable
0x5E5DB5: push    esi
0x5E5DB6: call    FormHeapFree
0x5E5DBB: add     esp, 4
0x5E5DBE: mov     ecx, edi; this
0x5E5DC0: call    ExtraDataList_GetContainerChanges
0x5E5DC5: test    eax, eax
0x5E5DC7: jz      short loc_5E5E0B
0x5E5DC9: push    1
0x5E5DCB: push    4
0x5E5DCD: mov     ecx, eax
0x5E5DCF: call    ContainerExtraData_GetEquippedInstance
0x5E5DD4: mov     esi, eax
0x5E5DD6: test    esi, esi
0x5E5DD8: jz      short loc_5E5E0B
0x5E5DDA: mov     ecx, [esi+8]
0x5E5DDD: test    ecx, ecx
0x5E5DDF: jz      short loc_5E5DFB
0x5E5DE1: cmp     byte ptr [ecx+4], 14h
0x5E5DE5: jnz     short loc_5E5DFB
0x5E5DE7: call    TESObjectARMO_ISHeavyArmor
0x5E5DEC: movzx   ecx, al
0x5E5DEF: cmp     ecx, [esp+10h+arg_0]
0x5E5DF3: jnz     short loc_5E5DFB
0x5E5DF5: add     ebp, ds:0B36ED0h
0x5E5DFB: mov     ecx, esi
0x5E5DFD: call    ContainerEntryExtraData_DestroyDataTable
0x5E5E02: push    esi
0x5E5E03: call    FormHeapFree
0x5E5E08: add     esp, 4
0x5E5E0B: mov     ecx, edi; this
0x5E5E0D: call    ExtraDataList_GetContainerChanges
0x5E5E12: test    eax, eax
0x5E5E14: jz      short loc_5E5E58
0x5E5E16: push    1
0x5E5E18: push    5
0x5E5E1A: mov     ecx, eax
0x5E5E1C: call    ContainerExtraData_GetEquippedInstance
0x5E5E21: mov     esi, eax
0x5E5E23: test    esi, esi
0x5E5E25: jz      short loc_5E5E58
0x5E5E27: mov     ecx, [esi+8]
0x5E5E2A: test    ecx, ecx
0x5E5E2C: jz      short loc_5E5E48
0x5E5E2E: cmp     byte ptr [ecx+4], 14h
0x5E5E32: jnz     short loc_5E5E48
0x5E5E34: call    TESObjectARMO_ISHeavyArmor
0x5E5E39: movzx   edx, al
0x5E5E3C: cmp     edx, [esp+10h+arg_0]
0x5E5E40: jnz     short loc_5E5E48
0x5E5E42: add     ebp, ds:0B36ED8h
0x5E5E48: mov     ecx, esi
0x5E5E4A: call    ContainerEntryExtraData_DestroyDataTable
0x5E5E4F: push    esi
0x5E5E50: call    FormHeapFree
0x5E5E55: add     esp, 4
0x5E5E58: mov     ecx, [ebx+58h]
0x5E5E5B: test    ecx, ecx
0x5E5E5D: jz      short loc_5E5E92
0x5E5E5F: mov     eax, [ecx]
0x5E5E61: mov     edx, [eax+0F8h]
0x5E5E67: push    1
0x5E5E69: call    edx
0x5E5E6B: test    eax, eax
0x5E5E6D: jz      short loc_5E5E92
0x5E5E6F: mov     eax, [eax+8]
0x5E5E72: test    eax, eax
0x5E5E74: jz      short loc_5E5E92
0x5E5E76: cmp     byte ptr [eax+4], 14h
0x5E5E7A: jnz     short loc_5E5E92
0x5E5E7C: mov     ecx, eax
0x5E5E7E: call    TESObjectARMO_ISHeavyArmor
0x5E5E83: movzx   eax, al
0x5E5E86: cmp     eax, [esp+10h+arg_0]
0x5E5E8A: jnz     short loc_5E5E92
0x5E5E8C: add     ebp, ds:0B36EE0h
0x5E5E92: test    ebp, ebp
0x5E5E94: jge     short loc_5E5E9F
0x5E5E96: pop     edi
0x5E5E97: pop     esi
0x5E5E98: pop     ebp
0x5E5E99: xor     eax, eax
0x5E5E9B: pop     ebx
0x5E5E9C: retn    4
0x5E5E9F: cmp     ebp, 64h ; 'd'
0x5E5EA2: mov     eax, 64h ; 'd'
0x5E5EA7: jg      short loc_5E5EAB
0x5E5EA9: mov     eax, ebp
0x5E5EAB: pop     edi
0x5E5EAC: pop     esi
0x5E5EAD: pop     ebp
0x5E5EAE: pop     ebx
0x5E5EAF: retn    4
