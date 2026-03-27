0x5482B0: cmp     byte ptr [esp+arg_4], 0
0x5482B5: jz      short loc_5482D2
0x5482B7: fld     dword ptr ds:0B37710h
0x5482BD: fstp    [esp+arg_4]
0x5482C1: fild    [esp+arg_0]
0x5482C5: fmul    [esp+arg_4]
0x5482C9: fiadd   [esp+arg_0]
0x5482CD: jmp     Double_To_SInt32
0x5482D2: fld     dword ptr ds:0B37718h
0x5482D8: fstp    [esp+arg_4]
0x5482DC: fild    [esp+arg_0]
0x5482E0: fmul    [esp+arg_4]
0x5482E4: fiadd   [esp+arg_0]
0x5482E8: jmp     Double_To_SInt32
