0x549020: fld     dword ptr ds:0B380D0h
0x549026: fmul    [esp+arg_4]
0x54902A: fstp    [esp+arg_4]
0x54902E: fld     [esp+arg_4]
0x549032: fild    dword ptr ds:0B38288h
0x549038: fcomp   st(1)
0x54903A: fnstsw  ax
0x54903C: test    ah, 41h
0x54903F: jp      short loc_549046
0x549041: fstp    st
0x549043: mov     al, 1
0x549045: retn
0x549046: fild    [esp+arg_0]
0x54904A: fcompp
0x54904C: fnstsw  ax
0x54904E: test    ah, 41h
0x549051: jp      short loc_549059
0x549053: mov     eax, 1
0x549058: retn
0x549059: xor     eax, eax
0x54905B: retn
