0x647BD0: sub     esp, 14h
0x647BD3: push    ebx
0x647BD4: push    ebp
0x647BD5: push    esi
0x647BD6: mov     esi, [esp+20h+arg_4]
0x647BDA: xor     ebp, ebp
0x647BDC: cmp     esi, ebp
0x647BDE: mov     ebx, ecx
0x647BE0: push    edi
0x647BE1: mov     [esp+24h+var_14], ebx
0x647BE5: jz      loc_64806E
0x647BEB: mov     ecx, esi; this
0x647BED: call    TESObjectREFR_GetContainer
0x647BF2: cmp     eax, ebp
0x647BF4: jz      loc_64806E
0x647BFA: push    eax
0x647BFB: push    esi; a1
0x647BFC: call    ContainerExtraData_GetContainerExtraDataForRef
0x647C01: mov     esi, eax
0x647C03: add     esp, 8
0x647C06: cmp     esi, ebp
0x647C08: mov     [esp+24h+var_10], esi
0x647C0C: jz      loc_64806E
0x647C12: mov     eax, [esp+24h+arg_8]
0x647C16: add     eax, 0FFFFFFF3h; switch 13 cases
0x647C19: cmp     eax, 0Ch
0x647C1C: ja      def_647C29; jumptable 00647C29 default case, cases 14-20,23
0x647C22: movzx   eax, ds:byte_648110[eax]
0x647C29: jmp     ds:jpt_647C29[eax*4]; switch jump
0x647C30: mov     ecx, esi; jumptable 00647C29 case 21
0x647C32: call    ContainerExtraData_GetCount
0x647C37: mov     edi, eax
0x647C39: test    edi, edi
0x647C3B: mov     [esp+24h+arg_8], edi
0x647C3F: jle     def_647C29; jumptable 00647C29 default case, cases 14-20,23
0x647C45: jmp     short loc_647C4B
0x647C47: mov     esi, [esp+24h+var_10]
0x647C4B: push    ebp
0x647C4C: mov     ecx, esi
0x647C4E: call    ContainerExtraData_GetEntryForItem
0x647C53: mov     esi, eax
0x647C55: test    esi, esi
0x647C57: jz      loc_647D0E
0x647C5D: mov     eax, [esi+8]
0x647C60: push    0; int
0x647C62: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x647C67: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647C6C: push    0; int
0x647C6E: push    eax; void *
0x647C6F: call    OblivionDynamicCast
0x647C74: push    0; int
0x647C76: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x647C7B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647C80: mov     edi, eax
0x647C82: mov     eax, [esi+8]
0x647C85: push    0; int
0x647C87: push    eax; void *
0x647C88: call    OblivionDynamicCast
0x647C8D: push    0; int
0x647C8F: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x647C94: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647C99: mov     ebx, eax
0x647C9B: mov     eax, [esi+8]
0x647C9E: push    0; int
0x647CA0: push    eax; void *
0x647CA1: call    OblivionDynamicCast
0x647CA6: add     esp, 3Ch
0x647CA9: test    edi, edi
0x647CAB: jnz     short loc_647CB5
0x647CAD: test    ebx, ebx
0x647CAF: jnz     short loc_647CB5
0x647CB1: test    eax, eax
0x647CB3: jz      short loc_647CFA
0x647CB5: push    20h ; ' '; Size
0x647CB7: call    FormHeapAlloc
0x647CBC: add     esp, 4
0x647CBF: test    eax, eax
0x647CC1: jz      short loc_647CCE
0x647CC3: mov     ecx, eax
0x647CC5: call    sub_628EB0
0x647CCA: mov     edi, eax
0x647CCC: jmp     short loc_647CD0
0x647CCE: xor     edi, edi
0x647CD0: mov     ecx, [esi+8]
0x647CD3: mov     [edi+4], ecx
0x647CD6: mov     ecx, esi
0x647CD8: call    TESHealthForm_GetHealth
0x647CDD: mov     edx, [esp+24h+arg_4]
0x647CE1: mov     ecx, [esp+24h+var_14]
0x647CE5: push    edi
0x647CE6: add     ecx, 3Ch ; '<'
0x647CE9: mov     [edi+10h], eax
0x647CEC: mov     [edi], edx
0x647CEE: mov     dword ptr [edi+1Ch], 1
0x647CF5: call    BSSimpleList_PushFront
0x647CFA: mov     ecx, esi
0x647CFC: call    ContainerEntryExtraData_DestroyDataTable
0x647D01: push    esi
0x647D02: call    FormHeapFree
0x647D07: mov     edi, [esp+28h+arg_8]
0x647D0B: add     esp, 4
0x647D0E: add     ebp, 1
0x647D11: cmp     ebp, edi
0x647D13: jl      loc_647C47
0x647D19: pop     edi
0x647D1A: pop     esi
0x647D1B: pop     ebp
0x647D1C: pop     ebx
0x647D1D: add     esp, 14h
0x647D20: retn    0Ch
0x647D23: mov     ecx, esi; jumptable 00647C29 case 22
0x647D25: call    ContainerExtraData_GetCount
0x647D2A: mov     ebx, eax
0x647D2C: xor     edi, edi
0x647D2E: test    ebx, ebx
0x647D30: mov     [esp+24h+arg_0], ebx
0x647D34: mov     [esp+24h+arg_8], edi
0x647D38: jle     def_647C29; jumptable 00647C29 default case, cases 14-20,23
0x647D3E: jmp     short loc_647D44
0x647D40: mov     esi, [esp+24h+var_10]
0x647D44: push    edi
0x647D45: mov     ecx, esi
0x647D47: call    ContainerExtraData_GetEntryForItem
0x647D4C: mov     esi, eax
0x647D4E: test    esi, esi
0x647D50: jz      loc_647E28
0x647D56: mov     eax, [esi+8]
0x647D59: push    0; int
0x647D5B: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x647D60: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647D65: push    0; int
0x647D67: push    eax; void *
0x647D68: call    OblivionDynamicCast
0x647D6D: push    0; int
0x647D6F: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x647D74: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647D79: mov     edi, eax
0x647D7B: mov     eax, [esi+8]
0x647D7E: push    0; int
0x647D80: push    eax; void *
0x647D81: call    OblivionDynamicCast
0x647D86: push    0; int
0x647D88: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x647D8D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647D92: mov     ebx, eax
0x647D94: mov     eax, [esi+8]
0x647D97: push    0; int
0x647D99: push    eax; void *
0x647D9A: call    OblivionDynamicCast
0x647D9F: push    0; int
0x647DA1: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x647DA6: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647DAB: mov     ebp, eax
0x647DAD: mov     eax, [esi+8]
0x647DB0: push    0; int
0x647DB2: push    eax; void *
0x647DB3: call    OblivionDynamicCast
0x647DB8: add     esp, 50h
0x647DBB: test    edi, edi
0x647DBD: jnz     short loc_647DCB
0x647DBF: test    ebx, ebx
0x647DC1: jnz     short loc_647DCB
0x647DC3: test    ebp, ebp
0x647DC5: jnz     short loc_647DCB
0x647DC7: test    eax, eax
0x647DC9: jz      short loc_647E10
0x647DCB: push    20h ; ' '; Size
0x647DCD: call    FormHeapAlloc
0x647DD2: add     esp, 4
0x647DD5: test    eax, eax
0x647DD7: jz      short loc_647DE4
0x647DD9: mov     ecx, eax
0x647DDB: call    sub_628EB0
0x647DE0: mov     edi, eax
0x647DE2: jmp     short loc_647DE6
0x647DE4: xor     edi, edi
0x647DE6: mov     eax, [esi+8]
0x647DE9: mov     ecx, esi
0x647DEB: mov     [edi+4], eax
0x647DEE: call    TESHealthForm_GetHealth
0x647DF3: mov     ecx, [esp+24h+arg_4]
0x647DF7: mov     [edi], ecx
0x647DF9: mov     ecx, [esp+24h+var_14]
0x647DFD: push    edi
0x647DFE: add     ecx, 3Ch ; '<'
0x647E01: mov     [edi+10h], eax
0x647E04: mov     dword ptr [edi+1Ch], 1
0x647E0B: call    BSSimpleList_PushFront
0x647E10: mov     ecx, esi
0x647E12: call    ContainerEntryExtraData_DestroyDataTable
0x647E17: push    esi
0x647E18: call    FormHeapFree
0x647E1D: mov     ebx, [esp+28h+arg_0]
0x647E21: mov     edi, [esp+28h+arg_8]
0x647E25: add     esp, 4
0x647E28: add     edi, 1
0x647E2B: cmp     edi, ebx
0x647E2D: mov     [esp+24h+arg_8], edi
0x647E31: jl      loc_647D40
0x647E37: pop     edi
0x647E38: pop     esi
0x647E39: pop     ebp
0x647E3A: pop     ebx
0x647E3B: add     esp, 14h
0x647E3E: retn    0Ch
0x647E41: mov     ecx, esi; jumptable 00647C29 case 13
0x647E43: call    ContainerExtraData_GetCount
0x647E48: xor     ebx, ebx
0x647E4A: test    eax, eax
0x647E4C: mov     [esp+24h+arg_8], eax
0x647E50: jle     def_647C29; jumptable 00647C29 default case, cases 14-20,23
0x647E56: push    ebx
0x647E57: mov     ecx, esi
0x647E59: call    ContainerExtraData_GetEntryForItem
0x647E5E: mov     edi, eax
0x647E60: test    edi, edi
0x647E62: jz      short loc_647EDB
0x647E64: mov     eax, [edi+8]
0x647E67: push    0; int
0x647E69: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x647E6E: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647E73: push    0; int
0x647E75: push    eax; void *
0x647E76: call    OblivionDynamicCast
0x647E7B: add     esp, 14h
0x647E7E: test    eax, eax
0x647E80: jz      short loc_647ECB
0x647E82: push    20h ; ' '; Size
0x647E84: call    FormHeapAlloc
0x647E89: add     esp, 4
0x647E8C: test    eax, eax
0x647E8E: jz      short loc_647E9B
0x647E90: mov     ecx, eax
0x647E92: call    sub_628EB0
0x647E97: mov     esi, eax
0x647E99: jmp     short loc_647E9D
0x647E9B: xor     esi, esi
0x647E9D: mov     edx, [edi+8]
0x647EA0: mov     ecx, edi
0x647EA2: mov     [esi+4], edx
0x647EA5: call    TESHealthForm_GetHealth
0x647EAA: mov     ecx, [esp+24h+var_14]
0x647EAE: mov     [esi+10h], eax
0x647EB1: mov     eax, [esp+24h+arg_4]
0x647EB5: push    esi
0x647EB6: add     ecx, 3Ch ; '<'
0x647EB9: mov     [esi], eax
0x647EBB: mov     dword ptr [esi+1Ch], 1
0x647EC2: call    BSSimpleList_PushFront
0x647EC7: mov     esi, [esp+24h+var_10]
0x647ECB: mov     ecx, edi
0x647ECD: call    ContainerEntryExtraData_DestroyDataTable
0x647ED2: push    edi
0x647ED3: call    FormHeapFree
0x647ED8: add     esp, 4
0x647EDB: add     ebx, 1
0x647EDE: cmp     ebx, [esp+24h+arg_8]
0x647EE2: jl      loc_647E56
0x647EE8: pop     edi
0x647EE9: pop     esi
0x647EEA: pop     ebp
0x647EEB: pop     ebx
0x647EEC: add     esp, 14h
0x647EEF: retn    0Ch
0x647EF2: mov     ecx, esi; jumptable 00647C29 case 24
0x647EF4: call    ContainerExtraData_GetCount
0x647EF9: xor     ebx, ebx
0x647EFB: test    eax, eax
0x647EFD: mov     [esp+24h+arg_8], eax
0x647F01: jle     def_647C29; jumptable 00647C29 default case, cases 14-20,23
0x647F07: push    ebx
0x647F08: mov     ecx, esi
0x647F0A: call    ContainerExtraData_GetEntryForItem
0x647F0F: mov     edi, eax
0x647F11: test    edi, edi
0x647F13: jz      loc_647F99
0x647F19: mov     eax, [edi+8]
0x647F1C: push    0; int
0x647F1E: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x647F23: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647F28: push    0; int
0x647F2A: push    eax; void *
0x647F2B: call    OblivionDynamicCast
0x647F30: add     esp, 14h
0x647F33: test    eax, eax
0x647F35: jz      short loc_647F89
0x647F37: cmp     byte ptr [eax+90h], 3
0x647F3E: jg      short loc_647F89
0x647F40: push    20h ; ' '; Size
0x647F42: call    FormHeapAlloc
0x647F47: add     esp, 4
0x647F4A: test    eax, eax
0x647F4C: jz      short loc_647F59
0x647F4E: mov     ecx, eax
0x647F50: call    sub_628EB0
0x647F55: mov     esi, eax
0x647F57: jmp     short loc_647F5B
0x647F59: xor     esi, esi
0x647F5B: mov     ecx, [edi+8]
0x647F5E: mov     [esi+4], ecx
0x647F61: mov     ecx, edi
0x647F63: call    TESHealthForm_GetHealth
0x647F68: mov     edx, [esp+24h+arg_4]
0x647F6C: mov     ecx, [esp+24h+var_14]
0x647F70: push    esi
0x647F71: add     ecx, 3Ch ; '<'
0x647F74: mov     [esi+10h], eax
0x647F77: mov     [esi], edx
0x647F79: mov     dword ptr [esi+1Ch], 1
0x647F80: call    BSSimpleList_PushFront
0x647F85: mov     esi, [esp+24h+var_10]
0x647F89: mov     ecx, edi
0x647F8B: call    ContainerEntryExtraData_DestroyDataTable
0x647F90: push    edi
0x647F91: call    FormHeapFree
0x647F96: add     esp, 4
0x647F99: add     ebx, 1
0x647F9C: cmp     ebx, [esp+24h+arg_8]
0x647FA0: jl      loc_647F07
0x647FA6: pop     edi
0x647FA7: pop     esi
0x647FA8: pop     ebp
0x647FA9: pop     ebx
0x647FAA: add     esp, 14h
0x647FAD: retn    0Ch
0x647FB0: mov     ecx, esi; jumptable 00647C29 case 25
0x647FB2: call    ContainerExtraData_GetCount
0x647FB7: xor     ebx, ebx
0x647FB9: test    eax, eax
0x647FBB: mov     [esp+24h+arg_8], eax
0x647FBF: jle     def_647C29; jumptable 00647C29 default case, cases 14-20,23
0x647FC5: push    ebx
0x647FC6: mov     ecx, esi
0x647FC8: call    ContainerExtraData_GetEntryForItem
0x647FCD: mov     edi, eax
0x647FCF: test    edi, edi
0x647FD1: jz      loc_648057
0x647FD7: mov     eax, [edi+8]
0x647FDA: push    0; int
0x647FDC: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x647FE1: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x647FE6: push    0; int
0x647FE8: push    eax; void *
0x647FE9: call    OblivionDynamicCast
0x647FEE: add     esp, 14h
0x647FF1: test    eax, eax
0x647FF3: jz      short loc_648047
0x647FF5: cmp     byte ptr [eax+90h], 3
0x647FFC: jle     short loc_648047
0x647FFE: push    20h ; ' '; Size
0x648000: call    FormHeapAlloc
0x648005: add     esp, 4
0x648008: test    eax, eax
0x64800A: jz      short loc_648017
0x64800C: mov     ecx, eax
0x64800E: call    sub_628EB0
0x648013: mov     esi, eax
0x648015: jmp     short loc_648019
0x648017: xor     esi, esi
0x648019: mov     eax, [edi+8]
0x64801C: mov     ecx, edi
0x64801E: mov     [esi+4], eax
0x648021: call    TESHealthForm_GetHealth
0x648026: mov     ecx, [esp+24h+arg_4]
0x64802A: mov     [esi], ecx
0x64802C: mov     ecx, [esp+24h+var_14]
0x648030: push    esi
0x648031: add     ecx, 3Ch ; '<'
0x648034: mov     [esi+10h], eax
0x648037: mov     dword ptr [esi+1Ch], 1
0x64803E: call    BSSimpleList_PushFront
0x648043: mov     esi, [esp+24h+var_10]
0x648047: mov     ecx, edi
0x648049: call    ContainerEntryExtraData_DestroyDataTable
0x64804E: push    edi
0x64804F: call    FormHeapFree
0x648054: add     esp, 4
0x648057: add     ebx, 1
0x64805A: cmp     ebx, [esp+24h+arg_8]
0x64805E: jl      loc_647FC5
0x648064: pop     edi
0x648065: pop     esi
0x648066: pop     ebp
0x648067: pop     ebx
0x648068: add     esp, 14h
0x64806B: retn    0Ch
0x64806E: mov     esi, [esp+24h+arg_0]
0x648072: mov     ecx, esi; this
0x648074: call    TESObjectREFR_GetParentCell
0x648079: mov     edx, [esi]
0x64807B: mov     edi, eax
0x64807D: mov     eax, [edx+174h]
0x648083: mov     ecx, esi
0x648085: call    eax
0x648087: mov     ecx, [eax]
0x648089: mov     [esp+20h+a2], ecx
0x64808D: mov     edx, [eax+4]
0x648090: mov     ecx, [esp+20h+arg_C]
0x648094: mov     [esp+20h+var_4], edx
0x648098: mov     eax, [eax+8]
0x64809B: push    esi; a7
0x64809C: mov     [ebx+6Ch], ecx
0x64809F: fld     dword ptr ds:0B368E8h
0x6480A5: mov     edx, [esi]
0x6480A7: push    offset sub_646600; a6
0x6480AC: push    ecx
0x6480AD: mov     [esp+2Ch], eax
0x6480B1: fstp    [esp+2Ch+a5]; a5
0x6480B4: mov     eax, [edx+174h]
0x6480BA: mov     ecx, esi
0x6480BC: call    eax
0x6480BE: fld     dword ptr ds:0B368E8h
0x6480C4: push    eax; a4
0x6480C5: push    ecx
0x6480C6: fstp    [esp+34h+a3]; a3
0x6480C9: lea     ecx, [esp+34h+a2]
0x6480CD: push    ecx; a2
0x6480CE: mov     ecx, ds:0B33A98h
0x6480D4: push    edi; a1
0x6480D5: call    sub_446B90
0x6480DA: mov     edx, [ebx]
0x6480DC: mov     eax, [edx+568h]
0x6480E2: push    esi
0x6480E3: mov     ecx, ebx
0x6480E5: mov     [ebx+6Ch], ebp
0x6480E8: mov     [ebx+64h], ebp
0x6480EB: call    eax
0x6480ED: pop     edi; jumptable 00647C29 default case, cases 14-20,23
0x6480EE: pop     esi
0x6480EF: pop     ebp
0x6480F0: pop     ebx
0x6480F1: add     esp, 14h
0x6480F4: retn    0Ch
