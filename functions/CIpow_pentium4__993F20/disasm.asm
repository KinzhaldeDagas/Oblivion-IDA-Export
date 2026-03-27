0x993F20: push    ebp
0x993F21: mov     ebp, esp
0x993F23: sub     esp, 10h
0x993F26: and     esp, 0FFFFFFF0h
0x993F29: fxch    st(1)
0x993F2B: fstp    [esp+10h+var_10]
0x993F2E: fstp    [esp+10h+var_8]
0x993F32: call    __pow_pentium4
0x993F37: leave
0x993F38: retn
