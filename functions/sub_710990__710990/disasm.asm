0x710990: sub     esp, 14h
0x710993: push    esi
0x710994: mov     esi, ecx
0x710996: fld     dword ptr [esi+4]
0x710999: push    edi
0x71099A: mov     edi, [esp+1Ch+arg_0]
0x71099E: fstp    [esp+1Ch+var_14]
0x7109A2: fld     dword ptr [esi+8]
0x7109A5: fstp    [esp+1Ch+var_10]
0x7109A9: fld     dword ptr [esi+10h]
0x7109AC: fstp    [esp+1Ch+var_C]
0x7109B0: fld     dword ptr [esi+14h]
0x7109B3: fstp    [esp+1Ch+var_4]
0x7109B7: fld     dword ptr [esi+20h]
0x7109BA: fstp    [esp+1Ch+var_8]
0x7109BE: fld     dword ptr [esi]
0x7109C0: fstp    dword ptr [edi]
0x7109C2: fld     [esp+1Ch+var_10]
0x7109C6: fld     st
0x7109C8: fabs
0x7109CA: fstp    [esp+1Ch+arg_0]
0x7109CE: fld     [esp+1Ch+arg_0]
0x7109D2: fcomp   dword ptr ds:0A7E738h
0x7109D8: fnstsw  ax
0x7109DA: test    ah, 1
0x7109DD: jnz     loc_710AAF
0x7109E3: fmul    st, st
0x7109E5: fld     [esp+1Ch+var_14]
0x7109E9: fmul    st, st
0x7109EB: faddp   st(1), st
0x7109ED: fstp    [esp+1Ch+arg_0]
0x7109F1: fld     [esp+1Ch+arg_0]
0x7109F5: call    __CIsqrt
0x7109FA: fstp    [esp+1Ch+arg_0]
0x7109FE: fld     [esp+1Ch+arg_0]
0x710A02: mov     eax, [esp+1Ch+arg_4]
0x710A06: fstp    [esp+1Ch+arg_0]
0x710A0A: fld     [esp+1Ch+arg_0]
0x710A0E: fst     dword ptr [eax]
0x710A10: fld1
0x710A12: fdivrp  st(1), st
0x710A14: fstp    [esp+1Ch+arg_4]
0x710A18: fld     [esp+1Ch+arg_4]
0x710A1C: fld     st
0x710A1E: fmul    [esp+1Ch+var_14]
0x710A22: fstp    [esp+1Ch+var_14]
0x710A26: fmul    [esp+1Ch+var_10]
0x710A2A: fstp    [esp+1Ch+var_10]
0x710A2E: fld     [esp+1Ch+var_8]
0x710A32: fld     st
0x710A34: fld     [esp+1Ch+var_C]
0x710A38: fld     st
0x710A3A: fsubp   st(2), st
0x710A3C: fld     [esp+1Ch+var_10]
0x710A40: fld     st
0x710A42: fmulp   st(3), st
0x710A44: fld     [esp+1Ch+var_14]
0x710A48: fld     st
0x710A4A: fadd    st, st(1)
0x710A4C: fld     [esp+1Ch+var_4]
0x710A50: fld     st
0x710A52: fmulp   st(2), st
0x710A54: fxch    st(5)
0x710A56: faddp   st(1), st
0x710A58: fstp    [esp+1Ch+arg_4]
0x710A5C: fld     [esp+1Ch+arg_4]
0x710A60: fld     st
0x710A62: fmul    st, st(3)
0x710A64: fadd    st(4), st
0x710A66: fxch    st(4)
0x710A68: fstp    dword ptr [edi+4]
0x710A6B: fxch    st(5)
0x710A6D: fsubrp  st(3), st
0x710A6F: fxch    st(2)
0x710A71: fstp    dword ptr [edi+8]
0x710A74: pop     edi
0x710A75: fld     st(1)
0x710A77: fmulp   st(4), st
0x710A79: fxch    st(2)
0x710A7B: fsubrp  st(3), st
0x710A7D: fxch    st(2)
0x710A7F: fstp    dword ptr [eax+4]
0x710A82: mov     al, 1
0x710A84: fld1
0x710A86: fstp    dword ptr [esi]
0x710A88: fldz
0x710A8A: fst     dword ptr [esi+4]
0x710A8D: fst     dword ptr [esi+8]
0x710A90: fst     dword ptr [esi+0Ch]
0x710A93: fstp    dword ptr [esi+18h]
0x710A96: fxch    st(1)
0x710A98: fst     dword ptr [esi+10h]
0x710A9B: fxch    st(1)
0x710A9D: fst     dword ptr [esi+14h]
0x710AA0: fstp    dword ptr [esi+1Ch]
0x710AA3: fchs
0x710AA5: fstp    dword ptr [esi+20h]
0x710AA8: pop     esi
0x710AA9: add     esp, 14h
0x710AAC: retn    8
0x710AAF: mov     eax, [esp+1Ch+arg_4]
0x710AB3: fstp    st
0x710AB5: fld     [esp+1Ch+var_C]
0x710AB9: fstp    dword ptr [edi+4]
0x710ABC: fld     [esp+1Ch+var_8]
0x710AC0: fstp    dword ptr [edi+8]
0x710AC3: pop     edi
0x710AC4: fld     [esp+18h+var_14]
0x710AC8: fstp    dword ptr [eax]
0x710ACA: fld     [esp+18h+var_4]
0x710ACE: fstp    dword ptr [eax+4]
0x710AD1: xor     al, al
0x710AD3: fld1
0x710AD5: fst     dword ptr [esi]
0x710AD7: fldz
0x710AD9: fst     dword ptr [esi+4]
0x710ADC: fst     dword ptr [esi+8]
0x710ADF: fst     dword ptr [esi+0Ch]
0x710AE2: fst     dword ptr [esi+14h]
0x710AE5: fst     dword ptr [esi+18h]
0x710AE8: fstp    dword ptr [esi+1Ch]
0x710AEB: fst     dword ptr [esi+10h]
0x710AEE: fstp    dword ptr [esi+20h]
0x710AF1: pop     esi
0x710AF2: add     esp, 14h
0x710AF5: retn    8
