0x47E0F0: push    ecx
0x47E0F1: cmp     byte ptr ds:0B069C3h, 0
0x47E0F8: jz      short loc_47E111
0x47E0FA: push    0; Time
0x47E0FC: call    __time64
0x47E101: push    eax; Seed
0x47E102: call    _srand
0x47E107: add     esp, 8
0x47E10A: mov     byte ptr ds:0B069C3h, 0
0x47E111: call    _rand
0x47E116: mov     [esp+4+var_4], eax
0x47E119: fild    [esp+4+var_4]
0x47E11C: fld1
0x47E11E: fldz
0x47E120: fsub    st(1), st
0x47E122: fxch    st(2)
0x47E124: fmulp   st(1), st
0x47E126: fdiv    qword ptr ds:0A3D5A8h
0x47E12C: faddp   st(1), st
0x47E12E: fstp    [esp+4+var_4]
0x47E131: fld     [esp+4+var_4]
0x47E134: pop     ecx
0x47E135: retn
