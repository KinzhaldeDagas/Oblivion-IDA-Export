0x683CB0: fldz
0x683CB2: push    esi
0x683CB3: mov     esi, [esp+4+arg_0]
0x683CB7: fcom    dword ptr [esi+4]
0x683CBA: fnstsw  ax
0x683CBC: test    ah, 44h
0x683CBF: jnp     short loc_683D35
0x683CC1: fstp    st
0x683CC3: fld     dword ptr [esi]
0x683CC5: fdiv    dword ptr [esi+4]
0x683CC8: fstp    [esp+4+arg_0]
0x683CCC: fld     [esp+4+arg_0]
0x683CD0: call    __CIatan
0x683CD5: fstp    [esp+4+arg_0]
0x683CD9: fld     [esp+4+arg_0]
0x683CDD: fstp    [esp+4+arg_0]
0x683CE1: fldz
0x683CE3: fcom    dword ptr [esi+4]
0x683CE6: fnstsw  ax
0x683CE8: test    ah, 41h
0x683CEB: jnz     short loc_683CFB
0x683CED: fld     [esp+4+arg_0]
0x683CF1: fadd    qword ptr ds:0A3D5B8h
0x683CF7: fstp    [esp+4+arg_0]
0x683CFB: fld     [esp+4+arg_0]
0x683CFF: fcom    st(1)
0x683D01: fnstsw  ax
0x683D03: fstp    st(1)
0x683D05: test    ah, 5
0x683D08: jp      short loc_683D4C
0x683D0A: fld     qword ptr ds:0A3D5B0h
0x683D10: fadd    st(1), st
0x683D12: fxch    st(1)
0x683D14: fstp    [esp+4+arg_0]
0x683D18: fld     [esp+4+arg_0]
0x683D1C: fxch    st(1)
0x683D1E: call    unknown_libname_14
0x683D23: fstp    [esp+4+arg_0]
0x683D27: fld     [esp+4+arg_0]
0x683D2B: pop     esi
0x683D2C: fstp    [esp+arg_0]
0x683D30: fld     [esp+arg_0]
0x683D34: retn
0x683D35: fcomp   dword ptr [esi]
0x683D37: fnstsw  ax
0x683D39: test    ah, 5
0x683D3C: jp      short loc_683D72
0x683D3E: fld     dword ptr ds:0A3F3E0h
0x683D44: fstp    [esp+4+arg_0]
0x683D48: fld     [esp+4+arg_0]
0x683D4C: fld     qword ptr ds:0A3D5B0h
0x683D52: fcom    st(1)
0x683D54: fnstsw  ax
0x683D56: test    ah, 41h
0x683D59: jp      short loc_683D7A
0x683D5B: call    unknown_libname_14
0x683D60: fstp    [esp+4+arg_0]
0x683D64: fld     [esp+4+arg_0]
0x683D68: pop     esi
0x683D69: fstp    [esp+arg_0]
0x683D6D: fld     [esp+arg_0]
0x683D71: retn
0x683D72: fld     dword ptr ds:0A74C88h
0x683D78: jmp     short loc_683D44
0x683D7A: fstp    st
0x683D7C: pop     esi
0x683D7D: retn
