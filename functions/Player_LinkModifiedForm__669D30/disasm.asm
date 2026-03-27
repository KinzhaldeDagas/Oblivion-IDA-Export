0x669D30: mov     eax, [esp+arg_4]
0x669D34: sub     esp, 0Ch
0x669D37: push    ebx
0x669D38: push    ebp
0x669D39: push    esi
0x669D3A: push    edi
0x669D3B: mov     esi, ecx
0x669D3D: mov     ecx, [esp+1Ch+arg_0]
0x669D41: push    eax; int
0x669D42: push    ecx; int
0x669D43: mov     ecx, esi; Concurrency::details::SchedulerBase *
0x669D45: call    sub_60E390
0x669D4A: mov     eax, [esi+118h]
0x669D50: xor     ebx, ebx
0x669D52: cmp     eax, ebx
0x669D54: jz      short loc_669D7A
0x669D56: push    ebx; int
0x669D57: push    offset ??_R0?AVDialoguePackage@@@8; struct TypeDescriptor *
0x669D5C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669D61: push    ebx; int
0x669D62: push    eax; a1
0x669D63: call    TESForm_LookupByFormID
0x669D68: add     esp, 4
0x669D6B: push    eax; void *
0x669D6C: call    OblivionDynamicCast
0x669D71: add     esp, 14h
0x669D74: mov     [esi+118h], eax
0x669D7A: mov     eax, [esi+644h]
0x669D80: cmp     eax, ebx
0x669D82: jz      short loc_669DA8
0x669D84: push    ebx; int
0x669D85: push    offset ??_R0?AVBirthSign@@@8; struct TypeDescriptor *
0x669D8A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669D8F: push    ebx; int
0x669D90: push    eax; a1
0x669D91: call    TESForm_LookupByFormID
0x669D96: add     esp, 4
0x669D99: push    eax; void *
0x669D9A: call    OblivionDynamicCast
0x669D9F: add     esp, 14h
0x669DA2: mov     [esi+644h], eax
0x669DA8: mov     eax, ds:0B3BAD0h
0x669DAD: cmp     eax, ebx
0x669DAF: jz      short loc_669DD4
0x669DB1: push    ebx; int
0x669DB2: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x669DB7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669DBC: push    ebx; int
0x669DBD: push    eax; a1
0x669DBE: call    TESForm_LookupByFormID
0x669DC3: add     esp, 4
0x669DC6: push    eax; void *
0x669DC7: call    OblivionDynamicCast
0x669DCC: add     esp, 14h
0x669DCF: mov     ds:0B3BAD0h, eax
0x669DD4: mov     eax, [esi+624h]
0x669DDA: cmp     eax, ebx
0x669DDC: mov     [esi+624h], ebx
0x669DE2: jz      short loc_669E2E
0x669DE4: push    eax; a1
0x669DE5: call    TESForm_LookupByFormID
0x669DEA: push    ebx; int
0x669DEB: push    offset ??_R0?AVMagicItemForm@@@8; struct TypeDescriptor *
0x669DF0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669DF5: mov     edi, eax
0x669DF7: push    ebx; int
0x669DF8: push    edi; void *
0x669DF9: call    OblivionDynamicCast
0x669DFE: push    ebx; int
0x669DFF: push    offset ??_R0?AVMagicItemObject@@@8; struct TypeDescriptor *
0x669E04: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669E09: push    ebx; int
0x669E0A: push    edi; void *
0x669E0B: mov     ebp, eax
0x669E0D: call    OblivionDynamicCast
0x669E12: add     esp, 2Ch
0x669E15: cmp     ebp, ebx
0x669E17: jz      short loc_669E1F
0x669E19: add     ebp, 18h
0x669E1C: push    ebp
0x669E1D: jmp     short loc_669E27
0x669E1F: cmp     eax, ebx
0x669E21: jz      short loc_669E2E
0x669E23: add     eax, 24h ; '$'
0x669E26: push    eax
0x669E27: mov     ecx, esi
0x669E29: call    PlayerCharacter_SetCurrentMagicItem
0x669E2E: mov     eax, [esi+1E8h]
0x669E34: cmp     eax, ebx
0x669E36: jz      short loc_669E47
0x669E38: push    eax
0x669E39: call    MagicItem_LookupByFormID
0x669E3E: add     esp, 4
0x669E41: mov     [esi+1E8h], eax
0x669E47: mov     eax, [esi+1ECh]
0x669E4D: cmp     eax, ebx
0x669E4F: jz      short loc_669E60
0x669E51: push    eax
0x669E52: call    MagicTarget_LookupByFormID
0x669E57: add     esp, 4
0x669E5A: mov     [esi+1ECh], eax
0x669E60: mov     eax, [esi+1E0h]
0x669E66: cmp     eax, ebx
0x669E68: jz      short loc_669E8E
0x669E6A: push    ebx; int
0x669E6B: push    offset ??_R0?AVCreature@@@8; struct TypeDescriptor *
0x669E70: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669E75: push    ebx; int
0x669E76: push    eax; a1
0x669E77: call    TESForm_LookupByFormID
0x669E7C: add     esp, 4
0x669E7F: push    eax; void *
0x669E80: call    OblivionDynamicCast
0x669E85: add     esp, 14h
0x669E88: mov     [esi+1E0h], eax
0x669E8E: mov     eax, [esi+628h]
0x669E94: cmp     eax, ebx
0x669E96: jz      short loc_669EBE
0x669E98: push    ebx; int
0x669E99: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x669E9E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669EA3: push    ebx; int
0x669EA4: push    eax; a1
0x669EA5: call    TESForm_LookupByFormID
0x669EAA: add     esp, 4
0x669EAD: push    eax; void *
0x669EAE: call    OblivionDynamicCast
0x669EB3: add     esp, 14h
0x669EB6: push    eax
0x669EB7: mov     ecx, esi
0x669EB9: call    sub_664850
0x669EBE: mov     eax, [esi+650h]
0x669EC4: cmp     eax, ebx
0x669EC6: jz      short loc_669EEC
0x669EC8: push    ebx; int
0x669EC9: push    offset ??_R0?AVTESClass@@@8; struct TypeDescriptor *
0x669ECE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669ED3: push    ebx; int
0x669ED4: push    eax; a1
0x669ED5: call    TESForm_LookupByFormID
0x669EDA: add     esp, 4
0x669EDD: push    eax; void *
0x669EDE: call    OblivionDynamicCast
0x669EE3: add     esp, 14h
0x669EE6: mov     [esi+650h], eax
0x669EEC: mov     eax, [esi+6E0h]
0x669EF2: cmp     eax, ebx
0x669EF4: jz      short loc_669F1A
0x669EF6: push    ebx; int
0x669EF7: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x669EFC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669F01: push    ebx; int
0x669F02: push    eax; a1
0x669F03: call    TESForm_LookupByFormID
0x669F08: add     esp, 4
0x669F0B: push    eax; void *
0x669F0C: call    OblivionDynamicCast
0x669F11: add     esp, 14h
0x669F14: mov     [esi+6E0h], eax
0x669F1A: mov     edx, ds:0B33B00h
0x669F20: cmp     byte ptr [edx+7Ch], 40h ; '@'
0x669F24: jb      short loc_669F54
0x669F26: mov     eax, [esi+578h]
0x669F2C: cmp     eax, ebx
0x669F2E: jz      short loc_669F54
0x669F30: push    ebx; int
0x669F31: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x669F36: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669F3B: push    ebx; int
0x669F3C: push    eax; a1
0x669F3D: call    TESForm_LookupByFormID
0x669F42: add     esp, 4
0x669F45: push    eax; void *
0x669F46: call    OblivionDynamicCast
0x669F4B: add     esp, 14h
0x669F4E: mov     [esi+578h], eax
0x669F54: mov     eax, ds:0B33B00h
0x669F59: cmp     byte ptr [eax+7Ch], 42h ; 'B'
0x669F5D: jb      short loc_669F8B
0x669F5F: mov     eax, ds:0B3BAD4h
0x669F64: cmp     eax, ebx
0x669F66: jz      short loc_669F8B
0x669F68: push    ebx; int
0x669F69: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x669F6E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669F73: push    ebx; int
0x669F74: push    eax; a1
0x669F75: call    TESForm_LookupByFormID
0x669F7A: add     esp, 4
0x669F7D: push    eax; void *
0x669F7E: call    OblivionDynamicCast
0x669F83: add     esp, 14h
0x669F86: mov     ds:0B3BAD4h, eax
0x669F8B: mov     ecx, ds:0B33B00h
0x669F91: cmp     byte ptr [ecx+7Ch], 63h ; 'c'
0x669F95: jb      short loc_669FE9
0x669F97: mov     edi, [esi+5ACh]
0x669F9D: test    edi, edi
0x669F9F: jz      short loc_669FE9
0x669FA1: cmp     dword ptr [edi+4], 0
0x669FA5: jnz     short loc_669FAC
0x669FA7: cmp     dword ptr [edi], 0
0x669FAA: jz      short loc_669FE9
0x669FAC: mov     ebp, [edi]
0x669FAE: test    ebp, ebp
0x669FB0: jz      loc_66A098
0x669FB6: push    0; int
0x669FB8: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x669FBD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x669FC2: push    0; int
0x669FC4: push    ebp; a1
0x669FC5: call    TESForm_LookupByFormID
0x669FCA: add     esp, 4
0x669FCD: push    eax; void *
0x669FCE: call    OblivionDynamicCast
0x669FD3: add     esp, 14h
0x669FD6: test    eax, eax
0x669FD8: jz      loc_66A098
0x669FDE: mov     [edi], eax
0x669FE0: mov     ebx, edi
0x669FE2: mov     edi, [edi+4]
0x669FE5: test    edi, edi
0x669FE7: jnz     short loc_669FA1
0x669FE9: mov     edx, ds:0B33B00h
0x669FEF: cmp     byte ptr [edx+7Ch], 73h ; 's'
0x669FF3: jb      short loc_66A048
0x669FF5: mov     edi, offset dword_B3BB44
0x669FFA: xor     ebx, ebx
0x669FFC: lea     esp, [esp+0]
0x66A000: cmp     dword ptr [edi+4], 0
0x66A004: jnz     short loc_66A00B
0x66A006: cmp     dword ptr [edi], 0
0x66A009: jz      short loc_66A048
0x66A00B: mov     ebp, [edi]
0x66A00D: test    ebp, ebp
0x66A00F: jz      loc_66A0D6
0x66A015: push    0; int
0x66A017: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x66A01C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x66A021: push    0; int
0x66A023: push    ebp; a1
0x66A024: call    TESForm_LookupByFormID
0x66A029: add     esp, 4
0x66A02C: push    eax; void *
0x66A02D: call    OblivionDynamicCast
0x66A032: add     esp, 14h
0x66A035: test    eax, eax
0x66A037: jz      loc_66A0D6
0x66A03D: mov     [edi], eax
0x66A03F: mov     ebx, edi
0x66A041: mov     edi, [edi+4]
0x66A044: test    edi, edi
0x66A046: jnz     short loc_66A000
0x66A048: mov     eax, [esi+1E4h]
0x66A04E: push    esi
0x66A04F: push    eax
0x66A050: call    ActiveEffect_Base_LinkAEList
0x66A055: mov     ecx, [esi+58h]
0x66A058: mov     edx, [ecx]
0x66A05A: mov     eax, [edx+5Ch]
0x66A05D: add     esp, 8
0x66A060: call    eax
0x66A062: mov     edx, [esi]
0x66A064: mov     eax, [edx+170h]
0x66A06A: mov     ecx, esi
0x66A06C: call    eax
0x66A06E: push    esi
0x66A06F: mov     ecx, eax
0x66A071: call    sub_525400
0x66A076: cmp     byte ptr [esi+71Dh], 0
0x66A07D: mov     edx, [esi]
0x66A07F: mov     eax, [edx+1BCh]
0x66A085: mov     byte ptr [esi+71Ch], 0
0x66A08C: mov     ecx, esi
0x66A08E: jz      loc_66A114
0x66A094: push    0
0x66A096: jmp     short loc_66A116
0x66A098: test    ebx, ebx
0x66A09A: jnz     short loc_66A0C6
0x66A09C: mov     eax, [edi+4]
0x66A09F: test    eax, eax
0x66A0A1: jz      short loc_66A0BB
0x66A0A3: mov     edx, [eax+4]
0x66A0A6: mov     [edi+4], edx
0x66A0A9: mov     ecx, [eax]
0x66A0AB: push    eax
0x66A0AC: mov     [edi], ecx
0x66A0AE: call    FormHeapFree
0x66A0B3: add     esp, 4
0x66A0B6: jmp     loc_669FE5
0x66A0BB: mov     dword ptr [edi], 0
0x66A0C1: jmp     loc_669FE5
0x66A0C6: push    ebp
0x66A0C7: mov     ecx, ebx
0x66A0C9: call    BSSimpleList_Remove
0x66A0CE: mov     edi, [ebx+4]
0x66A0D1: jmp     loc_669FE5
0x66A0D6: test    ebx, ebx
0x66A0D8: jnz     short loc_66A104
0x66A0DA: mov     eax, [edi+4]
0x66A0DD: test    eax, eax
0x66A0DF: jz      short loc_66A0F9
0x66A0E1: mov     ecx, [eax+4]
0x66A0E4: mov     [edi+4], ecx
0x66A0E7: mov     edx, [eax]
0x66A0E9: push    eax
0x66A0EA: mov     [edi], edx
0x66A0EC: call    FormHeapFree
0x66A0F1: add     esp, 4
0x66A0F4: jmp     loc_66A044
0x66A0F9: mov     dword ptr [edi], 0
0x66A0FF: jmp     loc_66A044
0x66A104: push    ebp
0x66A105: mov     ecx, ebx
0x66A107: call    BSSimpleList_Remove
0x66A10C: mov     edi, [ebx+4]
0x66A10F: jmp     loc_66A044
0x66A114: push    1
0x66A116: call    eax
0x66A118: cmp     byte ptr [esi+71Ch], 0
0x66A11F: mov     edx, [esi]
0x66A121: mov     eax, [edx+1BCh]
0x66A127: mov     byte ptr [esi+71Dh], 0
0x66A12E: mov     ecx, esi
0x66A130: jz      short loc_66A136
0x66A132: push    0
0x66A134: jmp     short loc_66A138
0x66A136: push    1
0x66A138: call    eax
0x66A13A: movzx   ecx, byte ptr [esi+5C0h]
0x66A141: push    ecx
0x66A142: mov     ecx, esi
0x66A144: call    sub_663070
0x66A149: mov     edx, ds:0B33B00h
0x66A14F: cmp     byte ptr [edx+7Ch], 5Ch ; '\'
0x66A153: jnb     loc_66A3A5
0x66A159: fldz
0x66A15B: lea     eax, [esp+1Ch+arg_0]
0x66A15F: push    eax
0x66A160: fstp    [esp+20h+var_C]
0x66A164: fld1
0x66A166: lea     ecx, [esp+20h+var_C]
0x66A16A: push    ecx
0x66A16B: fstp    [esp+24h+arg_0]
0x66A16F: push    8
0x66A171: mov     ecx, esi
0x66A173: call    Actor_GetBaseAVCalcFactors
0x66A178: fld     [esp+1Ch+arg_0]
0x66A17C: fmul    [esp+1Ch+var_C]
0x66A180: fstp    [esp+1Ch+arg_4]
0x66A184: fld     [esp+1Ch+arg_4]
0x66A188: fld     st
0x66A18A: call    Double_To_SInt32
0x66A18F: mov     [esp+1Ch+arg_4], eax
0x66A193: fild    [esp+1Ch+arg_4]
0x66A197: fstp    [esp+1Ch+arg_4]
0x66A19B: fld     [esp+1Ch+arg_4]
0x66A19F: fld     st
0x66A1A1: fsubp   st(2), st
0x66A1A3: fxch    st(1)
0x66A1A5: fcomp   qword ptr ds:0A2FC68h
0x66A1AB: fnstsw  ax
0x66A1AD: test    ah, 1
0x66A1B0: jnz     short loc_66A1B8
0x66A1B2: fstp    [esp+1Ch+var_8]
0x66A1B6: jmp     short loc_66A1C2
0x66A1B8: fsub    qword ptr ds:0A2F928h
0x66A1BE: fstp    [esp+1Ch+var_8]
0x66A1C2: push    0; a2
0x66A1C4: mov     ecx, esi; this
0x66A1C6: call    Actor_GetActorBaseForm
0x66A1CB: mov     edx, [eax]
0x66A1CD: mov     ecx, eax
0x66A1CF: mov     eax, [edx+128h]
0x66A1D5: push    8
0x66A1D7: call    eax
0x66A1D9: mov     [esp+1Ch+arg_4], eax
0x66A1DD: fild    [esp+1Ch+arg_4]
0x66A1E1: fld     [esp+1Ch+var_8]
0x66A1E5: fstp    [esp+1Ch+arg_4]
0x66A1E9: fsub    [esp+1Ch+arg_4]
0x66A1ED: fstp    [esp+1Ch+arg_4]
0x66A1F1: fldz
0x66A1F3: fcom    [esp+1Ch+arg_4]
0x66A1F7: fnstsw  ax
0x66A1F9: test    ah, 41h
0x66A1FC: jnz     short loc_66A204
0x66A1FE: fstp    [esp+1Ch+arg_4]
0x66A202: jmp     short loc_66A206
0x66A204: fstp    st
0x66A206: push    0; a2
0x66A208: mov     ecx, esi; this
0x66A20A: call    Actor_GetActorBaseForm
0x66A20F: fld     [esp+1Ch+arg_4]
0x66A213: mov     edx, [eax]
0x66A215: push    ecx
0x66A216: fstp    dword ptr [esp+20h+var_20]
0x66A219: mov     ecx, eax
0x66A21B: mov     eax, [edx+130h]
0x66A221: push    8
0x66A223: call    eax
0x66A225: lea     ecx, [esp+1Ch+arg_0]
0x66A229: push    ecx
0x66A22A: lea     edx, [esp+20h+var_C]
0x66A22E: push    edx
0x66A22F: push    0Ah
0x66A231: mov     ecx, esi
0x66A233: call    Actor_GetBaseAVCalcFactors
0x66A238: fld     [esp+1Ch+arg_0]
0x66A23C: fmul    [esp+1Ch+var_C]
0x66A240: fstp    [esp+1Ch+arg_4]
0x66A244: fld     [esp+1Ch+arg_4]
0x66A248: fld     st
0x66A24A: call    Double_To_SInt32
0x66A24F: mov     [esp+1Ch+arg_4], eax
0x66A253: fild    [esp+1Ch+arg_4]
0x66A257: fstp    [esp+1Ch+arg_4]
0x66A25B: fld     [esp+1Ch+arg_4]
0x66A25F: fld     st
0x66A261: fsubp   st(2), st
0x66A263: fxch    st(1)
0x66A265: fcomp   qword ptr ds:0A2FC68h
0x66A26B: fnstsw  ax
0x66A26D: test    ah, 1
0x66A270: jnz     short loc_66A278
0x66A272: fstp    [esp+1Ch+var_8]
0x66A276: jmp     short loc_66A282
0x66A278: fsub    qword ptr ds:0A2F928h
0x66A27E: fstp    [esp+1Ch+var_8]
0x66A282: push    0; a2
0x66A284: mov     ecx, esi; this
0x66A286: call    Actor_GetActorBaseForm
0x66A28B: mov     edx, [eax]
0x66A28D: mov     ecx, eax
0x66A28F: mov     eax, [edx+128h]
0x66A295: push    0Ah
0x66A297: call    eax
0x66A299: mov     [esp+1Ch+arg_4], eax
0x66A29D: fild    [esp+1Ch+arg_4]
0x66A2A1: fld     [esp+1Ch+var_8]
0x66A2A5: fstp    [esp+1Ch+arg_4]
0x66A2A9: fsub    [esp+1Ch+arg_4]
0x66A2AD: fstp    [esp+1Ch+arg_4]
0x66A2B1: fldz
0x66A2B3: fcom    [esp+1Ch+arg_4]
0x66A2B7: fnstsw  ax
0x66A2B9: test    ah, 41h
0x66A2BC: jnz     short loc_66A2C4
0x66A2BE: fstp    [esp+1Ch+arg_4]
0x66A2C2: jmp     short loc_66A2C6
0x66A2C4: fstp    st
0x66A2C6: push    0; a2
0x66A2C8: mov     ecx, esi; this
0x66A2CA: call    Actor_GetActorBaseForm
0x66A2CF: fld     [esp+1Ch+arg_4]
0x66A2D3: mov     edx, [eax]
0x66A2D5: push    ecx
0x66A2D6: fstp    dword ptr [esp+20h+var_20]
0x66A2D9: mov     ecx, eax
0x66A2DB: mov     eax, [edx+130h]
0x66A2E1: push    0Ah
0x66A2E3: call    eax
0x66A2E5: lea     ecx, [esp+1Ch+arg_0]
0x66A2E9: push    ecx
0x66A2EA: lea     edx, [esp+20h+var_C]
0x66A2EE: push    edx
0x66A2EF: push    0Bh
0x66A2F1: mov     ecx, esi
0x66A2F3: call    Actor_GetBaseAVCalcFactors
0x66A2F8: fld     [esp+1Ch+arg_0]
0x66A2FC: fmul    [esp+1Ch+var_C]
0x66A300: fstp    [esp+1Ch+arg_4]
0x66A304: fld     [esp+1Ch+arg_4]
0x66A308: fld     st
0x66A30A: call    Double_To_SInt32
0x66A30F: mov     [esp+1Ch+arg_4], eax
0x66A313: fild    [esp+1Ch+arg_4]
0x66A317: fstp    [esp+1Ch+arg_4]
0x66A31B: fld     [esp+1Ch+arg_4]
0x66A31F: fld     st
0x66A321: fsubp   st(2), st
0x66A323: fxch    st(1)
0x66A325: fcomp   qword ptr ds:0A2FC68h
0x66A32B: fnstsw  ax
0x66A32D: test    ah, 1
0x66A330: jnz     short loc_66A338
0x66A332: fstp    [esp+1Ch+var_8]
0x66A336: jmp     short loc_66A342
0x66A338: fsub    qword ptr ds:0A2F928h
0x66A33E: fstp    [esp+1Ch+var_8]
0x66A342: push    0; a2
0x66A344: mov     ecx, esi; this
0x66A346: call    Actor_GetActorBaseForm
0x66A34B: mov     edx, [eax]
0x66A34D: mov     ecx, eax
0x66A34F: mov     eax, [edx+128h]
0x66A355: push    0Bh
0x66A357: call    eax
0x66A359: mov     [esp+1Ch+arg_4], eax
0x66A35D: fild    [esp+1Ch+arg_4]
0x66A361: fld     [esp+1Ch+var_8]
0x66A365: fstp    [esp+1Ch+arg_4]
0x66A369: fsub    [esp+1Ch+arg_4]
0x66A36D: fstp    [esp+1Ch+arg_4]
0x66A371: fldz
0x66A373: fcom    [esp+1Ch+arg_4]
0x66A377: fnstsw  ax
0x66A379: test    ah, 41h
0x66A37C: jnz     short loc_66A384
0x66A37E: fstp    [esp+1Ch+arg_4]
0x66A382: jmp     short loc_66A386
0x66A384: fstp    st
0x66A386: push    0; a2
0x66A388: mov     ecx, esi; this
0x66A38A: call    Actor_GetActorBaseForm
0x66A38F: fld     [esp+1Ch+arg_4]
0x66A393: mov     edx, [eax]
0x66A395: push    ecx
0x66A396: fstp    dword ptr [esp+20h+var_20]
0x66A399: mov     ecx, eax
0x66A39B: mov     eax, [edx+130h]
0x66A3A1: push    0Bh
0x66A3A3: call    eax
0x66A3A5: xor     edi, edi
0x66A3A7: push    edi
0x66A3A8: push    2
0x66A3AA: call    ActorValue_GetAVFromGroupOffset
0x66A3AF: add     esp, 8
0x66A3B2: push    eax; float
0x66A3B3: mov     ecx, esi
0x66A3B5: call    sub_663C50
0x66A3BA: add     edi, 1
0x66A3BD: cmp     edi, 15h
0x66A3C0: jl      short loc_66A3A7
0x66A3C2: pop     edi
0x66A3C3: pop     esi
0x66A3C4: pop     ebp
0x66A3C5: pop     ebx
0x66A3C6: add     esp, 0Ch
0x66A3C9: retn    8
