0x710B00: push    ebp
0x710B01: mov     ebp, esp
0x710B03: and     esp, 0FFFFFFF8h
0x710B06: sub     esp, 34h
0x710B09: fld     qword ptr ds:0A3D0C0h
0x710B0F: push    ebx
0x710B10: fld1
0x710B12: mov     ebx, [ebp+arg_4]
0x710B15: fldz
0x710B17: push    esi
0x710B18: push    edi
0x710B19: mov     edi, [ebp+arg_0]
0x710B1C: mov     esi, ecx
0x710B1E: mov     [esp+40h+var_1C], 0
0x710B26: jmp     short loc_710B30
0x710B28: fldz
0x710B2A: fxch    st(1)
0x710B2C: fxch    st(2)
0x710B2E: fxch    st(1)
0x710B30: fld     dword ptr [edi+4]
0x710B33: fabs
0x710B35: fstp    [esp+40h+var_24]
0x710B39: fld     dword ptr [edi]
0x710B3B: fabs
0x710B3D: fstp    [esp+40h+var_20]
0x710B41: fld     [esp+40h+var_20]
0x710B45: fld     [esp+40h+var_24]
0x710B49: fld     st
0x710B4B: faddp   st(2), st
0x710B4D: fxch    st(1)
0x710B4F: fstp    [esp+40h+var_28]
0x710B53: fld     [esp+40h+var_28]
0x710B57: fld     dword ptr [ebx]
0x710B59: fabs
0x710B5B: fstp    [esp+40h+var_20]
0x710B5F: fld     [esp+40h+var_20]
0x710B63: fadd    st, st(1)
0x710B65: fucompp
0x710B67: fnstsw  ax
0x710B69: test    ah, 44h
0x710B6C: jnp     loc_710F60
0x710B72: fld     dword ptr [edi+8]
0x710B75: fabs
0x710B77: fstp    [esp+40h+var_20]
0x710B7B: fadd    [esp+40h+var_20]
0x710B7F: fstp    [esp+40h+var_28]
0x710B83: fld     [esp+40h+var_28]
0x710B87: fld     dword ptr [ebx+4]
0x710B8A: fabs
0x710B8C: fstp    [esp+40h+var_20]
0x710B90: fld     [esp+40h+var_20]
0x710B94: fadd    st, st(1)
0x710B96: fucompp
0x710B98: fnstsw  ax
0x710B9A: test    ah, 44h
0x710B9D: jnp     loc_71112E
0x710BA3: fstp    st
0x710BA5: fld     dword ptr [edi]
0x710BA7: fst     [esp+40h+var_8]
0x710BAB: fld     dword ptr [ebx]
0x710BAD: fst     [esp+40h+var_18]
0x710BB1: fld     dword ptr [edi+4]
0x710BB4: fsubrp  st(2), st
0x710BB6: fmulp   st(3), st
0x710BB8: fdivrp  st(2), st
0x710BBA: fxch    st(1)
0x710BBC: fstp    [esp+40h+var_28]
0x710BC0: fld     [esp+40h+var_28]
0x710BC4: fst     [esp+40h+var_10]
0x710BC8: fmul    st, st
0x710BCA: faddp   st(1), st
0x710BCC: fstp    [esp+40h+var_20]
0x710BD0: fld     [esp+40h+var_20]
0x710BD4: call    __CIsqrt
0x710BD9: fstp    [esp+40h+var_20]
0x710BDD: fld     [esp+40h+var_20]
0x710BE1: fstp    [esp+40h+var_34]
0x710BE5: fld     dword ptr [ebx+4]
0x710BE8: fstp    [esp+40h+var_20]
0x710BEC: fld     dword ptr [edi+8]
0x710BEF: fsub    [esp+40h+var_8]
0x710BF3: fstp    dword ptr [esp+40h+var_30]
0x710BF7: fldz
0x710BF9: fcomp   [esp+40h+var_28]
0x710BFD: fnstsw  ax
0x710BFF: fld     [esp+40h+var_34]
0x710C03: test    ah, 41h
0x710C06: jp      short loc_710C0E
0x710C08: fadd    [esp+40h+var_10]
0x710C0C: jmp     short loc_710C12
0x710C0E: fsubr   [esp+40h+var_10]
0x710C12: fdivr   [esp+40h+var_18]
0x710C16: fadd    dword ptr [esp+40h+var_30]
0x710C1A: fstp    dword ptr [esp+40h+var_30]
0x710C1E: fld     [esp+40h+var_20]
0x710C22: fld     dword ptr [esp+40h+var_30]
0x710C26: fld     st(1)
0x710C28: fabs
0x710C2A: fstp    [esp+40h+var_20]
0x710C2E: fld     [esp+40h+var_20]
0x710C32: fld     st(1)
0x710C34: fabs
0x710C36: fstp    [esp+40h+var_20]
0x710C3A: fld     [esp+40h+var_20]
0x710C3E: fcompp
0x710C40: fnstsw  ax
0x710C42: test    ah, 41h
0x710C45: jp      short loc_710C8C
0x710C47: fdivrp  st(1), st
0x710C49: fstp    [esp+40h+var_28]
0x710C4D: fld     [esp+40h+var_28]
0x710C51: fst     [esp+40h+var_10]
0x710C55: fmul    st, st
0x710C57: fadd    qword ptr ds:0A2F928h
0x710C5D: fstp    [esp+40h+var_20]
0x710C61: fld     [esp+40h+var_20]
0x710C65: call    __CIsqrt
0x710C6A: fstp    [esp+40h+var_20]
0x710C6E: fld     [esp+40h+var_20]
0x710C72: fld1
0x710C74: fld     st
0x710C76: fdivrp  st(2), st
0x710C78: fxch    st(1)
0x710C7A: fstp    dword ptr [esp+40h+var_30]
0x710C7E: fld     dword ptr [esp+40h+var_30]
0x710C82: fmul    [esp+40h+var_10]
0x710C86: fstp    [esp+40h+var_28]
0x710C8A: jmp     short loc_710CCF
0x710C8C: fdivp   st(1), st
0x710C8E: fstp    [esp+40h+var_28]
0x710C92: fld     [esp+40h+var_28]
0x710C96: fst     [esp+40h+var_10]
0x710C9A: fmul    st, st
0x710C9C: fadd    qword ptr ds:0A2F928h
0x710CA2: fstp    [esp+40h+var_20]
0x710CA6: fld     [esp+40h+var_20]
0x710CAA: call    __CIsqrt
0x710CAF: fstp    [esp+40h+var_20]
0x710CB3: fld     [esp+40h+var_20]
0x710CB7: fld1
0x710CB9: fld     st
0x710CBB: fdivrp  st(2), st
0x710CBD: fxch    st(1)
0x710CBF: fstp    [esp+40h+var_28]
0x710CC3: fld     [esp+40h+var_28]
0x710CC7: fmul    [esp+40h+var_10]
0x710CCB: fstp    dword ptr [esp+40h+var_30]
0x710CCF: fld     dword ptr [esi+8]
0x710CD2: fstp    [esp+40h+var_34]
0x710CD6: fld     dword ptr [esi+4]
0x710CD9: fld     dword ptr [esp+40h+var_30]
0x710CDD: fld     [esp+40h+var_34]
0x710CE1: fld     [esp+40h+var_28]
0x710CE5: fld     st(3)
0x710CE7: fmul    st, st(3)
0x710CE9: fld     st(2)
0x710CEB: fmul    st, st(2)
0x710CED: faddp   st(1), st
0x710CEF: fstp    dword ptr [esi+8]
0x710CF2: fmul    st(3), st
0x710CF4: fxch    st(1)
0x710CF6: fmul    st, st(2)
0x710CF8: fsubp   st(3), st
0x710CFA: fxch    st(2)
0x710CFC: fstp    dword ptr [esi+4]
0x710CFF: fld     dword ptr [esi+14h]
0x710D02: fstp    [esp+40h+var_34]
0x710D06: fld     dword ptr [esi+10h]
0x710D09: fld     [esp+40h+var_34]
0x710D0D: fld     st
0x710D0F: fmul    st, st(4)
0x710D11: fld     st(2)
0x710D13: fmul    st, st(4)
0x710D15: faddp   st(1), st
0x710D17: fstp    dword ptr [esi+14h]
0x710D1A: fxch    st(1)
0x710D1C: fmul    st, st(3)
0x710D1E: fxch    st(1)
0x710D20: fmul    st, st(2)
0x710D22: fsubp   st(1), st
0x710D24: fstp    dword ptr [esi+10h]
0x710D27: fld     dword ptr [esi+20h]
0x710D2A: fstp    [esp+40h+var_34]
0x710D2E: fld     dword ptr [esi+1Ch]
0x710D31: fld     [esp+40h+var_34]
0x710D35: fld     st
0x710D37: fmul    st, st(4)
0x710D39: fld     st(2)
0x710D3B: fmul    st, st(4)
0x710D3D: faddp   st(1), st
0x710D3F: fstp    dword ptr [esi+20h]
0x710D42: fxch    st(1)
0x710D44: fmul    st, st(3)
0x710D46: fxch    st(1)
0x710D48: fmul    st, st(2)
0x710D4A: fsubp   st(1), st
0x710D4C: fstp    dword ptr [esi+1Ch]
0x710D4F: fld     dword ptr [ebx+4]
0x710D52: fld     dword ptr [edi+4]
0x710D55: fsub    dword ptr [edi+8]
0x710D58: fmul    st, st(2)
0x710D5A: fld     st(1)
0x710D5C: fadd    st, st
0x710D5E: fmul    st, st(4)
0x710D60: faddp   st(1), st
0x710D62: fstp    [esp+40h+var_24]
0x710D66: fld     dword ptr [ebx]
0x710D68: fld     st(3)
0x710D6A: fmul    st, st(1)
0x710D6C: fstp    dword ptr [esp+40h+var_18]
0x710D70: fmul    st, st(2)
0x710D72: fstp    [esp+40h+var_20]
0x710D76: fld     [esp+40h+var_24]
0x710D7A: fld     st
0x710D7C: fmulp   st(4), st
0x710D7E: fxch    st(3)
0x710D80: fsubrp  st(1), st
0x710D82: fstp    dword ptr [esp+40h+var_30]
0x710D86: fmulp   st(1), st
0x710D88: fstp    [esp+40h+var_24]
0x710D8C: fld     [esp+40h+var_20]
0x710D90: fst     [esp+40h+var_8]
0x710D94: fld     dword ptr [esp+40h+var_30]
0x710D98: fst     [esp+40h+var_30]
0x710D9C: fld     st(1)
0x710D9E: fabs
0x710DA0: fstp    [esp+40h+var_20]
0x710DA4: fld     [esp+40h+var_20]
0x710DA8: fld     st(1)
0x710DAA: fabs
0x710DAC: fstp    [esp+40h+var_20]
0x710DB0: fld     [esp+40h+var_20]
0x710DB4: fcompp
0x710DB6: fnstsw  ax
0x710DB8: test    ah, 41h
0x710DBB: jp      short loc_710E0F
0x710DBD: fdivrp  st(1), st
0x710DBF: fstp    [esp+40h+var_28]
0x710DC3: fld     [esp+40h+var_28]
0x710DC7: fst     [esp+40h+var_10]
0x710DCB: fmul    st, st
0x710DCD: faddp   st(1), st
0x710DCF: fstp    [esp+40h+var_20]
0x710DD3: fld     [esp+40h+var_20]
0x710DD7: call    __CIsqrt
0x710DDC: fstp    [esp+40h+var_20]
0x710DE0: fld     [esp+40h+var_20]
0x710DE4: fstp    [esp+40h+var_34]
0x710DE8: fld     [esp+40h+var_34]
0x710DEC: fld     [esp+40h+var_8]
0x710DF0: fmul    st, st(1)
0x710DF2: fstp    dword ptr [ebx+4]
0x710DF5: fld1
0x710DF7: fld     st
0x710DF9: fdivrp  st(2), st
0x710DFB: fxch    st(1)
0x710DFD: fstp    dword ptr [esp+40h+var_30]
0x710E01: fld     dword ptr [esp+40h+var_30]
0x710E05: fmul    [esp+40h+var_10]
0x710E09: fstp    [esp+40h+var_28]
0x710E0D: jmp     short loc_710E5F
0x710E0F: fdivp   st(1), st
0x710E11: fstp    [esp+40h+var_28]
0x710E15: fld     [esp+40h+var_28]
0x710E19: fst     [esp+40h+var_10]
0x710E1D: fmul    st, st
0x710E1F: faddp   st(1), st
0x710E21: fstp    [esp+40h+var_20]
0x710E25: fld     [esp+40h+var_20]
0x710E29: call    __CIsqrt
0x710E2E: fstp    [esp+40h+var_20]
0x710E32: fld     [esp+40h+var_20]
0x710E36: fstp    [esp+40h+var_34]
0x710E3A: fld     [esp+40h+var_34]
0x710E3E: fld     [esp+40h+var_30]
0x710E42: fmul    st, st(1)
0x710E44: fstp    dword ptr [ebx+4]
0x710E47: fld1
0x710E49: fld     st
0x710E4B: fdivrp  st(2), st
0x710E4D: fxch    st(1)
0x710E4F: fstp    [esp+40h+var_28]
0x710E53: fld     [esp+40h+var_28]
0x710E57: fmul    [esp+40h+var_10]
0x710E5B: fstp    dword ptr [esp+40h+var_30]
0x710E5F: fld     dword ptr [esi+4]
0x710E62: fstp    [esp+40h+var_34]
0x710E66: fld     dword ptr [esi]
0x710E68: fld     dword ptr [esp+40h+var_30]
0x710E6C: fld     [esp+40h+var_34]
0x710E70: fld     [esp+40h+var_28]
0x710E74: fld     st(1)
0x710E76: fmul    st, st(1)
0x710E78: fld     st(4)
0x710E7A: fmul    st, st(4)
0x710E7C: faddp   st(1), st
0x710E7E: fstp    dword ptr [esi+4]
0x710E81: fmul    st(3), st
0x710E83: fxch    st(1)
0x710E85: fmul    st, st(2)
0x710E87: fsubp   st(3), st
0x710E89: fxch    st(2)
0x710E8B: fstp    dword ptr [esi]
0x710E8D: fld     dword ptr [esi+10h]
0x710E90: fstp    [esp+40h+var_34]
0x710E94: fld     dword ptr [esi+0Ch]
0x710E97: fld     [esp+40h+var_34]
0x710E9B: fld     st
0x710E9D: fmul    st, st(4)
0x710E9F: fld     st(2)
0x710EA1: fmul    st, st(4)
0x710EA3: faddp   st(1), st
0x710EA5: fstp    dword ptr [esi+10h]
0x710EA8: fxch    st(1)
0x710EAA: fmul    st, st(3)
0x710EAC: fxch    st(1)
0x710EAE: fmul    st, st(2)
0x710EB0: fsubp   st(1), st
0x710EB2: fstp    dword ptr [esi+0Ch]
0x710EB5: fld     dword ptr [esi+1Ch]
0x710EB8: fstp    [esp+40h+var_34]
0x710EBC: fld     dword ptr [esi+18h]
0x710EBF: fld     [esp+40h+var_34]
0x710EC3: fld     st
0x710EC5: fmul    st, st(4)
0x710EC7: fld     st(2)
0x710EC9: fmul    st, st(4)
0x710ECB: faddp   st(1), st
0x710ECD: fstp    dword ptr [esi+1Ch]
0x710ED0: fxch    st(1)
0x710ED2: fmul    st, st(3)
0x710ED4: fxch    st(1)
0x710ED6: fmul    st, st(2)
0x710ED8: fsubp   st(1), st
0x710EDA: fstp    dword ptr [esi+18h]
0x710EDD: fld     [esp+40h+var_24]
0x710EE1: fld     dword ptr [edi+4]
0x710EE4: fsub    st, st(1)
0x710EE6: fstp    [esp+40h+var_20]
0x710EEA: fadd    dword ptr [edi+8]
0x710EED: fstp    dword ptr [edi+8]
0x710EF0: fld     [esp+40h+var_20]
0x710EF4: fld     dword ptr [esp+40h+var_18]
0x710EF8: fld     dword ptr [edi]
0x710EFA: fsub    st, st(2)
0x710EFC: fmul    st, st(3)
0x710EFE: fld     st(1)
0x710F00: fld     qword ptr ds:0A3D0C0h
0x710F06: fmul    st(1), st
0x710F08: fxch    st(1)
0x710F0A: fmul    st, st(6)
0x710F0C: faddp   st(2), st
0x710F0E: fxch    st(1)
0x710F10: fstp    [esp+40h+var_24]
0x710F14: fld     [esp+40h+var_24]
0x710F18: fld     st
0x710F1A: fmulp   st(6), st
0x710F1C: fxch    st(5)
0x710F1E: fsubrp  st(2), st
0x710F20: fxch    st(1)
0x710F22: fstp    dword ptr [ebx]
0x710F24: fxch    st(3)
0x710F26: fmulp   st(2), st
0x710F28: fxch    st(1)
0x710F2A: fstp    [esp+40h+var_24]
0x710F2E: fld     [esp+40h+var_24]
0x710F32: mov     eax, [esp+40h+var_1C]
0x710F36: fadd    st(1), st
0x710F38: fxch    st(1)
0x710F3A: add     eax, 1
0x710F3D: cmp     eax, 20h ; ' '
0x710F40: fstp    dword ptr [edi+4]
0x710F43: mov     [esp+40h+var_1C], eax
0x710F47: fsubr   dword ptr [edi]
0x710F49: fstp    dword ptr [edi]
0x710F4B: jl      loc_710B28
0x710F51: fstp    st
0x710F53: xor     al, al
0x710F55: fstp    st
0x710F57: pop     edi
0x710F58: pop     esi
0x710F59: pop     ebx
0x710F5A: mov     esp, ebp
0x710F5C: pop     ebp
0x710F5D: retn    8
0x710F60: fstp    st
0x710F62: fstp    st(2)
0x710F64: fstp    st
0x710F66: fst     dword ptr [ebx]
0x710F68: fld     dword ptr [edi+4]
0x710F6B: fabs
0x710F6D: fstp    dword ptr [esp+40h+var_18]
0x710F71: fld     dword ptr [esp+40h+var_18]
0x710F75: fld     dword ptr [edi+8]
0x710F78: fabs
0x710F7A: fstp    dword ptr [esp+40h+var_18]
0x710F7E: fadd    dword ptr [esp+40h+var_18]
0x710F82: fstp    [esp+40h+var_28]
0x710F86: fld     [esp+40h+var_28]
0x710F8A: fld     dword ptr [ebx+4]
0x710F8D: fabs
0x710F8F: fstp    dword ptr [esp+40h+var_18]
0x710F93: fld     dword ptr [esp+40h+var_18]
0x710F97: fadd    st, st(1)
0x710F99: fucompp
0x710F9B: fnstsw  ax
0x710F9D: test    ah, 44h
0x710FA0: jnp     loc_711120
0x710FA6: fstp    st
0x710FA8: fld     dword ptr [edi+8]
0x710FAB: fst     [esp+40h+var_8]
0x710FAF: fld     dword ptr [edi+4]
0x710FB2: fst     [esp+40h+var_10]
0x710FB6: fld     st(1)
0x710FB8: fadd    st, st(1)
0x710FBA: fstp    [esp+40h+var_28]
0x710FBE: fsubrp  st(1), st
0x710FC0: fstp    dword ptr [esp+40h+var_30]
0x710FC4: fld     dword ptr [ebx+4]
0x710FC7: fld     dword ptr [esp+40h+var_30]
0x710FCB: fld     st(1)
0x710FCD: fmul    qword ptr ds:0A3C800h
0x710FD3: fmulp   st(2), st
0x710FD5: fmul    st, st
0x710FD7: faddp   st(1), st
0x710FD9: fstp    dword ptr [esp+40h+var_18]
0x710FDD: fld     dword ptr [esp+40h+var_18]
0x710FE1: call    __CIsqrt
0x710FE6: fstp    dword ptr [esp+40h+var_18]
0x710FEA: fld     dword ptr [esp+40h+var_18]
0x710FEE: fstp    [esp+40h+var_20]
0x710FF2: fld     [esp+40h+var_28]
0x710FF6: fld     [esp+40h+var_20]
0x710FFA: fld     st(1)
0x710FFC: fsub    st, st(1)
0x710FFE: fld     qword ptr ds:0A2FAA0h
0x711004: fmul    st(1), st
0x711006: fxch    st(1)
0x711008: fstp    [esp+40h+var_24]
0x71100C: fxch    st(1)
0x71100E: faddp   st(2), st
0x711010: fmulp   st(1), st
0x711012: fstp    [esp+40h+var_20]
0x711016: fldz
0x711018: fcomp   dword ptr [esp+40h+var_30]
0x71101C: fnstsw  ax
0x71101E: test    ah, 41h
0x711021: jp      short loc_711034
0x711023: fld     dword ptr [ebx+4]
0x711026: fstp    [esp+40h+var_28]
0x71102A: fld     [esp+40h+var_24]
0x71102E: fsubr   [esp+40h+var_10]
0x711032: jmp     short loc_711043
0x711034: fld     [esp+40h+var_24]
0x711038: fsubr   [esp+40h+var_8]
0x71103C: fstp    [esp+40h+var_28]
0x711040: fld     dword ptr [ebx+4]
0x711043: fstp    dword ptr [esp+40h+var_30]
0x711047: fld     dword ptr [esp+40h+var_30]
0x71104B: fst     [esp+40h+var_10]
0x71104F: fld     [esp+40h+var_28]
0x711053: fst     [esp+40h+var_8]
0x711057: fmul    st, st
0x711059: fld     st(1)
0x71105B: fmulp   st(2), st
0x71105D: faddp   st(1), st
0x71105F: fstp    dword ptr [esp+40h+var_18]
0x711063: fld     dword ptr [esp+40h+var_18]
0x711067: call    __CIsqrt
0x71106C: fstp    dword ptr [esp+40h+var_18]
0x711070: fld     dword ptr [esp+40h+var_18]
0x711074: fld1
0x711076: fdivrp  st(1), st
0x711078: fstp    [esp+40h+var_34]
0x71107C: fld     [esp+40h+var_34]
0x711080: fld     [esp+40h+var_8]
0x711084: fmul    st, st(1)
0x711086: fstp    [esp+40h+var_28]
0x71108A: fmul    [esp+40h+var_10]
0x71108E: fstp    dword ptr [esp+40h+var_30]
0x711092: fld     dword ptr [esi+8]
0x711095: fstp    [esp+40h+var_34]
0x711099: fld     dword ptr [esi+4]
0x71109C: fld     dword ptr [esp+40h+var_30]
0x7110A0: fld     [esp+40h+var_34]
0x7110A4: fld     [esp+40h+var_28]
0x7110A8: fld     st(1)
0x7110AA: fmul    st, st(1)
0x7110AC: fld     st(4)
0x7110AE: fmul    st, st(4)
0x7110B0: faddp   st(1), st
0x7110B2: fstp    dword ptr [esi+8]
0x7110B5: fmul    st(3), st
0x7110B7: fxch    st(1)
0x7110B9: fmul    st, st(2)
0x7110BB: fsubp   st(3), st
0x7110BD: fxch    st(2)
0x7110BF: fstp    dword ptr [esi+4]
0x7110C2: fld     dword ptr [esi+14h]
0x7110C5: fstp    [esp+40h+var_34]
0x7110C9: fld     dword ptr [esi+10h]
0x7110CC: fld     [esp+40h+var_34]
0x7110D0: fld     st
0x7110D2: fmul    st, st(4)
0x7110D4: fld     st(2)
0x7110D6: fmul    st, st(4)
0x7110D8: faddp   st(1), st
0x7110DA: fstp    dword ptr [esi+14h]
0x7110DD: fxch    st(1)
0x7110DF: fmul    st, st(3)
0x7110E1: fxch    st(1)
0x7110E3: fmul    st, st(2)
0x7110E5: fsubp   st(1), st
0x7110E7: fstp    dword ptr [esi+10h]
0x7110EA: fld     dword ptr [esi+20h]
0x7110ED: fstp    [esp+40h+var_34]
0x7110F1: fld     dword ptr [esi+1Ch]
0x7110F4: fld     [esp+40h+var_34]
0x7110F8: fld     st
0x7110FA: fmul    st, st(4)
0x7110FC: fld     st(2)
0x7110FE: fmul    st, st(4)
0x711100: faddp   st(1), st
0x711102: fstp    dword ptr [esi+20h]
0x711105: fxch    st(1)
0x711107: fmulp   st(3), st
0x711109: fmulp   st(1), st
0x71110B: fsubp   st(1), st
0x71110D: fstp    dword ptr [esi+1Ch]
0x711110: fld     [esp+40h+var_24]
0x711114: fstp    dword ptr [edi+4]
0x711117: fld     [esp+40h+var_20]
0x71111B: fstp    dword ptr [edi+8]
0x71111E: fldz
0x711120: fstp    dword ptr [ebx+4]
0x711123: mov     al, 1
0x711125: pop     edi
0x711126: pop     esi
0x711127: pop     ebx
0x711128: mov     esp, ebp
0x71112A: pop     ebp
0x71112B: retn    8
0x71112E: fstp    st(2)
0x711130: fstp    st
0x711132: fst     dword ptr [ebx+4]
0x711135: fld     dword ptr [edi]
0x711137: fabs
0x711139: fstp    dword ptr [esp+40h+var_18]
0x71113D: fld     dword ptr [esp+40h+var_18]
0x711141: fld     dword ptr [edi+4]
0x711144: fabs
0x711146: fstp    dword ptr [esp+40h+var_18]
0x71114A: fadd    dword ptr [esp+40h+var_18]
0x71114E: fstp    [esp+40h+var_28]
0x711152: fld     [esp+40h+var_28]
0x711156: fld     dword ptr [ebx]
0x711158: fabs
0x71115A: fstp    dword ptr [esp+40h+var_18]
0x71115E: fld     dword ptr [esp+40h+var_18]
0x711162: fadd    st, st(1)
0x711164: fucompp
0x711166: fnstsw  ax
0x711168: test    ah, 44h
0x71116B: jnp     loc_7112E4
0x711171: fstp    st
0x711173: fld     dword ptr [edi+4]
0x711176: fst     [esp+40h+var_10]
0x71117A: fld     dword ptr [edi]
0x71117C: fst     [esp+40h+var_8]
0x711180: fld     st
0x711182: fadd    st, st(2)
0x711184: fstp    [esp+40h+var_28]
0x711188: fsubrp  st(1), st
0x71118A: fstp    dword ptr [esp+40h+var_30]
0x71118E: fld     dword ptr [ebx]
0x711190: fld     dword ptr [esp+40h+var_30]
0x711194: fld     st(1)
0x711196: fmul    qword ptr ds:0A3C800h
0x71119C: fmulp   st(2), st
0x71119E: fmul    st, st
0x7111A0: faddp   st(1), st
0x7111A2: fstp    dword ptr [esp+40h+var_18]
0x7111A6: fld     dword ptr [esp+40h+var_18]
0x7111AA: call    __CIsqrt
0x7111AF: fstp    dword ptr [esp+40h+var_18]
0x7111B3: fld     dword ptr [esp+40h+var_18]
0x7111B7: fstp    [esp+40h+var_20]
0x7111BB: fld     [esp+40h+var_28]
0x7111BF: fld     [esp+40h+var_20]
0x7111C3: fld     st(1)
0x7111C5: fsub    st, st(1)
0x7111C7: fld     qword ptr ds:0A2FAA0h
0x7111CD: fmul    st(1), st
0x7111CF: fxch    st(1)
0x7111D1: fstp    [esp+40h+var_24]
0x7111D5: fxch    st(1)
0x7111D7: faddp   st(2), st
0x7111D9: fmulp   st(1), st
0x7111DB: fstp    [esp+40h+var_20]
0x7111DF: fldz
0x7111E1: fcomp   dword ptr [esp+40h+var_30]
0x7111E5: fnstsw  ax
0x7111E7: test    ah, 41h
0x7111EA: jp      short loc_7111FC
0x7111EC: fld     dword ptr [ebx]
0x7111EE: fstp    [esp+40h+var_28]
0x7111F2: fld     [esp+40h+var_24]
0x7111F6: fsubr   [esp+40h+var_8]
0x7111FA: jmp     short loc_71120A
0x7111FC: fld     [esp+40h+var_24]
0x711200: fsubr   [esp+40h+var_10]
0x711204: fstp    [esp+40h+var_28]
0x711208: fld     dword ptr [ebx]
0x71120A: fstp    dword ptr [esp+40h+var_30]
0x71120E: fld     dword ptr [esp+40h+var_30]
0x711212: fst     [esp+40h+var_10]
0x711216: fld     [esp+40h+var_28]
0x71121A: fst     [esp+40h+var_8]
0x71121E: fmul    st, st
0x711220: fld     st(1)
0x711222: fmulp   st(2), st
0x711224: faddp   st(1), st
0x711226: fstp    dword ptr [esp+40h+var_18]
0x71122A: fld     dword ptr [esp+40h+var_18]
0x71122E: call    __CIsqrt
0x711233: fstp    dword ptr [esp+40h+var_18]
0x711237: fld     dword ptr [esp+40h+var_18]
0x71123B: fld1
0x71123D: fdivrp  st(1), st
0x71123F: fstp    [esp+40h+var_34]
0x711243: fld     [esp+40h+var_34]
0x711247: fld     [esp+40h+var_8]
0x71124B: fmul    st, st(1)
0x71124D: fstp    [esp+40h+var_28]
0x711251: fmul    [esp+40h+var_10]
0x711255: fstp    dword ptr [esp+40h+var_30]
0x711259: fld     dword ptr [esi+4]
0x71125C: fstp    [esp+40h+var_34]
0x711260: fld     dword ptr [esi]
0x711262: fld     dword ptr [esp+40h+var_30]
0x711266: fld     [esp+40h+var_34]
0x71126A: fld     [esp+40h+var_28]
0x71126E: fld     st(1)
0x711270: fmul    st, st(1)
0x711272: fld     st(4)
0x711274: fmul    st, st(4)
0x711276: faddp   st(1), st
0x711278: fstp    dword ptr [esi+4]
0x71127B: fmul    st(3), st
0x71127D: fxch    st(1)
0x71127F: fmul    st, st(2)
0x711281: fsubp   st(3), st
0x711283: fxch    st(2)
0x711285: fstp    dword ptr [esi]
0x711287: fld     dword ptr [esi+10h]
0x71128A: fstp    [esp+40h+var_34]
0x71128E: fld     dword ptr [esi+0Ch]
0x711291: fld     [esp+40h+var_34]
0x711295: fld     st
0x711297: fmul    st, st(4)
0x711299: fld     st(2)
0x71129B: fmul    st, st(4)
0x71129D: faddp   st(1), st
0x71129F: fstp    dword ptr [esi+10h]
0x7112A2: fxch    st(1)
0x7112A4: fmul    st, st(3)
0x7112A6: fxch    st(1)
0x7112A8: fmul    st, st(2)
0x7112AA: fsubp   st(1), st
0x7112AC: fstp    dword ptr [esi+0Ch]
0x7112AF: fld     dword ptr [esi+1Ch]
0x7112B2: fstp    [esp+40h+var_34]
0x7112B6: fld     dword ptr [esi+18h]
0x7112B9: fld     [esp+40h+var_34]
0x7112BD: fld     st
0x7112BF: fmul    st, st(4)
0x7112C1: fld     st(2)
0x7112C3: fmul    st, st(4)
0x7112C5: faddp   st(1), st
0x7112C7: fstp    dword ptr [esi+1Ch]
0x7112CA: fxch    st(1)
0x7112CC: fmulp   st(3), st
0x7112CE: fmulp   st(1), st
0x7112D0: fsubp   st(1), st
0x7112D2: fstp    dword ptr [esi+18h]
0x7112D5: fld     [esp+40h+var_24]
0x7112D9: fstp    dword ptr [edi]
0x7112DB: fld     [esp+40h+var_20]
0x7112DF: fstp    dword ptr [edi+4]
0x7112E2: fldz
0x7112E4: pop     edi
0x7112E5: fstp    dword ptr [ebx]
0x7112E7: pop     esi
0x7112E8: mov     al, 1
0x7112EA: pop     ebx
0x7112EB: mov     esp, ebp
0x7112ED: pop     ebp
0x7112EE: retn    8
