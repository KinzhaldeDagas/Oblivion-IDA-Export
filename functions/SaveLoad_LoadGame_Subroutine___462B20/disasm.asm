0x462B20: sub     esp, 50h
0x462B23: push    ebx
0x462B24: push    ebp
0x462B25: push    esi
0x462B26: mov     esi, ecx
0x462B28: or      dword ptr [esi+18h], 4000h
0x462B2F: push    edi; ArgList
0x462B30: mov     ecx, offset dword_B3BDB0
0x462B35: call    sub_67CF00
0x462B3A: mov     ecx, ds:0B3BF80h
0x462B40: test    ecx, ecx
0x462B42: jz      short loc_462B49
0x462B44: call    sub_683500
0x462B49: mov     ecx, ds:0B35B90h
0x462B4F: test    ecx, ecx
0x462B51: jz      short loc_462B58
0x462B53: call    sub_4BE420
0x462B58: mov     ecx, ds:0B35B8Ch
0x462B5E: test    ecx, ecx
0x462B60: jz      short loc_462B67
0x462B62: call    sub_4BD8C0
0x462B67: mov     ecx, ds:0B33A1Ch
0x462B6D: call    sub_43E0F0
0x462B72: mov     ecx, ds:0B333C4h
0x462B78: call    sub_65E800
0x462B7D: call    sub_4F9FD0
0x462B82: call    sub_4F9DD0
0x462B87: mov     ecx, esi
0x462B89: call    SaveLoad_ClearCreatedObjList??
0x462B8E: mov     edi, [esp+60h+arg_0]
0x462B92: mov     ebx, 1
0x462B97: push    ebx
0x462B98: lea     eax, [esp+64h+a3]
0x462B9C: push    eax
0x462B9D: push    4
0x462B9F: lea     ecx, [esp+6Ch+var_40]
0x462BA3: push    ecx
0x462BA4: mov     ds:0B3521Dh, bl
0x462BAA: mov     edx, [edi+4]
0x462BAD: push    edi
0x462BAE: mov     [esp+74h+a3], ebx
0x462BB2: call    edx
0x462BB4: mov     eax, [esp+74h+var_40]
0x462BB8: add     esp, 14h
0x462BBB: cmp     eax, 0FF000800h
0x462BC0: jnb     short loc_462BCB
0x462BC2: mov     eax, 0FF000800h
0x462BC7: mov     [esp+60h+var_40], eax
0x462BCB: mov     ecx, ds:0B33A98h
0x462BD1: push    ebx
0x462BD2: lea     edx, [esp+64h+a3]
0x462BD6: push    edx
0x462BD7: mov     [ecx+8C0h], eax
0x462BDD: mov     ecx, [edi+4]
0x462BE0: push    4
0x462BE2: lea     eax, [esp+6Ch+var_3C]
0x462BE6: push    eax
0x462BE7: push    edi
0x462BE8: mov     byte ptr [esp+74h+arg_0], bl
0x462BEC: mov     [esp+74h+a3], ebx
0x462BF0: call    ecx
0x462BF2: mov     edx, [esp+74h+var_3C]
0x462BF6: mov     ecx, [esi+4Ch]
0x462BF9: mov     eax, edx
0x462BFB: add     esp, 14h
0x462BFE: shr     eax, 18h
0x462C01: test    ecx, ecx
0x462C03: jz      short loc_462C2D
0x462C05: cmp     al, 0FFh
0x462C07: jz      short loc_462C2D
0x462C09: cmp     al, [esi+48h]
0x462C0C: jnb     short loc_462C29
0x462C0E: movzx   eax, al
0x462C11: mov     cl, [eax+ecx]
0x462C14: cmp     cl, 0FFh
0x462C17: jz      short loc_462C29
0x462C19: movzx   eax, cl
0x462C1C: shl     eax, 18h
0x462C1F: and     edx, 0FFFFFFh
0x462C25: add     eax, edx
0x462C27: jmp     short loc_462C2F
0x462C29: xor     eax, eax
0x462C2B: jmp     short loc_462C2F
0x462C2D: mov     eax, edx
0x462C2F: push    0; int
0x462C31: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x462C36: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x462C3B: push    0; int
0x462C3D: push    eax; a1
0x462C3E: mov     [esp+74h+var_3C], eax
0x462C42: call    TESForm_LookupByFormID
0x462C47: add     esp, 4
0x462C4A: push    eax; void *
0x462C4B: call    OblivionDynamicCast
0x462C50: add     esp, 14h
0x462C53: test    eax, eax
0x462C55: jz      short loc_462C65
0x462C57: mov     ecx, ds:0B333A0h
0x462C5D: push    eax
0x462C5E: call    sub_4431F0
0x462C63: jmp     short loc_462C6A
0x462C65: mov     byte ptr [esp+60h+arg_0], 0
0x462C6A: mov     eax, [edi+4]
0x462C6D: push    ebx
0x462C6E: lea     ecx, [esp+64h+a3]
0x462C72: push    ecx
0x462C73: push    4
0x462C75: lea     edx, [esp+6Ch+var_44]
0x462C79: push    edx
0x462C7A: push    edi
0x462C7B: mov     [esp+74h+a3], ebx
0x462C7F: call    eax
0x462C81: mov     eax, [edi+4]
0x462C84: push    ebx
0x462C85: lea     ecx, [esp+78h+a3]
0x462C89: push    ecx
0x462C8A: push    4
0x462C8C: lea     edx, [esp+80h+var_38]
0x462C90: push    edx
0x462C91: push    edi
0x462C92: mov     [esp+88h+a3], ebx
0x462C96: call    eax
0x462C98: mov     eax, [edi+4]
0x462C9B: push    ebx
0x462C9C: lea     ecx, [esp+8Ch+a3]
0x462CA0: push    ecx
0x462CA1: push    4
0x462CA3: lea     edx, [esp+94h+a1]
0x462CA7: push    edx
0x462CA8: push    edi
0x462CA9: mov     [esp+9Ch+a3], ebx
0x462CAD: call    eax
0x462CAF: mov     ecx, [esp+9Ch+a1]
0x462CB3: mov     edx, [esi+4Ch]
0x462CB6: mov     eax, ecx
0x462CB8: add     esp, 3Ch
0x462CBB: shr     eax, 18h
0x462CBE: test    edx, edx
0x462CC0: jz      short loc_462CEA
0x462CC2: cmp     al, 0FFh
0x462CC4: jz      short loc_462CEA
0x462CC6: cmp     al, [esi+48h]
0x462CC9: jnb     short loc_462CE6
0x462CCB: movzx   eax, al
0x462CCE: mov     dl, [eax+edx]
0x462CD1: cmp     dl, 0FFh
0x462CD4: jz      short loc_462CE6
0x462CD6: movzx   eax, dl
0x462CD9: shl     eax, 18h
0x462CDC: and     ecx, 0FFFFFFh
0x462CE2: add     eax, ecx
0x462CE4: jmp     short loc_462CEC
0x462CE6: xor     eax, eax
0x462CE8: jmp     short loc_462CEC
0x462CEA: mov     eax, ecx
0x462CEC: push    1; a4
0x462CEE: lea     ecx, [esp+64h+a3]
0x462CF2: push    ecx; a3
0x462CF3: push    0Ch; a2
0x462CF5: lea     edx, [esp+6Ch+var_24]
0x462CF9: push    edx
0x462CFA: mov     [esp+70h+a1], eax
0x462CFE: mov     eax, [edi+4]
0x462D01: push    edi
0x462D02: mov     [esp+74h+a3], ebx
0x462D06: call    eax
0x462D08: mov     ecx, dword ptr [esp+74h+var_24]
0x462D0C: mov     edx, dword ptr [esp+74h+var_24+4]
0x462D10: add     esp, 8
0x462D13: mov     eax, esp
0x462D15: mov     [eax], ecx
0x462D17: mov     ecx, [esp+6Ch+var_1C]
0x462D1B: mov     [eax+4], edx
0x462D1E: mov     [eax+8], ecx
0x462D21: mov     ecx, ds:0B333C4h; this
0x462D27: call    TESObjectREFR_SetPosition
0x462D2C: mov     edx, [esp+60h+a1]
0x462D30: push    edx; a1
0x462D31: call    TESForm_LookupByFormID
0x462D36: push    0; int
0x462D38: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x462D3D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x462D42: mov     ebp, eax
0x462D44: push    0; int
0x462D46: push    ebp; void *
0x462D47: call    OblivionDynamicCast
0x462D4C: push    0; int
0x462D4E: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x462D53: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x462D58: push    0; int
0x462D5A: push    ebp; void *
0x462D5B: mov     ebx, eax
0x462D5D: call    OblivionDynamicCast
0x462D62: add     esp, 2Ch
0x462D65: test    eax, eax
0x462D67: mov     [esp+60h+var_30], eax
0x462D6B: jnz     short loc_462D75
0x462D6D: test    ebx, ebx
0x462D6F: jnz     short loc_462D75
0x462D71: mov     byte ptr [esp+60h+arg_0], bl
0x462D75: mov     ecx, ds:0B333C4h
0x462D7B: call    sub_5F0410
0x462D80: mov     ebp, [esp+60h+var_30]
0x462D84: push    ebp
0x462D85: push    0
0x462D87: call    sub_4835D0
0x462D8C: mov     ecx, dword ptr [esp+68h+var_24]
0x462D90: mov     edx, dword ptr [esp+68h+var_24+4]
0x462D94: add     esp, 8
0x462D97: push    ebp; int
0x462D98: push    ebx; int
0x462D99: sub     esp, 0Ch
0x462D9C: mov     eax, esp
0x462D9E: mov     [eax], ecx
0x462DA0: mov     ecx, [esp+74h+var_1C]
0x462DA4: mov     [eax+4], edx
0x462DA7: mov     [eax+8], ecx
0x462DAA: mov     ecx, esi
0x462DAC: call    sub_45A380
0x462DB1: test    al, al
0x462DB3: jz      short loc_462DEA
0x462DB5: mov     ecx, ds:0B33A98h
0x462DBB: push    0FFFFFFFDh
0x462DBD: call    sub_447DB0
0x462DC2: push    0
0x462DC4: call    sub_5AD980
0x462DC9: add     esp, 4
0x462DCC: mov     ecx, esi
0x462DCE: call    sub_45EC50
0x462DD3: push    0
0x462DD5: call    sub_5AD980
0x462DDA: mov     ecx, ds:0B33A98h
0x462DE0: add     esp, 4
0x462DE3: push    0FFFFFFFEh
0x462DE5: call    sub_447DB0
0x462DEA: cmp     byte ptr [esp+60h+arg_0], 0
0x462DEF: jz      loc_463083
0x462DF5: test    ebx, ebx
0x462DF7: jz      short loc_462E69
0x462DF9: mov     edx, ds:0B333A0h
0x462DFF: mov     eax, [esp+60h+var_44]
0x462E03: mov     [edx+20h], eax
0x462E06: mov     ecx, [esp+60h+var_38]
0x462E0A: mov     edx, ds:0B333A0h
0x462E10: mov     [edx+24h], ecx
0x462E13: or      dword ptr [esi+18h], 10h
0x462E17: mov     ecx, ds:0B333C4h; this
0x462E1D: call    TESObjectREFR_GetParentCell
0x462E22: cmp     eax, ebx
0x462E24: jz      loc_463074
0x462E2A: mov     ecx, ds:0B333C4h; int
0x462E30: mov     edx, [ecx+20h]
0x462E33: push    0; char
0x462E35: push    ebx; int
0x462E36: sub     esp, 0Ch
0x462E39: mov     eax, esp
0x462E3B: mov     [eax], edx
0x462E3D: mov     edx, [ecx+24h]
0x462E40: mov     [eax+4], edx
0x462E43: mov     edx, [ecx+28h]
0x462E46: mov     [eax+8], edx
0x462E49: mov     edx, [ecx+2Ch]
0x462E4C: sub     esp, 0Ch
0x462E4F: mov     eax, esp
0x462E51: mov     [eax], edx
0x462E53: mov     edx, [ecx+30h]
0x462E56: mov     [eax+4], edx
0x462E59: mov     edx, [ecx+34h]
0x462E5C: mov     [eax+8], edx
0x462E5F: call    sub_66EAF0
0x462E64: jmp     loc_463074
0x462E69: test    ebp, ebp
0x462E6B: jz      loc_463078
0x462E71: mov     ecx, ds:0B333C4h
0x462E77: mov     eax, [ecx]
0x462E79: mov     edx, [eax+174h]
0x462E7F: call    edx
0x462E81: mov     ecx, [eax]
0x462E83: mov     edx, [eax+4]
0x462E86: mov     eax, [eax+8]
0x462E89: mov     [esp+60h+var_C], ecx
0x462E8D: mov     ecx, ebp
0x462E8F: mov     [esp+60h+var_8], edx
0x462E93: mov     [esp+60h+var_4], eax
0x462E97: call    sub_4EF160
0x462E9C: test    al, al
0x462E9E: jz      loc_462F4C
0x462EA4: cmp     byte ptr ds:0B14F58h, 0
0x462EAB: jz      loc_462F4C
0x462EB1: fld     [esp+60h+var_8]
0x462EB5: sub     esp, 8
0x462EB8: fstp    [esp+68h+var_64]; float
0x462EBC: lea     ecx, [esp+68h+a3]
0x462EC0: fld     [esp+68h+var_C]
0x462EC4: fstp    [esp+68h+var_68]; float
0x462EC7: call    sub_4A6970
0x462ECC: mov     ecx, ds:0B33A98h
0x462ED2: mov     eax, [ecx+0BCh]
0x462ED8: test    eax, eax
0x462EDA: mov     [esp+60h+var_4D], 0
0x462EDF: jz      short loc_462F42
0x462EE1: lea     ebx, [eax+4]
0x462EE4: test    ebx, ebx
0x462EE6: jz      short loc_462F42
0x462EE8: mov     eax, [ebx]
0x462EEA: test    eax, eax
0x462EEC: jz      short loc_462F3B
0x462EEE: mov     ecx, [eax+8]
0x462EF1: mov     edx, ecx
0x462EF3: shr     edx, 6
0x462EF6: test    dl, 1
0x462EF9: jz      short loc_462F34
0x462EFB: shr     ecx, 5
0x462EFE: test    cl, 1
0x462F01: jnz     short loc_462F34
0x462F03: mov     ecx, [esp+60h+var_30]
0x462F07: cmp     [eax+20h], ecx
0x462F0A: jnz     short loc_462F34
0x462F0C: mov     ebp, [eax+1Ch]
0x462F0F: test    ebp, ebp
0x462F11: jz      short loc_462F34
0x462F13: mov     ecx, [ebp+0]
0x462F16: test    ecx, ecx
0x462F18: jz      short loc_462F34
0x462F1A: lea     edx, [esp+60h+a3]
0x462F1E: push    edx
0x462F1F: call    sub_4A7330
0x462F24: test    al, al
0x462F26: jz      short loc_462F2D
0x462F28: mov     [esp+60h+var_4D], 1
0x462F2D: mov     ebp, [ebp+4]
0x462F30: test    ebp, ebp
0x462F32: jnz     short loc_462F13
0x462F34: mov     ebx, [ebx+4]
0x462F37: test    ebx, ebx
0x462F39: jnz     short loc_462EE8
0x462F3B: cmp     [esp+60h+var_4D], 0
0x462F40: jnz     short loc_462F4C
0x462F42: mov     byte ptr [esp+60h+arg_0], 0
0x462F47: jmp     loc_463083
0x462F4C: mov     eax, [esp+60h+var_44]
0x462F50: mov     ecx, [esp+60h+var_38]
0x462F54: or      dword ptr [esi+18h], 10h
0x462F58: shl     eax, 0Ch
0x462F5B: mov     [esp+60h+a3], eax
0x462F5F: fild    [esp+60h+a3]
0x462F63: shl     ecx, 0Ch
0x462F66: mov     [esp+60h+a3], ecx
0x462F6A: mov     ecx, ds:0B333A0h
0x462F70: fstp    [esp+60h+var_18]
0x462F74: fild    [esp+60h+a3]
0x462F78: push    0
0x462F7A: lea     edx, [esp+64h+var_18]
0x462F7E: push    edx
0x462F7F: fstp    [esp+68h+var_14]
0x462F83: fldz
0x462F85: fstp    [esp+68h+var_10]
0x462F89: call    sub_444FB0
0x462F8E: fld     [esp+60h+var_C]
0x462F92: fistp   [esp+60h+a3]
0x462F96: mov     ebp, [esp+60h+a3]
0x462F9A: sar     ebp, 0Ch
0x462F9D: fld     [esp+60h+var_8]
0x462FA1: fistp   [esp+60h+a3]
0x462FA5: mov     eax, [esp+60h+var_30]
0x462FA9: mov     ebx, [esp+60h+a3]
0x462FAD: mov     ecx, ds:0B33A98h
0x462FB3: push    0
0x462FB5: push    eax
0x462FB6: sar     ebx, 0Ch
0x462FB9: push    ebx
0x462FBA: push    ebp
0x462FBB: call    sub_447740
0x462FC0: test    eax, eax
0x462FC2: mov     [esp+60h+a3], eax
0x462FC6: jz      short loc_462FD3
0x462FC8: mov     ecx, eax; this
0x462FCA: call    TESObjectCELL_GetNiNode?
0x462FCF: test    eax, eax
0x462FD1: jnz     short loc_46301D
0x462FD3: mov     ecx, ds:0B333C4h; this
0x462FD9: call    TESObjectREFR_GetParentCell
0x462FDE: test    eax, eax
0x462FE0: jz      short loc_462FF5
0x462FE2: mov     ecx, ds:0B333C4h; this
0x462FE8: push    ecx
0x462FE9: call    TESObjectREFR_GetParentCell
0x462FEE: mov     ecx, eax
0x462FF0: call    sub_4CECD0
0x462FF5: lea     ecx, [esp+60h+var_18]
0x462FF9: push    ecx
0x462FFA: mov     ecx, ds:0B333A0h
0x463000: call    sub_445A10
0x463005: mov     edx, [esp+60h+var_30]
0x463009: mov     ecx, ds:0B33A98h
0x46300F: push    1
0x463011: push    edx
0x463012: push    ebx; int
0x463013: push    ebp; int
0x463014: call    sub_447740
0x463019: mov     [esp+60h+a3], eax
0x46301D: mov     eax, [esp+60h+a3]
0x463021: test    eax, eax
0x463023: jz      short loc_46306F
0x463025: or      dword ptr [esi+18h], 80000h
0x46302C: mov     ecx, ds:0B333C4h; int
0x463032: mov     edx, [ecx+20h]
0x463035: push    0; char
0x463037: push    eax; int
0x463038: sub     esp, 0Ch
0x46303B: mov     eax, esp
0x46303D: mov     [eax], edx
0x46303F: mov     edx, [ecx+24h]
0x463042: mov     [eax+4], edx
0x463045: mov     edx, [ecx+28h]
0x463048: mov     [eax+8], edx
0x46304B: mov     edx, [ecx+2Ch]
0x46304E: sub     esp, 0Ch
0x463051: mov     eax, esp
0x463053: mov     [eax], edx
0x463055: mov     edx, [ecx+30h]
0x463058: mov     [eax+4], edx
0x46305B: mov     edx, [ecx+34h]
0x46305E: mov     [eax+8], edx
0x463061: call    sub_66EAF0
0x463066: and     dword ptr [esi+18h], 0FFF7FFFFh
0x46306D: jmp     short loc_463074
0x46306F: mov     byte ptr [esp+60h+arg_0], 0
0x463074: and     dword ptr [esi+18h], 0FFFFFFEFh
0x463078: cmp     byte ptr [esp+60h+arg_0], 0
0x46307D: jnz     loc_46311B
0x463083: mov     eax, ds:0B05BB4h
0x463088: push    10h; Radix
0x46308A: push    0; EndPtr
0x46308C: push    eax; Str
0x46308D: call    _strtol
0x463092: add     esp, 0Ch
0x463095: push    0; int
0x463097: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x46309C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4630A1: push    0; int
0x4630A3: push    eax; a1
0x4630A4: call    TESForm_LookupByFormID
0x4630A9: add     esp, 4
0x4630AC: push    eax; void *
0x4630AD: call    OblivionDynamicCast
0x4630B2: add     esp, 14h
0x4630B5: test    eax, eax
0x4630B7: jnz     short loc_46310D
0x4630B9: push    eax; int
0x4630BA: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4630BF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4630C4: push    eax; int
0x4630C5: push    3Ch ; '<'; a1
0x4630C7: call    TESForm_LookupByFormID
0x4630CC: add     esp, 4
0x4630CF: push    eax; void *
0x4630D0: call    OblivionDynamicCast
0x4630D5: mov     ebx, eax
0x4630D7: add     esp, 14h
0x4630DA: test    ebx, ebx
0x4630DC: jz      short loc_46311B
0x4630DE: push    0; signed int
0x4630E0: push    0; signed int
0x4630E2: mov     ecx, ebx; this
0x4630E4: call    TESWorldSpace__GetCellAtCellCoord
0x4630E9: test    eax, eax
0x4630EB: jnz     short loc_46310D
0x4630ED: push    eax; int
0x4630EE: push    eax; ArgList
0x4630EF: mov     ecx, ebx
0x4630F1: call    sub_4F1630
0x4630F6: test    eax, eax
0x4630F8: jnz     short loc_46310D
0x4630FA: mov     ecx, ds:0B33A98h
0x463100: push    ebx
0x463101: push    eax
0x463102: push    eax
0x463103: push    eax
0x463104: call    sub_4471D0
0x463109: test    eax, eax
0x46310B: jz      short loc_46311B
0x46310D: mov     ecx, ds:0B333C4h; int
0x463113: push    eax; int
0x463114: push    0; ArgList
0x463116: call    sub_66FD90
0x46311B: push    edi
0x46311C: mov     ecx, esi
0x46311E: call    sub_45F970
0x463123: or      dword ptr [esi+18h], 10h
0x463127: mov     ecx, ds:0B333A0h
0x46312D: call    sub_443300
0x463132: and     dword ptr [esi+18h], 0FFFFFFEFh
0x463136: mov     eax, [edi+4]
0x463139: mov     ebp, 1
0x46313E: push    ebp
0x46313F: lea     ecx, [esp+64h+a3]
0x463143: push    ecx
0x463144: push    2
0x463146: lea     edx, [esp+6Ch+var_4C]
0x46314A: push    edx
0x46314B: push    edi
0x46314C: mov     [esp+74h+a3], ebp
0x463150: call    eax
0x463152: mov     ax, [esp+74h+var_4C]
0x463157: add     esp, 14h
0x46315A: test    ax, ax
0x46315D: jz      short loc_4631D6
0x46315F: mov     ecx, [esi+40h]
0x463162: test    ecx, ecx
0x463164: jz      short loc_463179
0x463166: movzx   edx, ax
0x463169: push    offset aTesClass; "TES Class"
0x46316E: push    edx
0x46316F: call    sub_4531B0
0x463174: mov     ax, [esp+60h+var_4C]
0x463179: movzx   eax, ax
0x46317C: push    ebp
0x46317D: push    eax
0x46317E: mov     ecx, offset FormHeap
0x463183: call    j_MemoryHeap_Alloc
0x463188: test    eax, eax
0x46318A: mov     [esi+14h], eax
0x46318D: jnz     short loc_46319C
0x46318F: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x463194: call    sub_404EC0
0x463199: add     esp, 4
0x46319C: movzx   ecx, [esp+60h+var_4C]
0x4631A1: mov     ebx, [esi+14h]
0x4631A4: mov     edx, [edi+4]
0x4631A7: push    ebp
0x4631A8: lea     eax, [esp+64h+a3]
0x4631AC: push    eax
0x4631AD: push    ecx
0x4631AE: push    ebx
0x4631AF: push    edi
0x4631B0: mov     [esp+74h+a3], ebp
0x4631B4: call    edx
0x4631B6: mov     ecx, ds:0B333A0h
0x4631BC: add     esp, 14h
0x4631BF: call    sub_441280
0x4631C4: push    ebx; void *
0x4631C5: mov     ecx, offset FormHeap
0x4631CA: call    MemoryHeap_Free_checked
0x4631CF: mov     dword ptr [esi+14h], 0
0x4631D6: mov     ecx, offset ActorProcessManager_ptr
0x4631DB: call    sub_677280
0x4631E0: mov     ecx, offset ActorProcessManager_ptr
0x4631E5: call    sub_67AE90
0x4631EA: mov     edx, [edi+4]
0x4631ED: push    ebp
0x4631EE: lea     eax, [esp+64h+a3]
0x4631F2: push    eax
0x4631F3: push    2
0x4631F5: lea     ecx, [esp+6Ch+var_4C]
0x4631F9: push    ecx
0x4631FA: push    edi
0x4631FB: mov     [esp+74h+a3], ebp
0x4631FF: call    edx
0x463201: mov     ax, [esp+74h+var_4C]
0x463206: add     esp, 14h
0x463209: test    ax, ax
0x46320C: jz      short loc_463284
0x46320E: mov     ecx, [esi+40h]
0x463211: test    ecx, ecx
0x463213: jz      short loc_463228
0x463215: movzx   eax, ax
0x463218: push    offset aProcessListsCl; "Process Lists Class"
0x46321D: push    eax
0x46321E: call    sub_4531B0
0x463223: mov     ax, [esp+60h+var_4C]
0x463228: movzx   eax, ax
0x46322B: push    ebp
0x46322C: push    eax
0x46322D: mov     ecx, offset FormHeap
0x463232: call    j_MemoryHeap_Alloc
0x463237: test    eax, eax
0x463239: mov     [esi+14h], eax
0x46323C: jnz     short loc_46324B
0x46323E: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x463243: call    sub_404EC0
0x463248: add     esp, 4
0x46324B: movzx   edx, [esp+60h+var_4C]
0x463250: mov     ebx, [esi+14h]
0x463253: mov     eax, [edi+4]
0x463256: push    ebp
0x463257: lea     ecx, [esp+64h+a3]
0x46325B: push    ecx
0x46325C: push    edx
0x46325D: push    ebx
0x46325E: push    edi
0x46325F: mov     [esp+74h+a3], ebp
0x463263: call    eax
0x463265: add     esp, 14h
0x463268: mov     ecx, offset ActorProcessManager_ptr
0x46326D: call    sub_6770F0
0x463272: push    ebx; void *
0x463273: mov     ecx, offset FormHeap
0x463278: call    MemoryHeap_Free_checked
0x46327D: mov     dword ptr [esi+14h], 0
0x463284: mov     eax, [edi+4]
0x463287: push    ebp
0x463288: lea     ecx, [esp+64h+a3]
0x46328C: push    ecx
0x46328D: push    2
0x46328F: lea     edx, [esp+6Ch+var_4C]
0x463293: push    edx
0x463294: push    edi
0x463295: mov     [esp+74h+a3], ebp
0x463299: call    eax
0x46329B: mov     ax, [esp+74h+var_4C]
0x4632A0: add     esp, 14h
0x4632A3: test    ax, ax
0x4632A6: jz      short loc_46331E
0x4632A8: mov     ecx, [esi+40h]
0x4632AB: test    ecx, ecx
0x4632AD: jz      short loc_4632C2
0x4632AF: movzx   edx, ax
0x4632B2: push    offset aSpectatorEvent; "Spectator Events"
0x4632B7: push    edx
0x4632B8: call    sub_4531B0
0x4632BD: mov     ax, [esp+60h+var_4C]
0x4632C2: movzx   eax, ax
0x4632C5: push    ebp
0x4632C6: push    eax
0x4632C7: mov     ecx, offset FormHeap
0x4632CC: call    j_MemoryHeap_Alloc
0x4632D1: test    eax, eax
0x4632D3: mov     [esi+14h], eax
0x4632D6: jnz     short loc_4632E5
0x4632D8: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x4632DD: call    sub_404EC0
0x4632E2: add     esp, 4
0x4632E5: movzx   ecx, [esp+60h+var_4C]
0x4632EA: mov     ebx, [esi+14h]
0x4632ED: mov     edx, [edi+4]
0x4632F0: push    ebp
0x4632F1: lea     eax, [esp+64h+a3]
0x4632F5: push    eax
0x4632F6: push    ecx
0x4632F7: push    ebx
0x4632F8: push    edi
0x4632F9: mov     [esp+74h+a3], ebp
0x4632FD: call    edx
0x4632FF: add     esp, 14h
0x463302: mov     ecx, offset dword_B3BDB0
0x463307: call    sub_67D040
0x46330C: push    ebx; void *
0x46330D: mov     ecx, offset FormHeap
0x463312: call    MemoryHeap_Free_checked
0x463317: mov     dword ptr [esi+14h], 0
0x46331E: mov     edx, [edi+4]
0x463321: push    ebp
0x463322: lea     eax, [esp+64h+a3]
0x463326: push    eax
0x463327: push    2
0x463329: lea     ecx, [esp+6Ch+var_4C]
0x46332D: push    ecx
0x46332E: push    edi
0x46332F: mov     [esp+74h+a3], ebp
0x463333: call    edx
0x463335: mov     ax, [esp+74h+var_4C]
0x46333A: add     esp, 14h
0x46333D: test    ax, ax
0x463340: jz      loc_4633C5
0x463346: mov     ecx, [esi+40h]
0x463349: test    ecx, ecx
0x46334B: jz      short loc_463360
0x46334D: movzx   eax, ax
0x463350: push    offset aSkyWeather; "Sky/Weather"
0x463355: push    eax
0x463356: call    sub_4531B0
0x46335B: mov     ax, [esp+60h+var_4C]
0x463360: movzx   eax, ax
0x463363: push    ebp
0x463364: push    eax
0x463365: mov     ecx, offset FormHeap
0x46336A: call    j_MemoryHeap_Alloc
0x46336F: test    eax, eax
0x463371: mov     [esi+14h], eax
0x463374: jnz     short loc_463383
0x463376: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x46337B: call    sub_404EC0
0x463380: add     esp, 4
0x463383: movzx   edx, [esp+60h+var_4C]
0x463388: mov     ebx, [esi+14h]
0x46338B: mov     eax, [edi+4]
0x46338E: push    ebp
0x46338F: lea     ecx, [esp+64h+a3]
0x463393: push    ecx
0x463394: push    edx
0x463395: push    ebx
0x463396: push    edi
0x463397: mov     [esp+74h+a3], ebp
0x46339B: call    eax
0x46339D: add     esp, 14h
0x4633A0: cmp     byte ptr [esp+60h+arg_0], 0
0x4633A5: jz      short loc_4633B3
0x4633A7: call    Sky_CreateOrGetGlobalObject
0x4633AC: mov     ecx, eax
0x4633AE: call    sub_5437C0
0x4633B3: push    ebx; void *
0x4633B4: mov     ecx, offset FormHeap
0x4633B9: call    MemoryHeap_Free_checked
0x4633BE: mov     dword ptr [esi+14h], 0
0x4633C5: mov     eax, [edi+4]
0x4633C8: mov     ebx, ds:0B3B90Ch
0x4633CE: push    ebp
0x4633CF: lea     ecx, [esp+64h+arg_0]
0x4633D3: push    ecx
0x4633D4: push    4
0x4633D6: lea     edx, [esp+6Ch+var_34]
0x4633DA: push    edx
0x4633DB: push    edi
0x4633DC: mov     [esp+74h+arg_0], ebp
0x4633E0: call    eax
0x4633E2: mov     eax, [esp+74h+var_34]
0x4633E6: add     esp, 14h
0x4633E9: test    eax, eax
0x4633EB: mov     ds:0B3B90Ch, eax
0x4633F0: jz      short loc_463413
0x4633F2: test    ebx, ebx
0x4633F4: jnz     short loc_463448
0x4633F6: mov     ecx, ds:0B33398h
0x4633FC: mov     ecx, [ecx+24h]
0x4633FF: test    ecx, ecx
0x463401: jz      short loc_463448
0x463403: fld1
0x463405: push    ecx
0x463406: fstp    [esp+64h+var_64]
0x463409: push    ebx
0x46340A: push    4
0x46340C: call    sub_6ACD10
0x463411: jmp     short loc_463448
0x463413: test    ebx, ebx
0x463415: jz      short loc_463448
0x463417: mov     edx, ds:0B33398h
0x46341D: mov     ebx, [edx+24h]
0x463420: test    ebx, ebx
0x463422: jz      short loc_463448
0x463424: push    0
0x463426: push    0
0x463428: push    0FFFFh
0x46342D: mov     ecx, ebx
0x46342F: call    SoundManager_OpenMusicFile
0x463434: push    0
0x463436: push    0
0x463438: push    0
0x46343A: mov     ecx, ebx
0x46343C: call    SoundManager_OpenMusicFile
0x463441: mov     ecx, ebx
0x463443: call    SoundManager_PlayMusic
0x463448: push    edi
0x463449: mov     ecx, esi
0x46344B: call    SaveLoad_LoadCreatedObjects
0x463450: mov     edx, [edi+4]
0x463453: push    ebp
0x463454: lea     eax, [esp+64h+arg_0]
0x463458: push    eax
0x463459: push    2
0x46345B: lea     ecx, [esp+6Ch+var_4C]
0x46345F: push    ecx
0x463460: push    edi
0x463461: mov     [esp+74h+arg_0], ebp
0x463465: call    edx
0x463467: mov     ax, [esp+74h+var_4C]
0x46346C: add     esp, 14h
0x46346F: test    ax, ax
0x463472: jz      short loc_4634E5
0x463474: mov     ecx, [esi+40h]
0x463477: test    ecx, ecx
0x463479: jz      short loc_46348E
0x46347B: movzx   eax, ax
0x46347E: push    offset aQuickKeys; "Quick Keys"
0x463483: push    eax
0x463484: call    sub_4531B0
0x463489: mov     ax, [esp+60h+var_4C]
0x46348E: movzx   eax, ax
0x463491: push    ebp
0x463492: push    eax
0x463493: mov     ecx, offset FormHeap
0x463498: call    j_MemoryHeap_Alloc
0x46349D: test    eax, eax
0x46349F: mov     [esi+14h], eax
0x4634A2: jnz     short loc_4634B1
0x4634A4: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x4634A9: call    sub_404EC0
0x4634AE: add     esp, 4
0x4634B1: movzx   edx, [esp+60h+var_4C]
0x4634B6: mov     ebx, [esi+14h]
0x4634B9: mov     eax, [edi+4]
0x4634BC: push    ebp
0x4634BD: lea     ecx, [esp+64h+arg_0]
0x4634C1: push    ecx
0x4634C2: push    edx
0x4634C3: push    ebx
0x4634C4: push    edi
0x4634C5: mov     [esp+74h+arg_0], ebp
0x4634C9: call    eax
0x4634CB: add     esp, 14h
0x4634CE: call    sub_5C1420
0x4634D3: push    ebx; void *
0x4634D4: mov     ecx, offset FormHeap
0x4634D9: call    MemoryHeap_Free_checked
0x4634DE: mov     dword ptr [esi+14h], 0
0x4634E5: mov     ecx, ds:0B33B00h
0x4634EB: cmp     byte ptr [ecx+7Ch], 21h ; '!'
0x4634EF: jb      loc_46358A
0x4634F5: mov     ecx, [edi+4]
0x4634F8: push    ebp
0x4634F9: lea     edx, [esp+64h+arg_0]
0x4634FD: push    edx
0x4634FE: push    2
0x463500: lea     eax, [esp+6Ch+var_4C]
0x463504: push    eax
0x463505: push    edi
0x463506: mov     [esp+74h+arg_0], ebp
0x46350A: call    ecx
0x46350C: mov     ax, [esp+74h+var_4C]
0x463511: add     esp, 14h
0x463514: test    ax, ax
0x463517: jz      short loc_46358A
0x463519: mov     ecx, [esi+40h]
0x46351C: test    ecx, ecx
0x46351E: jz      short loc_463533
0x463520: movzx   edx, ax
0x463523: push    offset aHudReticle; "HUD Reticle"
0x463528: push    edx
0x463529: call    sub_4531B0
0x46352E: mov     ax, [esp+60h+var_4C]
0x463533: movzx   eax, ax
0x463536: push    ebp
0x463537: push    eax
0x463538: mov     ecx, offset FormHeap
0x46353D: call    j_MemoryHeap_Alloc
0x463542: test    eax, eax
0x463544: mov     [esi+14h], eax
0x463547: jnz     short loc_463556
0x463549: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x46354E: call    sub_404EC0
0x463553: add     esp, 4
0x463556: movzx   ecx, [esp+60h+var_4C]
0x46355B: mov     ebx, [esi+14h]
0x46355E: mov     edx, [edi+4]
0x463561: push    ebp
0x463562: lea     eax, [esp+64h+arg_0]
0x463566: push    eax
0x463567: push    ecx
0x463568: push    ebx
0x463569: push    edi
0x46356A: mov     [esp+74h+arg_0], ebp
0x46356E: call    edx
0x463570: add     esp, 14h
0x463573: call    sub_5A8B60
0x463578: push    ebx; void *
0x463579: mov     ecx, offset FormHeap
0x46357E: call    MemoryHeap_Free_checked
0x463583: mov     dword ptr [esi+14h], 0
0x46358A: mov     eax, ds:0B33B00h
0x46358F: cmp     byte ptr [eax+7Ch], 21h ; '!'
0x463593: jnb     short loc_46359A
0x463595: call    sub_5A8BA0
0x46359A: mov     ecx, ds:0B33B00h
0x4635A0: cmp     byte ptr [ecx+7Ch], 53h ; 'S'
0x4635A4: jb      loc_46363F
0x4635AA: mov     ecx, [edi+4]
0x4635AD: push    ebp
0x4635AE: lea     edx, [esp+64h+arg_0]
0x4635B2: push    edx
0x4635B3: push    2
0x4635B5: lea     eax, [esp+6Ch+var_4C]
0x4635B9: push    eax
0x4635BA: push    edi
0x4635BB: mov     [esp+74h+arg_0], ebp
0x4635BF: call    ecx
0x4635C1: mov     ax, [esp+74h+var_4C]
0x4635C6: add     esp, 14h
0x4635C9: test    ax, ax
0x4635CC: jz      short loc_46363F
0x4635CE: mov     ecx, [esi+40h]
0x4635D1: test    ecx, ecx
0x4635D3: jz      short loc_4635E8
0x4635D5: movzx   edx, ax
0x4635D8: push    offset aInterface; "Interface"
0x4635DD: push    edx
0x4635DE: call    sub_4531B0
0x4635E3: mov     ax, [esp+60h+var_4C]
0x4635E8: movzx   eax, ax
0x4635EB: push    ebp
0x4635EC: push    eax
0x4635ED: mov     ecx, offset FormHeap
0x4635F2: call    j_MemoryHeap_Alloc
0x4635F7: test    eax, eax
0x4635F9: mov     [esi+14h], eax
0x4635FC: jnz     short loc_46360B
0x4635FE: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x463603: call    sub_404EC0
0x463608: add     esp, 4
0x46360B: movzx   ecx, [esp+60h+var_4C]
0x463610: mov     ebx, [esi+14h]
0x463613: mov     edx, [edi+4]
0x463616: push    ebp
0x463617: lea     eax, [esp+64h+arg_0]
0x46361B: push    eax
0x46361C: push    ecx
0x46361D: push    ebx
0x46361E: push    edi
0x46361F: mov     [esp+74h+arg_0], ebp
0x463623: call    edx
0x463625: add     esp, 14h
0x463628: call    sub_57C000
0x46362D: push    ebx; void *
0x46362E: mov     ecx, offset FormHeap
0x463633: call    MemoryHeap_Free_checked
0x463638: mov     dword ptr [esi+14h], 0
0x46363F: mov     eax, ds:0B33B00h
0x463644: cmp     byte ptr [eax+7Ch], 79h ; 'y'
0x463648: jb      loc_4636E3
0x46364E: mov     eax, [edi+4]
0x463651: push    ebp
0x463652: lea     ecx, [esp+64h+arg_0]
0x463656: push    ecx
0x463657: push    2
0x463659: lea     edx, [esp+6Ch+var_4C]
0x46365D: push    edx
0x46365E: push    edi
0x46365F: mov     [esp+74h+arg_0], ebp
0x463663: call    eax
0x463665: mov     ax, [esp+74h+var_4C]
0x46366A: add     esp, 14h
0x46366D: test    ax, ax
0x463670: jz      short loc_4636E3
0x463672: mov     ecx, [esi+40h]
0x463675: test    ecx, ecx
0x463677: jz      short loc_46368C
0x463679: movzx   edx, ax
0x46367C: push    offset aRegions; "Regions"
0x463681: push    edx
0x463682: call    sub_4531B0
0x463687: mov     ax, [esp+60h+var_4C]
0x46368C: movzx   eax, ax
0x46368F: push    ebp
0x463690: push    eax
0x463691: mov     ecx, offset FormHeap
0x463696: call    j_MemoryHeap_Alloc
0x46369B: test    eax, eax
0x46369D: mov     [esi+14h], eax
0x4636A0: jnz     short loc_4636AF
0x4636A2: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x4636A7: call    sub_404EC0
0x4636AC: add     esp, 4
0x4636AF: movzx   ecx, [esp+60h+var_4C]
0x4636B4: mov     ebx, [esi+14h]
0x4636B7: mov     edx, [edi+4]
0x4636BA: push    ebp
0x4636BB: lea     eax, [esp+64h+arg_0]
0x4636BF: push    eax
0x4636C0: push    ecx
0x4636C1: push    ebx
0x4636C2: push    edi
0x4636C3: mov     [esp+74h+arg_0], ebp
0x4636C7: call    edx
0x4636C9: add     esp, 14h
0x4636CC: call    sub_4A3100
0x4636D1: push    ebx; void *
0x4636D2: mov     ecx, offset FormHeap
0x4636D7: call    MemoryHeap_Free_checked
0x4636DC: mov     dword ptr [esi+14h], 0
0x4636E3: and     dword ptr [esi+18h], 0FFFFBFFFh
0x4636EA: pop     edi
0x4636EB: pop     esi
0x4636EC: pop     ebp
0x4636ED: pop     ebx
0x4636EE: add     esp, 50h
0x4636F1: retn    4
