0x546B20: push    ecx
0x546B21: fld     [esp+4+arg_0]
0x546B25: fld     [esp+4+arg_4]
0x546B29: fcom    st(1)
0x546B2B: fnstsw  ax
0x546B2D: test    ah, 41h
0x546B30: jnz     short loc_546B3A
0x546B32: fxch    st(1)
0x546B34: fst     [esp+4+arg_0]
0x546B38: jmp     short loc_546B40
0x546B3A: fst     [esp+4+arg_0]
0x546B3E: fxch    st(1)
0x546B40: fcom    st(1)
0x546B42: fnstsw  ax
0x546B44: test    ah, 41h
0x546B47: jnz     short loc_546B4D
0x546B49: fstp    st(1)
0x546B4B: jmp     short loc_546B4F
0x546B4D: fstp    st
0x546B4F: fstp    [esp+4+arg_4]
0x546B53: fld     [esp+4+arg_4]
0x546B57: fld     [esp+4+arg_0]
0x546B5B: fld     st
0x546B5D: fsubp   st(2), st
0x546B5F: fxch    st(1)
0x546B61: fstp    [esp+4+arg_4]
0x546B65: fldz
0x546B67: fcomp   [esp+4+arg_4]
0x546B6B: fnstsw  ax
0x546B6D: test    ah, 5
0x546B70: jp      short loc_546B9C
0x546B72: push    0; Seed
0x546B74: fstp    st
0x546B76: call    GetRandomLargeInteger?
0x546B7B: mov     [esp+8+var_4], eax
0x546B7F: fild    [esp+8+var_4]
0x546B83: add     esp, 4
0x546B86: fdiv    qword ptr ds:0A3D5A8h
0x546B8C: fmul    [esp+4+arg_4]
0x546B90: fadd    [esp+4+arg_0]
0x546B94: fstp    [esp+4+arg_0]
0x546B98: fld     [esp+4+arg_0]
0x546B9C: pop     ecx
0x546B9D: retn
