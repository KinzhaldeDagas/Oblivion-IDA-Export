0x546D10: mov     eax, [esp+arg_8]
0x546D14: sub     eax, [esp+arg_4]
0x546D18: mov     [esp+arg_8], eax
0x546D1C: fild    [esp+arg_8]
0x546D20: fmul    dword ptr ds:0B36D60h
0x546D26: fld     dword ptr ds:0B36D58h
0x546D2C: fadd    [esp+arg_0]
0x546D30: faddp   st(1), st
0x546D32: fstp    [esp+arg_8]
0x546D36: fld     [esp+arg_8]
0x546D3A: retn
