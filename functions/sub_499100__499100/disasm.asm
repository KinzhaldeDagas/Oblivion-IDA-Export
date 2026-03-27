0x499100: fld     [esp+arg_4]
0x499104: mov     eax, [esp+arg_0]
0x499108: movzx   ecx, byte ptr [eax+ecx+48h]
0x49910D: fld     [esp+arg_8]
0x499111: fld     st
0x499113: mov     [esp+arg_4], ecx
0x499117: fsubp   st(2), st
0x499119: fild    [esp+arg_4]
0x49911D: fmul    qword ptr ds:0A3F398h
0x499123: fmulp   st(2), st
0x499125: faddp   st(1), st
0x499127: fstp    [esp+arg_4]
0x49912B: fld     [esp+arg_4]
0x49912F: retn    0Ch
