0x6F4B50: push    0FFFFFFFFh
0x6F4B52: push    offset SEH_6F4B50
0x6F4B57: mov     eax, large fs:0
0x6F4B5D: push    eax
0x6F4B5E: sub     esp, 0F8h
0x6F4B64: mov     eax, ds:0B30AACh
0x6F4B69: xor     eax, esp
0x6F4B6B: mov     [esp+104h+var_10], eax
0x6F4B72: push    ebx
0x6F4B73: push    ebp
0x6F4B74: push    esi
0x6F4B75: push    edi
0x6F4B76: mov     eax, ds:0B30AACh
0x6F4B7B: xor     eax, esp
0x6F4B7D: push    eax
0x6F4B7E: lea     eax, [esp+118h+var_C]
0x6F4B85: mov     large fs:0, eax
0x6F4B8B: mov     esi, [esp+118h+arg_0]
0x6F4B92: mov     edi, [esp+118h+arg_4]
0x6F4B99: push    38h ; '8'; int
0x6F4B9B: xor     ebx, ebx
0x6F4B9D: lea     eax, [esp+11Ch+var_50]
0x6F4BA4: push    ebx; int
0x6F4BA5: push    eax; int
0x6F4BA6: mov     [esp+124h+var_A8], esi
0x6F4BAA: call    __memset
0x6F4BAF: sub     esp, 10h
0x6F4BB2: mov     ecx, esp
0x6F4BB4: mov     [esp+134h+var_F4], esp
0x6F4BB8: push    8; MaxCount
0x6F4BBA: mov     ebp, 0Fh
0x6F4BBF: mov     [ecx+18h], ebp
0x6F4BC2: mov     [ecx+14h], ebx
0x6F4BC5: push    offset aFrtri003; "FRTRI003"
0x6F4BCA: mov     [ecx+4], bl
0x6F4BCD: call    sub_414500
0x6F4BD2: lea     ecx, [esp+134h+var_94]; this
0x6F4BD9: call    sub_6F6110
0x6F4BDE: push    ebx
0x6F4BDF: sub     esp, 1Ch
0x6F4BE2: mov     ecx, esp
0x6F4BE4: mov     [ecx+18h], ebp
0x6F4BE7: mov     [esp+138h+var_F4], esp
0x6F4BEB: or      ebp, 0FFFFFFFFh
0x6F4BEE: push    ebp
0x6F4BEF: push    ebx
0x6F4BF0: mov     [ecx+14h], ebx
0x6F4BF3: push    esi
0x6F4BF4: mov     [esp+144h+var_4], ebx
0x6F4BFB: mov     [ecx+4], bl
0x6F4BFE: call    sub_414420
0x6F4C03: lea     ecx, [esp+138h+var_94]
0x6F4C0A: call    sub_6F66E0
0x6F4C0F: cmp     al, bl
0x6F4C11: jnz     short loc_6F4C2D
0x6F4C13: lea     ecx, [esp+118h+var_94]; this
0x6F4C1A: mov     [esp+118h+var_4], ebp
0x6F4C21: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6F4C26: xor     al, al
0x6F4C28: jmp     loc_6F5C7B
0x6F4C2D: push    38h ; '8'
0x6F4C2F: push    1
0x6F4C31: lea     ecx, [esp+120h+var_50]
0x6F4C38: push    ecx
0x6F4C39: lea     ecx, [esp+124h+var_94]
0x6F4C40: call    sub_6F5E50
0x6F4C45: test    al, al
0x6F4C47: jz      short loc_6F4C13
0x6F4C49: mov     edx, [esp+118h+var_50]
0x6F4C50: mov     eax, [esp+118h+var_2C]
0x6F4C57: add     eax, edx
0x6F4C59: push    eax
0x6F4C5A: mov     ecx, edi
0x6F4C5C: call    sub_6F2FD0
0x6F4C61: sub     esp, 0Ch
0x6F4C64: mov     eax, esp
0x6F4C66: xor     ecx, ecx
0x6F4C68: mov     [eax], ecx
0x6F4C6A: mov     ecx, [esp+124h+var_4C]
0x6F4C71: xor     edx, edx
0x6F4C73: lea     ebp, [edi+10h]
0x6F4C76: push    ecx
0x6F4C77: xor     esi, esi
0x6F4C79: mov     [eax+4], edx
0x6F4C7C: mov     ecx, ebp
0x6F4C7E: mov     [eax+8], esi
0x6F4C81: call    sub_6F29D0
0x6F4C86: sub     esp, 10h
0x6F4C89: mov     eax, esp
0x6F4C8B: xor     ecx, ecx
0x6F4C8D: mov     [eax], ecx
0x6F4C8F: xor     edx, edx
0x6F4C91: mov     [eax+4], edx
0x6F4C94: mov     edx, [esp+128h+var_48]
0x6F4C9B: mov     [eax+8], esi
0x6F4C9E: push    edx
0x6F4C9F: lea     ecx, [edi+20h]
0x6F4CA2: mov     [eax+0Ch], ebx
0x6F4CA5: call    sub_6F2B70
0x6F4CAA: mov     ecx, [esp+118h+var_44]
0x6F4CB1: sub     esp, 20h
0x6F4CB4: mov     eax, esp
0x6F4CB6: mov     [eax+18h], esi
0x6F4CB9: mov     [esp+138h+var_F4], esp
0x6F4CBD: mov     ebx, 0Fh
0x6F4CC2: lea     esi, [edi+60h]
0x6F4CC5: push    ecx
0x6F4CC6: mov     [eax+1Ch], ebx
0x6F4CC9: mov     ecx, esi
0x6F4CCB: mov     byte ptr [eax+8], 0
0x6F4CCF: call    sub_6F3ED0
0x6F4CD4: fldz
0x6F4CD6: mov     ecx, [esp+118h+var_40]
0x6F4CDD: sub     esp, 2Ch
0x6F4CE0: mov     eax, esp
0x6F4CE2: fst     dword ptr [eax+4]
0x6F4CE5: mov     [esp+144h+var_F4], esp
0x6F4CE9: fst     dword ptr [eax+8]
0x6F4CEC: push    ecx
0x6F4CED: fstp    dword ptr [eax+0Ch]
0x6F4CF0: mov     [eax+28h], ebx
0x6F4CF3: lea     ebx, [edi+70h]
0x6F4CF6: mov     dword ptr [eax+24h], 0
0x6F4CFD: mov     ecx, ebx
0x6F4CFF: mov     byte ptr [eax+14h], 0
0x6F4D03: call    sub_6F3FC0
0x6F4D08: mov     eax, [esp+118h+var_34]
0x6F4D0F: lea     ecx, [edi+80h]
0x6F4D15: push    eax
0x6F4D16: mov     [esp+11Ch+var_F0], ecx
0x6F4D1A: call    sub_6F4A70
0x6F4D1F: mov     edx, [esp+118h+var_30]
0x6F4D26: lea     ecx, [edi+90h]
0x6F4D2C: push    edx
0x6F4D2D: mov     [esp+11Ch+var_F4], ecx
0x6F4D31: call    sub_6F4AE0
0x6F4D36: mov     eax, [esp+118h+var_50]
0x6F4D3D: mov     ecx, [esp+118h+var_2C]
0x6F4D44: add     eax, ecx
0x6F4D46: jz      short loc_6F4D69
0x6F4D48: push    eax
0x6F4D49: push    0Ch
0x6F4D4B: push    0
0x6F4D4D: mov     ecx, edi
0x6F4D4F: call    sub_6F10A0
0x6F4D54: push    eax
0x6F4D55: lea     ecx, [esp+124h+var_94]
0x6F4D5C: call    sub_6F5D40
0x6F4D61: test    al, al
0x6F4D63: jz      loc_6F50EA
0x6F4D69: mov     eax, [esp+118h+var_4C]
0x6F4D70: test    eax, eax
0x6F4D72: jz      short loc_6F4D95
0x6F4D74: push    eax
0x6F4D75: push    0Ch
0x6F4D77: push    0
0x6F4D79: mov     ecx, ebp
0x6F4D7B: call    sub_6F10A0
0x6F4D80: push    eax
0x6F4D81: lea     ecx, [esp+124h+var_94]
0x6F4D88: call    sub_6F5D40
0x6F4D8D: test    al, al
0x6F4D8F: jz      loc_6F50EA
0x6F4D95: mov     eax, [esp+118h+var_48]
0x6F4D9C: test    eax, eax
0x6F4D9E: jz      short loc_6F4DC2
0x6F4DA0: push    eax
0x6F4DA1: push    10h
0x6F4DA3: push    0
0x6F4DA5: lea     ecx, [edi+20h]
0x6F4DA8: call    sub_6F10E0
0x6F4DAD: push    eax
0x6F4DAE: lea     ecx, [esp+124h+var_94]
0x6F4DB5: call    sub_6F5D40
0x6F4DBA: test    al, al
0x6F4DBC: jz      loc_6F50EA
0x6F4DC2: xor     ebp, ebp
0x6F4DC4: cmp     [esp+118h+var_44], ebp
0x6F4DCB: jbe     loc_6F4F3A
0x6F4DD1: mov     [esp+118h+var_104], ebp
0x6F4DD5: mov     ecx, [esi+4]
0x6F4DD8: test    ecx, ecx
0x6F4DDA: jz      short loc_6F4DE8
0x6F4DDC: mov     eax, [esi+8]
0x6F4DDF: sub     eax, ecx
0x6F4DE1: sar     eax, 5
0x6F4DE4: cmp     ebp, eax
0x6F4DE6: jb      short loc_6F4DED
0x6F4DE8: call    __invalid_parameter_noinfo
0x6F4DED: mov     eax, [esi+4]
0x6F4DF0: add     eax, [esp+118h+var_104]
0x6F4DF4: push    1
0x6F4DF6: push    4
0x6F4DF8: push    eax
0x6F4DF9: lea     ecx, [esp+124h+var_94]
0x6F4E00: call    sub_6F5D40
0x6F4E05: test    al, al
0x6F4E07: lea     ecx, [esp+118h+var_94]; this
0x6F4E0E: jz      loc_6F50CA
0x6F4E14: push    1
0x6F4E16: push    4
0x6F4E18: lea     edx, [esp+120h+var_F8]
0x6F4E1C: push    edx
0x6F4E1D: call    sub_6F5D40
0x6F4E22: test    al, al
0x6F4E24: jz      loc_6F50EA
0x6F4E2A: mov     eax, [esp+118h+var_F8]
0x6F4E2E: test    eax, eax
0x6F4E30: jz      loc_6F4F25
0x6F4E36: push    eax; char *
0x6F4E37: lea     ecx, [esp+11Ch+var_D4]
0x6F4E3B: call    sub_6F3010
0x6F4E40: mov     eax, [esp+118h+var_F8]
0x6F4E44: push    eax
0x6F4E45: push    1
0x6F4E47: push    0
0x6F4E49: lea     ecx, [esp+124h+var_D4]
0x6F4E4D: mov     byte ptr [esp+124h+var_4], 1
0x6F4E55: call    sub_6F1210
0x6F4E5A: push    eax
0x6F4E5B: lea     ecx, [esp+124h+var_94]
0x6F4E62: call    sub_6F5D40
0x6F4E67: test    al, al
0x6F4E69: jz      loc_6F50E1
0x6F4E6F: mov     eax, [esp+118h+var_F8]
0x6F4E73: cmp     eax, 1
0x6F4E76: jbe     short loc_6F4ED6
0x6F4E78: add     eax, 0FFFFFFFFh
0x6F4E7B: push    eax
0x6F4E7C: push    ebp
0x6F4E7D: mov     ecx, esi
0x6F4E7F: call    sub_6F1110
0x6F4E84: mov     ecx, eax
0x6F4E86: add     ecx, 4
0x6F4E89: call    sub_6EDB50
0x6F4E8E: mov     eax, [esp+118h+var_F8]
0x6F4E92: add     eax, 0FFFFFFFFh
0x6F4E95: mov     dword ptr [esp+118h+var_FD+1], 0
0x6F4E9D: jz      short loc_6F4EA3
0x6F4E9F: mov     dword ptr [esp+118h+var_FD+1], eax
0x6F4EA3: mov     ecx, dword ptr [esp+118h+var_FD+1]
0x6F4EA7: push    ecx
0x6F4EA8: lea     ecx, [esp+11Ch+var_D4]
0x6F4EAC: call    sub_6F1210
0x6F4EB1: mov     edx, dword ptr [esp+118h+var_FD+1]
0x6F4EB5: push    edx
0x6F4EB6: push    ebp
0x6F4EB7: mov     ecx, esi
0x6F4EB9: mov     [esp+120h+var_D8], eax
0x6F4EBD: call    sub_6F1110
0x6F4EC2: mov     ecx, eax
0x6F4EC4: add     ecx, 4
0x6F4EC7: call    sub_6EDA70
0x6F4ECC: mov     ecx, [esp+118h+var_D8]
0x6F4ED0: mov     dl, [ecx]
0x6F4ED2: mov     [eax], dl
0x6F4ED4: jmp     short loc_6F4F14
0x6F4ED6: push    offset EmptyString; Src
0x6F4EDB: lea     ecx, [esp+11Ch+var_C4]
0x6F4EDF: call    sub_414750
0x6F4EE4: mov     [esp+118h+var_D8], eax
0x6F4EE8: push    ebp
0x6F4EE9: mov     ecx, esi
0x6F4EEB: mov     byte ptr [esp+11Ch+var_4], 2
0x6F4EF3: call    sub_6F1110
0x6F4EF8: mov     ecx, [esp+118h+var_D8]
0x6F4EFC: push    0FFFFFFFFh
0x6F4EFE: push    0
0x6F4F00: add     eax, 4
0x6F4F03: push    ecx
0x6F4F04: mov     ecx, eax
0x6F4F06: call    sub_414420
0x6F4F0B: lea     ecx, [esp+118h+var_C4]
0x6F4F0F: call    sub_79AB00
0x6F4F14: lea     ecx, [esp+118h+var_D4]; void *
0x6F4F18: mov     byte ptr [esp+118h+var_4], 0
0x6F4F20: call    sub_794EB0
0x6F4F25: add     [esp+118h+var_104], 20h ; ' '
0x6F4F2A: add     ebp, 1
0x6F4F2D: cmp     ebp, [esp+118h+var_44]
0x6F4F34: jb      loc_6F4DD5
0x6F4F3A: xor     ebp, ebp
0x6F4F3C: cmp     [esp+118h+var_40], ebp
0x6F4F43: mov     [esp+118h+var_104], ebp
0x6F4F47: jbe     loc_6F519D
0x6F4F4D: xor     esi, esi
0x6F4F4F: mov     dword ptr [esp+118h+var_FD+1], esi
0x6F4F53: mov     eax, [ebx+4]
0x6F4F56: test    eax, eax
0x6F4F58: jz      short loc_6F4F74
0x6F4F5A: mov     ecx, [ebx+8]
0x6F4F5D: sub     ecx, eax
0x6F4F5F: mov     eax, 2E8BA2E9h
0x6F4F64: imul    ecx
0x6F4F66: sar     edx, 3
0x6F4F69: mov     eax, edx
0x6F4F6B: shr     eax, 1Fh
0x6F4F6E: add     eax, edx
0x6F4F70: cmp     ebp, eax
0x6F4F72: jb      short loc_6F4F79
0x6F4F74: call    __invalid_parameter_noinfo
0x6F4F79: mov     eax, [ebx+4]
0x6F4F7C: push    1
0x6F4F7E: add     eax, esi
0x6F4F80: push    4
0x6F4F82: push    eax
0x6F4F83: lea     ecx, [esp+124h+var_94]
0x6F4F8A: call    sub_6F5D40
0x6F4F8F: test    al, al
0x6F4F91: jz      loc_6F50EA
0x6F4F97: mov     eax, [ebx+4]
0x6F4F9A: test    eax, eax
0x6F4F9C: jz      short loc_6F4FB8
0x6F4F9E: mov     ecx, [ebx+8]
0x6F4FA1: sub     ecx, eax
0x6F4FA3: mov     eax, 2E8BA2E9h
0x6F4FA8: imul    ecx
0x6F4FAA: sar     edx, 3
0x6F4FAD: mov     eax, edx
0x6F4FAF: shr     eax, 1Fh
0x6F4FB2: add     eax, edx
0x6F4FB4: cmp     ebp, eax
0x6F4FB6: jb      short loc_6F4FBD
0x6F4FB8: call    __invalid_parameter_noinfo
0x6F4FBD: mov     eax, [ebx+4]
0x6F4FC0: push    1
0x6F4FC2: add     eax, esi
0x6F4FC4: push    0Ch
0x6F4FC6: add     eax, 4
0x6F4FC9: push    eax
0x6F4FCA: lea     ecx, [esp+124h+var_94]
0x6F4FD1: call    sub_6F5D40
0x6F4FD6: test    al, al
0x6F4FD8: lea     ecx, [esp+118h+var_94]
0x6F4FDF: jz      loc_6F50CA
0x6F4FE5: push    1
0x6F4FE7: push    4
0x6F4FE9: lea     edx, [esp+120h+var_F8]
0x6F4FED: push    edx
0x6F4FEE: call    sub_6F5D40
0x6F4FF3: test    al, al
0x6F4FF5: jz      loc_6F50EA
0x6F4FFB: mov     eax, [esp+118h+var_F8]
0x6F4FFF: test    eax, eax
0x6F5001: jz      loc_6F5182
0x6F5007: lea     ecx, [esp+118h+var_FD]
0x6F500B: push    ecx; int
0x6F500C: push    eax; char *
0x6F500D: lea     ecx, [esp+120h+var_E8]
0x6F5011: mov     [esp+120h+var_FD], 0
0x6F5016: call    sub_6F2CD0
0x6F501B: mov     esi, [esp+118h+var_E4]
0x6F501F: test    esi, esi
0x6F5021: mov     byte ptr [esp+118h+var_4], 3
0x6F5029: jz      short loc_6F5033
0x6F502B: mov     edx, [esp+118h+var_E0]
0x6F502F: sub     edx, esi
0x6F5031: jnz     short loc_6F5038
0x6F5033: call    __invalid_parameter_noinfo
0x6F5038: mov     eax, [esp+118h+var_F8]
0x6F503C: push    eax
0x6F503D: push    1
0x6F503F: push    esi
0x6F5040: lea     ecx, [esp+124h+var_94]
0x6F5047: call    sub_6F5D40
0x6F504C: test    al, al
0x6F504E: jz      loc_6F527F
0x6F5054: mov     eax, [esp+118h+var_F8]
0x6F5058: cmp     eax, 1
0x6F505B: jbe     loc_6F5117
0x6F5061: add     eax, 0FFFFFFFFh
0x6F5064: push    eax
0x6F5065: push    ebp
0x6F5066: mov     ecx, ebx
0x6F5068: call    sub_6F1160
0x6F506D: mov     ecx, eax
0x6F506F: add     ecx, 10h
0x6F5072: call    sub_6EDB50
0x6F5077: mov     eax, [esp+118h+var_F8]
0x6F507B: xor     ebp, ebp
0x6F507D: add     eax, 0FFFFFFFFh
0x6F5080: jz      short loc_6F5084
0x6F5082: mov     ebp, eax
0x6F5084: test    esi, esi
0x6F5086: jz      short loc_6F5092
0x6F5088: mov     eax, [esp+118h+var_E0]
0x6F508C: sub     eax, esi
0x6F508E: cmp     ebp, eax
0x6F5090: jb      short loc_6F5097
0x6F5092: call    __invalid_parameter_noinfo
0x6F5097: mov     ecx, [esp+118h+var_104]
0x6F509B: push    ecx
0x6F509C: mov     ecx, ebx
0x6F509E: call    sub_6F1160
0x6F50A3: mov     esi, eax
0x6F50A5: add     esi, 10h
0x6F50A8: cmp     ebp, [esi+14h]
0x6F50AB: jbe     short loc_6F50B2
0x6F50AD: call    __invalid_parameter_noinfo
0x6F50B2: cmp     dword ptr [esi+18h], 10h
0x6F50B6: jb      short loc_6F5108
0x6F50B8: mov     edx, [esp+118h+var_E4]
0x6F50BC: mov     esi, [esi+4]
0x6F50BF: mov     al, [edx+ebp]
0x6F50C2: mov     [esi+ebp], al
0x6F50C5: jmp     loc_6F514F
0x6F50CA: mov     [esp+118h+var_4], 0FFFFFFFFh
0x6F50D5: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6F50DA: xor     al, al
0x6F50DC: jmp     loc_6F5C7B
0x6F50E1: lea     ecx, [esp+118h+var_D4]; void *
0x6F50E5: call    sub_794EB0
0x6F50EA: lea     ecx, [esp+118h+var_94]; this
0x6F50F1: mov     [esp+118h+var_4], 0FFFFFFFFh
0x6F50FC: call    ??1BSFaceGenBinaryFile@@UAE@XZ; BSFaceGenBinaryFile::~BSFaceGenBinaryFile(void)
0x6F5101: xor     al, al
0x6F5103: jmp     loc_6F5C7B
0x6F5108: mov     edx, [esp+118h+var_E4]
0x6F510C: mov     al, [edx+ebp]
0x6F510F: add     esi, 4
0x6F5112: mov     [esi+ebp], al
0x6F5115: jmp     short loc_6F514F
0x6F5117: push    offset EmptyString; Src
0x6F511C: lea     ecx, [esp+11Ch+var_C4]
0x6F5120: call    sub_414750
0x6F5125: mov     esi, eax
0x6F5127: push    ebp
0x6F5128: mov     ecx, ebx
0x6F512A: mov     byte ptr [esp+11Ch+var_4], 4
0x6F5132: call    sub_6F1160
0x6F5137: push    0FFFFFFFFh
0x6F5139: add     eax, 10h
0x6F513C: push    0
0x6F513E: push    esi
0x6F513F: mov     ecx, eax
0x6F5141: call    sub_414420
0x6F5146: lea     ecx, [esp+118h+var_C4]
0x6F514A: call    sub_79AB00
0x6F514F: xor     eax, eax
0x6F5151: cmp     [esp+118h+var_E4], eax
0x6F5155: mov     byte ptr [esp+118h+var_4], 0
0x6F515D: jz      short loc_6F516E
0x6F515F: mov     ecx, [esp+118h+var_E4]
0x6F5163: push    ecx
0x6F5164: call    FormHeapFree
0x6F5169: add     esp, 4
0x6F516C: xor     eax, eax
0x6F516E: mov     ebp, [esp+118h+var_104]
0x6F5172: mov     esi, dword ptr [esp+118h+var_FD+1]
0x6F5176: mov     [esp+118h+var_E4], eax
0x6F517A: mov     [esp+118h+var_E0], eax
0x6F517E: mov     [esp+118h+var_DC], eax
0x6F5182: add     ebp, 1
0x6F5185: add     esi, 2Ch ; ','
0x6F5188: cmp     ebp, [esp+118h+var_40]
0x6F518F: mov     [esp+118h+var_104], ebp
0x6F5193: mov     dword ptr [esp+118h+var_FD+1], esi
0x6F5197: jb      loc_6F4F53
0x6F519D: test    [esp+118h+var_38], 1
0x6F51A5: jz      loc_6F53B5
0x6F51AB: mov     ecx, [esp+118h+var_3C]
0x6F51B2: fldz
0x6F51B4: sub     esp, 8
0x6F51B7: test    ecx, ecx
0x6F51B9: lea     esi, [edi+30h]
0x6F51BC: mov     eax, esp
0x6F51BE: jnz     loc_6F5288
0x6F51C4: mov     ecx, [esp+120h+var_50]
0x6F51CB: fst     dword ptr [eax]
0x6F51CD: push    ecx
0x6F51CE: fstp    dword ptr [eax+4]
0x6F51D1: mov     ecx, esi
0x6F51D3: call    sub_6F2C20
0x6F51D8: cmp     [esp+118h+var_50], 0
0x6F51E0: jz      short loc_6F521A
0x6F51E2: mov     eax, [esi+4]
0x6F51E5: test    eax, eax
0x6F51E7: jz      short loc_6F51F3
0x6F51E9: mov     edx, [esi+8]
0x6F51EC: sub     edx, eax
0x6F51EE: sar     edx, 3
0x6F51F1: jnz     short loc_6F51F8
0x6F51F3: call    __invalid_parameter_noinfo
0x6F51F8: mov     eax, [esp+118h+var_50]
0x6F51FF: mov     esi, [esi+4]
0x6F5202: push    eax
0x6F5203: push    8
0x6F5205: push    esi
0x6F5206: lea     ecx, [esp+124h+var_94]
0x6F520D: call    sub_6F5D40
0x6F5212: test    al, al
0x6F5214: jz      loc_6F50EA
0x6F521A: mov     ebx, [edi+48h]
0x6F521D: cmp     [edi+44h], ebx
0x6F5220: lea     esi, [edi+40h]
0x6F5223: jbe     short loc_6F522A
0x6F5225: call    __invalid_parameter_noinfo
0x6F522A: mov     ebp, [esi+4]
0x6F522D: cmp     ebp, [esi+8]
0x6F5230: jbe     short loc_6F5237
0x6F5232: call    __invalid_parameter_noinfo
0x6F5237: push    ebx
0x6F5238: push    esi
0x6F5239: push    ebp
0x6F523A: push    esi
0x6F523B: lea     ecx, [esp+128h+var_18]
0x6F5242: push    ecx
0x6F5243: mov     ecx, esi
0x6F5245: call    sub_6F1470
0x6F524A: mov     esi, [edi+58h]
0x6F524D: add     edi, 50h ; 'P'
0x6F5250: cmp     [edi+4], esi
0x6F5253: jbe     short loc_6F525A
0x6F5255: call    __invalid_parameter_noinfo
0x6F525A: mov     ebx, [edi+4]
0x6F525D: cmp     ebx, [edi+8]
0x6F5260: jbe     short loc_6F5267
0x6F5262: call    __invalid_parameter_noinfo
0x6F5267: push    esi
0x6F5268: push    edi
0x6F5269: push    ebx
0x6F526A: push    edi
0x6F526B: lea     edx, [esp+128h+var_18]
0x6F5272: push    edx
0x6F5273: mov     ecx, edi
0x6F5275: call    sub_6F14D0
0x6F527A: jmp     loc_6F53B5
0x6F527F: lea     ecx, [esp+118h+var_E8]
0x6F5283: jmp     loc_6F50E5
0x6F5288: push    ecx
0x6F5289: fst     dword ptr [eax]
0x6F528B: mov     ecx, esi
0x6F528D: fstp    dword ptr [eax+4]
0x6F5290: call    sub_6F2C20
0x6F5295: cmp     [esp+118h+var_3C], 0
0x6F529D: jz      short loc_6F52D7
0x6F529F: mov     eax, [esi+4]
0x6F52A2: test    eax, eax
0x6F52A4: jz      short loc_6F52B0
0x6F52A6: mov     ecx, [esi+8]
0x6F52A9: sub     ecx, eax
0x6F52AB: sar     ecx, 3
0x6F52AE: jnz     short loc_6F52B5
0x6F52B0: call    __invalid_parameter_noinfo
0x6F52B5: mov     edx, [esp+118h+var_3C]
0x6F52BC: mov     esi, [esi+4]
0x6F52BF: push    edx
0x6F52C0: push    8
0x6F52C2: push    esi
0x6F52C3: lea     ecx, [esp+124h+var_94]
0x6F52CA: call    sub_6F5D40
0x6F52CF: test    al, al
0x6F52D1: jz      loc_6F50EA
0x6F52D7: sub     esp, 0Ch
0x6F52DA: mov     eax, esp
0x6F52DC: xor     ecx, ecx
0x6F52DE: mov     [eax], ecx
0x6F52E0: xor     edx, edx
0x6F52E2: mov     [eax+4], edx
0x6F52E5: xor     ebx, ebx
0x6F52E7: mov     [eax+8], ebx
0x6F52EA: mov     eax, [esp+124h+var_4C]
0x6F52F1: lea     esi, [edi+40h]
0x6F52F4: push    eax
0x6F52F5: mov     ecx, esi
0x6F52F7: call    sub_6F29D0
0x6F52FC: cmp     [esp+118h+var_4C], ebx
0x6F5303: jz      short loc_6F534A
0x6F5305: mov     eax, [esi+4]
0x6F5308: test    eax, eax
0x6F530A: jz      short loc_6F5323
0x6F530C: mov     ecx, [esi+8]
0x6F530F: sub     ecx, eax
0x6F5311: mov     eax, 2AAAAAABh
0x6F5316: imul    ecx
0x6F5318: sar     edx, 1
0x6F531A: mov     ecx, edx
0x6F531C: shr     ecx, 1Fh
0x6F531F: add     ecx, edx
0x6F5321: jnz     short loc_6F5328
0x6F5323: call    __invalid_parameter_noinfo
0x6F5328: mov     edx, [esp+118h+var_4C]
0x6F532F: mov     esi, [esi+4]
0x6F5332: push    edx
0x6F5333: push    0Ch
0x6F5335: push    esi
0x6F5336: lea     ecx, [esp+124h+var_94]
0x6F533D: call    sub_6F5D40
0x6F5342: test    al, al
0x6F5344: jz      loc_6F50EA
0x6F534A: sub     esp, 10h
0x6F534D: mov     eax, esp
0x6F534F: xor     ecx, ecx
0x6F5351: mov     [eax], ecx
0x6F5353: xor     edx, edx
0x6F5355: mov     [eax+4], edx
0x6F5358: xor     esi, esi
0x6F535A: mov     [eax+8], esi
0x6F535D: xor     ebx, ebx
0x6F535F: mov     [eax+0Ch], ebx
0x6F5362: mov     eax, [esp+128h+var_48]
0x6F5369: add     edi, 50h ; 'P'
0x6F536C: push    eax
0x6F536D: mov     ecx, edi
0x6F536F: call    sub_6F2B70
0x6F5374: cmp     [esp+118h+var_48], ebx
0x6F537B: jz      short loc_6F53B5
0x6F537D: mov     eax, [edi+4]
0x6F5380: test    eax, eax
0x6F5382: jz      short loc_6F538E
0x6F5384: mov     ecx, [edi+8]
0x6F5387: sub     ecx, eax
0x6F5389: sar     ecx, 4
0x6F538C: jnz     short loc_6F5393
0x6F538E: call    __invalid_parameter_noinfo
0x6F5393: mov     edx, [esp+118h+var_48]
0x6F539A: mov     edi, [edi+4]
0x6F539D: push    edx
0x6F539E: push    10h
0x6F53A0: push    edi
0x6F53A1: lea     ecx, [esp+124h+var_94]
0x6F53A8: call    sub_6F5D40
0x6F53AD: test    al, al
0x6F53AF: jz      loc_6F50EA
0x6F53B5: xor     esi, esi
0x6F53B7: cmp     [esp+118h+var_34], esi
0x6F53BE: mov     [esp+118h+var_104], esi
0x6F53C2: jbe     loc_6F577C
0x6F53C8: mov     ebp, [esp+118h+var_F0]
0x6F53CC: mov     dword ptr [esp+118h+var_FD+1], esi
0x6F53D0: jmp     short loc_6F53D6
0x6F53D2: mov     esi, [esp+118h+var_104]
0x6F53D6: mov     edi, dword ptr [esp+118h+var_FD+1]
0x6F53DA: push    1
0x6F53DC: push    4
0x6F53DE: lea     eax, [esp+120h+var_F8]
0x6F53E2: push    eax
0x6F53E3: lea     ecx, [esp+124h+var_94]
0x6F53EA: call    sub_6F5D40
0x6F53EF: test    al, al
0x6F53F1: jz      loc_6F50EA
0x6F53F7: mov     eax, [esp+118h+var_F8]
0x6F53FB: test    eax, eax
0x6F53FD: jz      loc_6F55C9
0x6F5403: lea     ecx, [esp+118h+var_FD]
0x6F5407: push    ecx; int
0x6F5408: push    eax; char *
0x6F5409: lea     ecx, [esp+120h+var_D4]
0x6F540D: mov     [esp+120h+var_FD], 0
0x6F5412: call    sub_6F2CD0
0x6F5417: mov     ebx, [esp+118h+var_D0]
0x6F541B: test    ebx, ebx
0x6F541D: mov     byte ptr [esp+118h+var_4], 5
0x6F5425: jz      short loc_6F542F
0x6F5427: mov     edx, [esp+118h+var_CC]
0x6F542B: sub     edx, ebx
0x6F542D: jnz     short loc_6F5434
0x6F542F: call    __invalid_parameter_noinfo
0x6F5434: mov     eax, [esp+118h+var_F8]
0x6F5438: push    eax
0x6F5439: push    1
0x6F543B: push    ebx
0x6F543C: lea     ecx, [esp+124h+var_94]
0x6F5443: call    sub_6F5D40
0x6F5448: test    al, al
0x6F544A: jz      loc_6F5868
0x6F5450: cmp     [esp+118h+var_F8], 1
0x6F5455: jbe     loc_6F552C
0x6F545B: mov     eax, [ebp+4]
0x6F545E: test    eax, eax
0x6F5460: jz      short loc_6F547C
0x6F5462: mov     ecx, [ebp+8]
0x6F5465: sub     ecx, eax
0x6F5467: mov     eax, 2E8BA2E9h
0x6F546C: imul    ecx
0x6F546E: sar     edx, 3
0x6F5471: mov     eax, edx
0x6F5473: shr     eax, 1Fh
0x6F5476: add     eax, edx
0x6F5478: cmp     esi, eax
0x6F547A: jb      short loc_6F5481
0x6F547C: call    __invalid_parameter_noinfo
0x6F5481: mov     ecx, [ebp+4]
0x6F5484: mov     eax, [esp+118h+var_F8]
0x6F5488: mov     edx, [ecx+edi+14h]
0x6F548C: add     ecx, edi
0x6F548E: add     eax, 0FFFFFFFFh
0x6F5491: cmp     eax, edx
0x6F5493: ja      short loc_6F549F
0x6F5495: push    0FFFFFFFFh
0x6F5497: push    eax
0x6F5498: call    sub_4134E0
0x6F549D: jmp     short loc_6F54A9
0x6F549F: push    0
0x6F54A1: sub     eax, edx
0x6F54A3: push    eax
0x6F54A4: call    sub_6EDAA0
0x6F54A9: mov     ecx, [esp+118h+var_F8]
0x6F54AD: xor     edi, edi
0x6F54AF: add     ecx, 0FFFFFFFFh
0x6F54B2: jz      loc_6F55A6
0x6F54B8: test    ebx, ebx
0x6F54BA: jz      short loc_6F54C6
0x6F54BC: mov     eax, [esp+118h+var_CC]
0x6F54C0: sub     eax, ebx
0x6F54C2: cmp     edi, eax
0x6F54C4: jb      short loc_6F54CB
0x6F54C6: call    __invalid_parameter_noinfo
0x6F54CB: mov     eax, [ebp+4]
0x6F54CE: test    eax, eax
0x6F54D0: jz      short loc_6F54EE
0x6F54D2: mov     ecx, [ebp+8]
0x6F54D5: sub     ecx, eax
0x6F54D7: mov     eax, 2E8BA2E9h
0x6F54DC: imul    ecx
0x6F54DE: sar     edx, 3
0x6F54E1: mov     eax, edx
0x6F54E3: shr     eax, 1Fh
0x6F54E6: add     eax, edx
0x6F54E8: cmp     [esp+118h+var_104], eax
0x6F54EC: jb      short loc_6F54F3
0x6F54EE: call    __invalid_parameter_noinfo
0x6F54F3: mov     esi, [ebp+4]
0x6F54F6: add     esi, dword ptr [esp+118h+var_FD+1]
0x6F54FA: cmp     edi, [esi+14h]
0x6F54FD: jbe     short loc_6F5504
0x6F54FF: call    __invalid_parameter_noinfo
0x6F5504: cmp     dword ptr [esi+18h], 10h
0x6F5508: jb      short loc_6F550F
0x6F550A: mov     esi, [esi+4]
0x6F550D: jmp     short loc_6F5512
0x6F550F: add     esi, 4
0x6F5512: mov     dl, [ebx+edi]
0x6F5515: mov     [esi+edi], dl
0x6F5518: mov     eax, [esp+118h+var_F8]
0x6F551C: add     edi, 1
0x6F551F: add     eax, 0FFFFFFFFh
0x6F5522: cmp     edi, eax
0x6F5524: jb      short loc_6F54B8
0x6F5526: mov     esi, [esp+118h+var_104]
0x6F552A: jmp     short loc_6F55A6
0x6F552C: push    0; MaxCount
0x6F552E: push    offset EmptyString; Src
0x6F5533: lea     ecx, [esp+120h+var_C4]
0x6F5537: mov     [esp+120h+var_AC], 0Fh
0x6F553F: mov     [esp+120h+var_B0], 0
0x6F5547: mov     byte ptr [esp+120h+var_C0], 0
0x6F554C: call    sub_414500
0x6F5551: mov     eax, [ebp+4]
0x6F5554: test    eax, eax
0x6F5556: mov     byte ptr [esp+118h+var_4], 6
0x6F555E: jz      short loc_6F557A
0x6F5560: mov     ecx, [ebp+8]
0x6F5563: sub     ecx, eax
0x6F5565: mov     eax, 2E8BA2E9h
0x6F556A: imul    ecx
0x6F556C: sar     edx, 3
0x6F556F: mov     eax, edx
0x6F5571: shr     eax, 1Fh
0x6F5574: add     eax, edx
0x6F5576: cmp     esi, eax
0x6F5578: jb      short loc_6F557F
0x6F557A: call    __invalid_parameter_noinfo
0x6F557F: mov     ecx, [ebp+4]
0x6F5582: push    0FFFFFFFFh
0x6F5584: push    0
0x6F5586: lea     edx, [esp+120h+var_C4]
0x6F558A: add     ecx, edi
0x6F558C: push    edx
0x6F558D: call    sub_414420
0x6F5592: cmp     [esp+118h+var_AC], 10h
0x6F5597: jb      short loc_6F55A6
0x6F5599: mov     eax, [esp+118h+var_C0]
0x6F559D: push    eax
0x6F559E: call    FormHeapFree
0x6F55A3: add     esp, 4
0x6F55A6: test    ebx, ebx
0x6F55A8: mov     byte ptr [esp+118h+var_4], 0
0x6F55B0: jz      short loc_6F55BB
0x6F55B2: push    ebx
0x6F55B3: call    FormHeapFree
0x6F55B8: add     esp, 4
0x6F55BB: xor     eax, eax
0x6F55BD: mov     [esp+118h+var_D0], eax
0x6F55C1: mov     [esp+118h+var_CC], eax
0x6F55C5: mov     [esp+118h+var_C8], eax
0x6F55C9: push    1
0x6F55CB: push    4
0x6F55CD: lea     ecx, [esp+120h+var_D8]
0x6F55D1: push    ecx
0x6F55D2: lea     ecx, [esp+124h+var_94]
0x6F55D9: call    sub_6F5D40
0x6F55DE: test    al, al
0x6F55E0: jz      loc_6F50EA
0x6F55E6: mov     eax, [ebp+4]
0x6F55E9: test    eax, eax
0x6F55EB: jz      short loc_6F5607
0x6F55ED: mov     ecx, [ebp+8]
0x6F55F0: sub     ecx, eax
0x6F55F2: mov     eax, 2E8BA2E9h
0x6F55F7: imul    ecx
0x6F55F9: sar     edx, 3
0x6F55FC: mov     eax, edx
0x6F55FE: shr     eax, 1Fh
0x6F5601: add     eax, edx
0x6F5603: cmp     esi, eax
0x6F5605: jb      short loc_6F560C
0x6F5607: call    __invalid_parameter_noinfo
0x6F560C: fldz
0x6F560E: mov     edx, [ebp+4]
0x6F5611: mov     eax, dword ptr [esp+118h+var_FD+1]
0x6F5615: fst     [esp+118h+var_A0]
0x6F5619: lea     ecx, [edx+eax+1Ch]
0x6F561D: fst     [esp+118h+var_9C]
0x6F5621: mov     edx, [esp+118h+var_A0]
0x6F5625: fstp    [esp+118h+var_98]
0x6F562C: sub     esp, 0Ch
0x6F562F: mov     eax, esp
0x6F5631: mov     [eax], edx
0x6F5633: mov     edx, [esp+124h+var_9C]
0x6F563A: mov     [eax+4], edx
0x6F563D: mov     edx, [esp+124h+var_98]
0x6F5644: mov     [eax+8], edx
0x6F5647: mov     eax, [esp+124h+var_50]
0x6F564E: push    eax; int
0x6F564F: call    sub_6F29D0
0x6F5654: xor     edi, edi
0x6F5656: cmp     [esp+118h+var_50], edi
0x6F565D: jbe     loc_6F575F
0x6F5663: xor     ebx, ebx
0x6F5665: push    3
0x6F5667: push    2
0x6F5669: lea     ecx, [esp+120h+var_18]
0x6F5670: push    ecx
0x6F5671: lea     ecx, [esp+124h+var_94]
0x6F5678: call    sub_6F5D40
0x6F567D: test    al, al
0x6F567F: jz      loc_6F587E
0x6F5685: movsx   edx, word ptr [esp+118h+var_14]
0x6F568D: movsx   eax, [esp+118h+var_16]
0x6F5695: movsx   ecx, [esp+118h+var_18]
0x6F569D: mov     [esp+118h+var_F0], edx
0x6F56A1: fild    [esp+118h+var_F0]
0x6F56A5: mov     [esp+118h+var_F0], eax
0x6F56A9: fld     [esp+118h+var_D8]
0x6F56AD: mov     eax, [ebp+4]
0x6F56B0: test    eax, eax
0x6F56B2: fld     st
0x6F56B4: fmulp   st(2), st
0x6F56B6: fxch    st(1)
0x6F56B8: fstp    [esp+118h+var_EC]
0x6F56BC: fild    [esp+118h+var_F0]
0x6F56C0: mov     [esp+118h+var_F0], ecx
0x6F56C4: fmul    st, st(1)
0x6F56C6: fstp    [esp+118h+var_A4]
0x6F56CA: fild    [esp+118h+var_F0]
0x6F56CE: fmulp   st(1), st
0x6F56D0: fstp    [esp+118h+var_E8]
0x6F56D4: fld     [esp+118h+var_A4]
0x6F56D8: fstp    [esp+118h+var_E4]
0x6F56DC: fld     [esp+118h+var_EC]
0x6F56E0: fstp    [esp+118h+var_E0]
0x6F56E4: jz      short loc_6F5702
0x6F56E6: mov     ecx, [ebp+8]
0x6F56E9: sub     ecx, eax
0x6F56EB: mov     eax, 2E8BA2E9h
0x6F56F0: imul    ecx
0x6F56F2: sar     edx, 3
0x6F56F5: mov     eax, edx
0x6F56F7: shr     eax, 1Fh
0x6F56FA: add     eax, edx
0x6F56FC: cmp     [esp+118h+var_104], eax
0x6F5700: jb      short loc_6F5707
0x6F5702: call    __invalid_parameter_noinfo
0x6F5707: mov     esi, [ebp+4]
0x6F570A: add     esi, dword ptr [esp+118h+var_FD+1]
0x6F570E: mov     eax, [esi+20h]
0x6F5711: test    eax, eax
0x6F5713: jz      short loc_6F572E
0x6F5715: mov     ecx, [esi+24h]
0x6F5718: sub     ecx, eax
0x6F571A: mov     eax, 2AAAAAABh
0x6F571F: imul    ecx
0x6F5721: sar     edx, 1
0x6F5723: mov     eax, edx
0x6F5725: shr     eax, 1Fh
0x6F5728: add     eax, edx
0x6F572A: cmp     edi, eax
0x6F572C: jb      short loc_6F5733
0x6F572E: call    __invalid_parameter_noinfo
0x6F5733: mov     eax, [esi+20h]
0x6F5736: mov     edx, [esp+118h+var_E8]
0x6F573A: mov     ecx, [esp+118h+var_E4]
0x6F573E: add     eax, ebx
0x6F5740: mov     [eax], edx
0x6F5742: mov     edx, [esp+118h+var_E0]
0x6F5746: mov     [eax+4], ecx
0x6F5749: add     edi, 1
0x6F574C: mov     [eax+8], edx
0x6F574F: add     ebx, 0Ch
0x6F5752: cmp     edi, [esp+118h+var_50]
0x6F5759: jb      loc_6F5665
0x6F575F: mov     eax, [esp+118h+var_104]
0x6F5763: add     dword ptr [esp+118h+var_FD+1], 2Ch ; ','
0x6F5768: add     eax, 1
0x6F576B: cmp     eax, [esp+118h+var_34]
0x6F5772: mov     [esp+118h+var_104], eax
0x6F5776: jb      loc_6F53D2
0x6F577C: mov     eax, [esp+118h+var_50]
0x6F5783: xor     ebx, ebx
0x6F5785: cmp     [esp+118h+var_30], ebx
0x6F578C: mov     [esp+118h+var_F8], eax
0x6F5790: jbe     loc_6F5B06
0x6F5796: mov     ebp, [esp+118h+var_F4]
0x6F579A: mov     dword ptr [esp+118h+var_FD+1], ebx
0x6F579E: mov     edi, edi
0x6F57A0: push    1
0x6F57A2: push    4
0x6F57A4: lea     ecx, [esp+120h+var_104]
0x6F57A8: push    ecx
0x6F57A9: lea     ecx, [esp+124h+var_94]
0x6F57B0: call    sub_6F5D40
0x6F57B5: test    al, al
0x6F57B7: jz      loc_6F5B85
0x6F57BD: mov     eax, [esp+118h+var_104]
0x6F57C1: xor     edi, edi
0x6F57C3: cmp     eax, edi
0x6F57C5: jz      loc_6F59F7
0x6F57CB: lea     edx, [esp+118h+var_FD]
0x6F57CF: push    edx; int
0x6F57D0: push    eax; char *
0x6F57D1: lea     ecx, [esp+120h+var_E8]
0x6F57D5: mov     [esp+120h+var_FD], 0
0x6F57DA: call    sub_6F2CD0
0x6F57DF: mov     esi, [esp+118h+var_E4]
0x6F57E3: cmp     esi, edi
0x6F57E5: mov     byte ptr [esp+118h+var_4], 9
0x6F57ED: jz      short loc_6F57F7
0x6F57EF: mov     eax, [esp+118h+var_E0]
0x6F57F3: sub     eax, esi
0x6F57F5: jnz     short loc_6F57FC
0x6F57F7: call    __invalid_parameter_noinfo
0x6F57FC: mov     ecx, [esp+118h+var_104]
0x6F5800: push    ecx
0x6F5801: push    1
0x6F5803: push    esi
0x6F5804: lea     ecx, [esp+124h+var_94]
0x6F580B: call    sub_6F5D40
0x6F5810: test    al, al
0x6F5812: jz      loc_6F5BB7
0x6F5818: cmp     [esp+118h+var_104], 1
0x6F581D: jbe     loc_6F5960
0x6F5823: mov     eax, [ebp+4]
0x6F5826: cmp     eax, edi
0x6F5828: jz      short loc_6F5844
0x6F582A: mov     ecx, [ebp+8]
0x6F582D: sub     ecx, eax
0x6F582F: mov     eax, 2AAAAAABh
0x6F5834: imul    ecx
0x6F5836: sar     edx, 3
0x6F5839: mov     eax, edx
0x6F583B: shr     eax, 1Fh
0x6F583E: add     eax, edx
0x6F5840: cmp     ebx, eax
0x6F5842: jb      short loc_6F5849
0x6F5844: call    __invalid_parameter_noinfo
0x6F5849: mov     ecx, [ebp+4]
0x6F584C: add     ecx, dword ptr [esp+118h+var_FD+1]
0x6F5850: mov     eax, [esp+118h+var_104]
0x6F5854: mov     edx, [ecx+14h]
0x6F5857: add     eax, 0FFFFFFFFh
0x6F585A: cmp     eax, edx
0x6F585C: ja      short loc_6F58D0
0x6F585E: push    0FFFFFFFFh
0x6F5860: push    eax
0x6F5861: call    sub_4134E0
0x6F5866: jmp     short loc_6F58D9
0x6F5868: test    ebx, ebx
0x6F586A: jz      loc_6F50EA
0x6F5870: push    ebx
0x6F5871: call    FormHeapFree
0x6F5876: add     esp, 4
0x6F5879: jmp     loc_6F50EA
0x6F587E: mov     [esp+118h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F5889: mov     ecx, [esp+118h+var_54]
0x6F5890: test    ecx, ecx
0x6F5892: mov     [esp+118h+var_4], 7
0x6F589D: jz      short loc_6F58A7
0x6F589F: mov     eax, [ecx]
0x6F58A1: mov     edx, [eax]
0x6F58A3: push    1
0x6F58A5: call    edx
0x6F58A7: mov     [esp+118h+var_54], 0
0x6F58B2: lea     ecx, [esp+118h+var_94]; this
0x6F58B9: mov     [esp+118h+var_4], 0FFFFFFFFh
0x6F58C4: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6F58C9: xor     al, al
0x6F58CB: jmp     loc_6F5C7B
0x6F58D0: push    edi
0x6F58D1: sub     eax, edx
0x6F58D3: push    eax
0x6F58D4: call    sub_6EDAA0
0x6F58D9: mov     edx, [esp+118h+var_104]
0x6F58DD: add     edx, 0FFFFFFFFh
0x6F58E0: jz      loc_6F59D6
0x6F58E6: mov     ecx, [esp+118h+var_E4]
0x6F58EA: test    ecx, ecx
0x6F58EC: jz      short loc_6F58F8
0x6F58EE: mov     eax, [esp+118h+var_E0]
0x6F58F2: sub     eax, ecx
0x6F58F4: cmp     edi, eax
0x6F58F6: jb      short loc_6F58FD
0x6F58F8: call    __invalid_parameter_noinfo
0x6F58FD: mov     eax, [ebp+4]
0x6F5900: test    eax, eax
0x6F5902: jz      short loc_6F591E
0x6F5904: mov     ecx, [ebp+8]
0x6F5907: sub     ecx, eax
0x6F5909: mov     eax, 2AAAAAABh
0x6F590E: imul    ecx
0x6F5910: sar     edx, 3
0x6F5913: mov     eax, edx
0x6F5915: shr     eax, 1Fh
0x6F5918: add     eax, edx
0x6F591A: cmp     ebx, eax
0x6F591C: jb      short loc_6F5923
0x6F591E: call    __invalid_parameter_noinfo
0x6F5923: mov     esi, [ebp+4]
0x6F5926: add     esi, dword ptr [esp+118h+var_FD+1]
0x6F592A: cmp     edi, [esi+14h]
0x6F592D: jbe     short loc_6F5934
0x6F592F: call    __invalid_parameter_noinfo
0x6F5934: cmp     dword ptr [esi+18h], 10h
0x6F5938: jb      short loc_6F593F
0x6F593A: mov     esi, [esi+4]
0x6F593D: jmp     short loc_6F5942
0x6F593F: add     esi, 4
0x6F5942: mov     eax, [esp+118h+var_E4]
0x6F5946: mov     cl, [eax+edi]
0x6F5949: mov     [esi+edi], cl
0x6F594C: mov     edx, [esp+118h+var_104]
0x6F5950: add     edi, 1
0x6F5953: add     edx, 0FFFFFFFFh
0x6F5956: cmp     edi, edx
0x6F5958: jb      short loc_6F58E6
0x6F595A: mov     esi, eax
0x6F595C: xor     edi, edi
0x6F595E: jmp     short loc_6F59D6
0x6F5960: push    edi; MaxCount
0x6F5961: push    offset EmptyString; Src
0x6F5966: lea     ecx, [esp+120h+var_C4]
0x6F596A: mov     [esp+120h+var_AC], 0Fh
0x6F5972: mov     [esp+120h+var_B0], edi
0x6F5976: mov     byte ptr [esp+120h+var_C0], 0
0x6F597B: call    sub_414500
0x6F5980: mov     eax, [ebp+4]
0x6F5983: cmp     eax, edi
0x6F5985: mov     byte ptr [esp+118h+var_4], 0Bh
0x6F598D: jz      short loc_6F59A9
0x6F598F: mov     ecx, [ebp+8]
0x6F5992: sub     ecx, eax
0x6F5994: mov     eax, 2AAAAAABh
0x6F5999: imul    ecx
0x6F599B: sar     edx, 3
0x6F599E: mov     eax, edx
0x6F59A0: shr     eax, 1Fh
0x6F59A3: add     eax, edx
0x6F59A5: cmp     ebx, eax
0x6F59A7: jb      short loc_6F59AE
0x6F59A9: call    __invalid_parameter_noinfo
0x6F59AE: mov     ecx, [ebp+4]
0x6F59B1: add     ecx, dword ptr [esp+118h+var_FD+1]
0x6F59B5: push    0FFFFFFFFh
0x6F59B7: push    edi
0x6F59B8: lea     eax, [esp+120h+var_C4]
0x6F59BC: push    eax
0x6F59BD: call    sub_414420
0x6F59C2: cmp     [esp+118h+var_AC], 10h
0x6F59C7: jb      short loc_6F59D6
0x6F59C9: mov     ecx, [esp+118h+var_C0]
0x6F59CD: push    ecx
0x6F59CE: call    FormHeapFree
0x6F59D3: add     esp, 4
0x6F59D6: cmp     esi, edi
0x6F59D8: mov     byte ptr [esp+118h+var_4], 0
0x6F59E0: jz      short loc_6F59EB
0x6F59E2: push    esi
0x6F59E3: call    FormHeapFree
0x6F59E8: add     esp, 4
0x6F59EB: mov     [esp+118h+var_E4], edi
0x6F59EF: mov     [esp+118h+var_E0], edi
0x6F59F3: mov     [esp+118h+var_DC], edi
0x6F59F7: mov     eax, [ebp+4]
0x6F59FA: cmp     eax, edi
0x6F59FC: jz      short loc_6F5A18
0x6F59FE: mov     ecx, [ebp+8]
0x6F5A01: sub     ecx, eax
0x6F5A03: mov     eax, 2AAAAAABh
0x6F5A08: imul    ecx
0x6F5A0A: sar     edx, 3
0x6F5A0D: mov     eax, edx
0x6F5A0F: shr     eax, 1Fh
0x6F5A12: add     eax, edx
0x6F5A14: cmp     ebx, eax
0x6F5A16: jb      short loc_6F5A1D
0x6F5A18: call    __invalid_parameter_noinfo
0x6F5A1D: mov     edx, [ebp+4]
0x6F5A20: mov     eax, [esp+118h+var_F8]
0x6F5A24: mov     esi, dword ptr [esp+118h+var_FD+1]
0x6F5A28: push    1
0x6F5A2A: push    4
0x6F5A2C: lea     ecx, [esp+120h+var_104]
0x6F5A30: push    ecx
0x6F5A31: lea     ecx, [esp+124h+var_94]
0x6F5A38: mov     [edx+esi+1Ch], eax
0x6F5A3C: call    sub_6F5D40
0x6F5A41: test    al, al
0x6F5A43: jz      loc_6F5BF9
0x6F5A49: mov     eax, [ebp+4]
0x6F5A4C: cmp     eax, edi
0x6F5A4E: jz      short loc_6F5A6A
0x6F5A50: mov     ecx, [ebp+8]
0x6F5A53: sub     ecx, eax
0x6F5A55: mov     eax, 2AAAAAABh
0x6F5A5A: imul    ecx
0x6F5A5C: sar     edx, 3
0x6F5A5F: mov     eax, edx
0x6F5A61: shr     eax, 1Fh
0x6F5A64: add     eax, edx
0x6F5A66: cmp     ebx, eax
0x6F5A68: jb      short loc_6F5A6F
0x6F5A6A: call    __invalid_parameter_noinfo
0x6F5A6F: mov     edx, [ebp+4]
0x6F5A72: mov     eax, [esp+118h+var_104]
0x6F5A76: push    edi; int
0x6F5A77: lea     ecx, [edx+esi+20h]; int
0x6F5A7B: push    eax; int
0x6F5A7C: call    sub_6F2AB0
0x6F5A81: cmp     [esp+118h+var_104], edi
0x6F5A85: jz      short loc_6F5AE9
0x6F5A87: mov     eax, [ebp+4]
0x6F5A8A: test    eax, eax
0x6F5A8C: jz      short loc_6F5AA8
0x6F5A8E: mov     ecx, [ebp+8]
0x6F5A91: sub     ecx, eax
0x6F5A93: mov     eax, 2AAAAAABh
0x6F5A98: imul    ecx
0x6F5A9A: sar     edx, 3
0x6F5A9D: mov     eax, edx
0x6F5A9F: shr     eax, 1Fh
0x6F5AA2: add     eax, edx
0x6F5AA4: cmp     ebx, eax
0x6F5AA6: jb      short loc_6F5AAD
0x6F5AA8: call    __invalid_parameter_noinfo
0x6F5AAD: mov     esi, [ebp+4]
0x6F5AB0: add     esi, dword ptr [esp+118h+var_FD+1]
0x6F5AB4: mov     eax, [esi+24h]
0x6F5AB7: test    eax, eax
0x6F5AB9: jz      short loc_6F5AC5
0x6F5ABB: mov     ecx, [esi+28h]
0x6F5ABE: sub     ecx, eax
0x6F5AC0: sar     ecx, 2
0x6F5AC3: jnz     short loc_6F5ACA
0x6F5AC5: call    __invalid_parameter_noinfo
0x6F5ACA: mov     edx, [esp+118h+var_104]
0x6F5ACE: mov     esi, [esi+24h]
0x6F5AD1: push    edx; int
0x6F5AD2: push    4; Size
0x6F5AD4: push    esi; int
0x6F5AD5: lea     ecx, [esp+124h+var_94]
0x6F5ADC: call    sub_6F5D40
0x6F5AE1: test    al, al
0x6F5AE3: jz      loc_6F50EA
0x6F5AE9: mov     eax, [esp+118h+var_104]
0x6F5AED: add     [esp+118h+var_F8], eax
0x6F5AF1: add     dword ptr [esp+118h+var_FD+1], 30h ; '0'
0x6F5AF6: add     ebx, 1
0x6F5AF9: cmp     ebx, [esp+118h+var_30]
0x6F5B00: jb      loc_6F57A0
0x6F5B06: mov     ecx, [esp+118h+var_2C]
0x6F5B0D: mov     edx, [esp+118h+var_50]
0x6F5B14: add     ecx, edx
0x6F5B16: cmp     [esp+118h+var_F8], ecx
0x6F5B1A: jz      loc_6F5C2E
0x6F5B20: mov     eax, [esp+118h+var_A8]
0x6F5B24: sub     esp, 1Ch
0x6F5B27: mov     ecx, esp
0x6F5B29: mov     [esp+134h+var_F4], esp
0x6F5B2D: push    0FFFFFFFFh
0x6F5B2F: xor     esi, esi
0x6F5B31: push    esi
0x6F5B32: mov     dword ptr [ecx+18h], 0Fh
0x6F5B39: mov     [ecx+14h], esi
0x6F5B3C: push    eax
0x6F5B3D: mov     byte ptr [ecx+4], 0
0x6F5B41: call    sub_414420
0x6F5B46: push    1; int
0x6F5B48: call    sub_6F6BF0
0x6F5B4D: add     esp, 20h
0x6F5B50: mov     [esp+118h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F5B5B: mov     ecx, [esp+118h+var_54]
0x6F5B62: cmp     ecx, esi
0x6F5B64: mov     [esp+118h+var_4], 0Dh
0x6F5B6F: jz      short loc_6F5B79
0x6F5B71: mov     edx, [ecx]
0x6F5B73: mov     eax, [edx]
0x6F5B75: push    1
0x6F5B77: call    eax
0x6F5B79: mov     [esp+118h+var_54], esi
0x6F5B80: jmp     loc_6F58B2
0x6F5B85: mov     [esp+118h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F5B90: mov     ecx, [esp+118h+var_54]
0x6F5B97: test    ecx, ecx
0x6F5B99: mov     [esp+118h+var_4], 8
0x6F5BA4: jz      loc_6F58A7
0x6F5BAA: mov     edx, [ecx]
0x6F5BAC: mov     eax, [edx]
0x6F5BAE: push    1
0x6F5BB0: call    eax
0x6F5BB2: jmp     loc_6F58A7
0x6F5BB7: cmp     esi, edi
0x6F5BB9: jz      short loc_6F5BC4
0x6F5BBB: push    esi
0x6F5BBC: call    FormHeapFree
0x6F5BC1: add     esp, 4
0x6F5BC4: mov     [esp+118h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F5BCF: mov     ecx, [esp+118h+var_54]
0x6F5BD6: cmp     ecx, edi
0x6F5BD8: mov     [esp+118h+var_4], 0Ah
0x6F5BE3: jz      short loc_6F5BED
0x6F5BE5: mov     edx, [ecx]
0x6F5BE7: mov     eax, [edx]
0x6F5BE9: push    1
0x6F5BEB: call    eax
0x6F5BED: mov     [esp+118h+var_54], edi
0x6F5BF4: jmp     loc_6F58B2
0x6F5BF9: mov     [esp+118h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F5C04: mov     ecx, [esp+118h+var_54]
0x6F5C0B: cmp     ecx, edi
0x6F5C0D: mov     [esp+118h+var_4], 0Ch
0x6F5C18: jz      short loc_6F5BED
0x6F5C1A: mov     edx, [ecx]
0x6F5C1C: mov     eax, [edx]
0x6F5C1E: push    1
0x6F5C20: call    eax
0x6F5C22: mov     [esp+118h+var_54], edi
0x6F5C29: jmp     loc_6F58B2
0x6F5C2E: mov     [esp+118h+var_94], offset ??_7BSFaceGenBinaryFile@@6B@; const BSFaceGenBinaryFile::`vftable'
0x6F5C39: mov     ecx, [esp+118h+var_54]
0x6F5C40: test    ecx, ecx
0x6F5C42: mov     [esp+118h+var_4], 0Eh
0x6F5C4D: jz      short loc_6F5C57
0x6F5C4F: mov     edx, [ecx]
0x6F5C51: mov     eax, [edx]
0x6F5C53: push    1
0x6F5C55: call    eax
0x6F5C57: lea     ecx, [esp+118h+var_94]; this
0x6F5C5E: mov     [esp+118h+var_54], 0
0x6F5C69: mov     [esp+118h+var_4], 0FFFFFFFFh
0x6F5C74: call    ??1FutBinaryFileC@@UAE@XZ; FutBinaryFileC::~FutBinaryFileC(void)
0x6F5C79: mov     al, 1
0x6F5C7B: mov     ecx, dword ptr [esp+118h+var_C]
0x6F5C82: mov     large fs:0, ecx
0x6F5C89: pop     ecx
0x6F5C8A: pop     edi
0x6F5C8B: pop     esi
0x6F5C8C: pop     ebp
0x6F5C8D: pop     ebx
0x6F5C8E: mov     ecx, [esp+104h+var_10]
0x6F5C95: xor     ecx, esp
0x6F5C97: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6F5C9C: add     esp, 104h
0x6F5CA2: retn
