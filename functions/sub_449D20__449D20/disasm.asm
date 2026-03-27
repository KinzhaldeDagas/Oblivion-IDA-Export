0x449D20: mov     eax, [esp+arg_0]
0x449D24: test    eax, eax
0x449D26: push    esi
0x449D27: mov     esi, ecx
0x449D29: jz      loc_44A1BD
0x449D2F: movzx   ecx, byte ptr [eax+4]
0x449D33: add     ecx, 0FFFFFFFCh; switch 64 cases
0x449D36: cmp     ecx, 3Fh
0x449D39: push    edi
0x449D3A: ja      def_449D47; jumptable 00449D47 default case, cases 11,12,18-44,47,49-52,54-56,60,64
0x449D40: movzx   ecx, ds:byte_44A22C[ecx]
0x449D47: jmp     ds:jpt_449D47[ecx*4]; switch jump
0x449D4E: push    0; jumptable 00449D47 case 48
0x449D50: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x449D55: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449D5A: push    0; int
0x449D5C: push    eax; void *
0x449D5D: call    OblivionDynamicCast
0x449D62: mov     edi, eax
0x449D64: add     esp, 14h
0x449D67: test    edi, edi
0x449D69: jz      loc_44A1BC
0x449D6F: mov     ecx, edi; this
0x449D71: call    TESObjectCELL_IsInterior
0x449D76: test    al, al
0x449D78: jz      short loc_449DCA
0x449D7A: mov     edx, [esi+0CCh]
0x449D80: xor     eax, eax
0x449D82: test    edx, edx
0x449D84: jle     loc_44A1BC
0x449D8A: mov     ecx, [esi+0C4h]
0x449D90: cmp     [ecx], edi
0x449D92: jz      short loc_449DA3
0x449D94: add     eax, 1
0x449D97: add     ecx, 4
0x449D9A: cmp     eax, edx
0x449D9C: jl      short loc_449D90
0x449D9E: pop     edi
0x449D9F: pop     esi
0x449DA0: retn    4
0x449DA3: lea     edx, [esp+8+arg_0]
0x449DA7: push    edx
0x449DA8: add     esi, 0C0h ; 'À'
0x449DAE: push    eax
0x449DAF: mov     ecx, esi
0x449DB1: mov     [esp+10h+arg_0], 0
0x449DB9: call    sub_446C50
0x449DBE: mov     ecx, esi
0x449DC0: call    sub_5A56F0
0x449DC5: pop     edi
0x449DC6: pop     esi
0x449DC7: retn    4
0x449DCA: push    edi
0x449DCB: mov     ecx, esi
0x449DCD: call    sub_4477F0
0x449DD2: test    eax, eax
0x449DD4: jz      loc_44A1BC
0x449DDA: push    edi
0x449DDB: mov     ecx, eax
0x449DDD: call    TESWorldSpace_RemoveCellFromCellMap
0x449DE2: pop     edi
0x449DE3: pop     esi
0x449DE4: retn    4
0x449DE7: push    0; jumptable 00449D47 case 59
0x449DE9: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x449DEE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449DF3: push    0; int
0x449DF5: push    eax; void *
0x449DF6: call    OblivionDynamicCast
0x449DFB: add     esp, 14h
0x449DFE: push    eax
0x449DFF: lea     ecx, [esi+84h]
0x449E05: call    BSSimpleList_Remove
0x449E0A: pop     edi
0x449E0B: pop     esi
0x449E0C: retn    4
0x449E0F: push    0; jumptable 00449D47 case 57
0x449E11: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x449E16: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449E1B: push    0; int
0x449E1D: push    eax; void *
0x449E1E: call    OblivionDynamicCast
0x449E23: add     esp, 14h
0x449E26: push    eax
0x449E27: lea     ecx, [esi+7Ch]
0x449E2A: call    BSSimpleList_Remove
0x449E2F: pop     edi
0x449E30: pop     esi
0x449E31: retn    4
0x449E34: push    0; jumptable 00449D47 case 58
0x449E36: push    offset ??_R0?AVTESTopicInfo@@@8; struct TypeDescriptor *
0x449E3B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449E40: push    0; int
0x449E42: push    eax; void *
0x449E43: call    OblivionDynamicCast
0x449E48: mov     esi, eax
0x449E4A: add     esp, 14h
0x449E4D: test    esi, esi
0x449E4F: jz      loc_44A1BC
0x449E55: push    esi
0x449E56: call    TESTopic_static_GetTopicInfoParent?
0x449E5B: add     esp, 4
0x449E5E: test    eax, eax
0x449E60: jz      loc_44A1BC
0x449E66: push    eax
0x449E67: mov     ecx, esi
0x449E69: call    sub_530590
0x449E6E: pop     edi
0x449E6F: pop     esi
0x449E70: retn    4
0x449E73: push    0; jumptable 00449D47 case 13
0x449E75: push    offset ??_R0?AVScript@@@8; struct TypeDescriptor *
0x449E7A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449E7F: push    0; int
0x449E81: push    eax; void *
0x449E82: call    OblivionDynamicCast
0x449E87: add     esp, 14h
0x449E8A: push    eax
0x449E8B: lea     ecx, [esi+64h]
0x449E8E: call    BSSimpleList_Remove
0x449E93: pop     edi
0x449E94: pop     esi
0x449E95: retn    4
0x449E98: push    0; jumptable 00449D47 case 6
0x449E9A: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x449E9F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449EA4: push    0; int
0x449EA6: push    eax; void *
0x449EA7: call    OblivionDynamicCast
0x449EAC: add     esp, 14h
0x449EAF: push    eax
0x449EB0: lea     ecx, [esi+5Ch]
0x449EB3: call    BSSimpleList_Remove
0x449EB8: pop     edi
0x449EB9: pop     esi
0x449EBA: retn    4
0x449EBD: push    0; jumptable 00449D47 case 5
0x449EBF: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x449EC4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449EC9: push    0; int
0x449ECB: push    eax; void *
0x449ECC: call    OblivionDynamicCast
0x449ED1: add     esp, 14h
0x449ED4: push    eax
0x449ED5: lea     ecx, [esi+54h]
0x449ED8: call    BSSimpleList_Remove
0x449EDD: pop     edi
0x449EDE: pop     esi
0x449EDF: retn    4
0x449EE2: push    0; jumptable 00449D47 case 7
0x449EE4: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x449EE9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449EEE: push    0; int
0x449EF0: push    eax; void *
0x449EF1: call    OblivionDynamicCast
0x449EF6: add     esp, 14h
0x449EF9: push    eax
0x449EFA: lea     ecx, [esi+34h]
0x449EFD: call    BSSimpleList_Remove
0x449F02: pop     edi
0x449F03: pop     esi
0x449F04: retn    4
0x449F07: push    0; jumptable 00449D47 case 8
0x449F09: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x449F0E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449F13: push    0; int
0x449F15: push    eax; void *
0x449F16: call    OblivionDynamicCast
0x449F1B: add     esp, 14h
0x449F1E: push    eax
0x449F1F: lea     ecx, [esi+3Ch]
0x449F22: call    BSSimpleList_Remove
0x449F27: pop     edi
0x449F28: pop     esi
0x449F29: retn    4
0x449F2C: push    0; jumptable 00449D47 case 9
0x449F2E: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x449F33: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449F38: push    0; int
0x449F3A: push    eax; void *
0x449F3B: call    OblivionDynamicCast
0x449F40: add     esp, 14h
0x449F43: push    eax
0x449F44: lea     ecx, [esi+44h]
0x449F47: call    BSSimpleList_Remove
0x449F4C: pop     edi
0x449F4D: pop     esi
0x449F4E: retn    4
0x449F51: push    0; jumptable 00449D47 case 14
0x449F53: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x449F58: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449F5D: push    0; int
0x449F5F: push    eax; void *
0x449F60: call    OblivionDynamicCast
0x449F65: add     esp, 14h
0x449F68: push    eax
0x449F69: lea     ecx, [esi+4Ch]
0x449F6C: call    BSSimpleList_Remove
0x449F71: pop     edi
0x449F72: pop     esi
0x449F73: retn    4
0x449F76: push    0; jumptable 00449D47 case 10
0x449F78: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x449F7D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449F82: push    0; int
0x449F84: push    eax; void *
0x449F85: call    OblivionDynamicCast
0x449F8A: add     esp, 14h
0x449F8D: push    eax
0x449F8E: lea     ecx, [esi+6Ch]
0x449F91: call    BSSimpleList_Remove
0x449F96: pop     edi
0x449F97: pop     esi
0x449F98: retn    4
0x449F9B: push    0; jumptable 00449D47 case 4
0x449F9D: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x449FA2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449FA7: push    0; int
0x449FA9: push    eax; void *
0x449FAA: call    OblivionDynamicCast
0x449FAF: add     esp, 14h
0x449FB2: push    eax
0x449FB3: lea     ecx, [esi+74h]
0x449FB6: call    BSSimpleList_Remove
0x449FBB: pop     edi
0x449FBC: pop     esi
0x449FBD: retn    4
0x449FC0: push    0; jumptable 00449D47 case 17
0x449FC2: push    offset ??_R0?AVBirthSign@@@8; struct TypeDescriptor *
0x449FC7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449FCC: push    0; int
0x449FCE: push    eax; void *
0x449FCF: call    OblivionDynamicCast
0x449FD4: add     esp, 14h
0x449FD7: push    eax
0x449FD8: lea     ecx, [esi+8Ch]
0x449FDE: call    BSSimpleList_Remove
0x449FE3: pop     edi
0x449FE4: pop     esi
0x449FE5: retn    4
0x449FE8: push    0; jumptable 00449D47 case 46
0x449FEA: push    offset ??_R0?AVTESClimate@@@8; struct TypeDescriptor *
0x449FEF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x449FF4: push    0; int
0x449FF6: push    eax; void *
0x449FF7: call    OblivionDynamicCast
0x449FFC: add     esp, 14h
0x449FFF: push    eax
0x44A000: lea     ecx, [esi+14h]
0x44A003: call    BSSimpleList_Remove
0x44A008: pop     edi
0x44A009: pop     esi
0x44A00A: retn    4
0x44A00D: push    0; jumptable 00449D47 case 45
0x44A00F: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x44A014: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A019: push    0; int
0x44A01B: push    eax; void *
0x44A01C: call    OblivionDynamicCast
0x44A021: add     esp, 14h
0x44A024: push    eax
0x44A025: lea     ecx, [esi+1Ch]
0x44A028: call    BSSimpleList_Remove
0x44A02D: pop     edi
0x44A02E: pop     esi
0x44A02F: retn    4
0x44A032: push    0; jumptable 00449D47 case 53
0x44A034: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x44A039: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A03E: push    0; int
0x44A040: push    eax; void *
0x44A041: call    OblivionDynamicCast
0x44A046: add     esp, 14h
0x44A049: push    eax
0x44A04A: lea     ecx, [esi+0Ch]
0x44A04D: call    BSSimpleList_Remove
0x44A052: pop     edi
0x44A053: pop     esi
0x44A054: retn    4
0x44A057: push    0; jumptable 00449D47 case 61
0x44A059: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x44A05E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A063: push    0; int
0x44A065: push    eax; void *
0x44A066: call    OblivionDynamicCast
0x44A06B: add     esp, 14h
0x44A06E: push    eax
0x44A06F: lea     ecx, [esi+4]
0x44A072: call    BSSimpleList_Remove
0x44A077: pop     edi
0x44A078: pop     esi
0x44A079: retn    4
0x44A07C: push    0; jumptable 00449D47 case 16
0x44A07E: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x44A083: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A088: push    0; int
0x44A08A: push    eax; void *
0x44A08B: call    OblivionDynamicCast
0x44A090: add     esp, 14h
0x44A093: push    eax
0x44A094: lea     ecx, [esi+2Ch]
0x44A097: call    BSSimpleList_Remove
0x44A09C: pop     edi
0x44A09D: pop     esi
0x44A09E: retn    4
0x44A0A1: push    0; jumptable 00449D47 case 15
0x44A0A3: push    offset ??_R0?AVEnchantmentItem@@@8; struct TypeDescriptor *
0x44A0A8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A0AD: push    0; int
0x44A0AF: push    eax; void *
0x44A0B0: call    OblivionDynamicCast
0x44A0B5: add     esp, 14h
0x44A0B8: push    eax
0x44A0B9: lea     ecx, [esi+24h]
0x44A0BC: call    BSSimpleList_Remove
0x44A0C1: pop     edi
0x44A0C2: pop     esi
0x44A0C3: retn    4
0x44A0C6: push    0; jumptable 00449D47 case 62
0x44A0C8: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x44A0CD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A0D2: push    0; int
0x44A0D4: push    eax; void *
0x44A0D5: call    OblivionDynamicCast
0x44A0DA: add     esp, 14h
0x44A0DD: push    eax
0x44A0DE: lea     ecx, [esi+94h]
0x44A0E4: call    BSSimpleList_Remove
0x44A0E9: pop     edi
0x44A0EA: pop     esi
0x44A0EB: retn    4
0x44A0EE: push    0; jumptable 00449D47 case 63
0x44A0F0: push    offset ??_R0?AVTESLoadScreen@@@8; struct TypeDescriptor *
0x44A0F5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A0FA: push    0; int
0x44A0FC: push    eax; void *
0x44A0FD: call    OblivionDynamicCast
0x44A102: add     esp, 14h
0x44A105: push    eax
0x44A106: lea     ecx, [esi+9Ch]
0x44A10C: call    BSSimpleList_Remove
0x44A111: pop     edi
0x44A112: pop     esi
0x44A113: retn    4
0x44A116: push    0; jumptable 00449D47 case 66
0x44A118: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x44A11D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A122: push    0; int
0x44A124: push    eax; void *
0x44A125: call    OblivionDynamicCast
0x44A12A: add     esp, 14h
0x44A12D: push    eax
0x44A12E: lea     ecx, [esi+0A4h]
0x44A134: call    BSSimpleList_Remove
0x44A139: pop     edi
0x44A13A: pop     esi
0x44A13B: retn    4
0x44A13E: push    0; jumptable 00449D47 case 65
0x44A140: push    offset ??_R0?AVTESObjectANIO@@@8; struct TypeDescriptor *
0x44A145: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A14A: push    0; int
0x44A14C: push    eax; void *
0x44A14D: call    OblivionDynamicCast
0x44A152: add     esp, 14h
0x44A155: push    eax
0x44A156: lea     ecx, [esi+0B4h]
0x44A15C: call    BSSimpleList_Remove
0x44A161: pop     edi
0x44A162: pop     esi
0x44A163: retn    4
0x44A166: push    0; jumptable 00449D47 case 67
0x44A168: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x44A16D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A172: push    0; int
0x44A174: push    eax; void *
0x44A175: call    OblivionDynamicCast
0x44A17A: add     esp, 14h
0x44A17D: push    eax
0x44A17E: lea     ecx, [esi+0ACh]
0x44A184: call    BSSimpleList_Remove
0x44A189: pop     edi
0x44A18A: pop     esi
0x44A18B: retn    4
0x44A18E: push    0; jumptable 00449D47 default case, cases 11,12,18-44,47,49-52,54-56,60,64
0x44A190: push    offset ??_R0?AVTESObject@@@8; struct TypeDescriptor *
0x44A195: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44A19A: push    0; int
0x44A19C: push    eax; void *
0x44A19D: call    OblivionDynamicCast
0x44A1A2: mov     edi, eax
0x44A1A4: add     esp, 14h
0x44A1A7: test    edi, edi
0x44A1A9: jz      short loc_44A1BC
0x44A1AB: mov     ecx, [esi]
0x44A1AD: push    edi
0x44A1AE: call    TESObjectListHead_RemoveObject
0x44A1B3: push    0
0x44A1B5: mov     ecx, edi
0x44A1B7: call    sub_629260
0x44A1BC: pop     edi
0x44A1BD: pop     esi
0x44A1BE: retn    4
