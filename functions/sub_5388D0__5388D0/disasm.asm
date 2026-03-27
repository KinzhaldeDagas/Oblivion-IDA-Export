0x5388D0: push    ecx
0x5388D1: push    0; Seed
0x5388D3: call    GetRandomLargeInteger?
0x5388D8: sub     eax, 3FFFh
0x5388DD: mov     [esp+8+var_4], eax
0x5388E1: fild    [esp+8+var_4]
0x5388E5: fdiv    qword ptr ds:0A56378h
0x5388EB: fstp    [esp+8+var_4]
0x5388EF: fld     [esp+8+var_4]
0x5388F3: fmul    [esp+8+arg_0]
0x5388F7: fstp    [esp+8+arg_0]
0x5388FB: fld     [esp+8+arg_0]
0x5388FF: add     esp, 8
0x538902: retn    4
