0x547B00: fild    [esp+arg_8]
0x547B04: fmul    [esp+arg_C]
0x547B08: fiadd   [esp+arg_4]
0x547B0C: fild    [esp+arg_18]
0x547B10: fisub   [esp+arg_1C]
0x547B14: fsub    qword ptr ds:0A309F0h
0x547B1A: fmul    [esp+arg_20]
0x547B1E: fsubp   st(1), st
0x547B20: fld     [esp+arg_14]
0x547B24: call    __CIpow
0x547B29: fmul    [esp+arg_0]
0x547B2D: call    Double_To_SInt32
0x547B32: mov     ecx, [esp+arg_10]
0x547B36: cmp     eax, ecx
0x547B38: jle     short locret_547B3C
0x547B3A: mov     eax, ecx
0x547B3C: retn
