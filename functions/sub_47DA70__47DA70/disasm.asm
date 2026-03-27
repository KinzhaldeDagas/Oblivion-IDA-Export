0x47DA70: mov     eax, [esp+arg_0]
0x47DA74: fld     dword ptr [eax+4]
0x47DA77: fmul    dword ptr [ecx+4]
0x47DA7A: fld     dword ptr [eax]
0x47DA7C: fmul    dword ptr [ecx]
0x47DA7E: faddp   st(1), st
0x47DA80: fld     dword ptr [eax+8]
0x47DA83: fmul    dword ptr [ecx+8]
0x47DA86: faddp   st(1), st
0x47DA88: fstp    [esp+arg_0]
0x47DA8C: fld     [esp+arg_0]
0x47DA90: fsub    dword ptr [eax+0Ch]
0x47DA93: fstp    [esp+arg_0]
0x47DA97: fld     [esp+arg_0]
0x47DA9B: fld     dword ptr [ecx+0Ch]
0x47DA9E: fchs
0x47DAA0: fcomp   st(1)
0x47DAA2: fnstsw  ax
0x47DAA4: test    ah, 1
0x47DAA7: jnz     short loc_47DAB3
0x47DAA9: fstp    st
0x47DAAB: mov     eax, 2
0x47DAB0: retn    4
0x47DAB3: fld     dword ptr [ecx+0Ch]
0x47DAB6: fcompp
0x47DAB8: fnstsw  ax
0x47DABA: test    ah, 41h
0x47DABD: jp      short loc_47DAC7
0x47DABF: mov     eax, 1
0x47DAC4: retn    4
0x47DAC7: xor     eax, eax
0x47DAC9: retn    4
