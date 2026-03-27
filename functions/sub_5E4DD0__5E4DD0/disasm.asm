0x5E4DD0: push    ebx
0x5E4DD1: mov     ebx, ecx
0x5E4DD3: mov     eax, [ebx]
0x5E4DD5: mov     edx, [eax+170h]
0x5E4DDB: push    esi
0x5E4DDC: push    edi
0x5E4DDD: xor     esi, esi
0x5E4DDF: call    edx
0x5E4DE1: mov     edi, eax
0x5E4DE3: test    edi, edi
0x5E4DE5: jz      short loc_5E4DF9
0x5E4DE7: mov     eax, [ebx]
0x5E4DE9: mov     edx, [eax+190h]
0x5E4DEF: mov     ecx, ebx
0x5E4DF1: call    edx
0x5E4DF3: test    al, al
0x5E4DF5: jz      short loc_5E4DF9
0x5E4DF7: mov     esi, edi
0x5E4DF9: lea     edi, [esi+58h]
0x5E4DFC: test    edi, edi
0x5E4DFE: jz      short loc_5E4E35
0x5E4E00: mov     eax, [edi]
0x5E4E02: test    eax, eax
0x5E4E04: jz      short loc_5E4E2E
0x5E4E06: lea     esi, [eax+18h]
0x5E4E09: mov     eax, [esi]
0x5E4E0B: mov     edx, [eax+18h]
0x5E4E0E: mov     ecx, esi
0x5E4E10: call    edx
0x5E4E12: cmp     eax, 4
0x5E4E15: jz      short loc_5E4E25
0x5E4E17: mov     eax, [esi]
0x5E4E19: mov     edx, [eax+18h]
0x5E4E1C: mov     ecx, esi
0x5E4E1E: call    edx
0x5E4E20: cmp     eax, 1
0x5E4E23: jnz     short loc_5E4E2E
0x5E4E25: push    0
0x5E4E27: mov     ecx, esi
0x5E4E29: call    sub_41A610
0x5E4E2E: mov     edi, [edi+4]
0x5E4E31: test    edi, edi
0x5E4E33: jnz     short loc_5E4E00
0x5E4E35: mov     eax, [ebx]
0x5E4E37: mov     edx, [eax+268h]
0x5E4E3D: mov     ecx, ebx
0x5E4E3F: call    edx
0x5E4E41: test    eax, eax
0x5E4E43: jz      short loc_5E4E8D
0x5E4E45: mov     eax, [ebx]
0x5E4E47: mov     edx, [eax+268h]
0x5E4E4D: mov     ecx, ebx
0x5E4E4F: call    edx
0x5E4E51: mov     edi, eax
0x5E4E53: add     edi, 3Ch ; '<'
0x5E4E56: jz      short loc_5E4E8D
0x5E4E58: mov     eax, [edi]
0x5E4E5A: test    eax, eax
0x5E4E5C: jz      short loc_5E4E86
0x5E4E5E: lea     esi, [eax+18h]
0x5E4E61: mov     eax, [esi]
0x5E4E63: mov     edx, [eax+18h]
0x5E4E66: mov     ecx, esi
0x5E4E68: call    edx
0x5E4E6A: cmp     eax, 4
0x5E4E6D: jz      short loc_5E4E7D
0x5E4E6F: mov     eax, [esi]
0x5E4E71: mov     edx, [eax+18h]
0x5E4E74: mov     ecx, esi
0x5E4E76: call    edx
0x5E4E78: cmp     eax, 1
0x5E4E7B: jnz     short loc_5E4E86
0x5E4E7D: push    0
0x5E4E7F: mov     ecx, esi
0x5E4E81: call    sub_41A610
0x5E4E86: mov     edi, [edi+4]
0x5E4E89: test    edi, edi
0x5E4E8B: jnz     short loc_5E4E58
0x5E4E8D: mov     ecx, ebx; this
0x5E4E8F: call    Actor_IsNPC
0x5E4E94: test    al, al
0x5E4E96: jz      short loc_5E4F15
0x5E4E98: mov     eax, [ebx]
0x5E4E9A: mov     edx, [eax+170h]
0x5E4EA0: mov     ecx, ebx
0x5E4EA2: call    edx
0x5E4EA4: test    eax, eax
0x5E4EA6: jz      short loc_5E4F15
0x5E4EA8: cmp     dword ptr [eax+0E8h], 0
0x5E4EAF: jz      short loc_5E4F15
0x5E4EB1: mov     ecx, ebx; this
0x5E4EB3: call    Actor_IsNPC
0x5E4EB8: test    al, al
0x5E4EBA: jz      short loc_5E4ED4
0x5E4EBC: mov     eax, [ebx]
0x5E4EBE: mov     edx, [eax+170h]
0x5E4EC4: mov     ecx, ebx
0x5E4EC6: call    edx
0x5E4EC8: test    eax, eax
0x5E4ECA: jz      short loc_5E4ED4
0x5E4ECC: mov     eax, [eax+0E8h]
0x5E4ED2: jmp     short loc_5E4ED6
0x5E4ED4: xor     eax, eax
0x5E4ED6: lea     edi, [eax+30h]
0x5E4ED9: test    edi, edi
0x5E4EDB: jz      short loc_5E4F15
0x5E4EDD: lea     ecx, [ecx+0]
0x5E4EE0: mov     eax, [edi]
0x5E4EE2: test    eax, eax
0x5E4EE4: jz      short loc_5E4F0E
0x5E4EE6: lea     esi, [eax+18h]
0x5E4EE9: mov     eax, [esi]
0x5E4EEB: mov     edx, [eax+18h]
0x5E4EEE: mov     ecx, esi
0x5E4EF0: call    edx
0x5E4EF2: cmp     eax, 4
0x5E4EF5: jz      short loc_5E4F05
0x5E4EF7: mov     eax, [esi]
0x5E4EF9: mov     edx, [eax+18h]
0x5E4EFC: mov     ecx, esi
0x5E4EFE: call    edx
0x5E4F00: cmp     eax, 1
0x5E4F03: jnz     short loc_5E4F0E
0x5E4F05: push    0
0x5E4F07: mov     ecx, esi
0x5E4F09: call    sub_41A610
0x5E4F0E: mov     edi, [edi+4]
0x5E4F11: test    edi, edi
0x5E4F13: jnz     short loc_5E4EE0
0x5E4F15: mov     eax, [ebx]
0x5E4F17: mov     edx, [eax+170h]
0x5E4F1D: mov     ecx, ebx
0x5E4F1F: call    edx
0x5E4F21: mov     esi, eax
0x5E4F23: test    esi, esi
0x5E4F25: jz      short loc_5E4F3C
0x5E4F27: mov     eax, [ebx]
0x5E4F29: mov     edx, [eax+190h]
0x5E4F2F: mov     ecx, ebx
0x5E4F31: call    edx
0x5E4F33: test    al, al
0x5E4F35: jz      short loc_5E4F3C
0x5E4F37: lea     eax, [esi+44h]
0x5E4F3A: jmp     short loc_5E4F3E
0x5E4F3C: xor     eax, eax
0x5E4F3E: push    eax
0x5E4F3F: push    ebx; a1
0x5E4F40: call    ContainerExtraData_GetContainerExtraDataForRef
0x5E4F45: add     esp, 8
0x5E4F48: mov     ebx, eax
0x5E4F4A: xor     edi, edi
0x5E4F4C: lea     esp, [esp+0]
0x5E4F50: mov     eax, ds:dword_B1489C[edi]
0x5E4F56: push    0
0x5E4F58: push    eax
0x5E4F59: mov     ecx, ebx
0x5E4F5B: call    ContainerExtraData_GetEquippedInstance
0x5E4F60: mov     esi, eax
0x5E4F62: test    esi, esi
0x5E4F64: jz      short loc_5E4F89
0x5E4F66: mov     eax, [esi+8]
0x5E4F69: push    0; int
0x5E4F6B: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E4F70: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5E4F75: push    0; int
0x5E4F77: push    eax; void *
0x5E4F78: call    OblivionDynamicCast
0x5E4F7D: add     esp, 14h
0x5E4F80: test    eax, eax
0x5E4F82: jz      short loc_5E4F89
0x5E4F84: mov     eax, [eax+4]
0x5E4F87: jmp     short loc_5E4F8B
0x5E4F89: xor     eax, eax
0x5E4F8B: test    eax, eax
0x5E4F8D: jz      short loc_5E4F99
0x5E4F8F: push    0
0x5E4F91: lea     ecx, [eax+18h]
0x5E4F94: call    sub_41A610
0x5E4F99: test    esi, esi
0x5E4F9B: jz      short loc_5E4FAD
0x5E4F9D: mov     ecx, esi
0x5E4F9F: call    ContainerEntryExtraData_DestroyDataTable
0x5E4FA4: push    esi
0x5E4FA5: call    FormHeapFree
0x5E4FAA: add     esp, 4
0x5E4FAD: add     edi, 4
0x5E4FB0: cmp     edi, 28h ; '('
0x5E4FB3: jb      short loc_5E4F50
0x5E4FB5: pop     edi
0x5E4FB6: pop     esi
0x5E4FB7: pop     ebx
0x5E4FB8: retn
