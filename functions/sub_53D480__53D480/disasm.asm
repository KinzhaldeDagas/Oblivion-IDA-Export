0x53D480: push    ecx
0x53D481: call    _rand
0x53D486: mov     [esp+4+var_4], eax
0x53D489: fild    [esp+4+var_4]
0x53D48C: fadd    st, st
0x53D48E: fdiv    qword ptr ds:0A3D5A8h
0x53D494: fsub    qword ptr ds:0A2F928h
0x53D49A: fstp    [esp+4+var_4]
0x53D49D: fld     [esp+4+var_4]
0x53D4A0: pop     ecx
0x53D4A1: retn
