0x47E140: push    ecx
0x47E141: cmp     byte ptr ds:0B069C3h, 0
0x47E148: jz      short loc_47E161
0x47E14A: push    0; Time
0x47E14C: call    __time64
0x47E151: push    eax; Seed
0x47E152: call    _srand
0x47E157: add     esp, 8
0x47E15A: mov     byte ptr ds:0B069C3h, 0
0x47E161: call    _rand
0x47E166: mov     [esp+4+var_4], eax
0x47E169: fild    [esp+4+var_4]
0x47E16C: fadd    st, st
0x47E16E: fdiv    qword ptr ds:0A3D5A8h
0x47E174: fsub    qword ptr ds:0A2F928h
0x47E17A: fstp    [esp+4+var_4]
0x47E17D: fld     [esp+4+var_4]
0x47E180: pop     ecx
0x47E181: retn
