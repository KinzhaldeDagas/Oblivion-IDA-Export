0x47FB70: push    ecx
0x47FB71: cmp     byte ptr ds:0B069C3h, 0
0x47FB78: jz      short loc_47FB91
0x47FB7A: push    0; Time
0x47FB7C: call    __time64
0x47FB81: push    eax; Seed
0x47FB82: call    _srand
0x47FB87: add     esp, 8
0x47FB8A: mov     byte ptr ds:0B069C3h, 0
0x47FB91: call    _rand
0x47FB96: mov     [esp+4+var_4], eax
0x47FB99: fild    [esp+4+var_4]
0x47FB9C: fld1
0x47FB9E: fldz
0x47FBA0: fsub    st(1), st
0x47FBA2: fxch    st(2)
0x47FBA4: fmulp   st(1), st
0x47FBA6: fdiv    qword ptr ds:0A3D5A8h
0x47FBAC: faddp   st(1), st
0x47FBAE: fstp    [esp+4+var_4]
0x47FBB1: fld     [esp+4+var_4]
0x47FBB4: fld     [esp+4+arg_0]
0x47FBB8: fcompp
0x47FBBA: fnstsw  ax
0x47FBBC: test    ah, 1
0x47FBBF: jnz     short loc_47FBC8
0x47FBC1: mov     eax, 1
0x47FBC6: pop     ecx
0x47FBC7: retn
0x47FBC8: xor     eax, eax
0x47FBCA: pop     ecx
0x47FBCB: retn
