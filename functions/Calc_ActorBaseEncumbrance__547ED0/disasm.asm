0x547ED0: fld     dword ptr ds:0B37570h
0x547ED6: fmul    [esp+arg_0]
0x547EDA: fstp    [esp+arg_0]
0x547EDE: fldz
0x547EE0: fld     [esp+arg_0]
0x547EE4: fcom    st(1)
0x547EE6: fnstsw  ax
0x547EE8: test    ah, 5
0x547EEB: jp      short loc_547EF8
0x547EED: fstp    st
0x547EEF: fstp    [esp+arg_0]
0x547EF3: fld     [esp+arg_0]
0x547EF7: retn
0x547EF8: fstp    st(1)
0x547EFA: retn
