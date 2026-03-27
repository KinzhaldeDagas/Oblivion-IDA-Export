0x928150: mov     eax, [esp+arg_0]
0x928154: mov     edx, [esp+arg_4]
0x928158: mov     dword ptr [edx+4], 0
0x92815F: fld     dword ptr [eax+8]
0x928162: fsub    dword ptr [eax+4]
0x928165: fstp    dword ptr [edx]
0x928167: fld     dword ptr ds:0A2F948h
0x92816D: fdiv    dword ptr [eax]
0x92816F: mov     eax, [eax+0Ch]
0x928172: fld     dword ptr [eax]
0x928174: fld     st
0x928176: fmul    dword ptr [ecx+8]
0x928179: fmul    st, st(1)
0x92817B: fmul    st, st(2)
0x92817D: fcom    dword ptr ds:0A2FAA8h
0x928183: fnstsw  ax
0x928185: test    ah, 5
0x928188: jp      short loc_928194
0x92818A: fstp    st
0x92818C: fld     dword ptr ds:0A2FAA8h
0x928192: jmp     short loc_9281A9
0x928194: fcom    dword ptr ds:0A2F948h
0x92819A: fnstsw  ax
0x92819C: test    ah, 41h
0x92819F: jnz     short loc_9281A9
0x9281A1: fstp    st
0x9281A3: fld     dword ptr ds:0A2F948h
0x9281A9: fstp    dword ptr [edx+10h]
0x9281AC: fmul    dword ptr [ecx+0Ch]
0x9281AF: fmulp   st(1), st
0x9281B1: fcom    dword ptr ds:0A2FAA8h
0x9281B7: fnstsw  ax
0x9281B9: test    ah, 5
0x9281BC: jp      short loc_9281C8
0x9281BE: fstp    st
0x9281C0: fld     dword ptr ds:0A2FAA8h
0x9281C6: jmp     short loc_9281DD
0x9281C8: fcom    dword ptr ds:0A2F948h
0x9281CE: fnstsw  ax
0x9281D0: test    ah, 41h
0x9281D3: jnz     short loc_9281DD
0x9281D5: fstp    st
0x9281D7: fld     dword ptr ds:0A2F948h
0x9281DD: fstp    dword ptr [edx+14h]
0x9281E0: mov     dword ptr [edx+18h], 1
0x9281E7: mov     eax, [ecx+10h]
0x9281EA: mov     [edx+8], eax
0x9281ED: mov     ecx, [ecx+14h]
0x9281F0: mov     [edx+0Ch], ecx
0x9281F3: retn    8
