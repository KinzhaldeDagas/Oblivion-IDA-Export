0x5D4EE0: push    0FFFFFFFFh
0x5D4EE2: push    offset BoundItemEffect_Load_SEH
0x5D4EE7: mov     eax, large fs:0
0x5D4EED: push    eax
0x5D4EEE: sub     esp, 10h
0x5D4EF1: push    ebx
0x5D4EF2: push    ebp
0x5D4EF3: push    esi
0x5D4EF4: push    edi
0x5D4EF5: mov     eax, ds:0B30AACh
0x5D4EFA: xor     eax, esp
0x5D4EFC: push    eax
0x5D4EFD: lea     eax, [esp+30h+var_C]
0x5D4F01: mov     large fs:0, eax
0x5D4F07: mov     esi, ecx
0x5D4F09: xor     ebp, ebp
0x5D4F0B: cmp     [esi+2Ch], ebp
0x5D4F0E: jnz     short loc_5D4F21
0x5D4F10: mov     eax, ds:0B389B0h
0x5D4F15: sub     esp, 8
0x5D4F18: mov     [esp+38h+var_14], esp
0x5D4F1C: jmp     loc_5D51C7
0x5D4F21: mov     ecx, [esi+74h]
0x5D4F24: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D4F29: test    eax, eax
0x5D4F2B: jz      loc_5D51BB
0x5D4F31: mov     ecx, [esi+74h]
0x5D4F34: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D4F39: cmp     byte ptr [eax], 0
0x5D4F3C: jz      loc_5D51BB
0x5D4F42: mov     eax, [esi+2Ch]
0x5D4F45: mov     eax, [eax+8]
0x5D4F48: movzx   eax, byte ptr [eax+4]
0x5D4F4C: push    eax; a1
0x5D4F4D: call    TESForm_CreateDynamic
0x5D4F52: mov     ecx, [esi+2Ch]
0x5D4F55: mov     edi, eax
0x5D4F57: mov     eax, [ecx+8]
0x5D4F5A: mov     edx, [edi]
0x5D4F5C: add     esp, 4
0x5D4F5F: push    eax
0x5D4F60: mov     eax, [edx+0B4h]
0x5D4F66: mov     ecx, edi
0x5D4F68: call    eax
0x5D4F6A: mov     ecx, ds:0B33A98h
0x5D4F70: push    edi
0x5D4F71: call    TESDataHandler_AddForm
0x5D4F76: mov     al, [edi+4]
0x5D4F79: cmp     al, 14h
0x5D4F7B: jz      short loc_5D4F86
0x5D4F7D: cmp     al, 16h
0x5D4F7F: mov     byte ptr [esp+30h+var_1C+3], 0
0x5D4F84: jnz     short loc_5D4F8B
0x5D4F86: mov     byte ptr [esp+30h+var_1C+3], 1
0x5D4F8B: push    ebp; int
0x5D4F8C: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x5D4F91: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5D4F96: push    ebp; int
0x5D4F97: push    edi; void *
0x5D4F98: call    OblivionDynamicCast
0x5D4F9D: mov     ebx, eax
0x5D4F9F: add     esp, 14h
0x5D4FA2: cmp     ebx, ebp
0x5D4FA4: jz      short loc_5D4FB8
0x5D4FA6: mov     ecx, [esi+74h]
0x5D4FA9: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D4FAE: push    ebp; a3
0x5D4FAF: push    eax; a2
0x5D4FB0: lea     ecx, [ebx+4]; this
0x5D4FB3: call    BSStringT_Set
0x5D4FB8: push    ebp; int
0x5D4FB9: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5D4FBE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5D4FC3: push    ebp; int
0x5D4FC4: push    edi; void *
0x5D4FC5: call    OblivionDynamicCast
0x5D4FCA: add     esp, 14h
0x5D4FCD: cmp     eax, ebp
0x5D4FCF: mov     [esp+30h+var_14], eax
0x5D4FD3: jz      loc_5D5110
0x5D4FD9: push    44h ; 'D'; Size
0x5D4FDB: call    FormHeapAlloc
0x5D4FE0: add     esp, 4
0x5D4FE3: mov     [esp+30h+var_18], eax
0x5D4FE7: cmp     eax, ebp
0x5D4FE9: mov     [esp+30h+var_4], ebp
0x5D4FED: jz      short loc_5D4FFA
0x5D4FEF: mov     ecx, eax; this
0x5D4FF1: call    ??0EnchantmentItem@@QAE@XZ; EnchantmentItem::EnchantmentItem(void)
0x5D4FF6: mov     ebx, eax
0x5D4FF8: jmp     short loc_5D4FFC
0x5D4FFA: xor     ebx, ebx
0x5D4FFC: mov     eax, [esi+28h]
0x5D4FFF: cmp     eax, ebp
0x5D5001: mov     [esp+30h+var_4], 0FFFFFFFFh
0x5D5009: jz      loc_5D508C
0x5D500F: lea     ecx, [eax+7Ch]
0x5D5012: cmp     ecx, ebp
0x5D5014: mov     [esp+30h+var_18], ecx
0x5D5018: jz      short loc_5D508C
0x5D501A: jmp     short loc_5D5024
0x5D501C: align 10h
0x5D5020: mov     ecx, [esp+30h+var_18]
0x5D5024: mov     ebp, [ecx]
0x5D5026: test    ebp, ebp
0x5D5028: jz      short loc_5D508A
0x5D502A: cmp     byte ptr [esp+30h+var_1C+3], 0
0x5D502F: mov     eax, [ebp+10h]
0x5D5032: jz      short loc_5D503A
0x5D5034: test    eax, eax
0x5D5036: jz      short loc_5D5044
0x5D5038: jmp     short loc_5D507F
0x5D503A: cmp     eax, 1
0x5D503D: jz      short loc_5D5044
0x5D503F: cmp     eax, 2
0x5D5042: jnz     short loc_5D507F
0x5D5044: push    24h ; '$'; Size
0x5D5046: call    FormHeapAlloc
0x5D504B: add     esp, 4
0x5D504E: mov     [esp+30h+var_10], eax
0x5D5052: test    eax, eax
0x5D5054: mov     [esp+30h+var_4], 1
0x5D505C: jz      short loc_5D5068
0x5D505E: push    ebp
0x5D505F: mov     ecx, eax
0x5D5061: call    EffectItem_constrCopy
0x5D5066: jmp     short loc_5D506A
0x5D5068: xor     eax, eax
0x5D506A: push    eax
0x5D506B: lea     ecx, [ebx+24h]
0x5D506E: mov     [esp+34h+var_4], 0FFFFFFFFh
0x5D5076: call    EffectItemList_AddItem
0x5D507B: mov     ecx, [esp+30h+var_18]
0x5D507F: mov     eax, [ecx+4]
0x5D5082: test    eax, eax
0x5D5084: mov     [esp+30h+var_18], eax
0x5D5088: jnz     short loc_5D5020
0x5D508A: xor     ebp, ebp
0x5D508C: mov     eax, [esp+30h+var_14]
0x5D5090: xor     ecx, ecx
0x5D5092: cmp     byte ptr [esp+30h+var_1C+3], cl
0x5D5096: setnz   cl
0x5D5099: add     ecx, 2
0x5D509C: mov     [ebx+34h], ecx
0x5D509F: mov     dx, [esi+7Ch]
0x5D50A3: mov     [eax+8], dx
0x5D50A7: cmp     [ebx+2Ch], ebp
0x5D50AA: jnz     short loc_5D5101
0x5D50AC: cmp     [ebx+28h], ebp
0x5D50AF: jnz     short loc_5D5101
0x5D50B1: mov     eax, ds:0B389B0h
0x5D50B6: sub     esp, 8
0x5D50B9: mov     ecx, esp; this
0x5D50BB: mov     [esp+38h+var_10], esp
0x5D50BF: push    ebp; a3
0x5D50C0: push    eax; a2
0x5D50C1: mov     [ecx], ebp
0x5D50C3: mov     [ecx+4], bp
0x5D50C7: mov     [ecx+6], bp
0x5D50CB: call    BSStringT_Set
0x5D50D0: mov     ecx, esi
0x5D50D2: call    ShowMessageBox??
0x5D50D7: mov     eax, [edi]
0x5D50D9: mov     edx, [eax+10h]
0x5D50DC: push    1
0x5D50DE: mov     ecx, edi
0x5D50E0: call    edx
0x5D50E2: mov     eax, [ebx]
0x5D50E4: mov     edx, [eax+10h]
0x5D50E7: push    1
0x5D50E9: mov     ecx, ebx
0x5D50EB: call    edx
0x5D50ED: mov     ecx, [esp+30h+var_C]
0x5D50F1: mov     large fs:0, ecx
0x5D50F8: pop     ecx
0x5D50F9: pop     edi
0x5D50FA: pop     esi
0x5D50FB: pop     ebp
0x5D50FC: pop     ebx
0x5D50FD: add     esp, 1Ch
0x5D5100: retn
0x5D5101: mov     [eax+4], ebx
0x5D5104: mov     ecx, ds:0B33A98h
0x5D510A: push    ebx
0x5D510B: call    TESDataHandler_AddForm
0x5D5110: mov     ecx, ds:0B33B00h
0x5D5116: push    edi
0x5D5117: call    SaveLoad_AddCreatedObj
0x5D511C: mov     eax, [esi+2Ch]
0x5D511F: mov     ecx, [eax]
0x5D5121: xor     edx, edx
0x5D5123: cmp     ecx, ebp
0x5D5125: jz      short loc_5D5129
0x5D5127: mov     edx, [ecx]
0x5D5129: mov     ecx, ds:0B333C4h
0x5D512F: mov     ebx, [ecx]
0x5D5131: mov     eax, [eax+8]
0x5D5134: push    ebp
0x5D5135: push    1
0x5D5137: push    ebp
0x5D5138: push    ebp
0x5D5139: push    ebp
0x5D513A: push    ebp
0x5D513B: push    ebp
0x5D513C: push    1
0x5D513E: push    edx
0x5D513F: mov     edx, [ebx+100h]
0x5D5145: push    eax
0x5D5146: call    edx
0x5D5148: mov     ecx, ds:0B333C4h
0x5D514E: push    1
0x5D5150: push    ebp
0x5D5151: push    edi
0x5D5152: call    TESObjectREFR_AddItem_Abbrev
0x5D5157: mov     ecx, ds:0B333C4h
0x5D515D: mov     eax, [ecx]
0x5D515F: mov     edx, [esi+28h]
0x5D5162: mov     eax, [eax+100h]
0x5D5168: push    ebp
0x5D5169: push    1
0x5D516B: push    ebp
0x5D516C: push    ebp
0x5D516D: push    ebp
0x5D516E: push    ebp
0x5D516F: push    ebp
0x5D5170: push    1
0x5D5172: push    ebp
0x5D5173: push    edx
0x5D5174: call    eax
0x5D5176: call    sub_5C1900
0x5D517B: mov     edi, [esi+2Ch]
0x5D517E: cmp     edi, ebp
0x5D5180: jz      short loc_5D5192
0x5D5182: mov     ecx, edi
0x5D5184: call    ContainerEntryExtraData_DestroyDataTable
0x5D5189: push    edi
0x5D518A: call    FormHeapFree
0x5D518F: add     esp, 4
0x5D5192: push    22h ; '"'; int
0x5D5194: mov     [esi+2Ch], ebp
0x5D5197: mov     [esi+28h], ebp
0x5D519A: call    sub_57DE50
0x5D519F: add     esp, 4
0x5D51A2: call    sub_5D41E0
0x5D51A7: mov     ecx, [esp+30h+var_C]
0x5D51AB: mov     large fs:0, ecx
0x5D51B2: pop     ecx
0x5D51B3: pop     edi
0x5D51B4: pop     esi
0x5D51B5: pop     ebp
0x5D51B6: pop     ebx
0x5D51B7: add     esp, 1Ch
0x5D51BA: retn
0x5D51BB: mov     eax, ds:0B389D0h
0x5D51C0: sub     esp, 8
0x5D51C3: mov     [esp+38h+var_10], esp
0x5D51C7: mov     ecx, esp; this
0x5D51C9: push    ebp; a3
0x5D51CA: mov     [ecx], ebp
0x5D51CC: mov     [ecx+4], bp
0x5D51D0: push    eax; a2
0x5D51D1: mov     [ecx+6], bp
0x5D51D5: call    BSStringT_Set
0x5D51DA: mov     ecx, esi
0x5D51DC: call    ShowMessageBox??
0x5D51E1: mov     ecx, [esp+30h+var_C]
0x5D51E5: mov     large fs:0, ecx
0x5D51EC: pop     ecx
0x5D51ED: pop     edi
0x5D51EE: pop     esi
0x5D51EF: pop     ebp
0x5D51F0: pop     ebx
0x5D51F1: add     esp, 1Ch
0x5D51F4: retn
