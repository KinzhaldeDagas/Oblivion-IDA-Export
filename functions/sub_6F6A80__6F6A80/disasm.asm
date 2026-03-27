0x6F6A80: push    ebp
0x6F6A81: mov     ebp, esp
0x6F6A83: and     esp, 0FFFFFFF8h
0x6F6A86: sub     esp, 10h
0x6F6A89: jmp     short loc_6F6A8D
0x6F6A8B: fstp    st
0x6F6A8D: call    sub_6F6A10
0x6F6A92: fadd    st, st
0x6F6A94: fsub    qword ptr ds:0A2F928h
0x6F6A9A: fstp    [esp+10h+var_10]
0x6F6A9D: call    sub_6F6A10
0x6F6AA2: fadd    st, st
0x6F6AA4: fld1
0x6F6AA6: fsub    st(1), st
0x6F6AA8: fxch    st(1)
0x6F6AAA: fst     [esp+10h+var_8]
0x6F6AAE: fmul    st, st
0x6F6AB0: fld     [esp+10h+var_10]
0x6F6AB3: fmul    st, st
0x6F6AB5: faddp   st(1), st
0x6F6AB7: fst     [esp+10h+var_10]
0x6F6ABA: fcom    st(1)
0x6F6ABC: fnstsw  ax
0x6F6ABE: fstp    st(1)
0x6F6AC0: test    ah, 41h
0x6F6AC3: jz      short loc_6F6A8B
0x6F6AC5: fldz
0x6F6AC7: fucomp  st(1)
0x6F6AC9: fnstsw  ax
0x6F6ACB: test    ah, 44h
0x6F6ACE: jnp     short loc_6F6A8B
0x6F6AD0: call    __CIlog
0x6F6AD5: fmul    qword ptr ds:0A3F400h
0x6F6ADB: fdiv    [esp+10h+var_10]
0x6F6ADE: call    __CIsqrt
0x6F6AE3: fmul    [esp+10h+var_8]
0x6F6AE7: mov     esp, ebp
0x6F6AE9: pop     ebp
0x6F6AEA: retn
