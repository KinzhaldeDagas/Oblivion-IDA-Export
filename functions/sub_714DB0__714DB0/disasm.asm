0x714DB0: push    ecx
0x714DB1: push    esi
0x714DB2: mov     esi, [esp+8+arg_4]
0x714DB6: fld     dword ptr [esi]
0x714DB8: fstp    [esp+8+arg_4]
0x714DBC: fld     [esp+8+arg_4]
0x714DC0: fcom    qword ptr ds:0A3D360h
0x714DC6: fnstsw  ax
0x714DC8: test    ah, 41h
0x714DCB: jnz     short loc_714DED
0x714DCD: fld1
0x714DCF: fcomp   st(1)
0x714DD1: fnstsw  ax
0x714DD3: test    ah, 41h
0x714DD6: jnz     short loc_714DE7
0x714DD8: call    __CIacos
0x714DDD: fstp    [esp+8+arg_4]
0x714DE1: fld     [esp+8+arg_4]
0x714DE5: jmp     short loc_714DF5
0x714DE7: fstp    st
0x714DE9: fldz
0x714DEB: jmp     short loc_714DF5
0x714DED: fstp    st
0x714DEF: fld     dword ptr ds:0B3F9A4h
0x714DF5: fstp    [esp+8+arg_4]
0x714DF9: fld     [esp+8+arg_4]
0x714DFD: call    __CIsin
0x714E02: fstp    [esp+8+var_4]
0x714E06: fld     [esp+8+var_4]
0x714E0A: fstp    [esp+8+var_4]
0x714E0E: fld     [esp+8+var_4]
0x714E12: fld     st
0x714E14: fabs
0x714E16: fstp    [esp+8+var_4]
0x714E1A: fld     [esp+8+var_4]
0x714E1E: fcomp   dword ptr ds:0A7EAB0h
0x714E24: fnstsw  ax
0x714E26: test    ah, 5
0x714E29: jp      short loc_714E31
0x714E2B: fstp    st
0x714E2D: fld1
0x714E2F: jmp     short loc_714E35
0x714E31: fdivr   [esp+8+arg_4]
0x714E35: mov     eax, [esp+8+arg_0]
0x714E39: fstp    [esp+8+arg_4]
0x714E3D: fldz
0x714E3F: fstp    dword ptr [eax]
0x714E41: fld     dword ptr [esi+4]
0x714E44: fld     [esp+8+arg_4]
0x714E48: fld     st
0x714E4A: fmulp   st(2), st
0x714E4C: fxch    st(1)
0x714E4E: fstp    dword ptr [eax+4]
0x714E51: fld     dword ptr [esi+8]
0x714E54: fmul    st, st(1)
0x714E56: fstp    dword ptr [eax+8]
0x714E59: fmul    dword ptr [esi+0Ch]
0x714E5C: pop     esi
0x714E5D: fstp    dword ptr [eax+0Ch]
0x714E60: pop     ecx
0x714E61: retn
