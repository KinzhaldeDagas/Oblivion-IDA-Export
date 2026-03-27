0x7E2D90: push    0FFFFFFFFh
0x7E2D92: push    offset ??0ParticleShader@@QAE@XZ_SEH
0x7E2D97: mov     eax, large fs:0
0x7E2D9D: push    eax
0x7E2D9E: sub     esp, 14h
0x7E2DA1: push    ebx
0x7E2DA2: push    ebp
0x7E2DA3: push    esi
0x7E2DA4: push    edi
0x7E2DA5: mov     eax, ds:0B30AACh
0x7E2DAA: xor     eax, esp
0x7E2DAC: push    eax
0x7E2DAD: lea     eax, [esp+34h+var_C]
0x7E2DB1: mov     large fs:0, eax
0x7E2DB7: mov     esi, ecx
0x7E2DB9: mov     [esp+34h+var_20], esi
0x7E2DBD: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7E2DC2: xor     ebp, ebp
0x7E2DC4: mov     dword ptr [esi], offset ??_7ParticleShader@@6B@; const ParticleShader::`vftable'
0x7E2DCA: mov     [esp+34h+var_4], ebp
0x7E2DCE: mov     [esi+84h], ebp
0x7E2DD4: mov     [esi+88h], ebp
0x7E2DDA: mov     [esi+8Ch], ebp
0x7E2DE0: fldz
0x7E2DE2: fst     dword ptr [esi+118h]
0x7E2DE8: mov     byte ptr [esp+34h+var_4], 3
0x7E2DED: fst     dword ptr [esi+11Ch]
0x7E2DF3: fst     dword ptr [esi+120h]
0x7E2DF9: fst     dword ptr [esi+124h]
0x7E2DFF: fst     dword ptr [esi+128h]
0x7E2E05: fst     dword ptr [esi+12Ch]
0x7E2E0B: fst     dword ptr [esi+130h]
0x7E2E11: fst     dword ptr [esi+134h]
0x7E2E17: fst     dword ptr [esi+138h]
0x7E2E1D: fst     dword ptr [esi+13Ch]
0x7E2E23: fst     dword ptr [esi+140h]
0x7E2E29: fst     dword ptr [esi+144h]
0x7E2E2F: mov     byte ptr [esi+20h], 1
0x7E2E33: mov     dword ptr [esi+7Ch], 17Eh
0x7E2E3A: mov     ecx, [esi+84h]; this
0x7E2E40: cmp     ecx, ebp
0x7E2E42: jz      short loc_7E2E59
0x7E2E44: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7E2E48: jnz     short loc_7E2E53
0x7E2E4A: fstp    st
0x7E2E4C: call    sub_7604D0
0x7E2E51: fldz
0x7E2E53: mov     [esi+84h], ebp
0x7E2E59: mov     edi, [esi+24h]
0x7E2E5C: mov     ebx, [esp+34h+arg_0]
0x7E2E60: cmp     edi, ebx
0x7E2E62: jz      short loc_7E2E9D
0x7E2E64: cmp     edi, ebp
0x7E2E66: jz      short loc_7E2E88
0x7E2E68: lea     eax, [edi+4]
0x7E2E6B: fstp    st
0x7E2E6D: push    eax; lpAddend
0x7E2E6E: call    dword ptr ds:0A2807Ch
0x7E2E74: test    eax, eax
0x7E2E76: jnz     short loc_7E2E86
0x7E2E78: cmp     edi, ebp
0x7E2E7A: jz      short loc_7E2E86
0x7E2E7C: mov     edx, [edi]
0x7E2E7E: mov     eax, [edx]
0x7E2E80: push    1
0x7E2E82: mov     ecx, edi
0x7E2E84: call    eax
0x7E2E86: fldz
0x7E2E88: cmp     ebx, ebp
0x7E2E8A: mov     [esi+24h], ebx
0x7E2E8D: jz      short loc_7E2E9D
0x7E2E8F: add     ebx, 4
0x7E2E92: fstp    st
0x7E2E94: push    ebx; lpAddend
0x7E2E95: call    dword ptr ds:0A28078h
0x7E2E9B: fldz
0x7E2E9D: mov     edi, [esi+88h]
0x7E2EA3: cmp     edi, ebp
0x7E2EA5: jz      short loc_7E2ECD
0x7E2EA7: lea     ecx, [edi+4]
0x7E2EAA: fstp    st
0x7E2EAC: push    ecx; lpAddend
0x7E2EAD: call    dword ptr ds:0A2807Ch
0x7E2EB3: test    eax, eax
0x7E2EB5: jnz     short loc_7E2EC5
0x7E2EB7: cmp     edi, ebp
0x7E2EB9: jz      short loc_7E2EC5
0x7E2EBB: mov     edx, [edi]
0x7E2EBD: mov     eax, [edx]
0x7E2EBF: push    1
0x7E2EC1: mov     ecx, edi
0x7E2EC3: call    eax
0x7E2EC5: fldz
0x7E2EC7: mov     [esi+88h], ebp
0x7E2ECD: mov     edi, [esi+8Ch]
0x7E2ED3: cmp     edi, ebp
0x7E2ED5: jz      short loc_7E2EFD
0x7E2ED7: lea     ecx, [edi+4]
0x7E2EDA: fstp    st
0x7E2EDC: push    ecx; lpAddend
0x7E2EDD: call    dword ptr ds:0A2807Ch
0x7E2EE3: test    eax, eax
0x7E2EE5: jnz     short loc_7E2EF5
0x7E2EE7: cmp     edi, ebp
0x7E2EE9: jz      short loc_7E2EF5
0x7E2EEB: mov     edx, [edi]
0x7E2EED: mov     eax, [edx]
0x7E2EEF: push    1
0x7E2EF1: mov     ecx, edi
0x7E2EF3: call    eax
0x7E2EF5: fldz
0x7E2EF7: mov     [esi+8Ch], ebp
0x7E2EFD: fst     dword ptr [esi+0B0h]
0x7E2F03: fst     [esp+34h+var_1C]
0x7E2F07: mov     ecx, [esp+34h+var_1C]
0x7E2F0B: mov     [esi+0F4h], ecx
0x7E2F11: fst     [esp+34h+var_18]
0x7E2F15: mov     edx, [esp+34h+var_18]
0x7E2F19: fst     [esp+34h+var_14]
0x7E2F1D: mov     eax, [esp+34h+var_14]
0x7E2F21: fst     [esp+34h+var_1C]
0x7E2F25: mov     ecx, [esp+34h+var_1C]
0x7E2F29: fst     [esp+34h+var_18]
0x7E2F2D: mov     [esi+0F8h], edx
0x7E2F33: fst     [esp+34h+var_14]
0x7E2F37: mov     edx, [esp+34h+var_18]
0x7E2F3B: fst     [esp+34h+var_1C]
0x7E2F3F: mov     [esi+0FCh], eax
0x7E2F45: fst     [esp+34h+var_18]
0x7E2F49: mov     eax, [esp+34h+var_14]
0x7E2F4D: fst     [esp+34h+var_14]
0x7E2F51: mov     [esi+100h], ecx
0x7E2F57: mov     ecx, [esp+34h+var_1C]
0x7E2F5B: fst     [esp+34h+var_1C]
0x7E2F5F: mov     [esi+104h], edx
0x7E2F65: mov     edx, [esp+34h+var_18]
0x7E2F69: fst     [esp+34h+var_18]
0x7E2F6D: mov     [esi+108h], eax
0x7E2F73: mov     eax, [esp+34h+var_14]
0x7E2F77: fst     [esp+34h+var_14]
0x7E2F7B: mov     [esi+10Ch], ecx
0x7E2F81: fst     [esp+34h+var_10]
0x7E2F85: mov     ecx, [esp+34h+var_1C]
0x7E2F89: fst     [esp+34h+var_1C]
0x7E2F8D: mov     [esi+110h], edx
0x7E2F93: mov     edx, [esp+34h+var_18]
0x7E2F97: fst     [esp+34h+var_18]
0x7E2F9B: mov     [esi+118h], ecx
0x7E2FA1: mov     ecx, [esp+34h+var_10]
0x7E2FA5: mov     [esi+114h], eax
0x7E2FAB: mov     eax, [esp+34h+var_14]
0x7E2FAF: fst     [esp+34h+var_14]
0x7E2FB3: mov     [esi+11Ch], edx
0x7E2FB9: fst     [esp+34h+var_10]
0x7E2FBD: mov     edx, [esp+34h+var_1C]
0x7E2FC1: fst     [esp+34h+var_1C]
0x7E2FC5: mov     [esi+120h], eax
0x7E2FCB: mov     eax, [esp+34h+var_18]
0x7E2FCF: fst     [esp+34h+var_18]
0x7E2FD3: mov     [esi+128h], edx
0x7E2FD9: mov     edx, [esp+34h+var_10]
0x7E2FDD: mov     [esi+124h], ecx
0x7E2FE3: mov     ecx, [esp+34h+var_14]
0x7E2FE7: fst     [esp+34h+var_14]
0x7E2FEB: mov     [esi+12Ch], eax
0x7E2FF1: fstp    [esp+34h+var_10]
0x7E2FF5: mov     eax, [esp+34h+var_1C]
0x7E2FF9: mov     [esi+130h], ecx
0x7E2FFF: mov     ecx, [esp+34h+var_18]
0x7E3003: mov     [esi+138h], eax
0x7E3009: mov     eax, [esp+34h+var_10]
0x7E300D: mov     [esi+134h], edx
0x7E3013: mov     edx, [esp+34h+var_14]
0x7E3017: mov     [esi+13Ch], ecx
0x7E301D: mov     [esi+140h], edx
0x7E3023: mov     [esi+144h], eax
0x7E3029: mov     edi, ds:0B4600Ch
0x7E302F: cmp     edi, ebp
0x7E3031: jnz     short loc_7E3050
0x7E3033: xor     ecx, ecx
0x7E3035: cmp     dword ptr ds:0B42F48h, 2
0x7E303C: setl    cl
0x7E303F: sub     ecx, 1
0x7E3042: and     ecx, 50h
0x7E3045: add     ecx, 28h ; '('
0x7E3048: mov     edi, ecx
0x7E304A: mov     ds:0B4600Ch, edi
0x7E3050: xor     ecx, ecx
0x7E3052: mov     eax, edi
0x7E3054: mov     edx, 20h ; ' '
0x7E3059: mul     edx
0x7E305B: seto    cl
0x7E305E: neg     ecx
0x7E3060: or      ecx, eax
0x7E3062: push    ecx; Size
0x7E3063: call    FormHeapAlloc
0x7E3068: shl     edi, 5
0x7E306B: push    edi
0x7E306C: push    ebp
0x7E306D: push    eax
0x7E306E: mov     [esi+80h], eax
0x7E3074: call    __memset
0x7E3079: push    40h ; '@'
0x7E307B: lea     eax, [esi+0B4h]
0x7E3081: push    ebp
0x7E3082: push    eax
0x7E3083: call    __memset
0x7E3088: add     esp, 1Ch
0x7E308B: mov     eax, esi
0x7E308D: mov     ecx, dword ptr [esp+34h+var_C]
0x7E3091: mov     large fs:0, ecx
0x7E3098: pop     ecx
0x7E3099: pop     edi
0x7E309A: pop     esi
0x7E309B: pop     ebp
0x7E309C: pop     ebx
0x7E309D: add     esp, 20h
0x7E30A0: retn    4
