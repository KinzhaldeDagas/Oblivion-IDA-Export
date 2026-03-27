0x7B70E0: sub     esp, 8
0x7B70E3: fld     [esp+8+arg_0]
0x7B70E7: fmul    qword ptr ds:0A2FAA0h
0x7B70ED: fmul    qword ptr ds:0A31C78h
0x7B70F3: fstp    [esp+8+arg_0]
0x7B70F7: fld     [esp+8+arg_0]
0x7B70FB: call    __CIsin
0x7B7100: fstp    [esp+8+var_8]
0x7B7103: fld     [esp+8+var_8]
0x7B7106: fstp    [esp+8+var_8]
0x7B7109: fld     [esp+8+arg_0]
0x7B710D: call    __CIcos
0x7B7112: fstp    [esp+8+arg_0]
0x7B7116: fld     [esp+8+arg_0]
0x7B711A: fdivr   [esp+8+var_8]
0x7B711D: fstp    [esp+8+arg_0]
0x7B7121: fld     [esp+8+arg_0]
0x7B7125: fstp    [esp+8+var_4]
0x7B7129: fld     qword ptr ds:0A690D0h
0x7B712F: call    __CIsin
0x7B7134: fstp    [esp+8+arg_0]
0x7B7138: fld     [esp+8+arg_0]
0x7B713C: fstp    [esp+8+var_8]
0x7B713F: fld     qword ptr ds:0A690D0h
0x7B7145: call    __CIcos
0x7B714A: fstp    [esp+8+arg_0]
0x7B714E: fld     [esp+8+arg_0]
0x7B7152: fdivr   [esp+8+var_8]
0x7B7155: fdivr   [esp+8+var_4]
0x7B7159: fstp    dword ptr ds:0B2D80Ch
0x7B715F: add     esp, 8
0x7B7162: retn
