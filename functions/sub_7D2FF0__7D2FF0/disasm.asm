0x7D2FF0: sub     esp, 34h
0x7D2FF3: mov     eax, [esp+34h+arg_0]
0x7D2FF7: mov     edx, [eax+8Ch]
0x7D2FFD: push    esi
0x7D2FFE: mov     esi, ecx
0x7D3000: cmp     byte ptr [esi+0FCh], 0
0x7D3007: mov     ecx, [eax+88h]
0x7D300D: mov     eax, [eax+90h]
0x7D3013: mov     [esp+38h+var_30], ecx
0x7D3017: mov     [esp+38h+var_2C], edx
0x7D301B: mov     [esp+38h+var_28], eax
0x7D301F: mov     eax, [esi+100h]
0x7D3025: mov     ecx, [eax+88h]
0x7D302B: fld     dword ptr [eax+0F8h]
0x7D3031: mov     edx, [eax+8Ch]
0x7D3037: fstp    [esp+38h+var_34]
0x7D303B: fld1
0x7D303D: mov     [esp+38h+var_24], ecx
0x7D3041: mov     ecx, [eax+90h]
0x7D3047: mov     [esp+38h+var_20], edx
0x7D304B: mov     edx, [eax+0ECh]
0x7D3051: mov     [esp+38h+var_1C], ecx
0x7D3055: mov     ecx, [eax+0F0h]
0x7D305B: mov     [esp+38h+var_C], edx
0x7D305F: mov     edx, [eax+0F4h]
0x7D3065: fstp    dword ptr [esi+0D0h]
0x7D306B: mov     [esp+38h+var_8], ecx
0x7D306F: mov     [esp+38h+var_4], edx
0x7D3073: jz      loc_7D313F
0x7D3079: fld     [esp+38h+var_30]
0x7D307D: fsub    [esp+38h+var_24]
0x7D3081: fstp    [esp+38h+var_18]
0x7D3085: fld     [esp+38h+var_2C]
0x7D3089: fsub    [esp+38h+var_20]
0x7D308D: fstp    [esp+38h+var_14]
0x7D3091: fld     [esp+38h+var_28]
0x7D3095: fsub    [esp+38h+var_1C]
0x7D3099: fstp    [esp+38h+var_10]
0x7D309D: fld     [esp+38h+var_14]
0x7D30A1: fld     [esp+38h+var_18]
0x7D30A5: fld     [esp+38h+var_10]
0x7D30A9: fld     st(1)
0x7D30AB: fmulp   st(2), st
0x7D30AD: fld     st(2)
0x7D30AF: fmulp   st(3), st
0x7D30B1: fxch    st(1)
0x7D30B3: faddp   st(2), st
0x7D30B5: fmul    st, st
0x7D30B7: faddp   st(1), st
0x7D30B9: fstp    [esp+38h+arg_0]
0x7D30BD: fld     [esp+38h+arg_0]
0x7D30C1: call    __CIsqrt
0x7D30C6: fstp    [esp+38h+arg_0]
0x7D30CA: fld     [esp+38h+arg_0]
0x7D30CE: fdiv    [esp+38h+var_34]
0x7D30D2: fstp    [esp+38h+arg_0]
0x7D30D6: fld     [esp+38h+arg_0]
0x7D30DA: fldz
0x7D30DC: fcom    st(1)
0x7D30DE: fnstsw  ax
0x7D30E0: fldz
0x7D30E2: test    ah, 41h
0x7D30E5: jnz     short loc_7D30ED
0x7D30E7: fst     [esp+38h+arg_0]
0x7D30EB: jmp     short loc_7D30F5
0x7D30ED: fxch    st(2)
0x7D30EF: fst     [esp+38h+arg_0]
0x7D30F3: fxch    st(2)
0x7D30F5: fld     [esp+38h+arg_0]
0x7D30F9: fld1
0x7D30FB: fcom    st(1)
0x7D30FD: fnstsw  ax
0x7D30FF: fstp    st(1)
0x7D3101: test    ah, 5
0x7D3104: jp      short loc_7D3118
0x7D3106: fstp    st(3)
0x7D3108: fstp    st(1)
0x7D310A: fstp    st
0x7D310C: fld1
0x7D310E: fstp    [esp+38h+arg_0]
0x7D3112: fld     [esp+38h+arg_0]
0x7D3116: jmp     short loc_7D3135
0x7D3118: fxch    st(2)
0x7D311A: fcomp   st(3)
0x7D311C: fnstsw  ax
0x7D311E: test    ah, 41h
0x7D3121: jnz     short loc_7D3131
0x7D3123: fstp    st(2)
0x7D3125: fxch    st(1)
0x7D3127: fstp    [esp+38h+arg_0]
0x7D312B: fld     [esp+38h+arg_0]
0x7D312F: jmp     short loc_7D3135
0x7D3131: fstp    st
0x7D3133: fxch    st(1)
0x7D3135: fmul    st, st
0x7D3137: fsubp   st(1), st
0x7D3139: fstp    dword ptr [esi+0D0h]
0x7D313F: fld     [esp+38h+var_8]
0x7D3143: fld     [esp+38h+var_4]
0x7D3147: fcom    st(1)
0x7D3149: fnstsw  ax
0x7D314B: test    ah, 5
0x7D314E: jp      short loc_7D3158
0x7D3150: fxch    st(1)
0x7D3152: fst     [esp+38h+arg_0]
0x7D3156: jmp     short loc_7D315E
0x7D3158: fst     [esp+38h+arg_0]
0x7D315C: fxch    st(1)
0x7D315E: fld     [esp+38h+var_C]
0x7D3162: fld     [esp+38h+arg_0]
0x7D3166: fcomp   st(1)
0x7D3168: fnstsw  ax
0x7D316A: test    ah, 5
0x7D316D: jp      short loc_7D3175
0x7D316F: fstp    st(1)
0x7D3171: fstp    st(1)
0x7D3173: jmp     short loc_7D3182
0x7D3175: fstp    st
0x7D3177: fcom    st(1)
0x7D3179: fnstsw  ax
0x7D317B: test    ah, 41h
0x7D317E: jz      short loc_7D3171
0x7D3180: fstp    st
0x7D3182: fstp    [esp+38h+arg_0]
0x7D3186: fld     [esp+38h+arg_0]
0x7D318A: fmul    dword ptr [esi+0D0h]
0x7D3190: fstp    [esp+38h+arg_0]
0x7D3194: fld     [esp+38h+arg_0]
0x7D3198: fst     dword ptr [esi+0D0h]
0x7D319E: pop     esi
0x7D319F: add     esp, 34h
0x7D31A2: retn    4
