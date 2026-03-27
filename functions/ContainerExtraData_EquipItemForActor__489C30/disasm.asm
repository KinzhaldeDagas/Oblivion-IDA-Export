0x489C30: push    0FFFFFFFFh
0x489C32: push    offset ContainerExtraData_EquipItemForActor_SEH
0x489C37: mov     eax, large fs:0
0x489C3D: push    eax
0x489C3E: sub     esp, 0Ch
0x489C41: push    ebx
0x489C42: push    ebp
0x489C43: push    esi
0x489C44: push    edi
0x489C45: mov     eax, ds:0B30AACh
0x489C4A: xor     eax, esp
0x489C4C: push    eax
0x489C4D: lea     eax, [esp+2Ch+var_C]
0x489C51: mov     large fs:0, eax
0x489C57: mov     edi, ecx
0x489C59: mov     [esp+2Ch+var_10], edi
0x489C5D: fld     dword ptr ds:0A30634h
0x489C63: mov     ecx, [edi+4]
0x489C66: test    ecx, ecx
0x489C68: fst     dword ptr [edi+8]
0x489C6B: fstp    dword ptr [edi+0Ch]
0x489C6E: jz      loc_489D09
0x489C74: mov     eax, [ecx]
0x489C76: mov     edx, [eax+40h]
0x489C79: push    8000000h
0x489C7E: call    edx
0x489C80: mov     ebp, [esp+2Ch+arg_0]
0x489C84: mov     al, [ebp+4]
0x489C87: cmp     al, 16h
0x489C89: jz      short loc_489C8F
0x489C8B: cmp     al, 14h
0x489C8D: jnz     short loc_489D0D
0x489C8F: push    ebp
0x489C90: call    sub_4691B0
0x489C95: add     esp, 4
0x489C98: mov     esi, eax
0x489C9A: push    0
0x489C9C: push    7
0x489C9E: mov     ecx, esi
0x489CA0: call    TESBipedModelForm_CoversSlot
0x489CA5: test    al, al
0x489CA7: jnz     short loc_489D0D
0x489CA9: push    0
0x489CAB: push    6
0x489CAD: mov     ecx, esi
0x489CAF: call    TESBipedModelForm_CoversSlot
0x489CB4: test    al, al
0x489CB6: jnz     short loc_489D0D
0x489CB8: push    0
0x489CBA: push    8
0x489CBC: mov     ecx, esi
0x489CBE: call    TESBipedModelForm_CoversSlot
0x489CC3: test    al, al
0x489CC5: jnz     short loc_489D0D
0x489CC7: push    0
0x489CC9: push    0Dh
0x489CCB: mov     ecx, esi
0x489CCD: call    TESBipedModelForm_CoversSlot
0x489CD2: test    al, al
0x489CD4: jnz     short loc_489D0D
0x489CD6: mov     ecx, [esp+2Ch+arg_C]
0x489CDA: test    ecx, ecx
0x489CDC: jz      short loc_489CF8
0x489CDE: call    sub_41DEF0
0x489CE3: test    al, al
0x489CE5: jz      short loc_489CF8
0x489CE7: mov     ecx, [edi+4]
0x489CEA: mov     eax, [ecx]
0x489CEC: mov     edx, [eax+48h]
0x489CEF: push    20000000h
0x489CF4: call    edx
0x489CF6: jmp     short loc_489D0D
0x489CF8: mov     ecx, [edi+4]
0x489CFB: mov     eax, [ecx]
0x489CFD: mov     edx, [eax+40h]
0x489D00: push    20000000h
0x489D05: call    edx
0x489D07: jmp     short loc_489D0D
0x489D09: mov     ebp, [esp+2Ch+arg_0]
0x489D0D: mov     eax, [edi]
0x489D0F: test    eax, eax
0x489D11: mov     dl, 1
0x489D13: jz      short loc_489D2F
0x489D15: test    dl, dl
0x489D17: jz      short loc_489D43
0x489D19: mov     ecx, [eax]
0x489D1B: test    ecx, ecx
0x489D1D: jz      short loc_489D28
0x489D1F: cmp     [ecx+8], ebp
0x489D22: jnz     short loc_489D28
0x489D24: xor     dl, dl
0x489D26: jmp     short loc_489D2B
0x489D28: mov     eax, [eax+4]
0x489D2B: test    eax, eax
0x489D2D: jnz     short loc_489D15
0x489D2F: xor     ebx, ebx
0x489D31: mov     ecx, [edi+4]; this
0x489D34: test    ecx, ecx
0x489D36: mov     [esp+2Ch+var_18], ebx
0x489D3A: jz      short loc_489D4B
0x489D3C: call    TESObjectREFR_GetContainer
0x489D41: jmp     short loc_489D4D
0x489D43: test    eax, eax
0x489D45: jz      short loc_489D2F
0x489D47: mov     ebx, [eax]
0x489D49: jmp     short loc_489D31
0x489D4B: xor     eax, eax
0x489D4D: push    ebp
0x489D4E: mov     ecx, eax
0x489D50: call    TESContainer_GetFormCount
0x489D55: mov     ebp, eax
0x489D57: test    ebp, ebp
0x489D59: mov     esi, ebp
0x489D5B: jge     short loc_489D5F
0x489D5D: neg     ebp
0x489D5F: test    ebx, ebx
0x489D61: jz      short loc_489D66
0x489D63: add     esi, [ebx+4]
0x489D66: xor     edi, edi
0x489D68: test    ebx, ebx
0x489D6A: jz      short loc_489D82
0x489D6C: cmp     [ebx], edi
0x489D6E: jz      short loc_489D82
0x489D70: mov     ecx, ebx
0x489D72: call    sub_4845D0
0x489D77: mov     ecx, ebx
0x489D79: mov     edi, eax
0x489D7B: call    sub_484620
0x489D80: add     edi, eax
0x489D82: sub     esi, edi
0x489D84: test    ebx, ebx
0x489D86: mov     [esp+2Ch+var_14], esi
0x489D8A: jz      short loc_489DE8
0x489D8C: mov     eax, [ebx]
0x489D8E: test    eax, eax
0x489D90: jz      short loc_489DE8
0x489D92: cmp     dword ptr [eax], 0
0x489D95: jz      short loc_489DA8
0x489D97: mov     ecx, [eax]
0x489D99: call    sub_41DEF0
0x489D9E: test    al, al
0x489DA0: jz      short loc_489DA8
0x489DA2: sub     ebp, edi
0x489DA4: mov     [esp+2Ch+var_14], ebp
0x489DA8: mov     edi, [esp+2Ch+arg_C]
0x489DAC: test    edi, edi
0x489DAE: jz      short loc_489DE8
0x489DB0: mov     ebp, [ebx]
0x489DB2: push    edi
0x489DB3: mov     ecx, ebp
0x489DB5: call    sub_446C30
0x489DBA: test    al, al
0x489DBC: jnz     short loc_489DE8
0x489DBE: test    ebp, ebp
0x489DC0: jz      short loc_489DE0
0x489DC2: mov     esi, [ebp+0]
0x489DC5: test    esi, esi
0x489DC7: jz      short loc_489DE0
0x489DC9: push    edi
0x489DCA: mov     ecx, esi
0x489DCC: call    ExtraDataList_CompareList
0x489DD1: test    al, al
0x489DD3: jz      loc_489E8E
0x489DD9: mov     ebp, [ebp+4]
0x489DDC: test    ebp, ebp
0x489DDE: jnz     short loc_489DC2
0x489DE0: mov     [esp+2Ch+arg_C], 0
0x489DE8: mov     ebp, [esp+2Ch+arg_C]
0x489DEC: xor     esi, esi
0x489DEE: test    ebp, ebp
0x489DF0: mov     bl, 1
0x489DF2: jnz     short loc_489DFE
0x489DF4: cmp     [esp+2Ch+var_14], ebp
0x489DF8: jg      loc_489E97
0x489DFE: mov     edi, [esp+2Ch+var_18]
0x489E02: test    edi, edi
0x489E04: jz      loc_489EA3
0x489E0A: push    0
0x489E0C: mov     ecx, edi
0x489E0E: call    ContainerEntryExtraData_HasWorn
0x489E13: test    al, al
0x489E15: jnz     loc_48A4F5
0x489E1B: mov     eax, [edi]
0x489E1D: test    eax, eax
0x489E1F: mov     [esp+2Ch+arg_C], eax
0x489E23: jz      loc_489F64
0x489E29: lea     esp, [esp+0]
0x489E30: test    bl, bl
0x489E32: jz      loc_489F64
0x489E38: test    ebp, ebp
0x489E3A: mov     esi, [eax]
0x489E3C: jz      loc_489F47
0x489E42: cmp     ebp, esi
0x489E44: jnz     loc_489F47
0x489E4A: mov     ecx, esi
0x489E4C: call    ExtraDataList_GetExtraCount
0x489E51: cmp     ax, 1
0x489E55: jle     loc_489F26
0x489E5B: mov     eax, [esp+2Ch+arg_0]
0x489E5F: cmp     byte ptr [eax+4], 22h ; '"'
0x489E63: jz      loc_489F26
0x489E69: push    14h; Size
0x489E6B: call    FormHeapAlloc
0x489E70: add     esp, 4
0x489E73: mov     [esp+2Ch+var_10], eax
0x489E77: test    eax, eax
0x489E79: mov     [esp+2Ch+var_4], 1
0x489E81: jz      short loc_489EEA
0x489E83: mov     ecx, eax
0x489E85: call    ExtraDataList_constr
0x489E8A: mov     edi, eax
0x489E8C: jmp     short loc_489EEC
0x489E8E: mov     [esp+2Ch+arg_C], esi
0x489E92: jmp     loc_489DE8
0x489E97: mov     edi, [esp+2Ch+var_18]
0x489E9B: test    edi, edi
0x489E9D: jnz     loc_489FE0
0x489EA3: push    0Ch; Size
0x489EA5: call    FormHeapAlloc
0x489EAA: add     esp, 4
0x489EAD: mov     [esp+2Ch+arg_C], eax
0x489EB1: test    eax, eax
0x489EB3: mov     [esp+2Ch+var_4], 0
0x489EBB: jz      short loc_489ECD
0x489EBD: mov     ecx, [esp+2Ch+arg_0]
0x489EC1: push    0
0x489EC3: push    ecx
0x489EC4: mov     ecx, eax
0x489EC6: call    ContainerEntryExtraData_constr
0x489ECB: jmp     short loc_489ECF
0x489ECD: xor     eax, eax
0x489ECF: mov     edx, [esp+2Ch+var_10]
0x489ED3: mov     ecx, [edx]
0x489ED5: push    eax
0x489ED6: mov     [esp+30h+var_4], 0FFFFFFFFh
0x489EDE: mov     edi, eax
0x489EE0: call    BSSimpleList_PushBack
0x489EE5: jmp     loc_489FE0
0x489EEA: xor     edi, edi
0x489EEC: push    esi
0x489EED: mov     ecx, edi
0x489EEF: mov     [esp+30h+var_4], 0FFFFFFFFh
0x489EF7: mov     ebp, edi
0x489EF9: call    BaseExtraList_Copy
0x489EFE: push    1
0x489F00: mov     ecx, edi
0x489F02: call    ExtraDataList_SetExtraCount
0x489F07: mov     ecx, esi
0x489F09: call    ExtraDataList_GetExtraCount
0x489F0E: sub     ax, 1
0x489F12: mov     ecx, esi
0x489F14: push    eax
0x489F15: call    ExtraDataList_SetExtraCount
0x489F1A: mov     edi, [esp+2Ch+var_18]
0x489F1E: mov     eax, [esp+2Ch+arg_C]
0x489F22: xor     bl, bl
0x489F24: jmp     short loc_489F5C
0x489F26: mov     ecx, [esp+2Ch+arg_10]
0x489F2A: push    ecx
0x489F2B: push    1
0x489F2D: mov     ecx, esi
0x489F2F: call    SetWorn
0x489F34: mov     eax, [edi+4]
0x489F37: push    eax
0x489F38: mov     ecx, esi
0x489F3A: call    ExtraDataList_SetExtraCount
0x489F3F: mov     eax, [esp+2Ch+arg_C]
0x489F43: xor     bl, bl
0x489F45: jmp     short loc_489F5C
0x489F47: test    esi, esi
0x489F49: jz      short loc_489F55
0x489F4B: test    ebp, ebp
0x489F4D: jnz     short loc_489F55
0x489F4F: mov     ebp, esi
0x489F51: xor     bl, bl
0x489F53: jmp     short loc_489F5C
0x489F55: mov     eax, [eax+4]
0x489F58: mov     [esp+2Ch+arg_C], eax
0x489F5C: test    eax, eax
0x489F5E: jnz     loc_489E30
0x489F64: test    ebp, ebp
0x489F66: jz      short loc_489FD8
0x489F68: mov     ecx, ebp
0x489F6A: call    sub_41DF40
0x489F6F: test    al, al
0x489F71: jnz     short loc_489FD8
0x489F73: mov     edx, [esp+2Ch+arg_10]
0x489F77: push    edx
0x489F78: push    1
0x489F7A: mov     ecx, ebp
0x489F7C: call    SetWorn
0x489F81: mov     eax, [esp+2Ch+arg_4]
0x489F85: push    eax
0x489F86: mov     ecx, ebp
0x489F88: call    ExtraDataList_SetExtraCount
0x489F8D: cmp     dword ptr [edi], 0
0x489F90: jnz     short loc_489FB3
0x489F92: push    8; Size
0x489F94: call    FormHeapAlloc
0x489F99: add     esp, 4
0x489F9C: test    eax, eax
0x489F9E: jz      short loc_489FAF
0x489FA0: mov     dword ptr [eax], 0
0x489FA6: mov     dword ptr [eax+4], 0
0x489FAD: jmp     short loc_489FB1
0x489FAF: xor     eax, eax
0x489FB1: mov     [edi], eax
0x489FB3: mov     ecx, [edi]
0x489FB5: mov     eax, ecx
0x489FB7: test    eax, eax
0x489FB9: jz      short loc_489FCB
0x489FBB: jmp     short loc_489FC0
0x489FBD: align 10h
0x489FC0: cmp     [eax], ebp
0x489FC2: jz      short loc_489FD1
0x489FC4: mov     eax, [eax+4]
0x489FC7: test    eax, eax
0x489FC9: jnz     short loc_489FC0
0x489FCB: push    ebp
0x489FCC: call    BSSimpleList_PushFront
0x489FD1: mov     esi, ebp
0x489FD3: jmp     loc_48A071
0x489FD8: test    bl, bl
0x489FDA: jz      loc_48A071
0x489FE0: push    14h; Size
0x489FE2: call    FormHeapAlloc
0x489FE7: add     esp, 4
0x489FEA: mov     [esp+2Ch+arg_C], eax
0x489FEE: test    eax, eax
0x489FF0: mov     [esp+2Ch+var_4], 2
0x489FF8: jz      short loc_48A005
0x489FFA: mov     ecx, eax
0x489FFC: call    ExtraDataList_constr
0x48A001: mov     esi, eax
0x48A003: jmp     short loc_48A007
0x48A005: xor     esi, esi
0x48A007: mov     ecx, [esp+2Ch+arg_10]
0x48A00B: push    ecx
0x48A00C: push    1
0x48A00E: mov     ecx, esi
0x48A010: mov     [esp+34h+var_4], 0FFFFFFFFh
0x48A018: call    SetWorn
0x48A01D: mov     eax, [esp+2Ch+arg_4]
0x48A021: cmp     eax, 1
0x48A024: jle     short loc_48A02E
0x48A026: push    eax
0x48A027: mov     ecx, esi
0x48A029: call    ExtraDataList_SetExtraCount
0x48A02E: cmp     dword ptr [edi], 0
0x48A031: jnz     short loc_48A054
0x48A033: push    8; Size
0x48A035: call    FormHeapAlloc
0x48A03A: add     esp, 4
0x48A03D: test    eax, eax
0x48A03F: jz      short loc_48A050
0x48A041: mov     dword ptr [eax], 0
0x48A047: mov     dword ptr [eax+4], 0
0x48A04E: jmp     short loc_48A052
0x48A050: xor     eax, eax
0x48A052: mov     [edi], eax
0x48A054: mov     ecx, [edi]
0x48A056: mov     eax, ecx
0x48A058: test    eax, eax
0x48A05A: jz      short loc_48A06B
0x48A05C: lea     esp, [esp+0]
0x48A060: cmp     [eax], esi
0x48A062: jz      short loc_48A071
0x48A064: mov     eax, [eax+4]
0x48A067: test    eax, eax
0x48A069: jnz     short loc_48A060
0x48A06B: push    esi
0x48A06C: call    BSSimpleList_PushFront
0x48A071: test    esi, esi
0x48A073: jz      short loc_48A081
0x48A075: mov     edx, [esp+2Ch+arg_14]
0x48A079: push    edx
0x48A07A: mov     ecx, esi
0x48A07C: call    sub_41F370
0x48A081: mov     edi, [esp+2Ch+arg_8]
0x48A085: cmp     dword ptr [edi+58h], 0
0x48A089: jz      loc_48A4F5
0x48A08F: mov     ebx, [esp+2Ch+arg_0]
0x48A093: push    ebx
0x48A094: call    sub_4691B0
0x48A099: mov     ebp, eax
0x48A09B: movzx   eax, byte ptr [ebx+4]
0x48A09F: add     eax, 0FFFFFFECh; switch 15 cases
0x48A0A2: add     esp, 4
0x48A0A5: cmp     eax, 0Eh
0x48A0A8: ja      ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A0AE: movzx   eax, ds:byte_48A524[eax]
0x48A0B5: jmp     ds:jpt_48A0B5[eax*4]; switch jump
0x48A0BC: push    0; jumptable 0048A0B5 case 22
0x48A0BE: push    7
0x48A0C0: mov     ecx, ebp
0x48A0C2: call    TESBipedModelForm_CoversSlot
0x48A0C7: test    al, al
0x48A0C9: jnz     short loc_48A11A
0x48A0CB: push    0
0x48A0CD: push    6
0x48A0CF: mov     ecx, ebp
0x48A0D1: call    TESBipedModelForm_CoversSlot
0x48A0D6: test    al, al
0x48A0D8: jnz     short loc_48A11A
0x48A0DA: push    0
0x48A0DC: push    8
0x48A0DE: mov     ecx, ebp
0x48A0E0: call    TESBipedModelForm_CoversSlot
0x48A0E5: test    al, al
0x48A0E7: mov     ecx, [edi+58h]
0x48A0EA: mov     edx, [ecx]
0x48A0EC: jz      short loc_48A10B
0x48A0EE: mov     eax, [edx+320h]
0x48A0F4: call    eax
0x48A0F6: test    al, al
0x48A0F8: jnz     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A0FE: push    ebx
0x48A0FF: mov     ecx, edi
0x48A101: call    sub_4DCF90
0x48A106: jmp     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A10B: push    1
0x48A10D: mov     eax, [edx+31Ch]
0x48A113: call    eax
0x48A115: jmp     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A11A: mov     ecx, [edi+58h]
0x48A11D: mov     edx, [ecx]
0x48A11F: mov     eax, [edx+320h]
0x48A125: call    eax
0x48A127: test    al, al
0x48A129: jnz     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A12F: mov     ecx, [esp+2Ch+arg_10]
0x48A133: push    ecx
0x48A134: push    ebx
0x48A135: mov     ecx, edi
0x48A137: call    sub_4DCE60
0x48A13C: jmp     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A141: mov     ecx, [edi+58h]; jumptable 0048A0B5 case 33
0x48A144: mov     edx, [ecx]
0x48A146: mov     eax, [edx+0ECh]
0x48A14C: push    1
0x48A14E: call    eax
0x48A150: mov     ebp, eax
0x48A152: test    ebp, ebp
0x48A154: jz      short loc_48A193
0x48A156: mov     ecx, [edi+58h]
0x48A159: mov     edx, [ecx]
0x48A15B: mov     eax, [edx+138h]
0x48A161: call    eax
0x48A163: mov     ecx, [ebp+0]
0x48A166: mov     bl, al
0x48A168: call    BSSimpleList_Clear
0x48A16D: mov     ecx, [ebp+0]
0x48A170: push    esi
0x48A171: call    BSSimpleList_PushFront
0x48A176: test    bl, bl
0x48A178: mov     ecx, [esp+2Ch+arg_0]
0x48A17C: mov     [ebp+8], ecx
0x48A17F: jz      loc_48A237
0x48A185: push    0
0x48A187: mov     ecx, edi
0x48A189: call    sub_5E13D0
0x48A18E: jmp     loc_48A237
0x48A193: push    0Ch; Size
0x48A195: call    FormHeapAlloc
0x48A19A: add     esp, 4
0x48A19D: mov     [esp+2Ch+arg_0], eax
0x48A1A1: test    eax, eax
0x48A1A3: mov     [esp+2Ch+var_4], 3
0x48A1AB: jz      short loc_48A1BE
0x48A1AD: mov     edx, [esp+2Ch+arg_4]
0x48A1B1: push    edx
0x48A1B2: push    ebx
0x48A1B3: mov     ecx, eax
0x48A1B5: call    ContainerEntryExtraData_constr
0x48A1BA: mov     ebp, eax
0x48A1BC: jmp     short loc_48A1C0
0x48A1BE: xor     ebp, ebp
0x48A1C0: mov     ecx, [ebp+0]
0x48A1C3: push    esi
0x48A1C4: mov     [esp+30h+var_4], 0FFFFFFFFh
0x48A1CC: call    BSSimpleList_PushFront
0x48A1D1: mov     ebx, [edi+58h]
0x48A1D4: mov     eax, [edi]
0x48A1D6: mov     esi, [ebx]
0x48A1D8: mov     edx, [eax+154h]
0x48A1DE: mov     ecx, edi
0x48A1E0: add     esi, 104h
0x48A1E6: call    edx
0x48A1E8: push    eax
0x48A1E9: mov     eax, [esi]
0x48A1EB: push    ebp
0x48A1EC: mov     ecx, ebx
0x48A1EE: call    eax
0x48A1F0: test    al, al
0x48A1F2: jnz     short loc_48A21D
0x48A1F4: mov     ecx, [ebp+0]
0x48A1F7: test    ecx, ecx
0x48A1F9: jz      short loc_48A200
0x48A1FB: call    BSSimpleList_Clear
0x48A200: mov     ecx, [ebp+0]
0x48A203: push    ecx
0x48A204: call    FormHeapFree
0x48A209: push    ebp
0x48A20A: mov     dword ptr [ebp+0], 0
0x48A211: call    FormHeapFree
0x48A216: add     esp, 8
0x48A219: xor     ebp, ebp
0x48A21B: jmp     short loc_48A237
0x48A21D: mov     ecx, edi
0x48A21F: call    TESObjectREFR_GetAnimData
0x48A224: test    eax, eax
0x48A226: jz      short loc_48A237
0x48A228: mov     edx, [ebp+8]
0x48A22B: fld     dword ptr [edx+94h]
0x48A231: fstp    dword ptr [eax+0C0h]
0x48A237: mov     ecx, [edi+58h]
0x48A23A: mov     eax, [ecx]
0x48A23C: mov     edx, [eax+320h]
0x48A242: call    edx
0x48A244: test    al, al
0x48A246: jnz     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A24C: test    ebp, ebp
0x48A24E: jz      ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A254: mov     eax, [ebp+8]
0x48A257: push    eax
0x48A258: mov     ecx, edi
0x48A25A: call    EquipWeapon
0x48A25F: jmp     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A264: mov     ecx, [edi+58h]; jumptable 0048A0B5 case 26
0x48A267: mov     edx, [ecx]
0x48A269: mov     eax, [edx+0F0h]
0x48A26F: push    1
0x48A271: call    eax
0x48A273: mov     ebp, eax
0x48A275: test    ebp, ebp
0x48A277: jz      short loc_48A28F
0x48A279: mov     ecx, [ebp+0]
0x48A27C: call    BSSimpleList_Clear
0x48A281: mov     ecx, [ebp+0]
0x48A284: push    esi
0x48A285: call    BSSimpleList_PushFront
0x48A28A: mov     [ebp+8], ebx
0x48A28D: jmp     short loc_48A306
0x48A28F: push    0Ch; Size
0x48A291: call    FormHeapAlloc
0x48A296: add     esp, 4
0x48A299: mov     [esp+2Ch+arg_0], eax
0x48A29D: test    eax, eax
0x48A29F: mov     [esp+2Ch+var_4], 4
0x48A2A7: jz      short loc_48A2BA
0x48A2A9: mov     ecx, [esp+2Ch+arg_4]
0x48A2AD: push    ecx
0x48A2AE: push    ebx
0x48A2AF: mov     ecx, eax
0x48A2B1: call    ContainerEntryExtraData_constr
0x48A2B6: mov     ebp, eax
0x48A2B8: jmp     short loc_48A2BC
0x48A2BA: xor     ebp, ebp
0x48A2BC: mov     ecx, [ebp+0]
0x48A2BF: push    esi
0x48A2C0: mov     [esp+30h+var_4], 0FFFFFFFFh
0x48A2C8: call    BSSimpleList_PushFront
0x48A2CD: mov     ecx, [edi+58h]
0x48A2D0: mov     edx, [ecx]
0x48A2D2: mov     eax, [edx+108h]
0x48A2D8: push    ebp
0x48A2D9: call    eax
0x48A2DB: test    al, al
0x48A2DD: jnz     short loc_48A306
0x48A2DF: mov     ecx, [ebp+0]
0x48A2E2: test    ecx, ecx
0x48A2E4: jz      short loc_48A2EB
0x48A2E6: call    BSSimpleList_Clear
0x48A2EB: mov     ecx, [ebp+0]
0x48A2EE: push    ecx
0x48A2EF: call    FormHeapFree
0x48A2F4: push    ebp
0x48A2F5: mov     dword ptr [ebp+0], 0
0x48A2FC: call    FormHeapFree
0x48A301: add     esp, 8
0x48A304: xor     ebp, ebp
0x48A306: mov     ecx, [edi+58h]
0x48A309: mov     edx, [ecx]
0x48A30B: mov     eax, [edx+320h]
0x48A311: call    eax
0x48A313: test    al, al
0x48A315: jnz     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A31B: test    ebp, ebp
0x48A31D: jz      ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A323: mov     ecx, [ebp+8]
0x48A326: push    ecx
0x48A327: mov     ecx, edi
0x48A329: call    EquipLight
0x48A32E: jmp     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A333: push    0; jumptable 0048A0B5 case 20
0x48A335: push    0Dh
0x48A337: mov     ecx, ebp
0x48A339: call    TESBipedModelForm_CoversSlot
0x48A33E: test    al, al
0x48A340: mov     ecx, [edi+58h]
0x48A343: mov     edx, [ecx]
0x48A345: push    1
0x48A347: jz      loc_48A10D
0x48A34D: mov     eax, [edx+0F8h]
0x48A353: call    eax
0x48A355: mov     ebp, eax
0x48A357: test    ebp, ebp
0x48A359: jz      short loc_48A371
0x48A35B: mov     ecx, [ebp+0]
0x48A35E: call    BSSimpleList_Clear
0x48A363: mov     ecx, [ebp+0]
0x48A366: push    esi
0x48A367: call    BSSimpleList_PushFront
0x48A36C: mov     [ebp+8], ebx
0x48A36F: jmp     short loc_48A3E6
0x48A371: push    0Ch; Size
0x48A373: call    FormHeapAlloc
0x48A378: add     esp, 4
0x48A37B: mov     [esp+2Ch+arg_0], eax
0x48A37F: test    eax, eax
0x48A381: mov     [esp+2Ch+var_4], 5
0x48A389: jz      short loc_48A39C
0x48A38B: mov     ecx, [esp+2Ch+arg_4]
0x48A38F: push    ecx
0x48A390: push    ebx
0x48A391: mov     ecx, eax
0x48A393: call    ContainerEntryExtraData_constr
0x48A398: mov     ebp, eax
0x48A39A: jmp     short loc_48A39E
0x48A39C: xor     ebp, ebp
0x48A39E: mov     ecx, [ebp+0]
0x48A3A1: push    esi
0x48A3A2: mov     [esp+30h+var_4], 0FFFFFFFFh
0x48A3AA: call    BSSimpleList_PushFront
0x48A3AF: mov     ecx, [edi+58h]
0x48A3B2: mov     edx, [ecx]
0x48A3B4: mov     eax, [edx+110h]
0x48A3BA: push    ebp
0x48A3BB: call    eax
0x48A3BD: test    al, al
0x48A3BF: jnz     short loc_48A3E6
0x48A3C1: mov     ecx, [ebp+0]
0x48A3C4: test    ecx, ecx
0x48A3C6: jz      short loc_48A3CD
0x48A3C8: call    BSSimpleList_Clear
0x48A3CD: mov     ecx, [ebp+0]
0x48A3D0: push    ecx
0x48A3D1: call    FormHeapFree
0x48A3D6: push    ebp
0x48A3D7: mov     dword ptr [ebp+0], 0
0x48A3DE: call    FormHeapFree
0x48A3E3: add     esp, 8
0x48A3E6: mov     ecx, [edi+58h]
0x48A3E9: mov     edx, [ecx]
0x48A3EB: mov     eax, [edx+0F8h]
0x48A3F1: push    1
0x48A3F3: call    eax
0x48A3F5: mov     ecx, [edi+58h]
0x48A3F8: mov     edx, [ecx]
0x48A3FA: mov     esi, eax
0x48A3FC: mov     eax, [edx+320h]
0x48A402: call    eax
0x48A404: test    al, al
0x48A406: jnz     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A40C: test    esi, esi
0x48A40E: jz      ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A414: mov     ecx, [esi+8]
0x48A417: push    ecx
0x48A418: mov     ecx, edi
0x48A41A: call    EquipShield
0x48A41F: jmp     ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A424: mov     ecx, [edi+58h]; jumptable 0048A0B5 case 34
0x48A427: mov     edx, [ecx]
0x48A429: mov     eax, [edx+0F4h]
0x48A42F: push    1
0x48A431: call    eax
0x48A433: mov     ebp, eax
0x48A435: test    ebp, ebp
0x48A437: jz      short loc_48A44F
0x48A439: mov     ecx, [ebp+0]
0x48A43C: call    BSSimpleList_Clear
0x48A441: mov     ecx, [ebp+0]
0x48A444: push    esi
0x48A445: call    BSSimpleList_PushFront
0x48A44A: mov     [ebp+8], ebx
0x48A44D: jmp     short loc_48A4CA
0x48A44F: push    0Ch; Size
0x48A451: call    FormHeapAlloc
0x48A456: add     esp, 4
0x48A459: mov     [esp+2Ch+arg_0], eax
0x48A45D: test    eax, eax
0x48A45F: mov     [esp+2Ch+var_4], 6
0x48A467: jz      short loc_48A477
0x48A469: push    0
0x48A46B: push    ebx
0x48A46C: mov     ecx, eax
0x48A46E: call    ContainerEntryExtraData_constr
0x48A473: mov     ebp, eax
0x48A475: jmp     short loc_48A479
0x48A477: xor     ebp, ebp
0x48A479: mov     ecx, [ebp+0]
0x48A47C: push    esi
0x48A47D: mov     [esp+30h+var_4], 0FFFFFFFFh
0x48A485: call    BSSimpleList_PushFront
0x48A48A: mov     ecx, [esp+2Ch+arg_4]
0x48A48E: mov     [ebp+4], ecx
0x48A491: mov     ecx, [edi+58h]
0x48A494: mov     edx, [ecx]
0x48A496: mov     eax, [edx+10Ch]
0x48A49C: push    ebp
0x48A49D: call    eax
0x48A49F: test    al, al
0x48A4A1: jnz     short loc_48A4CA
0x48A4A3: mov     ecx, [ebp+0]
0x48A4A6: test    ecx, ecx
0x48A4A8: jz      short loc_48A4AF
0x48A4AA: call    BSSimpleList_Clear
0x48A4AF: mov     ecx, [ebp+0]
0x48A4B2: push    ecx
0x48A4B3: call    FormHeapFree
0x48A4B8: push    ebp
0x48A4B9: mov     dword ptr [ebp+0], 0
0x48A4C0: call    FormHeapFree
0x48A4C5: add     esp, 8
0x48A4C8: xor     ebp, ebp
0x48A4CA: mov     ecx, [edi+58h]
0x48A4CD: mov     edx, [ecx]
0x48A4CF: mov     eax, [edx+320h]
0x48A4D5: call    eax
0x48A4D7: test    al, al
0x48A4D9: jnz     short ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A4DB: test    ebp, ebp
0x48A4DD: jz      short ContainerExtraData_EquipItemForActor___def_48A0B5; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A4DF: mov     ecx, [ebp+8]
0x48A4E2: push    ecx
0x48A4E3: mov     ecx, edi
0x48A4E5: call    sub_4E1DF0
0x48A4EA: mov     edx, [edi+3Ch]; jumptable 0048A0B5 default case, cases 21,23-25,27-32
0x48A4ED: push    edx
0x48A4EE: mov     ecx, edi
0x48A4F0: call    sub_5EA1A0
0x48A4F5: mov     ecx, [esp+2Ch+var_C]
0x48A4F9: mov     large fs:0, ecx
0x48A500: pop     ecx
0x48A501: pop     edi
0x48A502: pop     esi
0x48A503: pop     ebp
0x48A504: pop     ebx
0x48A505: add     esp, 18h
0x48A508: retn    18h
