0x548A60: mov     eax, 64h ; 'd'
0x548A65: cmp     [esp+arg_C], eax
0x548A69: jle     short loc_548A6F
0x548A6B: mov     [esp+arg_C], eax
0x548A6F: fild    [esp+arg_C]
0x548A73: mov     ecx, [esp+arg_10]
0x548A77: test    ecx, ecx
0x548A79: mov     eax, ecx
0x548A7B: fmul    [esp+arg_4]
0x548A7F: fadd    [esp+arg_0]
0x548A83: fld     qword ptr ds:0A309F0h
0x548A89: fdiv    st(1), st
0x548A8B: jge     short loc_548A8F
0x548A8D: neg     eax
0x548A8F: fld1
0x548A91: fld     st
0x548A93: test    al, 1
0x548A95: jz      short loc_548A99
0x548A97: fmul    st, st(3)
0x548A99: shr     eax, 1
0x548A9B: jz      short loc_548AA3
0x548A9D: fld     st(3)
0x548A9F: fmulp   st(4), st
0x548AA1: jmp     short loc_548A93
0x548AA3: test    ecx, ecx
0x548AA5: fstp    st(3)
0x548AA7: jge     short loc_548ABA
0x548AA9: fdivrp  st(2), st
0x548AAB: fmulp   st(1), st
0x548AAD: fadd    [esp+arg_8]
0x548AB1: fstp    [esp+arg_C]
0x548AB5: fld     [esp+arg_C]
0x548AB9: retn
0x548ABA: fstp    st
0x548ABC: fmulp   st(1), st
0x548ABE: fadd    [esp+arg_8]
0x548AC2: fstp    [esp+arg_C]
0x548AC6: fld     [esp+arg_C]
0x548ACA: retn
