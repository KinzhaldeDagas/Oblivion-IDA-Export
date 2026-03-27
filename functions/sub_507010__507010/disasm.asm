0x507010: mov     ecx, [esp+arg_4]
0x507014: test    ecx, ecx
0x507016: mov     eax, ecx
0x507018: jge     short loc_50701C
0x50701A: neg     eax
0x50701C: fld1
0x50701E: fstp    [esp+arg_4]
0x507022: test    al, 1
0x507024: fld     [esp+arg_0]
0x507028: jz      short loc_507034
0x50702A: fld     [esp+arg_4]
0x50702E: fmul    st, st(1)
0x507030: fstp    [esp+arg_4]
0x507034: shr     eax, 1
0x507036: jz      short loc_507040
0x507038: fmul    st, st
0x50703A: fstp    [esp+arg_0]
0x50703E: jmp     short loc_507022
0x507040: test    ecx, ecx
0x507042: fstp    st
0x507044: fld     [esp+arg_4]
0x507048: jge     short loc_50704E
0x50704A: fld1
0x50704C: fdivrp  st(1), st
0x50704E: fstp    [esp+arg_4]
0x507052: fld     [esp+arg_4]
0x507056: retn
