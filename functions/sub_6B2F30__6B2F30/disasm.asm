0x6B2F30: sub     esp, 50h
0x6B2F33: mov     eax, [esp+50h+arg_4]
0x6B2F37: push    ebx
0x6B2F38: mov     ebx, ecx
0x6B2F3A: mov     ecx, [ebx]
0x6B2F3C: push    ebp
0x6B2F3D: push    esi
0x6B2F3E: lea     edx, [eax+eax*8]
0x6B2F41: mov     eax, [ecx+4]
0x6B2F44: push    edi
0x6B2F45: lea     esi, [eax+edx*8+2Ch]
0x6B2F49: mov     ecx, 12h
0x6B2F4E: lea     edi, [esp+60h+var_48]
0x6B2F52: rep movsd
0x6B2F54: xor     esi, esi
0x6B2F56: cmp     [esp+60h+var_38], esi
0x6B2F5A: mov     [esp+60h+arg_4], esi
0x6B2F5E: mov     [esp+60h+var_50], esi
0x6B2F62: jz      short loc_6B2FA5
0x6B2F64: cmp     [esp+60h+var_34], 2
0x6B2F69: jnz     short loc_6B2FA5
0x6B2F6B: cmp     [esp+60h+var_30], esi
0x6B2F6F: jz      short loc_6B2F85
0x6B2F71: mov     ecx, [ebx+4138h]
0x6B2F77: imul    ecx, 94h ; '”'
0x6B2F7D: mov     ebp, ds:dword_B17F5C[ecx]
0x6B2F83: jmp     short loc_6B2FB7
0x6B2F85: mov     edx, [ebx+4138h]
0x6B2F8B: imul    edx, 94h ; '”'
0x6B2F91: mov     ebp, ds:dword_B17FB8[edx]
0x6B2F97: mov     [esp+60h+var_50], ebp
0x6B2F9B: lea     ebp, [ebp+ebp*2+0]
0x6B2F9F: mov     [esp+60h+arg_4], esi
0x6B2FA3: jmp     short loc_6B2FB7
0x6B2FA5: mov     eax, [ebx+4138h]
0x6B2FAB: imul    eax, 94h ; '”'
0x6B2FB1: mov     ebp, ds:dword_B17F5C[eax]
0x6B2FB7: mov     ecx, [esp+60h+var_40]
0x6B2FBB: fild    [esp+60h+var_40]
0x6B2FBF: test    ecx, ecx
0x6B2FC1: jge     short loc_6B2FC9
0x6B2FC3: fadd    qword ptr ds:0A30E60h
0x6B2FC9: fsub    qword ptr ds:0A77BF8h
0x6B2FCF: fmul    qword ptr ds:0A3C770h
0x6B2FD5: fld     qword ptr ds:0A3D0C0h
0x6B2FDB: fxch    st(1)
0x6B2FDD: call    __CIpow
0x6B2FE2: fstp    [esp+60h+var_4C]
0x6B2FE6: xor     eax, eax
0x6B2FE8: cmp     [ebx+10h], esi
0x6B2FEB: jle     short loc_6B303D
0x6B2FED: fld     [esp+60h+var_4C]
0x6B2FF1: lea     edx, [ebx+1Ch]
0x6B2FF4: fldz
0x6B2FF6: cmp     [edx], esi
0x6B2FF8: jnz     short loc_6B3003
0x6B2FFA: mov     ecx, [esp+60h+arg_0]
0x6B2FFE: fst     dword ptr [ecx+eax*4]
0x6B3001: jmp     short loc_6B302E
0x6B3003: mov     ecx, [edx]
0x6B3005: test    ecx, ecx
0x6B3007: jle     short loc_6B3014
0x6B3009: fld     dword ptr ds:0B1BC50h[ecx*4]
0x6B3010: fmul    st, st(2)
0x6B3012: jmp     short loc_6B3027
0x6B3014: add     ecx, ecx
0x6B3016: add     ecx, ecx
0x6B3018: mov     edi, offset flt_B1BC50
0x6B301D: sub     edi, ecx
0x6B301F: fld     dword ptr [edi]
0x6B3021: fld     st(2)
0x6B3023: fchs
0x6B3025: fmulp   st(1), st
0x6B3027: mov     ecx, [esp+60h+arg_0]
0x6B302B: fstp    dword ptr [ecx+eax*4]
0x6B302E: add     eax, 1
0x6B3031: add     edx, 4
0x6B3034: cmp     eax, [ebx+10h]
0x6B3037: jl      short loc_6B2FF6
0x6B3039: fstp    st(1)
0x6B303B: fstp    st
0x6B303D: xor     edi, edi
0x6B303F: cmp     [ebx+10h], esi
0x6B3042: jle     loc_6B319F
0x6B3048: cmp     edi, ebp
0x6B304A: jnz     loc_6B311D
0x6B3050: cmp     [esp+60h+var_38], 0
0x6B3055: jz      loc_6B3108
0x6B305B: cmp     [esp+60h+var_34], 2
0x6B3060: jnz     loc_6B3108
0x6B3066: cmp     [esp+60h+var_30], 0
0x6B306B: mov     eax, [ebx+4138h]
0x6B3071: jz      short loc_6B30DD
0x6B3073: mov     edx, eax
0x6B3075: imul    edx, 94h ; '”'
0x6B307B: mov     ecx, ds:dword_B17F78[edx]
0x6B3081: cmp     edi, ecx
0x6B3083: jnz     short loc_6B30B0
0x6B3085: mov     edx, eax
0x6B3087: imul    edx, 94h ; '”'
0x6B308D: mov     eax, ds:dword_B17FC4[edx]
0x6B3093: mov     edx, ds:dword_B17FC0[edx]
0x6B3099: lea     ebp, [eax+eax*2]
0x6B309C: sub     eax, edx
0x6B309E: mov     [esp+60h+var_50], eax
0x6B30A2: lea     eax, [edx+edx*2]
0x6B30A5: mov     esi, 3
0x6B30AA: mov     [esp+60h+arg_4], eax
0x6B30AE: jmp     short loc_6B311D
0x6B30B0: jl      short loc_6B310E
0x6B30B2: imul    eax, 25h ; '%'
0x6B30B5: add     esi, 1
0x6B30B8: add     eax, esi
0x6B30BA: add     eax, eax
0x6B30BC: mov     edx, ds:dword_B17FB8[eax+eax]
0x6B30C3: add     eax, eax
0x6B30C5: mov     eax, ds:dword_B17FB4[eax]
0x6B30CB: lea     ebp, [edx+edx*2]
0x6B30CE: sub     edx, eax
0x6B30D0: lea     ecx, [eax+eax*2]
0x6B30D3: mov     [esp+60h+var_50], edx
0x6B30D7: mov     [esp+60h+arg_4], ecx
0x6B30DB: jmp     short loc_6B311D
0x6B30DD: imul    eax, 25h ; '%'
0x6B30E0: add     esi, 1
0x6B30E3: add     eax, esi
0x6B30E5: add     eax, eax
0x6B30E7: mov     edx, ds:dword_B17FB8[eax+eax]
0x6B30EE: add     eax, eax
0x6B30F0: mov     eax, ds:dword_B17FB4[eax]
0x6B30F6: lea     ebp, [edx+edx*2]
0x6B30F9: sub     edx, eax
0x6B30FB: mov     [esp+60h+var_50], edx
0x6B30FF: lea     edx, [eax+eax*2]
0x6B3102: mov     [esp+60h+arg_4], edx
0x6B3106: jmp     short loc_6B311D
0x6B3108: mov     eax, [ebx+4138h]
0x6B310E: imul    eax, 25h ; '%'
0x6B3111: add     esi, 1
0x6B3114: add     eax, esi
0x6B3116: mov     ebp, ds:0B17F5Ch[eax*4]
0x6B311D: cmp     [esp+60h+var_38], 0
0x6B3122: jz      short loc_6B3166
0x6B3124: cmp     [esp+60h+var_34], 2
0x6B3129: jnz     short loc_6B3166
0x6B312B: cmp     [esp+60h+var_30], 0
0x6B3130: jz      short loc_6B3137
0x6B3132: cmp     edi, 24h ; '$'
0x6B3135: jl      short loc_6B3166
0x6B3137: mov     eax, edi
0x6B3139: sub     eax, [esp+60h+arg_4]
0x6B313D: cdq
0x6B313E: idiv    [esp+60h+var_50]
0x6B3142: mov     ecx, eax
0x6B3144: mov     eax, [esp+eax*4+60h+var_20]
0x6B3148: imul    ecx, 0Dh
0x6B314B: add     ecx, esi
0x6B314D: mov     edx, [ebx+ecx*4+4084h]
0x6B3154: mov     ecx, [esp+60h+var_8]
0x6B3158: shl     edx, cl
0x6B315A: lea     ecx, [edx+eax*4]
0x6B315D: fld     dword ptr ds:0B182D0h[ecx*4]
0x6B3164: jmp     short loc_6B3188
0x6B3166: cmp     [esp+60h+var_C], 0
0x6B316B: mov     eax, [ebx+esi*4+4028h]
0x6B3172: jz      short loc_6B317B
0x6B3174: add     eax, ds:0B163A0h[esi*4]
0x6B317B: mov     ecx, [esp+60h+var_8]
0x6B317F: shl     eax, cl
0x6B3181: fld     dword ptr ds:0B182D0h[eax*4]
0x6B3188: mov     eax, [esp+60h+arg_0]
0x6B318C: fmul    dword ptr [eax+edi*4]
0x6B318F: add     edi, 1
0x6B3192: fstp    dword ptr [eax+edi*4-4]
0x6B3196: cmp     edi, [ebx+10h]
0x6B3199: jl      loc_6B3048
0x6B319F: mov     ebx, [ebx+10h]
0x6B31A2: cmp     ebx, 240h
0x6B31A8: jge     short loc_6B31BC
0x6B31AA: mov     edx, [esp+60h+arg_0]
0x6B31AE: mov     ecx, 240h
0x6B31B3: sub     ecx, ebx
0x6B31B5: lea     edi, [edx+ebx*4]
0x6B31B8: xor     eax, eax
0x6B31BA: rep stosd
0x6B31BC: pop     edi
0x6B31BD: pop     esi
0x6B31BE: pop     ebp
0x6B31BF: pop     ebx
0x6B31C0: add     esp, 50h
0x6B31C3: retn    8
