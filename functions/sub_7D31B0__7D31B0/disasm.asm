0x7D31B0: sub     esp, 28h
0x7D31B3: push    esi
0x7D31B4: mov     esi, ecx
0x7D31B6: mov     eax, [esi+100h]
0x7D31BC: cmp     eax, [esp+2Ch+arg_C]
0x7D31C0: jz      loc_7D335A
0x7D31C6: cmp     byte ptr [esi+0F4h], 1
0x7D31CD: jz      loc_7D335A
0x7D31D3: cmp     byte ptr [esi+0FCh], 0
0x7D31DA: fld     dword ptr [eax+0F8h]
0x7D31E0: mov     ecx, [eax+88h]
0x7D31E6: fstp    [esp+2Ch+var_28]
0x7D31EA: mov     edx, [eax+8Ch]
0x7D31F0: fld1
0x7D31F2: mov     [esp+2Ch+var_24], ecx
0x7D31F6: mov     ecx, [eax+90h]
0x7D31FC: mov     [esp+2Ch+var_20], edx
0x7D3200: mov     edx, [eax+0ECh]
0x7D3206: mov     [esp+2Ch+var_1C], ecx
0x7D320A: mov     ecx, [eax+0F0h]
0x7D3210: mov     [esp+2Ch+var_C], edx
0x7D3214: mov     edx, [eax+0F4h]
0x7D321A: fstp    dword ptr [esi+0D0h]
0x7D3220: mov     [esp+2Ch+var_8], ecx
0x7D3224: mov     [esp+2Ch+var_4], edx
0x7D3228: jz      loc_7D32F4
0x7D322E: fld     [esp+2Ch+arg_0]
0x7D3232: fsub    [esp+2Ch+var_24]
0x7D3236: fstp    [esp+2Ch+var_18]
0x7D323A: fld     [esp+2Ch+arg_4]
0x7D323E: fsub    [esp+2Ch+var_20]
0x7D3242: fstp    [esp+2Ch+var_14]
0x7D3246: fld     [esp+2Ch+arg_8]
0x7D324A: fsub    [esp+2Ch+var_1C]
0x7D324E: fstp    [esp+2Ch+var_10]
0x7D3252: fld     [esp+2Ch+var_14]
0x7D3256: fld     [esp+2Ch+var_18]
0x7D325A: fld     [esp+2Ch+var_10]
0x7D325E: fld     st(1)
0x7D3260: fmulp   st(2), st
0x7D3262: fld     st(2)
0x7D3264: fmulp   st(3), st
0x7D3266: fxch    st(1)
0x7D3268: faddp   st(2), st
0x7D326A: fmul    st, st
0x7D326C: faddp   st(1), st
0x7D326E: fstp    [esp+2Ch+arg_C]
0x7D3272: fld     [esp+2Ch+arg_C]
0x7D3276: call    __CIsqrt
0x7D327B: fstp    [esp+2Ch+arg_C]
0x7D327F: fld     [esp+2Ch+arg_C]
0x7D3283: fdiv    [esp+2Ch+var_28]
0x7D3287: fstp    [esp+2Ch+arg_C]
0x7D328B: fld     [esp+2Ch+arg_C]
0x7D328F: fldz
0x7D3291: fcom    st(1)
0x7D3293: fnstsw  ax
0x7D3295: fldz
0x7D3297: test    ah, 41h
0x7D329A: jnz     short loc_7D32A2
0x7D329C: fst     [esp+2Ch+arg_C]
0x7D32A0: jmp     short loc_7D32AA
0x7D32A2: fxch    st(2)
0x7D32A4: fst     [esp+2Ch+arg_C]
0x7D32A8: fxch    st(2)
0x7D32AA: fld     [esp+2Ch+arg_C]
0x7D32AE: fld1
0x7D32B0: fcom    st(1)
0x7D32B2: fnstsw  ax
0x7D32B4: fstp    st(1)
0x7D32B6: test    ah, 5
0x7D32B9: jp      short loc_7D32CD
0x7D32BB: fstp    st(3)
0x7D32BD: fstp    st(1)
0x7D32BF: fstp    st
0x7D32C1: fld1
0x7D32C3: fstp    [esp+2Ch+arg_C]
0x7D32C7: fld     [esp+2Ch+arg_C]
0x7D32CB: jmp     short loc_7D32EA
0x7D32CD: fxch    st(2)
0x7D32CF: fcomp   st(3)
0x7D32D1: fnstsw  ax
0x7D32D3: test    ah, 41h
0x7D32D6: jnz     short loc_7D32E6
0x7D32D8: fstp    st(2)
0x7D32DA: fxch    st(1)
0x7D32DC: fstp    [esp+2Ch+arg_C]
0x7D32E0: fld     [esp+2Ch+arg_C]
0x7D32E4: jmp     short loc_7D32EA
0x7D32E6: fstp    st
0x7D32E8: fxch    st(1)
0x7D32EA: fmul    st, st
0x7D32EC: fsubp   st(1), st
0x7D32EE: fstp    dword ptr [esi+0D0h]
0x7D32F4: fld     [esp+2Ch+var_8]
0x7D32F8: fld     [esp+2Ch+var_4]
0x7D32FC: fcom    st(1)
0x7D32FE: fnstsw  ax
0x7D3300: test    ah, 5
0x7D3303: jp      short loc_7D330D
0x7D3305: fxch    st(1)
0x7D3307: fst     [esp+2Ch+arg_C]
0x7D330B: jmp     short loc_7D3313
0x7D330D: fst     [esp+2Ch+arg_C]
0x7D3311: fxch    st(1)
0x7D3313: fld     [esp+2Ch+var_C]
0x7D3317: fld     [esp+2Ch+arg_C]
0x7D331B: fcomp   st(1)
0x7D331D: fnstsw  ax
0x7D331F: test    ah, 5
0x7D3322: jp      short loc_7D332A
0x7D3324: fstp    st(1)
0x7D3326: fstp    st(1)
0x7D3328: jmp     short loc_7D3337
0x7D332A: fstp    st
0x7D332C: fcom    st(1)
0x7D332E: fnstsw  ax
0x7D3330: test    ah, 41h
0x7D3333: jz      short loc_7D3326
0x7D3335: fstp    st
0x7D3337: fstp    [esp+2Ch+arg_C]
0x7D333B: fld     dword ptr [esi+0D0h]
0x7D3341: fmul    [esp+2Ch+arg_C]
0x7D3345: fstp    [esp+2Ch+arg_C]
0x7D3349: fld     [esp+2Ch+arg_C]
0x7D334D: fst     dword ptr [esi+0D0h]
0x7D3353: pop     esi
0x7D3354: add     esp, 28h
0x7D3357: retn    10h
0x7D335A: fldz
0x7D335C: pop     esi
0x7D335D: add     esp, 28h
0x7D3360: retn    10h
