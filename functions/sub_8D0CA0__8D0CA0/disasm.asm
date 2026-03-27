0x8D0CA0: push    ebp
0x8D0CA1: mov     ebp, esp
0x8D0CA3: and     esp, 0FFFFFFF0h
0x8D0CA6: sub     esp, 114h
0x8D0CAC: push    ebx
0x8D0CAD: push    esi
0x8D0CAE: push    edi
0x8D0CAF: mov     edx, [ebp+arg_8]
0x8D0CB2: movaps  xmm1, xmmword ptr [edx+20h]
0x8D0CB6: movaps  xmm5, xmmword ptr [edx]
0x8D0CB9: mov     eax, [ebp+arg_10]
0x8D0CBC: movaps  xmm4, xmmword ptr [edx+10h]
0x8D0CC0: mov     ecx, [eax+0Ch]
0x8D0CC3: movaps  xmm2, xmm5
0x8D0CC6: subps   xmm2, xmm1
0x8D0CC9: movaps  xmm0, xmm1
0x8D0CCC: subps   xmm0, xmm4
0x8D0CCF: movaps  xmm6, xmm0
0x8D0CD2: shufps  xmm6, xmm0, 0D2h ; 'Ò'
0x8D0CD6: movaps  xmm3, xmm2
0x8D0CD9: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8D0CDD: mulps   xmm6, xmm3
0x8D0CE0: movaps  xmm7, xmm0
0x8D0CE3: shufps  xmm7, xmm0, 0C9h ; 'É'
0x8D0CE7: mov     [esp+120h+var_108], ecx
0x8D0CEB: movss   xmm1, [esp+120h+var_108]
0x8D0CF1: mov     ecx, [eax]
0x8D0CF3: movaps  xmm3, xmm2
0x8D0CF6: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8D0CFA: mulps   xmm7, xmm3
0x8D0CFD: subps   xmm7, xmm6
0x8D0D00: movaps  xmm3, xmm1
0x8D0D03: shufps  xmm3, xmm1, 0
0x8D0D07: movaps  xmm1, xmm3
0x8D0D0A: mov     [esp+120h+var_108], ecx
0x8D0D0E: movss   xmm3, [esp+120h+var_108]
0x8D0D14: mov     ecx, [eax+4]
0x8D0D17: movaps  xmm6, xmm3
0x8D0D1A: shufps  xmm6, xmm3, 0
0x8D0D1E: movaps  xmm3, xmm6
0x8D0D21: mulps   xmm3, xmm0
0x8D0D24: mov     [esp+120h+var_108], ecx
0x8D0D28: movss   xmm0, [esp+120h+var_108]
0x8D0D2E: mov     ecx, [eax+8]
0x8D0D31: movaps  xmm6, xmm0
0x8D0D34: shufps  xmm6, xmm0, 0
0x8D0D38: movaps  xmm0, xmm6
0x8D0D3B: mulps   xmm0, xmm2
0x8D0D3E: subps   xmm4, xmm5
0x8D0D41: mulps   xmm1, xmm7
0x8D0D44: mov     [esp+120h+var_108], ecx
0x8D0D48: movss   xmm2, [esp+120h+var_108]
0x8D0D4E: movaps  xmm6, xmm3
0x8D0D51: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x8D0D55: movaps  xmm7, xmm3
0x8D0D58: shufps  xmm7, xmm3, 0C9h ; 'É'
0x8D0D5C: movaps  xmm5, xmm2
0x8D0D5F: shufps  xmm5, xmm2, 0
0x8D0D63: movaps  xmm2, xmm5
0x8D0D66: mulps   xmm2, xmm4
0x8D0D69: movaps  xmm4, xmm1
0x8D0D6C: shufps  xmm4, xmm1, 0C9h ; 'É'
0x8D0D70: mulps   xmm6, xmm4
0x8D0D73: movaps  xmm5, xmm1
0x8D0D76: shufps  xmm5, xmm1, 0D2h ; 'Ò'
0x8D0D7A: movaps  xmm3, xmm0
0x8D0D7D: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8D0D81: mulps   xmm7, xmm5
0x8D0D84: subps   xmm7, xmm6
0x8D0D87: movaps  xmm6, xmm0
0x8D0D8A: shufps  xmm6, xmm0, 0C9h ; 'É'
0x8D0D8E: mulps   xmm3, xmm4
0x8D0D91: mulps   xmm6, xmm5
0x8D0D94: subps   xmm6, xmm3
0x8D0D97: movaps  xmm0, xmm2
0x8D0D9A: movaps  xmm3, xmm2
0x8D0D9D: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8D0DA1: shufps  xmm0, xmm2, 0D2h ; 'Ò'
0x8D0DA5: mulps   xmm0, xmm4
0x8D0DA8: mulps   xmm3, xmm5
0x8D0DAB: subps   xmm3, xmm0
0x8D0DAE: movaps  [esp+120h+var_D0], xmm1
0x8D0DB3: movaps  [esp+120h+var_A0], xmm7
0x8D0DBB: movaps  [esp+120h+var_90], xmm6
0x8D0DC3: movaps  [esp+120h+var_80], xmm3
0x8D0DCB: mov     ecx, dword ptr [esp+120h+var_A0+4]
0x8D0DD2: fld     dword ptr [esp+120h+var_90]
0x8D0DD9: mov     edi, [ebp+arg_0]
0x8D0DDC: fstp    dword ptr [esp+120h+var_A0+4]
0x8D0DE3: fld     dword ptr [esp+120h+var_80]
0x8D0DEA: movaps  xmm2, xmmword ptr [edi]
0x8D0DED: mov     dword ptr [esp+120h+var_90], ecx
0x8D0DF4: mov     ecx, dword ptr [esp+120h+var_A0+8]
0x8D0DFB: fstp    dword ptr [esp+120h+var_A0+8]
0x8D0E02: fld     dword ptr [esp+120h+var_80+4]
0x8D0E09: mov     dword ptr [esp+120h+var_80], ecx
0x8D0E10: mov     ecx, dword ptr [esp+120h+var_90+8]
0x8D0E17: fstp    dword ptr [esp+120h+var_90+8]
0x8D0E1E: fld     dword ptr [eax+10h]
0x8D0E21: mov     dword ptr [esp+120h+var_80+4], ecx
0x8D0E28: mov     ecx, dword ptr [esp+120h+var_D0]
0x8D0E2C: fmul    dword ptr [eax]
0x8D0E2E: mov     dword ptr [esp+120h+var_A0+0Ch], ecx
0x8D0E35: mov     ecx, dword ptr [esp+120h+var_D0+4]
0x8D0E39: xorps   xmm0, xmm0
0x8D0E3C: fchs
0x8D0E3E: movaps  [esp+120h+var_70], xmm0
0x8D0E46: fstp    dword ptr [esp+120h+var_70]
0x8D0E4D: movaps  xmm0, xmmword ptr [edx]
0x8D0E50: subps   xmm2, xmm0
0x8D0E53: mov     dword ptr [esp+120h+var_90+0Ch], ecx
0x8D0E5A: mov     ecx, dword ptr [esp+120h+var_D0+8]
0x8D0E5E: movaps  xmm4, [esp+120h+var_90]
0x8D0E66: movaps  [esp+120h+var_C0], xmm2
0x8D0E6B: movaps  xmm2, xmmword ptr [edi+10h]
0x8D0E6F: subps   xmm2, xmm0
0x8D0E72: mov     dword ptr [esp+120h+var_80+0Ch], ecx
0x8D0E79: movaps  xmm3, [esp+120h+var_80]
0x8D0E81: movaps  [esp+120h+var_B0], xmm2
0x8D0E86: movaps  xmm2, [esp+120h+var_70]
0x8D0E8E: lea     eax, [esp+120h+var_C0]
0x8D0E92: mov     ecx, 2
0x8D0E97: jmp     short loc_8D0EA0
0x8D0E99: align 10h
0x8D0EA0: movaps  xmm0, xmmword ptr [eax]
0x8D0EA3: movaps  xmm5, xmm0
0x8D0EA6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8D0EAA: movaps  xmm6, xmm3
0x8D0EAD: mulps   xmm6, xmm5
0x8D0EB0: movaps  xmm5, xmm0
0x8D0EB3: shufps  xmm5, xmm0, 55h ; 'U'
0x8D0EB7: movaps  xmm7, xmm4
0x8D0EBA: mulps   xmm7, xmm5
0x8D0EBD: movaps  xmm5, xmm0
0x8D0EC0: shufps  xmm5, xmm0, 0
0x8D0EC4: movaps  xmm0, [esp+120h+var_A0]
0x8D0ECC: mulps   xmm0, xmm5
0x8D0ECF: addps   xmm6, xmm2
0x8D0ED2: addps   xmm0, xmm7
0x8D0ED5: addps   xmm0, xmm6
0x8D0ED8: movaps  xmmword ptr [eax], xmm0
0x8D0EDB: add     eax, 10h
0x8D0EDE: dec     ecx
0x8D0EDF: jnz     short loc_8D0EA0
0x8D0EE1: fld     [ebp+arg_4]
0x8D0EE4: mov     esi, [ebp+arg_1C]
0x8D0EE7: fadd    [ebp+arg_C]
0x8D0EEA: movaps  xmm2, [esp+120h+var_B0]
0x8D0EEF: mov     eax, 7F7FFFFFh
0x8D0EF4: mov     [esi+1Ch], eax
0x8D0EF7: fst     [esp+120h+var_FC]
0x8D0EFB: mov     [esi+3Ch], eax
0x8D0EFE: fadd    [ebp+arg_14]
0x8D0F01: mov     [esi+5Ch], eax
0x8D0F04: fst     [esp+120h+var_108]
0x8D0F08: movss   xmm0, [esp+120h+var_108]
0x8D0F0E: shufps  xmm0, xmm0, 0
0x8D0F12: movaps  xmm3, xmm0
0x8D0F15: cmpltps xmm3, xmm2
0x8D0F19: movmskps eax, xmm3
0x8D0F1C: movaps  xmm3, [esp+120h+var_C0]
0x8D0F21: cmpltps xmm0, xmm3
0x8D0F25: movmskps ecx, xmm0
0x8D0F28: test    ecx, eax
0x8D0F2A: jnz     loc_8D127A
0x8D0F30: fchs
0x8D0F32: fld     dword ptr [esp+120h+var_C0+0Ch]
0x8D0F36: fcomp   st(1)
0x8D0F38: fnstsw  ax
0x8D0F3A: test    ah, 5
0x8D0F3D: jp      short loc_8D0F54
0x8D0F3F: fld     dword ptr [esp+120h+var_B0+0Ch]
0x8D0F43: fcomp   st(1)
0x8D0F45: fnstsw  ax
0x8D0F47: fstp    st
0x8D0F49: test    ah, 5
0x8D0F4C: jnp     loc_8D127C
0x8D0F52: jmp     short loc_8D0F56
0x8D0F54: fstp    st
0x8D0F56: movmskps ebx, xmm2
0x8D0F59: movmskps eax, xmm3
0x8D0F5C: mov     ecx, ebx
0x8D0F5E: xor     ecx, eax
0x8D0F60: test    cl, 8
0x8D0F63: mov     dword ptr [esp+120h+var_F0], eax
0x8D0F67: mov     dword ptr [esp+120h+var_F0+4], ebx
0x8D0F6B: jz      loc_8D1283
0x8D0F71: fld     dword ptr [esp+120h+var_C0+0Ch]
0x8D0F75: movaps  xmm5, xmmword ptr ds:0A6DFE0h
0x8D0F7C: fsub    dword ptr [esp+120h+var_B0+0Ch]
0x8D0F80: fdivr   dword ptr [esp+120h+var_C0+0Ch]
0x8D0F84: fstp    [esp+120h+var_108]
0x8D0F88: movss   xmm0, [esp+120h+var_108]
0x8D0F8E: shufps  xmm0, xmm0, 0
0x8D0F92: subps   xmm5, xmm0
0x8D0F95: movaps  xmm4, xmm0
0x8D0F98: mulps   xmm4, xmm2
0x8D0F9B: mulps   xmm5, xmm3
0x8D0F9E: addps   xmm5, xmm4
0x8D0FA1: movmskps ecx, xmm5
0x8D0FA4: and     ecx, 7
0x8D0FA7: cmp     cl, 7
0x8D0FAA: jnz     loc_8D1283
0x8D0FB0: lea     ecx, [esp+120h+var_C0+0Ch]
0x8D0FB4: mov     eax, edi
0x8D0FB6: mov     ebx, ecx
0x8D0FB8: xor     edx, edx
0x8D0FBA: sub     eax, ebx
0x8D0FBC: mov     dword ptr [esi+3Ch], 0FF7FFFFFh
0x8D0FC3: mov     [esp+120h+var_104], eax
0x8D0FC7: mov     ebx, dword ptr [esp+edx*4+120h+var_F0]
0x8D0FCB: mov     eax, ebx
0x8D0FCD: and     eax, 7
0x8D0FD0: cmp     al, 7
0x8D0FD2: jnz     short loc_8D1041
0x8D0FD4: fld     dword ptr [ecx]
0x8D0FD6: fabs
0x8D0FD8: fchs
0x8D0FDA: fsub    [esp+120h+var_FC]
0x8D0FDE: fcom    dword ptr [esi+3Ch]
0x8D0FE1: fnstsw  ax
0x8D0FE3: test    ah, 41h
0x8D0FE6: jnz     short loc_8D103F
0x8D0FE8: test    bl, 8
0x8D0FEB: fld     [ebp+arg_C]
0x8D0FEE: mov     eax, [esp+120h+var_104]
0x8D0FF2: jz      short loc_8D1006
0x8D0FF4: fsub    dword ptr [ecx]
0x8D0FF6: movaps  xmmword ptr [esi+30h], xmm1
0x8D0FFA: fstp    [esp+120h+var_108]
0x8D0FFE: movss   xmm0, [esp+120h+var_108]
0x8D1004: jmp     short loc_8D1025
0x8D1006: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8D100D: fchs
0x8D100F: fsub    dword ptr [ecx]
0x8D1011: movaps  xmm4, xmm1
0x8D1014: xorps   xmm4, xmm0
0x8D1017: movaps  xmmword ptr [esi+30h], xmm4
0x8D101B: fstp    [esp+120h+var_108]
0x8D101F: movss   xmm0, [esp+120h+var_108]
0x8D1025: movaps  xmm4, xmm0
0x8D1028: shufps  xmm4, xmm0, 0
0x8D102C: movaps  xmm0, xmmword ptr [eax+ecx]
0x8D1030: fstp    dword ptr [esi+3Ch]
0x8D1033: mulps   xmm4, xmm1
0x8D1036: addps   xmm0, xmm4
0x8D1039: movaps  xmmword ptr [esi+20h], xmm0
0x8D103D: jmp     short loc_8D1041
0x8D103F: fstp    st
0x8D1041: inc     edx
0x8D1042: add     ecx, 10h
0x8D1045: cmp     edx, 2
0x8D1048: jl      loc_8D0FC7
0x8D104E: subps   xmm2, xmm3
0x8D1051: movaps  [esp+120h+var_F0], xmm2
0x8D1056: fld     dword ptr [esp+120h+var_F0+0Ch]
0x8D105A: fmul    dword ptr [esp+120h+var_F0+0Ch]
0x8D105E: xor     ecx, ecx
0x8D1060: fld     dword ptr [esp+120h+var_F0+0Ch]
0x8D1064: fld     dword ptr [esp+ecx+120h+var_F0]
0x8D1068: fst     [esp+120h+var_100]
0x8D106C: fmul    [esp+120h+var_100]
0x8D1070: fadd    st, st(2)
0x8D1072: fdivr   dword ptr ds:0A2F948h
0x8D1078: fld     dword ptr [esp+120h+var_C0+0Ch]
0x8D107C: fmul    [esp+120h+var_100]
0x8D1080: fld     dword ptr [esp+120h+var_F0+0Ch]
0x8D1084: fmul    dword ptr [esp+ecx+120h+var_C0]
0x8D1088: fsubp   st(1), st
0x8D108A: fld     st
0x8D108C: fmul    st, st(1)
0x8D108E: fmul    st, st(2)
0x8D1090: fstp    [esp+120h+var_108]
0x8D1094: fstp    st
0x8D1096: fld     [esp+120h+var_FC]
0x8D109A: fadd    dword ptr [esi+3Ch]
0x8D109D: fld     st
0x8D109F: fmul    st, st(1)
0x8D10A1: fld     [esp+120h+var_108]
0x8D10A5: fcompp
0x8D10A7: fnstsw  ax
0x8D10A9: fstp    st
0x8D10AB: test    ah, 5
0x8D10AE: jp      loc_8D126A
0x8D10B4: fld     [esp+120h+var_100]
0x8D10B8: fmul    dword ptr [esp+ecx+120h+var_C0]
0x8D10BC: fld     dword ptr [esp+120h+var_F0+0Ch]
0x8D10C0: fmul    dword ptr [esp+120h+var_C0+0Ch]
0x8D10C4: faddp   st(1), st
0x8D10C6: fmul    st, st(1)
0x8D10C8: fchs
0x8D10CA: fstp    [esp+120h+var_104]
0x8D10CE: fstp    st
0x8D10D0: fld     [esp+120h+var_104]
0x8D10D4: fcomp   dword ptr ds:0A906F4h
0x8D10DA: fnstsw  ax
0x8D10DC: test    ah, 41h
0x8D10DF: jnz     loc_8D126C
0x8D10E5: fld     [esp+120h+var_104]
0x8D10E9: fcomp   dword ptr ds:0A99F00h
0x8D10EF: fnstsw  ax
0x8D10F1: test    ah, 5
0x8D10F4: jp      loc_8D126C
0x8D10FA: fld     dword ptr [esp+ecx+120h+var_A0]
0x8D1101: mov     dword ptr [esp+120h+var_D0+0Ch], 0
0x8D1109: fstp    dword ptr [esp+120h+var_D0]
0x8D110D: fld     dword ptr [esp+ecx+120h+var_90]
0x8D1114: fstp    dword ptr [esp+120h+var_D0+4]
0x8D1118: fld     dword ptr [esp+ecx+120h+var_80]
0x8D111F: fstp    dword ptr [esp+120h+var_D0+8]
0x8D1123: fld     dword ptr [esp+120h+var_F0+0Ch]
0x8D1127: fcomp   dword ptr ds:0A2FAA8h
0x8D112D: fnstsw  ax
0x8D112F: test    ah, 5
0x8D1132: jp      short loc_8D1146
0x8D1134: fstp    st
0x8D1136: fld     dword ptr [esp+120h+var_F0+0Ch]
0x8D113A: fchs
0x8D113C: fld     [esp+120h+var_100]
0x8D1140: fchs
0x8D1142: fstp    [esp+120h+var_100]
0x8D1146: fstp    [esp+120h+var_F4]
0x8D114A: movaps  xmm2, [esp+120h+var_D0]
0x8D114F: movss   xmm0, [esp+120h+var_F4]
0x8D1155: fld     [esp+120h+var_100]
0x8D1159: fchs
0x8D115B: movaps  xmm3, xmm0
0x8D115E: fstp    [esp+120h+var_F4]
0x8D1162: shufps  xmm3, xmm0, 0
0x8D1166: fld     [esp+120h+var_108]
0x8D116A: movaps  xmm0, xmm3
0x8D116D: fsqrt
0x8D116F: mulps   xmm0, xmm2
0x8D1172: movss   xmm2, [esp+120h+var_F4]
0x8D1178: mov     edx, [esp+120h+var_104]
0x8D117C: movaps  [esp+120h+var_D0], xmm0
0x8D1181: movaps  xmm3, xmm2
0x8D1184: shufps  xmm3, xmm2, 0
0x8D1188: mulps   xmm3, xmm1
0x8D118B: addps   xmm0, xmm3
0x8D118E: movaps  xmmword ptr [esi+30h], xmm0
0x8D1192: movaps  xmm2, xmmword ptr [esi+30h]
0x8D1196: movaps  xmm0, xmm2
0x8D1199: mulps   xmm0, xmm2
0x8D119C: movaps  xmm3, xmm0
0x8D119F: shufps  xmm3, xmm0, 55h ; 'U'
0x8D11A3: addss   xmm3, xmm0
0x8D11A7: movaps  xmm4, xmm0
0x8D11AA: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8D11AE: movaps  xmm0, xmm4
0x8D11B1: addss   xmm0, xmm3
0x8D11B5: movaps  [esp+120h+var_60], xmm0
0x8D11BD: rsqrtss xmm3, xmm0
0x8D11C1: movss   dword ptr [esp+120h+var_60], xmm3
0x8D11CA: movaps  xmm3, [esp+120h+var_60]
0x8D11D2: mulss   xmm0, xmm3
0x8D11D6: mulss   xmm0, xmm3
0x8D11DA: mov     [esp+120h+var_D8], 40400000h
0x8D11E2: movss   xmm4, [esp+120h+var_D8]
0x8D11E8: subss   xmm4, xmm0
0x8D11EC: mov     [esp+120h+var_D4], 3F000000h
0x8D11F4: movss   xmm0, [esp+120h+var_D4]
0x8D11FA: mulss   xmm0, xmm3
0x8D11FE: mulss   xmm0, xmm4
0x8D1202: movaps  xmm3, xmm0
0x8D1205: shufps  xmm3, xmm0, 0
0x8D1209: mulps   xmm3, xmm2
0x8D120C: movaps  xmmword ptr [esi+30h], xmm3
0x8D1210: movaps  xmm3, xmmword ptr [esi+30h]
0x8D1214: movaps  xmm5, xmmword ptr ds:0A6DFE0h
0x8D121B: mov     [esp+120h+var_F8], edx
0x8D121F: movss   xmm0, [esp+120h+var_F8]
0x8D1225: shufps  xmm0, xmm0, 0
0x8D1229: subps   xmm5, xmm0
0x8D122C: fchs
0x8D122E: fld     [ebp+arg_C]
0x8D1231: fsub    st, st(1)
0x8D1233: fstp    [esp+120h+var_F4]
0x8D1237: movss   xmm2, [esp+120h+var_F4]
0x8D123D: fsub    [esp+120h+var_FC]
0x8D1241: movaps  xmm4, xmm2
0x8D1244: shufps  xmm4, xmm2, 0
0x8D1248: movaps  xmm2, xmmword ptr [edi+10h]
0x8D124C: mulps   xmm4, xmm3
0x8D124F: movaps  xmm3, xmm0
0x8D1252: mulps   xmm3, xmm2
0x8D1255: movaps  xmm2, xmmword ptr [edi]
0x8D1258: fstp    dword ptr [esi+3Ch]
0x8D125B: mulps   xmm5, xmm2
0x8D125E: addps   xmm5, xmm3
0x8D1261: addps   xmm5, xmm4
0x8D1264: movaps  xmmword ptr [esi+20h], xmm5
0x8D1268: jmp     short loc_8D126E
0x8D126A: fstp    st
0x8D126C: fstp    st
0x8D126E: add     ecx, 4
0x8D1271: cmp     ecx, 0Ch
0x8D1274: jl      loc_8D1060
0x8D127A: fstp    st
0x8D127C: pop     edi
0x8D127D: pop     esi
0x8D127E: pop     ebx
0x8D127F: mov     esp, ebp
0x8D1281: pop     ebp
0x8D1282: retn
0x8D1283: movaps  xmm0, xmmword ptr [edi]
0x8D1286: movaps  xmm1, xmmword ptr [edi+10h]
0x8D128A: or      ebx, eax
0x8D128C: mov     eax, ebx
0x8D128E: xor     ecx, ecx
0x8D1290: and     eax, 7
0x8D1293: cmp     al, 7
0x8D1295: subps   xmm1, xmm0
0x8D1298: mov     [esp+120h+var_100], ecx
0x8D129C: movaps  [esp+120h+var_60], xmm1
0x8D12A4: mov     [esp+120h+var_109], cl
0x8D12A8: jz      loc_8D1345
0x8D12AE: mov     eax, [ebp+arg_18]
0x8D12B1: test    eax, eax
0x8D12B3: jz      loc_8D1334
0x8D12B9: mov     ecx, [ebp+arg_14]
0x8D12BC: mov     eax, ecx
0x8D12BE: mov     [esi+1Ch], ecx
0x8D12C1: mov     [esi+3Ch], eax
0x8D12C4: mov     [esi+5Ch], ecx
0x8D12C7: mov     [esp+120h+var_104], 1
0x8D12CF: xor     edi, edi
0x8D12D1: test    [esp+120h+var_104], ebx
0x8D12D5: jnz     short loc_8D131D
0x8D12D7: movsx   eax, ds:byte_A99F0E[edi]
0x8D12DE: movsx   ecx, ds:byte_A99F0C[edi]
0x8D12E5: shl     eax, 4
0x8D12E8: movaps  xmm0, xmmword ptr [eax+edx]
0x8D12EC: shl     ecx, 4
0x8D12EF: movaps  [esp+120h+var_C0], xmm0
0x8D12F4: movaps  xmm0, xmmword ptr [ecx+edx]
0x8D12F8: mov     edx, [ebp+arg_C]
0x8D12FB: mov     ecx, [ebp+arg_4]
0x8D12FE: push    esi; int
0x8D12FF: push    edx; float
0x8D1300: mov     edx, [ebp+arg_0]
0x8D1303: lea     eax, [esp+128h+var_C0]
0x8D1307: push    eax; int
0x8D1308: push    ecx; float
0x8D1309: push    edx; int
0x8D130A: movaps  [esp+134h+var_B0], xmm0
0x8D1312: call    sub_8D0290
0x8D1317: mov     edx, [ebp+arg_8]
0x8D131A: add     esp, 14h
0x8D131D: mov     eax, [esp+120h+var_104]
0x8D1321: shl     eax, 1
0x8D1323: inc     edi
0x8D1324: cmp     edi, 3
0x8D1327: mov     [esp+120h+var_104], eax
0x8D132B: jl      short loc_8D12D1
0x8D132D: pop     edi
0x8D132E: pop     esi
0x8D132F: pop     ebx
0x8D1330: mov     esp, ebp
0x8D1332: pop     ebp
0x8D1333: retn
0x8D1334: mov     [esp+120h+var_109], 1
0x8D1339: mov     ebx, 1
0x8D133E: xor     edi, edi
0x8D1340: jmp     loc_8D1410
0x8D1345: cmp     ecx, 2
0x8D1348: jge     loc_8D127C
0x8D134E: mov     eax, dword ptr [esp+ecx*4+120h+var_F0]
0x8D1352: mov     ebx, eax
0x8D1354: and     ebx, 7
0x8D1357: cmp     bl, 7
0x8D135A: jnz     short loc_8D1339
0x8D135C: fld     [ebp+arg_C]
0x8D135F: test    al, 8
0x8D1361: mov     eax, ecx
0x8D1363: jz      short loc_8D13BD
0x8D1365: fchs
0x8D1367: shl     eax, 4
0x8D136A: fsub    dword ptr [esp+eax+120h+var_C0+0Ch]
0x8D136E: movaps  xmm2, xmmword ptr [eax+edi]
0x8D1372: lea     ecx, [esp+eax+120h+var_C0+0Ch]
0x8D1376: add     esi, 20h ; ' '
0x8D1379: fstp    [esp+120h+var_F8]
0x8D137D: movss   xmm0, [esp+120h+var_F8]
0x8D1383: fld     dword ptr [ecx]
0x8D1385: mov     ecx, [esp+120h+var_100]
0x8D1389: fchs
0x8D138B: fsub    [esp+120h+var_FC]
0x8D138F: movaps  xmm1, xmm0
0x8D1392: shufps  xmm1, xmm0, 0
0x8D1396: movaps  xmm0, [esp+120h+var_D0]
0x8D139B: mulps   xmm1, xmm0
0x8D139E: addps   xmm2, xmm1
0x8D13A1: movaps  xmmword ptr [esi-20h], xmm2
0x8D13A5: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8D13AC: xorps   xmm0, xmm1
0x8D13AF: movaps  xmmword ptr [esi-10h], xmm0
0x8D13B3: fstp    dword ptr [esi-4]
0x8D13B6: inc     ecx
0x8D13B7: mov     [esp+120h+var_100], ecx
0x8D13BB: jmp     short loc_8D1345
0x8D13BD: shl     eax, 4
0x8D13C0: fsub    dword ptr [esp+eax+120h+var_C0+0Ch]
0x8D13C4: movaps  xmm2, xmmword ptr [eax+edi]
0x8D13C8: lea     ecx, [esp+eax+120h+var_C0+0Ch]
0x8D13CC: add     esi, 20h ; ' '
0x8D13CF: fstp    [esp+120h+var_F8]
0x8D13D3: movss   xmm0, [esp+120h+var_F8]
0x8D13D9: fld     dword ptr [ecx]
0x8D13DB: fsub    [esp+120h+var_FC]
0x8D13DF: mov     ecx, [esp+120h+var_100]
0x8D13E3: movaps  xmm1, xmm0
0x8D13E6: shufps  xmm1, xmm0, 0
0x8D13EA: movaps  xmm0, [esp+120h+var_D0]
0x8D13EF: mulps   xmm1, xmm0
0x8D13F2: addps   xmm2, xmm1
0x8D13F5: movaps  xmmword ptr [esi-20h], xmm2
0x8D13F9: movaps  xmmword ptr [esi-10h], xmm0
0x8D13FD: fstp    dword ptr [esi-4]
0x8D1400: inc     ecx
0x8D1401: mov     [esp+120h+var_100], ecx
0x8D1405: jmp     loc_8D1345
0x8D140A: mov     ecx, [esp+120h+var_100]
0x8D140E: mov     edi, edi
0x8D1410: mov     al, [esp+120h+var_109]
0x8D1414: test    al, al
0x8D1416: jnz     short loc_8D141E
0x8D1418: test    dword ptr [esp+ecx*4+120h+var_F0], ebx
0x8D141C: jmp     short loc_8D142C
0x8D141E: mov     ecx, dword ptr [esp+120h+var_F0+4]
0x8D1422: mov     eax, ebx
0x8D1424: and     eax, ecx
0x8D1426: mov     ecx, dword ptr [esp+120h+var_F0]
0x8D142A: test    ecx, eax
0x8D142C: jnz     loc_8D16CA
0x8D1432: movsx   eax, ds:byte_A99F0E[edi]
0x8D1439: movsx   ecx, ds:byte_A99F0C[edi]
0x8D1440: shl     eax, 4
0x8D1443: movaps  xmm0, xmmword ptr [eax+edx]
0x8D1447: add     eax, edx
0x8D1449: shl     ecx, 4
0x8D144C: movaps  xmm1, xmmword ptr [ecx+edx]
0x8D1450: lea     edx, [esp+120h+var_40]
0x8D1457: push    edx
0x8D1458: lea     ecx, [esp+124h+var_50]
0x8D145F: push    ecx
0x8D1460: push    eax
0x8D1461: mov     eax, [ebp+arg_0]
0x8D1464: lea     edx, [esp+12Ch+var_60]
0x8D146B: push    edx
0x8D146C: subps   xmm1, xmm0
0x8D146F: push    eax
0x8D1470: movaps  [esp+134h+var_50], xmm1
0x8D1478: call    sub_8D1A30
0x8D147D: fld     [esp+134h+var_FC]
0x8D1481: fadd    dword ptr [esi+1Ch]
0x8D1484: mov     edx, eax
0x8D1486: add     esp, 14h
0x8D1489: fld     st
0x8D148B: fmul    st, st(1)
0x8D148D: fld     [esp+120h+var_20]
0x8D1494: fcompp
0x8D1496: fnstsw  ax
0x8D1498: fstp    st
0x8D149A: test    ah, 5
0x8D149D: jp      loc_8D16C7
0x8D14A3: mov     ecx, [esp+120h+var_100]
0x8D14A7: mov     eax, 1
0x8D14AC: shl     eax, cl
0x8D14AE: test    edx, eax
0x8D14B0: jz      short loc_8D14C6
0x8D14B2: mov     al, [esp+120h+var_109]
0x8D14B6: test    al, al
0x8D14B8: jz      loc_8D16C7
0x8D14BE: mov     [esp+120h+var_100], 1
0x8D14C6: test    edx, edx
0x8D14C8: jnz     short loc_8D150A
0x8D14CA: movaps  xmm0, [esp+120h+var_50]
0x8D14D2: movaps  xmm1, xmm0
0x8D14D5: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8D14D9: movaps  xmm2, xmm1
0x8D14DC: movaps  xmm1, [esp+120h+var_60]
0x8D14E4: movaps  xmm3, xmm1
0x8D14E7: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8D14EB: mulps   xmm3, xmm2
0x8D14EE: movaps  xmm2, xmm0
0x8D14F1: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8D14F5: movaps  xmm0, xmm1
0x8D14F8: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8D14FC: movaps  xmm1, xmm0
0x8D14FF: mulps   xmm1, xmm2
0x8D1502: subps   xmm1, xmm3
0x8D1505: jmp     loc_8D15CF
0x8D150A: fld     [esp+120h+var_20]
0x8D1511: fcomp   dword ptr ds:0A97F48h
0x8D1517: fnstsw  ax
0x8D1519: test    ah, 41h
0x8D151C: jp      loc_8D15C7
0x8D1522: movaps  xmm0, [esp+120h+var_50]
0x8D152A: fld     dword ptr [esp+edi*4+120h+var_A0]
0x8D1531: movaps  xmm1, xmm0
0x8D1534: fstp    dword ptr [esp+120h+var_30]
0x8D153B: fld     dword ptr [esp+edi*4+120h+var_90]
0x8D1542: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8D1546: movaps  xmm2, xmm1
0x8D1549: fstp    dword ptr [esp+120h+var_30+4]
0x8D1550: movaps  xmm1, [esp+120h+var_60]
0x8D1558: fld     dword ptr [esp+edi*4+120h+var_80]
0x8D155F: movaps  xmm3, xmm1
0x8D1562: fstp    dword ptr [esp+120h+var_30+8]
0x8D1569: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x8D156D: mulps   xmm3, xmm2
0x8D1570: movaps  xmm2, xmm0
0x8D1573: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8D1577: movaps  xmm0, xmm1
0x8D157A: shufps  xmm0, xmm1, 0C9h ; 'É'
0x8D157E: movaps  xmm1, xmm0
0x8D1581: mulps   xmm1, xmm2
0x8D1584: subps   xmm1, xmm3
0x8D1587: movaps  xmm0, xmm1
0x8D158A: mulps   xmm0, xmm1
0x8D158D: movaps  xmm2, xmm0
0x8D1590: shufps  xmm2, xmm0, 55h ; 'U'
0x8D1594: movaps  xmm3, xmm0
0x8D1597: addss   xmm2, xmm0
0x8D159B: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D159F: lea     ecx, [esp+120h+var_D4]
0x8D15A3: addss   xmm3, xmm2
0x8D15A7: movss   dword ptr [ecx], xmm3
0x8D15AB: fld     [esp+120h+var_D4]
0x8D15AF: fcomp   dword ptr ds:0A97F48h
0x8D15B5: mov     dword ptr [esp+120h+var_30+0Ch], 0
0x8D15C0: fnstsw  ax
0x8D15C2: test    ah, 41h
0x8D15C5: jp      short loc_8D15CF
0x8D15C7: movaps  xmm1, [esp+120h+var_30]
0x8D15CF: movaps  xmm0, xmm1
0x8D15D2: mulps   xmm0, xmm1
0x8D15D5: movaps  xmm2, xmm0
0x8D15D8: shufps  xmm2, xmm0, 55h ; 'U'
0x8D15DC: addss   xmm2, xmm0
0x8D15E0: movaps  xmm3, xmm0
0x8D15E3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D15E7: movaps  xmm0, xmm3
0x8D15EA: addss   xmm0, xmm2
0x8D15EE: movaps  [esp+120h+var_10], xmm0
0x8D15F6: rsqrtss xmm2, xmm0
0x8D15FA: movss   dword ptr [esp+120h+var_10], xmm2
0x8D1603: movaps  xmm2, [esp+120h+var_10]
0x8D160B: mulss   xmm0, xmm2
0x8D160F: mulss   xmm0, xmm2
0x8D1613: mov     [esp+120h+var_D8], 40400000h
0x8D161B: movss   xmm3, [esp+120h+var_D8]
0x8D1621: subss   xmm3, xmm0
0x8D1625: mov     [esp+120h+var_F4], 3F000000h
0x8D162D: movss   xmm0, [esp+120h+var_F4]
0x8D1633: mulss   xmm0, xmm2
0x8D1637: mulss   xmm0, xmm3
0x8D163B: movaps  xmm2, xmm0
0x8D163E: shufps  xmm2, xmm0, 0
0x8D1642: mulps   xmm2, xmm1
0x8D1645: movaps  xmm0, xmm2
0x8D1648: mulps   xmm0, [esp+120h+var_30]
0x8D1650: movaps  xmm1, xmm0
0x8D1653: shufps  xmm1, xmm0, 55h ; 'U'
0x8D1657: movaps  xmm3, xmm0
0x8D165A: addss   xmm1, xmm0
0x8D165E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8D1662: lea     edx, [esp+120h+var_104]
0x8D1666: addss   xmm3, xmm1
0x8D166A: movss   dword ptr [edx], xmm3
0x8D166E: fld     [esp+120h+var_104]
0x8D1672: fld     [esp+120h+var_104]
0x8D1676: fcomp   dword ptr ds:0A2FAA8h
0x8D167C: fnstsw  ax
0x8D167E: test    ah, 5
0x8D1681: jp      short loc_8D1695
0x8D1683: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8D168A: fstp    st
0x8D168C: fld     [esp+120h+var_104]
0x8D1690: xorps   xmm2, xmm0
0x8D1693: fchs
0x8D1695: fld     [ebp+arg_C]
0x8D1698: movaps  xmmword ptr [esi+10h], xmm2
0x8D169C: fsub    st, st(1)
0x8D169E: fstp    [esp+120h+var_F8]
0x8D16A2: movss   xmm0, [esp+120h+var_F8]
0x8D16A8: fsub    [esp+120h+var_FC]
0x8D16AC: movaps  xmm1, xmm0
0x8D16AF: shufps  xmm1, xmm0, 0
0x8D16B3: movaps  xmm0, [esp+120h+var_40]
0x8D16BB: mulps   xmm1, xmm2
0x8D16BE: addps   xmm0, xmm1
0x8D16C1: movaps  xmmword ptr [esi], xmm0
0x8D16C4: fstp    dword ptr [esi+1Ch]
0x8D16C7: mov     edx, [ebp+arg_8]
0x8D16CA: shl     ebx, 1
0x8D16CC: inc     edi
0x8D16CD: cmp     edi, 3
0x8D16D0: jl      loc_8D140A
0x8D16D6: mov     al, [esp+120h+var_109]
0x8D16DA: test    al, al
0x8D16DC: jnz     loc_8D127C
0x8D16E2: mov     ecx, [esp+120h+var_100]
0x8D16E6: mov     edi, [ebp+arg_0]
0x8D16E9: add     esi, 20h ; ' '
0x8D16EC: inc     ecx
0x8D16ED: mov     [esp+120h+var_100], ecx
0x8D16F1: jmp     loc_8D1345
