0x547910: push    ecx
0x547911: fld     [esp+4+arg_0]
0x547915: fsub    [esp+4+arg_4]
0x547919: fmul    dword ptr ds:0B37308h
0x54791F: fstp    [esp+4+var_4]
0x547922: fld     [esp+4+arg_C]
0x547926: fdiv    [esp+4+arg_8]
0x54792A: fmul    dword ptr ds:0B37310h
0x547930: fstp    [esp+4+arg_4]
0x547934: fld     [esp+4+arg_10]
0x547938: fsub    dword ptr ds:0B37320h
0x54793E: fldz
0x547940: fcom    st(1)
0x547942: fnstsw  ax
0x547944: test    ah, 5
0x547947: jp      short loc_54794D
0x547949: fstp    st
0x54794B: jmp     short loc_54794F
0x54794D: fstp    st(1)
0x54794F: fstp    [esp+4+arg_0]
0x547953: fld     [esp+4+arg_0]
0x547957: fdiv    qword ptr ds:0A309F0h
0x54795D: fld1
0x54795F: fadd    st(1), st
0x547961: fxch    st(1)
0x547963: fstp    [esp+4+arg_0]
0x547967: fdiv    [esp+4+arg_0]
0x54796B: fstp    [esp+4+arg_0]
0x54796F: fld     [esp+4+arg_0]
0x547973: fld     dword ptr ds:0B37318h
0x547979: call    __CIpow
0x54797E: fstp    [esp+4+arg_0]
0x547982: fld     [esp+4+arg_0]
0x547986: fld     [esp+4+arg_4]
0x54798A: fadd    [esp+4+var_4]
0x54798D: fmulp   st(1), st
0x54798F: fstp    [esp+4+arg_0]
0x547993: fld     [esp+4+arg_0]
0x547997: pop     ecx
0x547998: retn
