0x466E80: push    ebx
0x466E81: push    esi
0x466E82: push    edi
0x466E83: push    68h ; 'h'
0x466E85: mov     edi, ecx
0x466E87: push    0
0x466E89: push    edi
0x466E8A: call    __memset
0x466E8F: mov     esi, [esp+18h+arg_0]
0x466E93: add     esp, 0Ch
0x466E96: xor     ebx, ebx
0x466E98: jmp     short loc_466EA0
0x466E9A: align 10h
0x466EA0: cmp     ebx, 19h; switch 26 cases
0x466EA3: ja      FormComponentList_Build___def_466EA9
0x466EA9: jmp     ds:jpt_466EA9[ebx*4]; switch jump
0x466EB0: mov     [edi], esi; jumptable 00466EA9 case 0
0x466EB2: jmp     loc_4671BD
0x466EB7: push    0; jumptable 00466EA9 case 1
0x466EB9: push    offset ??_R0?AVTESAIForm@@@8; struct TypeDescriptor *
0x466EBE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466EC3: push    0; int
0x466EC5: push    esi; void *
0x466EC6: call    OblivionDynamicCast
0x466ECB: add     esp, 14h
0x466ECE: mov     [edi+4], eax
0x466ED1: jmp     loc_4671BD
0x466ED6: push    0; jumptable 00466EA9 case 3
0x466ED8: push    offset ??_R0?AVTESActorBaseData@@@8; struct TypeDescriptor *
0x466EDD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466EE2: push    0; int
0x466EE4: push    esi; void *
0x466EE5: call    OblivionDynamicCast
0x466EEA: add     esp, 14h
0x466EED: mov     [edi+0Ch], eax
0x466EF0: jmp     loc_4671BD
0x466EF5: push    0; jumptable 00466EA9 case 4
0x466EF7: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x466EFC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466F01: push    0; int
0x466F03: push    esi; void *
0x466F04: call    OblivionDynamicCast
0x466F09: add     esp, 14h
0x466F0C: mov     [edi+10h], eax
0x466F0F: jmp     loc_4671BD
0x466F14: push    0; jumptable 00466EA9 case 5
0x466F16: push    offset ??_R0?AVTESAttributes@@@8; struct TypeDescriptor *
0x466F1B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466F20: push    0; int
0x466F22: push    esi; void *
0x466F23: call    OblivionDynamicCast
0x466F28: add     esp, 14h
0x466F2B: mov     [edi+14h], eax
0x466F2E: jmp     loc_4671BD
0x466F33: push    0; jumptable 00466EA9 case 6
0x466F35: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x466F3A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466F3F: push    0; int
0x466F41: push    esi; void *
0x466F42: call    OblivionDynamicCast
0x466F47: add     esp, 14h
0x466F4A: mov     [edi+18h], eax
0x466F4D: jmp     loc_4671BD
0x466F52: push    0; jumptable 00466EA9 case 7
0x466F54: push    offset ??_R0?AVTESContainer@@@8; struct TypeDescriptor *
0x466F59: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466F5E: push    0; int
0x466F60: push    esi; void *
0x466F61: call    OblivionDynamicCast
0x466F66: add     esp, 14h
0x466F69: mov     [edi+1Ch], eax
0x466F6C: jmp     loc_4671BD
0x466F71: push    0; jumptable 00466EA9 case 8
0x466F73: push    offset ??_R0?AVTESDescription@@@8; struct TypeDescriptor *
0x466F78: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466F7D: push    0; int
0x466F7F: push    esi; void *
0x466F80: call    OblivionDynamicCast
0x466F85: add     esp, 14h
0x466F88: mov     [edi+20h], eax
0x466F8B: jmp     loc_4671BD
0x466F90: push    0; jumptable 00466EA9 case 9
0x466F92: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x466F97: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466F9C: push    0; int
0x466F9E: push    esi; void *
0x466F9F: call    OblivionDynamicCast
0x466FA4: add     esp, 14h
0x466FA7: mov     [edi+24h], eax
0x466FAA: jmp     loc_4671BD
0x466FAF: push    0; jumptable 00466EA9 case 10
0x466FB1: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x466FB6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466FBB: push    0; int
0x466FBD: push    esi; void *
0x466FBE: call    OblivionDynamicCast
0x466FC3: add     esp, 14h
0x466FC6: mov     [edi+28h], eax
0x466FC9: jmp     loc_4671BD
0x466FCE: push    0; jumptable 00466EA9 case 11
0x466FD0: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x466FD5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466FDA: push    0; int
0x466FDC: push    esi; void *
0x466FDD: call    OblivionDynamicCast
0x466FE2: add     esp, 14h
0x466FE5: mov     [edi+2Ch], eax
0x466FE8: jmp     loc_4671BD
0x466FED: push    0; jumptable 00466EA9 case 12
0x466FEF: push    offset ??_R0?AVTESTexture@@@8; struct TypeDescriptor *
0x466FF4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466FF9: push    0; int
0x466FFB: push    esi; void *
0x466FFC: call    OblivionDynamicCast
0x467001: add     esp, 14h
0x467004: mov     [edi+30h], eax
0x467007: jmp     loc_4671BD
0x46700C: push    0; jumptable 00466EA9 case 13
0x46700E: push    offset ??_R0?AVTESLeveledList@@@8; struct TypeDescriptor *
0x467013: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467018: push    0; int
0x46701A: push    esi; void *
0x46701B: call    OblivionDynamicCast
0x467020: add     esp, 14h
0x467023: mov     [edi+34h], eax
0x467026: jmp     loc_4671BD
0x46702B: push    0; jumptable 00466EA9 case 14
0x46702D: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x467032: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467037: push    0; int
0x467039: push    esi; void *
0x46703A: call    OblivionDynamicCast
0x46703F: add     esp, 14h
0x467042: mov     [edi+38h], eax
0x467045: jmp     loc_4671BD
0x46704A: push    0; jumptable 00466EA9 case 15
0x46704C: push    offset ??_R0?AVTESProduceForm@@@8; struct TypeDescriptor *
0x467051: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467056: push    0; int
0x467058: push    esi; void *
0x467059: call    OblivionDynamicCast
0x46705E: add     esp, 14h
0x467061: mov     [edi+3Ch], eax
0x467064: jmp     loc_4671BD
0x467069: push    0; jumptable 00466EA9 case 16
0x46706B: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x467070: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467075: push    0; int
0x467077: push    esi; void *
0x467078: call    OblivionDynamicCast
0x46707D: add     esp, 14h
0x467080: mov     [edi+40h], eax
0x467083: jmp     loc_4671BD
0x467088: push    0; jumptable 00466EA9 case 17
0x46708A: push    offset ??_R0?AVTESRaceForm@@@8; struct TypeDescriptor *
0x46708F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467094: push    0; int
0x467096: push    esi; void *
0x467097: call    OblivionDynamicCast
0x46709C: add     esp, 14h
0x46709F: mov     [edi+44h], eax
0x4670A2: jmp     loc_4671BD
0x4670A7: push    0; jumptable 00466EA9 case 18
0x4670A9: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x4670AE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4670B3: push    0; int
0x4670B5: push    esi; void *
0x4670B6: call    OblivionDynamicCast
0x4670BB: add     esp, 14h
0x4670BE: mov     [edi+48h], eax
0x4670C1: jmp     loc_4671BD
0x4670C6: push    0; jumptable 00466EA9 case 19
0x4670C8: push    offset ??_R0?AVTESSpellList@@@8; struct TypeDescriptor *
0x4670CD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4670D2: push    0; int
0x4670D4: push    esi; void *
0x4670D5: call    OblivionDynamicCast
0x4670DA: add     esp, 14h
0x4670DD: mov     [edi+4Ch], eax
0x4670E0: jmp     loc_4671BD
0x4670E5: push    0; jumptable 00466EA9 case 20
0x4670E7: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x4670EC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4670F1: push    0; int
0x4670F3: push    esi; void *
0x4670F4: call    OblivionDynamicCast
0x4670F9: add     esp, 14h
0x4670FC: mov     [edi+50h], eax
0x4670FF: jmp     loc_4671BD
0x467104: push    0; jumptable 00466EA9 case 21
0x467106: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x46710B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467110: push    0; int
0x467112: push    esi; void *
0x467113: call    OblivionDynamicCast
0x467118: add     esp, 14h
0x46711B: mov     [edi+54h], eax
0x46711E: jmp     loc_4671BD
0x467123: push    0; jumptable 00466EA9 case 22
0x467125: push    offset ??_R0?AVTESWeightForm@@@8; struct TypeDescriptor *
0x46712A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46712F: push    0; int
0x467131: push    esi; void *
0x467132: call    OblivionDynamicCast
0x467137: add     esp, 14h
0x46713A: mov     [edi+58h], eax
0x46713D: jmp     short loc_4671BD
0x46713F: push    0; jumptable 00466EA9 case 23
0x467141: push    offset ??_R0?AVTESSoundFile@@@8; struct TypeDescriptor *
0x467146: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46714B: push    0; int
0x46714D: push    esi; void *
0x46714E: call    OblivionDynamicCast
0x467153: add     esp, 14h
0x467156: mov     [edi+5Ch], eax
0x467159: jmp     short loc_4671BD
0x46715B: push    0; jumptable 00466EA9 case 24
0x46715D: push    offset ??_R0?AVTESReactionForm@@@8; struct TypeDescriptor *
0x467162: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467167: push    0; int
0x467169: push    esi; void *
0x46716A: call    OblivionDynamicCast
0x46716F: add     esp, 14h
0x467172: mov     [edi+60h], eax
0x467175: jmp     short loc_4671BD
0x467177: push    0; jumptable 00466EA9 case 2
0x467179: push    offset ??_R0?AVTESAnimation@@@8; struct TypeDescriptor *
0x46717E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467183: push    0; int
0x467185: push    esi; void *
0x467186: call    OblivionDynamicCast
0x46718B: add     esp, 14h
0x46718E: mov     [edi+8], eax
0x467191: jmp     short loc_4671BD
0x467193: push    0; jumptable 00466EA9 case 25
0x467195: push    offset ??_R0?AVTESModelList@@@8; struct TypeDescriptor *
0x46719A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46719F: push    0; int
0x4671A1: push    esi; void *
0x4671A2: call    OblivionDynamicCast
0x4671A7: add     esp, 14h
0x4671AA: mov     [edi+64h], eax
0x4671AD: jmp     short loc_4671BD
