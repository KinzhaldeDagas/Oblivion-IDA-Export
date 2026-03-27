0x546720: fild    [esp+arg_0]
0x546724: push    ecx
0x546725: fmul    dword ptr ds:0B36988h
0x54672B: fadd    dword ptr ds:0B36980h
0x546731: fstp    [esp+4+arg_0]
0x546735: fld     [esp+4+arg_4]
0x546739: fstp    [esp+4+var_4]; float
0x54673C: call    Calc_FatigueFactor
0x546741: fmul    [esp+4+arg_0]
0x546745: add     esp, 4
0x546748: fstp    [esp+arg_0]
0x54674C: fld     dword ptr ds:0B36990h
0x546752: fsub    [esp+arg_0]
0x546756: fmul    qword ptr ds:0A2FAA0h
0x54675C: fstp    [esp+arg_0]
0x546760: fld     [esp+arg_0]
0x546764: retn
