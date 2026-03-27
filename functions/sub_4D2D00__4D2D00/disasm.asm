0x4D2D00: sub     esp, 28h
0x4D2D03: mov     ecx, ds:0B333C4h; this
0x4D2D09: push    ebx
0x4D2D0A: mov     [esp+2Ch+var_24], 0
0x4D2D12: call    TESObjectREFR_GetParentCell
0x4D2D17: mov     ebx, eax
0x4D2D19: test    ebx, ebx
0x4D2D1B: jz      loc_4D31BB
0x4D2D21: test    byte ptr [ebx+24h], 1
0x4D2D25: push    ebp
0x4D2D26: push    esi
0x4D2D27: push    edi
0x4D2D28: jz      loc_4D2F16
0x4D2D2E: mov     eax, [esp+38h+arg_0]
0x4D2D32: fld     dword ptr [eax]
0x4D2D34: fstp    [esp+38h+var_4]
0x4D2D38: fld     [esp+38h+var_4]
0x4D2D3C: fistp   [esp+38h+var_10]
0x4D2D40: mov     esi, [esp+38h+var_10]
0x4D2D44: fld     dword ptr [eax+4]
0x4D2D47: add     esi, 0FFFFF800h
0x4D2D4D: fstp    [esp+38h+var_4]
0x4D2D51: sar     esi, 0Ch
0x4D2D54: fld     [esp+38h+var_4]
0x4D2D58: fistp   [esp+38h+var_10]
0x4D2D5C: mov     edi, [esp+38h+var_10]
0x4D2D60: lea     ecx, [esp+38h+var_20]
0x4D2D64: push    ecx
0x4D2D65: lea     edx, [esp+3Ch+var_1C]
0x4D2D69: push    edx
0x4D2D6A: xor     ebp, ebp
0x4D2D6C: push    1
0x4D2D6E: add     edi, 0FFFFF800h
0x4D2D74: push    eax
0x4D2D75: sar     edi, 0Ch
0x4D2D78: mov     [esp+48h+var_1C], ebp
0x4D2D7C: mov     [esp+48h+var_20], ebp
0x4D2D80: call    sub_4123C0
0x4D2D85: add     esp, 10h
0x4D2D88: push    ebp
0x4D2D89: push    edi
0x4D2D8A: push    esi
0x4D2D8B: mov     ecx, ebx
0x4D2D8D: call    sub_4CCEE0
0x4D2D92: mov     ebp, eax
0x4D2D94: test    ebp, ebp
0x4D2D96: mov     [esp+38h+var_18], ebp
0x4D2D9A: jz      short loc_4D2DB9
0x4D2D9C: mov     eax, [esp+38h+var_20]
0x4D2DA0: mov     ecx, [esp+38h+var_1C]
0x4D2DA4: push    eax
0x4D2DA5: push    ecx
0x4D2DA6: mov     ecx, ebp
0x4D2DA8: call    sub_412220
0x4D2DAD: test    al, al
0x4D2DAF: jz      short loc_4D2DB9
0x4D2DB1: mov     [esp+38h+var_24], 1
0x4D2DB9: mov     eax, [esp+38h+var_20]
0x4D2DBD: cmp     eax, 0Fh
0x4D2DC0: mov     [esp+38h+var_14], 0
0x4D2DC8: mov     [esp+38h+var_25], 0
0x4D2DCD: jnz     short loc_4D2DF5
0x4D2DCF: push    0
0x4D2DD1: lea     edx, [edi+1]
0x4D2DD4: push    edx
0x4D2DD5: push    esi
0x4D2DD6: mov     ecx, ebx
0x4D2DD8: mov     [esp+44h+var_25], 1
0x4D2DDD: call    sub_4CCEE0
0x4D2DE2: test    eax, eax
0x4D2DE4: mov     [esp+38h+var_14], eax
0x4D2DE8: jz      short loc_4D2E12
0x4D2DEA: mov     ecx, [esp+38h+var_1C]
0x4D2DEE: push    0
0x4D2DF0: push    ecx
0x4D2DF1: mov     ecx, eax
0x4D2DF3: jmp     short loc_4D2E04
0x4D2DF5: test    ebp, ebp
0x4D2DF7: jz      short loc_4D2E12
0x4D2DF9: mov     edx, [esp+38h+var_1C]
0x4D2DFD: add     eax, 1
0x4D2E00: push    eax
0x4D2E01: push    edx
0x4D2E02: mov     ecx, ebp
0x4D2E04: call    sub_412220
0x4D2E09: test    al, al
0x4D2E0B: jz      short loc_4D2E12
0x4D2E0D: add     [esp+38h+var_24], 1
0x4D2E12: mov     eax, [esp+38h+var_1C]
0x4D2E16: xor     ebp, ebp
0x4D2E18: cmp     eax, 0Fh
0x4D2E1B: mov     [esp+38h+var_26], 0
0x4D2E20: jnz     short loc_4D2E45
0x4D2E22: push    ebp
0x4D2E23: push    edi
0x4D2E24: lea     eax, [esi+1]
0x4D2E27: push    eax
0x4D2E28: mov     ecx, ebx
0x4D2E2A: mov     [esp+44h+var_26], 1
0x4D2E2F: call    sub_4CCEE0
0x4D2E34: mov     ebp, eax
0x4D2E36: test    ebp, ebp
0x4D2E38: jz      short loc_4D2E66
0x4D2E3A: mov     ecx, [esp+38h+var_20]
0x4D2E3E: push    ecx
0x4D2E3F: push    0
0x4D2E41: mov     ecx, ebp
0x4D2E43: jmp     short loc_4D2E58
0x4D2E45: cmp     [esp+38h+var_18], ebp
0x4D2E49: jz      short loc_4D2E66
0x4D2E4B: mov     edx, [esp+38h+var_20]
0x4D2E4F: mov     ecx, [esp+38h+var_18]
0x4D2E53: push    edx
0x4D2E54: add     eax, 1
0x4D2E57: push    eax
0x4D2E58: call    sub_412220
0x4D2E5D: test    al, al
0x4D2E5F: jz      short loc_4D2E66
0x4D2E61: add     [esp+38h+var_24], 1
0x4D2E66: cmp     [esp+38h+var_25], 0
0x4D2E6B: jz      short loc_4D2EC4
0x4D2E6D: cmp     [esp+38h+var_26], 0
0x4D2E72: jz      short loc_4D2E9F
0x4D2E74: push    0
0x4D2E76: add     edi, 1
0x4D2E79: push    edi
0x4D2E7A: add     esi, 1
0x4D2E7D: push    esi
0x4D2E7E: mov     ecx, ebx
0x4D2E80: call    sub_4CCEE0
0x4D2E85: test    eax, eax
0x4D2E87: jz      loc_4D31B8
0x4D2E8D: push    0
0x4D2E8F: push    0
0x4D2E91: mov     ecx, eax
0x4D2E93: call    sub_412220
0x4D2E98: test    al, al
0x4D2E9A: jmp     loc_4D31B1
0x4D2E9F: cmp     [esp+38h+var_14], 0
0x4D2EA4: jz      loc_4D31B8
0x4D2EAA: mov     eax, [esp+38h+var_1C]
0x4D2EAE: mov     ecx, [esp+38h+var_14]
0x4D2EB2: push    0
0x4D2EB4: add     eax, 1
0x4D2EB7: push    eax
0x4D2EB8: call    sub_412220
0x4D2EBD: test    al, al
0x4D2EBF: jmp     loc_4D31B1
0x4D2EC4: cmp     [esp+38h+var_26], 0
0x4D2EC9: jz      short loc_4D2EEB
0x4D2ECB: test    ebp, ebp
0x4D2ECD: jz      loc_4D31B8
0x4D2ED3: mov     ecx, [esp+38h+var_20]
0x4D2ED7: add     ecx, 1
0x4D2EDA: push    ecx
0x4D2EDB: push    0
0x4D2EDD: mov     ecx, ebp
0x4D2EDF: call    sub_412220
0x4D2EE4: test    al, al
0x4D2EE6: jmp     loc_4D31B1
0x4D2EEB: cmp     [esp+38h+var_18], 0
0x4D2EF0: jz      loc_4D31B8
0x4D2EF6: mov     edx, [esp+38h+var_20]
0x4D2EFA: mov     eax, [esp+38h+var_1C]
0x4D2EFE: mov     ecx, [esp+38h+var_18]
0x4D2F02: add     edx, 1
0x4D2F05: push    edx
0x4D2F06: add     eax, 1
0x4D2F09: push    eax
0x4D2F0A: call    sub_412220
0x4D2F0F: test    al, al
0x4D2F11: jmp     loc_4D31B1
0x4D2F16: mov     edi, [ebx+50h]
0x4D2F19: test    edi, edi
0x4D2F1B: mov     [esp+38h+var_8], edi
0x4D2F1F: jz      loc_4D31B8
0x4D2F25: mov     eax, [esp+38h+arg_0]
0x4D2F29: fld     dword ptr [eax]
0x4D2F2B: fstp    [esp+38h+var_4]
0x4D2F2F: fld     [esp+38h+var_4]
0x4D2F33: fistp   [esp+38h+var_10]
0x4D2F37: mov     ebp, [esp+38h+var_10]
0x4D2F3B: fld     dword ptr [eax+4]
0x4D2F3E: fstp    [esp+38h+var_4]
0x4D2F42: sar     ebp, 0Ch
0x4D2F45: fld     [esp+38h+var_4]
0x4D2F49: fistp   [esp+38h+var_10]
0x4D2F4D: mov     esi, [esp+38h+var_10]
0x4D2F51: lea     edx, [esp+38h+var_1C]
0x4D2F55: push    edx
0x4D2F56: xor     ecx, ecx
0x4D2F58: lea     edx, [esp+3Ch+var_20]
0x4D2F5C: push    edx
0x4D2F5D: push    ecx
0x4D2F5E: sar     esi, 0Ch
0x4D2F61: push    eax
0x4D2F62: mov     [esp+48h+var_C], esi
0x4D2F66: mov     [esp+48h+var_20], ecx
0x4D2F6A: mov     [esp+48h+var_1C], ecx
0x4D2F6E: call    sub_4123C0
0x4D2F73: add     esp, 10h
0x4D2F76: push    esi; signed int
0x4D2F77: push    ebp; signed int
0x4D2F78: mov     ecx, edi; this
0x4D2F7A: call    TESWorldSpace__GetCellAtCellCoord
0x4D2F7F: mov     ebx, eax
0x4D2F81: test    ebx, ebx
0x4D2F83: mov     [esp+38h+var_10], ebx
0x4D2F87: jz      loc_4D3020
0x4D2F8D: lea     ecx, [ebx+28h]
0x4D2F90: call    sub_420B50
0x4D2F95: test    eax, eax
0x4D2F97: mov     [esp+38h+var_18], eax
0x4D2F9B: jz      short loc_4D2FB4
0x4D2F9D: mov     eax, [esp+38h+var_1C]
0x4D2FA1: mov     ecx, [esp+38h+var_20]
0x4D2FA5: push    eax
0x4D2FA6: push    ecx
0x4D2FA7: mov     ecx, [esp+40h+var_18]
0x4D2FAB: call    sub_412220
0x4D2FB0: test    al, al
0x4D2FB2: jnz     short loc_4D2FBA
0x4D2FB4: test    byte ptr [ebx+25h], 1
0x4D2FB8: jz      short loc_4D2FC2
0x4D2FBA: mov     [esp+38h+var_24], 1
0x4D2FC2: mov     eax, [esp+38h+var_1C]
0x4D2FC6: xor     ecx, ecx
0x4D2FC8: cmp     eax, 0Fh
0x4D2FCB: mov     [esp+38h+var_14], ecx
0x4D2FCF: mov     [esp+38h+var_4], ecx
0x4D2FD3: mov     [esp+38h+var_25], cl
0x4D2FD7: jnz     short loc_4D3034
0x4D2FD9: add     esi, 1
0x4D2FDC: push    esi; signed int
0x4D2FDD: push    ebp; signed int
0x4D2FDE: mov     ecx, edi; this
0x4D2FE0: mov     [esp+40h+var_25], 1
0x4D2FE5: call    TESWorldSpace__GetCellAtCellCoord
0x4D2FEA: mov     esi, eax
0x4D2FEC: test    esi, esi
0x4D2FEE: mov     [esp+38h+var_4], esi
0x4D2FF2: jz      short loc_4D302A
0x4D2FF4: lea     ecx, [esi+28h]
0x4D2FF7: call    sub_420B50
0x4D2FFC: test    eax, eax
0x4D2FFE: mov     [esp+38h+var_14], eax
0x4D3002: jz      short loc_4D3016
0x4D3004: mov     edx, [esp+38h+var_20]
0x4D3008: push    0
0x4D300A: push    edx
0x4D300B: mov     ecx, eax
0x4D300D: call    sub_412220
0x4D3012: test    al, al
0x4D3014: jnz     short loc_4D305A
0x4D3016: test    esi, esi
0x4D3018: jz      short loc_4D305F
0x4D301A: test    byte ptr [esi+25h], 1
0x4D301E: jmp     short loc_4D3058
0x4D3020: mov     [esp+38h+var_18], 0
0x4D3028: jmp     short loc_4D2FC2
0x4D302A: mov     [esp+38h+var_14], 0
0x4D3032: jmp     short loc_4D3016
0x4D3034: cmp     [esp+38h+var_18], ecx
0x4D3038: jz      short loc_4D3050
0x4D303A: mov     ecx, [esp+38h+var_18]
0x4D303E: add     eax, 1
0x4D3041: push    eax
0x4D3042: mov     eax, [esp+3Ch+var_20]
0x4D3046: push    eax
0x4D3047: call    sub_412220
0x4D304C: test    al, al
0x4D304E: jnz     short loc_4D305A
0x4D3050: test    ebx, ebx
0x4D3052: jz      short loc_4D305F
0x4D3054: test    byte ptr [ebx+25h], 1
0x4D3058: jz      short loc_4D305F
0x4D305A: add     [esp+38h+var_24], 1
0x4D305F: mov     eax, [esp+38h+var_20]
0x4D3063: xor     edi, edi
0x4D3065: xor     esi, esi
0x4D3067: xor     bl, bl
0x4D3069: cmp     eax, 0Fh
0x4D306C: jnz     short loc_4D30B6
0x4D306E: mov     ecx, [esp+38h+var_C]
0x4D3072: push    ecx; signed int
0x4D3073: mov     ecx, [esp+3Ch+var_8]; this
0x4D3077: lea     edx, [ebp+1]
0x4D307A: push    edx; signed int
0x4D307B: mov     bl, 1
0x4D307D: call    TESWorldSpace__GetCellAtCellCoord
0x4D3082: mov     esi, eax
0x4D3084: test    esi, esi
0x4D3086: jz      short loc_4D30B2
0x4D3088: lea     ecx, [esi+28h]
0x4D308B: call    sub_420B50
0x4D3090: mov     edi, eax
0x4D3092: test    edi, edi
0x4D3094: jz      short loc_4D30A8
0x4D3096: mov     eax, [esp+38h+var_1C]
0x4D309A: push    eax
0x4D309B: push    0
0x4D309D: mov     ecx, edi
0x4D309F: call    sub_412220
0x4D30A4: test    al, al
0x4D30A6: jnz     short loc_4D30E2
0x4D30A8: test    esi, esi
0x4D30AA: jz      short loc_4D30E7
0x4D30AC: test    byte ptr [esi+25h], 1
0x4D30B0: jmp     short loc_4D30E0
0x4D30B2: xor     edi, edi
0x4D30B4: jmp     short loc_4D30A8
0x4D30B6: cmp     [esp+38h+var_18], edi
0x4D30BA: jz      short loc_4D30D2
0x4D30BC: mov     ecx, [esp+38h+var_1C]
0x4D30C0: push    ecx
0x4D30C1: mov     ecx, [esp+3Ch+var_18]
0x4D30C5: add     eax, 1
0x4D30C8: push    eax
0x4D30C9: call    sub_412220
0x4D30CE: test    al, al
0x4D30D0: jnz     short loc_4D30E2
0x4D30D2: cmp     [esp+38h+var_10], edi
0x4D30D6: jz      short loc_4D30E7
0x4D30D8: mov     edx, [esp+38h+var_10]
0x4D30DC: test    byte ptr [edx+25h], 1
0x4D30E0: jz      short loc_4D30E7
0x4D30E2: add     [esp+38h+var_24], 1
0x4D30E7: cmp     [esp+38h+var_25], 0
0x4D30EC: jz      short loc_4D315A
0x4D30EE: test    bl, bl
0x4D30F0: jz      short loc_4D3136
0x4D30F2: mov     eax, [esp+38h+var_C]
0x4D30F6: mov     ecx, [esp+38h+var_8]; this
0x4D30FA: add     eax, 1
0x4D30FD: push    eax; signed int
0x4D30FE: add     ebp, 1
0x4D3101: push    ebp; signed int
0x4D3102: call    TESWorldSpace__GetCellAtCellCoord
0x4D3107: mov     esi, eax
0x4D3109: test    esi, esi
0x4D310B: jz      loc_4D31B8
0x4D3111: lea     ecx, [esi+28h]
0x4D3114: call    sub_420B50
0x4D3119: test    eax, eax
0x4D311B: jz      short loc_4D3130
0x4D311D: push    0
0x4D311F: push    0
0x4D3121: mov     ecx, eax
0x4D3123: call    sub_412220
0x4D3128: test    al, al
0x4D312A: jnz     loc_4D31B3
0x4D3130: test    byte ptr [esi+25h], 1
0x4D3134: jmp     short loc_4D31B1
0x4D3136: cmp     [esp+38h+var_14], 0
0x4D313B: jz      short loc_4D3154
0x4D313D: mov     ecx, [esp+38h+var_20]
0x4D3141: add     ecx, 1
0x4D3144: push    0
0x4D3146: push    ecx
0x4D3147: mov     ecx, [esp+40h+var_14]
0x4D314B: call    sub_412220
0x4D3150: test    al, al
0x4D3152: jnz     short loc_4D31B3
0x4D3154: mov     eax, [esp+38h+var_4]
0x4D3158: jmp     short loc_4D31A9
0x4D315A: test    bl, bl
0x4D315C: jz      short loc_4D3181
0x4D315E: test    edi, edi
0x4D3160: jz      short loc_4D3177
0x4D3162: mov     edx, [esp+38h+var_1C]
0x4D3166: add     edx, 1
0x4D3169: push    edx
0x4D316A: push    0
0x4D316C: mov     ecx, edi
0x4D316E: call    sub_412220
0x4D3173: test    al, al
0x4D3175: jnz     short loc_4D31B3
0x4D3177: test    esi, esi
0x4D3179: jz      short loc_4D31B8
0x4D317B: test    byte ptr [esi+25h], 1
0x4D317F: jmp     short loc_4D31B1
0x4D3181: cmp     [esp+38h+var_18], 0
0x4D3186: jz      short loc_4D31A5
0x4D3188: mov     eax, [esp+38h+var_1C]
0x4D318C: mov     ecx, [esp+38h+var_20]
0x4D3190: add     eax, 1
0x4D3193: add     ecx, 1
0x4D3196: push    eax
0x4D3197: push    ecx
0x4D3198: mov     ecx, [esp+40h+var_18]
0x4D319C: call    sub_412220
0x4D31A1: test    al, al
0x4D31A3: jnz     short loc_4D31B3
0x4D31A5: mov     eax, [esp+38h+var_10]
0x4D31A9: test    eax, eax
0x4D31AB: jz      short loc_4D31B8
0x4D31AD: test    byte ptr [eax+25h], 1
0x4D31B1: jz      short loc_4D31B8
0x4D31B3: add     [esp+38h+var_24], 1
0x4D31B8: pop     edi
0x4D31B9: pop     esi
0x4D31BA: pop     ebp
0x4D31BB: mov     eax, [esp+2Ch+var_24]
0x4D31BF: pop     ebx
0x4D31C0: add     esp, 28h
0x4D31C3: retn
