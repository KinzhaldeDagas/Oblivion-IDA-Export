0x680E70: fld     [esp+arg_0]
0x680E74: push    esi
0x680E75: mov     esi, ecx
0x680E77: fst     dword ptr [esi+18h]
0x680E7A: fldz
0x680E7C: fcomp   st(1)
0x680E7E: fnstsw  ax
0x680E80: fld     qword ptr ds:0A3D5B0h
0x680E86: test    ah, 41h
0x680E89: jnz     short loc_680EAD
0x680E8B: fadd    st(1), st
0x680E8D: fxch    st(1)
0x680E8F: fstp    [esp+4+arg_0]
0x680E93: fld     [esp+4+arg_0]
0x680E97: fxch    st(1)
0x680E99: call    unknown_libname_14
0x680E9E: fstp    [esp+4+arg_0]
0x680EA2: fld     [esp+4+arg_0]
0x680EA6: fstp    dword ptr [esi+18h]
0x680EA9: pop     esi
0x680EAA: retn    4
0x680EAD: fcom    st(1)
0x680EAF: fnstsw  ax
0x680EB1: test    ah, 41h
0x680EB4: jp      short loc_680ECA
0x680EB6: call    unknown_libname_14
0x680EBB: fstp    [esp+4+arg_0]
0x680EBF: fld     [esp+4+arg_0]
0x680EC3: fstp    dword ptr [esi+18h]
0x680EC6: pop     esi
0x680EC7: retn    4
0x680ECA: fstp    st(1)
0x680ECC: pop     esi
0x680ECD: fstp    st
0x680ECF: retn    4
