0x88FEE0: mov     edx, [esp+arg_0]
0x88FEE4: fld     dword ptr ds:0A96588h
0x88FEEA: fcomp   dword ptr [ecx+edx*4+50h]
0x88FEEE: fnstsw  ax
0x88FEF0: test    ah, 44h
0x88FEF3: jp      short loc_88FF00
0x88FEF5: fld     [esp+arg_4]
0x88FEF9: fstp    dword ptr [ecx+edx*4+50h]
0x88FEFD: retn    8
0x88FF00: fld     dword ptr [ecx+edx*4+50h]
0x88FF04: fadd    [esp+arg_4]
0x88FF08: fstp    [esp+arg_4]
0x88FF0C: fld     [esp+arg_4]
0x88FF10: fmul    qword ptr ds:0A2FAA0h
0x88FF16: fstp    dword ptr [ecx+edx*4+50h]
0x88FF1A: retn    8
