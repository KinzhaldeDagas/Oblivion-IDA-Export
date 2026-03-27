0x47E0B0: push    ecx
0x47E0B1: cmp     byte ptr ds:0B069C3h, 0
0x47E0B8: jz      short loc_47E0D1
0x47E0BA: push    0; Time
0x47E0BC: call    __time64
0x47E0C1: push    eax; Seed
0x47E0C2: call    _srand
0x47E0C7: add     esp, 8
0x47E0CA: mov     byte ptr ds:0B069C3h, 0
0x47E0D1: call    _rand
0x47E0D6: mov     [esp+4+var_4], eax
0x47E0D9: fild    [esp+4+var_4]
0x47E0DC: fmul    [esp+4+arg_0]
0x47E0E0: fdiv    qword ptr ds:0A3D5A8h
0x47E0E6: fstp    [esp+4+arg_0]
0x47E0EA: fld     [esp+4+arg_0]
0x47E0EE: pop     ecx
0x47E0EF: retn
