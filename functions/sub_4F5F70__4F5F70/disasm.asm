0x4F5F70: push    ecx
0x4F5F71: mov     eax, [ecx+10h]
0x4F5F74: fld     qword ptr ds:0A3F398h
0x4F5F7A: test    eax, eax
0x4F5F7C: mov     dl, 8
0x4F5F7E: jz      short loc_4F5FB6
0x4F5F80: test    [eax+53h], dl
0x4F5F83: jz      short loc_4F5FB6
0x4F5F85: movzx   eax, byte ptr [eax+4Eh]
0x4F5F89: fld     dword ptr [ecx+0D8h]
0x4F5F8F: mov     [esp+4+var_4], eax
0x4F5F92: fild    [esp+4+var_4]
0x4F5F95: fmul    st, st(2)
0x4F5F97: fld     qword ptr ds:0A3F460h
0x4F5F9D: fldz
0x4F5F9F: fsub    st(1), st
0x4F5FA1: fxch    st(2)
0x4F5FA3: fmulp   st(1), st
0x4F5FA5: faddp   st(1), st
0x4F5FA7: fstp    [esp+4+var_4]
0x4F5FAA: fld     [esp+4+var_4]
0x4F5FAD: fcompp
0x4F5FAF: fnstsw  ax
0x4F5FB1: test    ah, 5
0x4F5FB4: jnp     short loc_4F5FF8
0x4F5FB6: mov     eax, [ecx+14h]
0x4F5FB9: test    eax, eax
0x4F5FBB: jz      short loc_4F6001
0x4F5FBD: test    [eax+53h], dl
0x4F5FC0: jz      short loc_4F6001
0x4F5FC2: fld     dword ptr [ecx+0D8h]
0x4F5FC8: movzx   ecx, byte ptr [eax+4Fh]
0x4F5FCC: mov     [esp+4+var_4], ecx
0x4F5FCF: fild    [esp+4+var_4]
0x4F5FD2: fmulp   st(2), st
0x4F5FD4: fxch    st(1)
0x4F5FD6: fmul    qword ptr ds:0A48DD8h
0x4F5FDC: fadd    qword ptr ds:0A30E40h
0x4F5FE2: fstp    [esp+4+var_4]
0x4F5FE5: fld     [esp+4+var_4]
0x4F5FE8: fcompp
0x4F5FEA: fnstsw  ax
0x4F5FEC: test    ah, 41h
0x4F5FEF: jnz     short loc_4F6003
0x4F5FF1: mov     eax, 1
0x4F5FF6: pop     ecx
0x4F5FF7: retn
0x4F5FF8: fstp    st
0x4F5FFA: mov     eax, 1
0x4F5FFF: pop     ecx
0x4F6000: retn
0x4F6001: fstp    st
0x4F6003: xor     eax, eax
0x4F6005: pop     ecx
0x4F6006: retn
