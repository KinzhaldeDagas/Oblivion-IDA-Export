0x715000: sub     esp, 8
0x715003: push    esi
0x715004: mov     esi, ecx
0x715006: fld     dword ptr [esi+8]
0x715009: fld     dword ptr [esi+4]
0x71500C: fld     dword ptr [esi+0Ch]
0x71500F: fld     st(1)
0x715011: fmulp   st(2), st
0x715013: fld     st(2)
0x715015: fmulp   st(3), st
0x715017: fxch    st(1)
0x715019: faddp   st(2), st
0x71501B: fmul    st, st
0x71501D: faddp   st(1), st
0x71501F: fstp    [esp+0Ch+var_4]
0x715023: fld     [esp+0Ch+var_4]
0x715027: call    __CIsqrt
0x71502C: fstp    [esp+0Ch+var_4]
0x715030: fld     [esp+0Ch+var_4]
0x715034: fstp    [esp+0Ch+var_4]
0x715038: fld     dword ptr ds:0A7EAB0h
0x71503E: fcomp   [esp+0Ch+var_4]
0x715042: fnstsw  ax
0x715044: test    ah, 41h
0x715047: jnz     short loc_715064
0x715049: fldz
0x71504B: mov     eax, [esp+0Ch+arg_0]
0x71504F: fst     dword ptr [eax]
0x715051: pop     esi
0x715052: mov     eax, [esp+8+arg_4]
0x715056: fst     dword ptr [eax]
0x715058: fst     dword ptr [eax+4]
0x71505B: fstp    dword ptr [eax+8]
0x71505E: add     esp, 8
0x715061: retn    8
0x715064: fld     dword ptr [esi]
0x715066: fstp    [esp+0Ch+var_8]
0x71506A: fld     [esp+0Ch+var_8]
0x71506E: fcom    qword ptr ds:0A3D360h
0x715074: fnstsw  ax
0x715076: test    ah, 41h
0x715079: jnz     short loc_71509B
0x71507B: fld1
0x71507D: fcomp   st(1)
0x71507F: fnstsw  ax
0x715081: test    ah, 41h
0x715084: jnz     short loc_715095
0x715086: call    __CIacos
0x71508B: fstp    [esp+0Ch+var_8]
0x71508F: fld     [esp+0Ch+var_8]
0x715093: jmp     short loc_7150A3
0x715095: fstp    st
0x715097: fldz
0x715099: jmp     short loc_7150A3
0x71509B: fstp    st
0x71509D: fld     dword ptr ds:0B3F9A4h
0x7150A3: mov     ecx, [esp+0Ch+arg_0]
0x7150A7: fstp    [esp+0Ch+var_8]
0x7150AB: fld     [esp+0Ch+var_8]
0x7150AF: mov     eax, [esp+0Ch+arg_4]
0x7150B3: fadd    st, st
0x7150B5: fstp    dword ptr [ecx]
0x7150B7: fld     [esp+0Ch+var_4]
0x7150BB: fld1
0x7150BD: fdivrp  st(1), st
0x7150BF: fstp    [esp+0Ch+arg_0]
0x7150C3: fld     dword ptr [esi+4]
0x7150C6: fld     [esp+0Ch+arg_0]
0x7150CA: fld     st
0x7150CC: fmulp   st(2), st
0x7150CE: fxch    st(1)
0x7150D0: fstp    dword ptr [eax]
0x7150D2: fld     st
0x7150D4: fmul    dword ptr [esi+8]
0x7150D7: fstp    dword ptr [eax+4]
0x7150DA: fmul    dword ptr [esi+0Ch]
0x7150DD: pop     esi
0x7150DE: fstp    dword ptr [eax+8]
0x7150E1: add     esp, 8
0x7150E4: retn    8
