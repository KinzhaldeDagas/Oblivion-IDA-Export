0x8B3850: sub     esp, 4Ch
0x8B3853: mov     edx, [ecx]
0x8B3855: xor     eax, eax
0x8B3857: push    ebx
0x8B3858: push    ebp
0x8B3859: push    esi
0x8B385A: mov     esi, [esp+58h+arg_0]
0x8B385E: push    edi
0x8B385F: mov     edi, [ecx+4]
0x8B3862: mov     [ecx+30h], eax
0x8B3865: mov     [ecx+2Ch], eax
0x8B3868: mov     [ecx+28h], eax
0x8B386B: mov     [ecx+24h], eax
0x8B386E: mov     [ecx+20h], eax
0x8B3871: mov     [ecx+1Ch], eax
0x8B3874: mov     [ecx+18h], eax
0x8B3877: mov     [ecx+14h], eax
0x8B387A: mov     [ecx+10h], eax
0x8B387D: mov     [ecx+0Ch], eax
0x8B3880: mov     eax, 1
0x8B3885: lea     ebx, [esi+edi*4]
0x8B3888: mov     [esp+5Ch+var_18], eax
0x8B388C: lea     edi, [esi+edx*4]
0x8B388F: mov     [esp+5Ch+var_14], 3
0x8B3897: jmp     short loc_8B38A0
0x8B3899: fstp    st
0x8B389B: jmp     short loc_8B38A0
0x8B389D: align 10h
0x8B38A0: cdq
0x8B38A1: fld     dword ptr [edi]
0x8B38A3: mov     ebp, 3
0x8B38A8: fld     dword ptr [ebx]
0x8B38AA: idiv    ebp
0x8B38AC: mov     eax, [ecx]
0x8B38AE: shl     edx, 2
0x8B38B1: add     eax, edx
0x8B38B3: fld     dword ptr [esi+eax*4]
0x8B38B6: mov     eax, [ecx+4]
0x8B38B9: fstp    [esp+5Ch+arg_0]
0x8B38BD: add     edx, eax
0x8B38BF: fld     dword ptr [esi+edx*4]
0x8B38C2: fld     [esp+5Ch+arg_0]
0x8B38C6: fsub    st, st(3)
0x8B38C8: fstp    [esp+5Ch+var_48]
0x8B38CC: fld     st
0x8B38CE: fsub    st, st(2)
0x8B38D0: fld     st(3)
0x8B38D2: fmul    st, st(4)
0x8B38D4: fld     st
0x8B38D6: fmul    st, st(5)
0x8B38D8: fstp    [esp+5Ch+var_40]
0x8B38DC: fld     st(3)
0x8B38DE: fmul    st, st(4)
0x8B38E0: fst     [esp+5Ch+var_3C]
0x8B38E4: fmul    st, st(4)
0x8B38E6: fstp    [esp+5Ch+var_4C]
0x8B38EA: fld     [esp+5Ch+arg_0]
0x8B38EE: fmul    [esp+5Ch+arg_0]
0x8B38F2: fstp    [esp+5Ch+var_44]
0x8B38F6: fld     st(2)
0x8B38F8: fmul    st, st(3)
0x8B38FA: fst     [esp+5Ch+var_20]
0x8B38FE: fmul    st, st(3)
0x8B3900: fstp    [esp+5Ch+var_1C]
0x8B3904: fld     [esp+5Ch+arg_0]
0x8B3908: fadd    st, st(5)
0x8B390A: fld     [esp+5Ch+arg_0]
0x8B390E: fmul    st, st(1)
0x8B3910: fadd    st, st(2)
0x8B3912: fst     [esp+5Ch+var_38]
0x8B3916: fmul    [esp+5Ch+arg_0]
0x8B391A: fadd    [esp+5Ch+var_40]
0x8B391E: fstp    [esp+5Ch+var_34]
0x8B3922: fld     st(3)
0x8B3924: fadd    st, st(5)
0x8B3926: fmul    st, st(4)
0x8B3928: fadd    [esp+5Ch+var_3C]
0x8B392C: fst     [esp+5Ch+var_30]
0x8B3930: fmul    st, st(4)
0x8B3932: fadd    [esp+5Ch+var_4C]
0x8B3936: fstp    [esp+5Ch+var_2C]
0x8B393A: fld     [esp+5Ch+arg_0]
0x8B393E: fmul    st, st(6)
0x8B3940: fadd    st, st
0x8B3942: fld     [esp+5Ch+var_44]
0x8B3946: fmul    dword ptr ds:0A46C30h
0x8B394C: fadd    st, st(1)
0x8B394E: fadd    st, st(3)
0x8B3950: fstp    [esp+5Ch+var_28]
0x8B3954: fxch    st(2)
0x8B3956: fmul    dword ptr ds:0A46C30h
0x8B395C: fadd    st, st(2)
0x8B395E: fadd    [esp+5Ch+var_44]
0x8B3962: fstp    [esp+5Ch+var_24]
0x8B3966: fstp    st(1)
0x8B3968: fmul    st, st(1)
0x8B396A: fadd    dword ptr [ecx+0Ch]
0x8B396D: fst     [esp+5Ch+var_10]
0x8B3971: fstp    dword ptr [ecx+0Ch]
0x8B3974: fld     [esp+5Ch+var_38]
0x8B3978: fmul    st, st(1)
0x8B397A: fadd    dword ptr [ecx+10h]
0x8B397D: fst     [esp+5Ch+var_38]
0x8B3981: fstp    dword ptr [ecx+10h]
0x8B3984: fld     [esp+5Ch+var_34]
0x8B3988: fmul    st, st(1)
0x8B398A: fadd    dword ptr [ecx+18h]
0x8B398D: fst     [esp+5Ch+var_C]
0x8B3991: fstp    dword ptr [ecx+18h]
0x8B3994: fld     [esp+5Ch+var_40]
0x8B3998: fmul    st, st(4)
0x8B399A: fld     [esp+5Ch+var_34]
0x8B399E: fmul    [esp+5Ch+arg_0]
0x8B39A2: faddp   st(1), st
0x8B39A4: fmul    st, st(1)
0x8B39A6: fadd    dword ptr [ecx+24h]
0x8B39A9: fst     [esp+5Ch+var_34]
0x8B39AD: fstp    dword ptr [ecx+24h]
0x8B39B0: fld     [esp+5Ch+var_30]
0x8B39B4: fmul    [esp+5Ch+var_48]
0x8B39B8: fadd    dword ptr [ecx+14h]
0x8B39BB: fst     [esp+5Ch+var_30]
0x8B39BF: fstp    dword ptr [ecx+14h]
0x8B39C2: fld     [esp+5Ch+var_2C]
0x8B39C6: fmul    [esp+5Ch+var_48]
0x8B39CA: fadd    dword ptr [ecx+20h]
0x8B39CD: fst     [esp+5Ch+var_8]
0x8B39D1: fstp    dword ptr [ecx+20h]
0x8B39D4: fld     [esp+5Ch+var_4C]
0x8B39D8: fmul    st, st(3)
0x8B39DA: fld     [esp+5Ch+var_2C]
0x8B39DE: fmul    st, st(3)
0x8B39E0: faddp   st(1), st
0x8B39E2: fmul    [esp+5Ch+var_48]
0x8B39E6: fadd    dword ptr [ecx+30h]
0x8B39E9: fst     [esp+5Ch+var_2C]
0x8B39ED: fstp    dword ptr [ecx+30h]
0x8B39F0: fld     [esp+5Ch+var_28]
0x8B39F4: fmul    st, st(2)
0x8B39F6: fld     [esp+5Ch+var_24]
0x8B39FA: fmul    st, st(4)
0x8B39FC: faddp   st(1), st
0x8B39FE: fmul    st, st(1)
0x8B3A00: fadd    dword ptr [ecx+1Ch]
0x8B3A03: fst     [esp+5Ch+var_4]
0x8B3A07: fstp    dword ptr [ecx+1Ch]
0x8B3A0A: fld     [esp+5Ch+var_44]
0x8B3A0E: fmul    [esp+5Ch+arg_0]
0x8B3A12: fmul    dword ptr ds:0A46B10h
0x8B3A18: fld     [esp+5Ch+var_28]
0x8B3A1C: fmul    st, st(5)
0x8B3A1E: faddp   st(1), st
0x8B3A20: fmul    st, st(2)
0x8B3A22: fld     [esp+5Ch+var_24]
0x8B3A26: fmul    [esp+5Ch+arg_0]
0x8B3A2A: fld     [esp+5Ch+var_40]
0x8B3A2E: fmul    dword ptr ds:0A46B10h
0x8B3A34: faddp   st(1), st
0x8B3A36: fmul    st, st(4)
0x8B3A38: faddp   st(1), st
0x8B3A3A: fmulp   st(1), st
0x8B3A3C: fadd    dword ptr [ecx+28h]
0x8B3A3F: fst     [esp+5Ch+var_24]
0x8B3A43: fstp    dword ptr [ecx+28h]
0x8B3A46: fld     [esp+5Ch+var_20]
0x8B3A4A: fmul    st, st(2)
0x8B3A4C: fstp    [esp+5Ch+var_20]
0x8B3A50: fld     [esp+5Ch+var_3C]
0x8B3A54: fmul    st, st(1)
0x8B3A56: fstp    st(2)
0x8B3A58: fstp    st
0x8B3A5A: fld     dword ptr ds:0A46C30h
0x8B3A60: fmul    st, st(1)
0x8B3A62: fld     [esp+5Ch+var_20]
0x8B3A66: fadd    st, st
0x8B3A68: faddp   st(1), st
0x8B3A6A: fld     [esp+5Ch+var_4C]
0x8B3A6E: fmul    dword ptr ds:0A46B10h
0x8B3A74: faddp   st(1), st
0x8B3A76: fadd    [esp+5Ch+var_1C]
0x8B3A7A: fmulp   st(2), st
0x8B3A7C: mov     eax, [esp+5Ch+var_18]
0x8B3A80: mov     edx, [esp+5Ch+var_14]
0x8B3A84: fadd    st, st
0x8B3A86: add     edi, 10h
0x8B3A89: fld     [esp+5Ch+var_20]
0x8B3A8D: add     ebx, 10h
0x8B3A90: fmul    dword ptr ds:0A46C30h
0x8B3A96: inc     eax
0x8B3A97: dec     edx
0x8B3A98: mov     [esp+5Ch+var_18], eax
0x8B3A9C: faddp   st(1), st
0x8B3A9E: mov     [esp+5Ch+var_14], edx
0x8B3AA2: fld     [esp+5Ch+var_1C]
0x8B3AA6: fmul    dword ptr ds:0A46B10h
0x8B3AAC: faddp   st(1), st
0x8B3AAE: fadd    [esp+5Ch+var_4C]
0x8B3AB2: fmul    [esp+5Ch+arg_0]
0x8B3AB6: faddp   st(1), st
0x8B3AB8: fmul    [esp+5Ch+var_48]
0x8B3ABC: fadd    dword ptr [ecx+2Ch]
0x8B3ABF: fst     dword ptr [ecx+2Ch]
0x8B3AC2: jnz     loc_8B3899
0x8B3AC8: fld     [esp+5Ch+var_10]
0x8B3ACC: pop     edi
0x8B3ACD: fmul    dword ptr ds:0A3D65Ch
0x8B3AD3: pop     esi
0x8B3AD4: pop     ebp
0x8B3AD5: pop     ebx
0x8B3AD6: fstp    dword ptr [ecx+0Ch]
0x8B3AD9: fld     [esp+4Ch+var_38]
0x8B3ADD: fmul    dword ptr ds:0A97F44h
0x8B3AE3: fstp    dword ptr [ecx+10h]
0x8B3AE6: fld     [esp+4Ch+var_C]
0x8B3AEA: fmul    dword ptr ds:0A8C5F8h
0x8B3AF0: fstp    dword ptr [ecx+18h]
0x8B3AF3: fld     [esp+4Ch+var_34]
0x8B3AF7: fmul    dword ptr ds:0A43328h
0x8B3AFD: fstp    dword ptr [ecx+24h]
0x8B3B00: fld     [esp+4Ch+var_30]
0x8B3B04: fmul    dword ptr ds:0A97F40h
0x8B3B0A: fstp    dword ptr [ecx+14h]
0x8B3B0D: fld     [esp+4Ch+var_8]
0x8B3B11: fmul    dword ptr ds:0A97F3Ch
0x8B3B17: fstp    dword ptr [ecx+20h]
0x8B3B1A: fld     [esp+4Ch+var_2C]
0x8B3B1E: fmul    dword ptr ds:0A641BCh
0x8B3B24: fstp    dword ptr [ecx+30h]
0x8B3B27: fld     [esp+4Ch+var_4]
0x8B3B2B: fmul    dword ptr ds:0A97F38h
0x8B3B31: fstp    dword ptr [ecx+1Ch]
0x8B3B34: fld     [esp+4Ch+var_24]
0x8B3B38: fmul    dword ptr ds:0A97F34h
0x8B3B3E: fstp    dword ptr [ecx+28h]
0x8B3B41: fmul    dword ptr ds:0A97F30h
0x8B3B47: fstp    dword ptr [ecx+2Ch]
0x8B3B4A: add     esp, 4Ch
0x8B3B4D: retn    4
