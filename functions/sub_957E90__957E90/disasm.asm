0x957E90: mov     eax, [esp+arg_0]
0x957E94: fld     dword ptr [eax+0Ch]
0x957E97: mov     edx, [eax]
0x957E99: fadd    dword ptr [eax+8]
0x957E9C: cmp     edx, [eax+4]
0x957E9F: fmul    dword ptr ds:0A3D65Ch
0x957EA5: fsubr   dword ptr [eax+20h]
0x957EA8: jge     short loc_957EE1
0x957EAA: fld     dword ptr [eax+0Ch]
0x957EAD: fsub    dword ptr [eax+8]
0x957EB0: fld     dword ptr [ecx+1Ch]
0x957EB3: fcom    st(1)
0x957EB5: fnstsw  ax
0x957EB7: test    ah, 5
0x957EBA: jnp     short loc_957EC0
0x957EBC: fstp    st
0x957EBE: fld     st
0x957EC0: faddp   st(1), st
0x957EC2: fcom    dword ptr ds:0A2FAA8h
0x957EC8: fnstsw  ax
0x957ECA: test    ah, 41h
0x957ECD: jnz     short loc_957ED7
0x957ECF: fdivr   dword ptr ds:0A2F948h
0x957ED5: jmp     short loc_957EE4
0x957ED7: fstp    st
0x957ED9: fld     dword ptr ds:0AA3584h
0x957EDF: jmp     short loc_957EE4
0x957EE1: fld     dword ptr [eax+10h]
0x957EE4: fmulp   st(1), st
0x957EE6: fcom    dword ptr ds:0A2FAA8h
0x957EEC: fnstsw  ax
0x957EEE: test    ah, 5
0x957EF1: jp      short loc_957EFE
0x957EF3: fstp    st
0x957EF5: fld     dword ptr ds:0A2FAA8h
0x957EFB: retn    4
0x957EFE: fld     st
0x957F00: fmulp   st(1), st
0x957F02: fld     st
0x957F04: fmul    st, st(1)
0x957F06: fld     st
0x957F08: fmul    st, st(1)
0x957F0A: fmul    dword ptr ds:0A5739Ch
0x957F10: fxch    st(1)
0x957F12: fmul    dword ptr ds:0A46C30h
0x957F18: faddp   st(1), st
0x957F1A: fxch    st(1)
0x957F1C: fmul    dword ptr ds:0AA3580h
0x957F22: faddp   st(1), st
0x957F24: fmul    dword ptr [ecx+14h]
0x957F27: retn    4
