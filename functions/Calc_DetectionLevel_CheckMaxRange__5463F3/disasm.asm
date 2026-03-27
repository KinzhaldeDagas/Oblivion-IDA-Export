0x5463F3: cmp     [esp+arg_4C], 0
0x5463F8: fld     dword ptr ds:0B36708h
0x5463FE: fstp    dword ptr [esp+0]
0x546401: jz      short loc_54640F
0x546403: fld     dword ptr ds:0B36748h
0x546409: fmul    dword ptr [esp+0]
0x54640C: fstp    dword ptr [esp+0]
0x54640F: fld     dword ptr [esp+0]
0x546412: mov     cl, [esp+arg_38]
0x546416: fld     [esp+arg_1C]
0x54641A: fcom    st(1)
0x54641C: fnstsw  ax
0x54641E: test    ah, 41h
0x546421: jnz     short Calc_DetectionLevel___CalcDistFactor
0x546423: test    cl, cl
0x546425: jnz     short Calc_DetectionLevel___CalcDistFactor
0x546427: fstp    st(1)
0x546429: xor     eax, eax
0x54642B: fstp    st
0x54642D: add     esp, 10h
0x546430: retn
