0x47E060: push    ecx
0x47E061: cmp     byte ptr ds:0B069C3h, 0
0x47E068: jz      short loc_47E081
0x47E06A: push    0; Time
0x47E06C: call    __time64
0x47E071: push    eax; Seed
0x47E072: call    _srand
0x47E077: add     esp, 8
0x47E07A: mov     byte ptr ds:0B069C3h, 0
0x47E081: call    _rand
0x47E086: mov     [esp+4+var_4], eax
0x47E089: fild    [esp+4+var_4]
0x47E08C: fld     [esp+4+arg_4]
0x47E090: fld     [esp+4+arg_0]
0x47E094: fld     st
0x47E096: fsubp   st(2), st
0x47E098: fxch    st(2)
0x47E09A: fmulp   st(1), st
0x47E09C: fdiv    qword ptr ds:0A3D5A8h
0x47E0A2: faddp   st(1), st
0x47E0A4: fstp    [esp+4+arg_4]
0x47E0A8: fld     [esp+4+arg_4]
0x47E0AC: pop     ecx
0x47E0AD: retn
