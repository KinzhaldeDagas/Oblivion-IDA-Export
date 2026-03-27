0x7415E0: mov     eax, [esp+arg_0]
0x7415E4: fld     dword ptr [eax+4]
0x7415E7: fmul    dword ptr [ecx+4]
0x7415EA: fld     dword ptr [eax]
0x7415EC: fmul    dword ptr [ecx]
0x7415EE: faddp   st(1), st
0x7415F0: fld     dword ptr [eax+8]
0x7415F3: fmul    dword ptr [ecx+8]
0x7415F6: faddp   st(1), st
0x7415F8: fsub    dword ptr [ecx+0Ch]
0x7415FB: fstp    [esp+arg_0]
0x7415FF: fldz
0x741601: fld     [esp+arg_0]
0x741605: fcom    st(1)
0x741607: fnstsw  ax
0x741609: test    ah, 5
0x74160C: jp      short loc_74161A
0x74160E: fstp    st(1)
0x741610: mov     eax, 2
0x741615: fstp    st
0x741617: retn    4
0x74161A: fcompp
0x74161C: fnstsw  ax
0x74161E: test    ah, 41h
0x741621: jnz     short loc_74162B
0x741623: mov     eax, 1
0x741628: retn    4
0x74162B: xor     eax, eax
0x74162D: retn    4
