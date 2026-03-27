0x54F5E0: fld     [esp+arg_0]
0x54F5E4: fld     qword ptr ds:0A3D360h
0x54F5EA: fmul    st(1), st
0x54F5EC: fld     [esp+arg_4]
0x54F5F0: faddp   st(2), st
0x54F5F2: fxch    st(1)
0x54F5F4: fstp    [esp+arg_0]
0x54F5F8: fldz
0x54F5FA: fld     [esp+arg_0]
0x54F5FE: fcom    st(1)
0x54F600: fnstsw  ax
0x54F602: test    ah, 1
0x54F605: jnz     short loc_54F616
0x54F607: mov     eax, [esp+arg_8]
0x54F60B: fstp    st(2)
0x54F60D: mov     ecx, [esp+arg_C]
0x54F611: fstp    dword ptr [eax]
0x54F613: fstp    dword ptr [ecx]
0x54F615: retn
0x54F616: mov     edx, [esp+arg_8]
0x54F61A: fmulp   st(2), st
0x54F61C: mov     eax, [esp+arg_C]
0x54F620: fxch    st(1)
0x54F622: fstp    dword ptr [edx]
0x54F624: fstp    dword ptr [eax]
0x54F626: retn
