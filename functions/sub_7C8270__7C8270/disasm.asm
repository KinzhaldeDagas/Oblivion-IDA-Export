0x7C8270: fld     [esp+arg_0]; Fog decode: BSFogProperty default start/end helper used for active global B333E4 initialization.
0x7C8274: fmul    qword ptr ds:0A905E0h
0x7C827A: fld1
0x7C827C: fsubrp  st(1), st
0x7C827E: fmul    qword ptr ds:0A905D8h
0x7C8284: fstp    dword ptr [ecx+2Ch]; Fog decode: writes BSFogProperty +0x2C fogStart default.
0x7C8287: fld     dword ptr ds:0A3F4F0h
0x7C828D: fstp    dword ptr [ecx+30h]; Fog decode: writes BSFogProperty +0x30 fogEnd default.
0x7C8290: retn    4
