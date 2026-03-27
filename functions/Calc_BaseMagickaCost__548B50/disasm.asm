0x548B50: push    ecx
0x548B51: fild    [esp+4+arg_4]
0x548B55: fmul    dword ptr ds:0B37DD0h
0x548B5B: fld1
0x548B5D: fcom    st(1)
0x548B5F: fnstsw  ax
0x548B61: test    ah, 5
0x548B64: jp      short loc_548B6A
0x548B66: fstp    st
0x548B68: jmp     short loc_548B6C
0x548B6A: fstp    st(1)
0x548B6C: cmp     [esp+4+arg_8], 0
0x548B71: fstp    [esp+4+var_4]
0x548B74: fld1
0x548B76: jnz     short loc_548B7E
0x548B78: fst     [esp+4+arg_8]
0x548B7C: jmp     short loc_548B86
0x548B7E: fild    [esp+4+arg_8]
0x548B82: fstp    [esp+4+arg_8]
0x548B86: cmp     [esp+4+arg_C], 0
0x548B8B: fld     dword ptr ds:0B37DD8h
0x548B91: fmul    [esp+4+arg_0]
0x548B95: fmul    [esp+4+arg_8]
0x548B99: fstp    [esp+4+arg_4]
0x548B9D: jnz     short loc_548BA5
0x548B9F: fst     [esp+4+arg_8]
0x548BA3: jmp     short loc_548BC4
0x548BA5: fstp    st
0x548BA7: fild    [esp+4+arg_C]
0x548BAB: fld     dword ptr ds:0B38270h
0x548BB1: call    __CIpow
0x548BB6: fstp    [esp+4+arg_8]
0x548BBA: fld     [esp+4+arg_8]
0x548BBE: fstp    [esp+4+arg_8]
0x548BC2: fld1
0x548BC4: cmp     byte ptr [esp+4+arg_10], 0
0x548BC9: fld     [esp+4+arg_4]
0x548BCD: fmul    [esp+4+var_4]
0x548BD0: fmul    [esp+4+arg_8]
0x548BD4: fstp    [esp+4+arg_8]
0x548BD8: jz      short loc_548BE2
0x548BDA: fstp    st
0x548BDC: fld     dword ptr ds:0B37DE0h
0x548BE2: fstp    [esp+4+arg_10]
0x548BE6: fld     [esp+4+arg_10]
0x548BEA: fmul    [esp+4+arg_8]
0x548BEE: fstp    [esp+4+arg_10]
0x548BF2: fld     [esp+4+arg_10]
0x548BF6: pop     ecx
0x548BF7: retn
