0x7EB080: push    ecx
0x7EB081: cmp     byte ptr ds:0B2D91Ch, 0
0x7EB088: jz      short loc_7EB0D1
0x7EB08A: fld     [esp+4+arg_0]
0x7EB08E: fld     st
0x7EB090: fld1
0x7EB092: fsub    st(1), st
0x7EB094: fxch    st(1)
0x7EB096: fmul    qword ptr ds:0A2FC80h
0x7EB09C: faddp   st(1), st
0x7EB09E: fstp    [esp+4+var_4]
0x7EB0A1: fmul    dword ptr ds:0B46128h
0x7EB0A7: fld     dword ptr ds:0B46124h
0x7EB0AD: fcom    st(1)
0x7EB0AF: fnstsw  ax
0x7EB0B1: test    ah, 41h
0x7EB0B4: jnz     short loc_7EB0BA
0x7EB0B6: fstp    st(1)
0x7EB0B8: jmp     short loc_7EB0BC
0x7EB0BA: fstp    st
0x7EB0BC: fstp    dword ptr ds:0B46124h
0x7EB0C2: fld     [esp+4+var_4]
0x7EB0C5: fst     dword ptr ds:0B46120h
0x7EB0CB: fstp    dword ptr ds:0B2D918h
0x7EB0D1: pop     ecx
0x7EB0D2: retn
