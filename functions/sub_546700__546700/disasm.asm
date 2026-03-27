0x546700: fild    [esp+arg_0]
0x546704: fild    [esp+arg_4]
0x546708: fmul    dword ptr ds:0B36A58h
0x54670E: fcompp
0x546710: fnstsw  ax
0x546712: test    ah, 41h
0x546715: jnz     short loc_54671A
0x546717: mov     al, 1
0x546719: retn
0x54671A: xor     al, al
0x54671C: retn
