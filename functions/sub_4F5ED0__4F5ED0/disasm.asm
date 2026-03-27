0x4F5ED0: push    ecx
0x4F5ED1: mov     eax, [ecx+10h]
0x4F5ED4: fld     qword ptr ds:0A3F398h
0x4F5EDA: test    eax, eax
0x4F5EDC: mov     dl, 4
0x4F5EDE: jz      short loc_4F5F16
0x4F5EE0: test    [eax+53h], dl
0x4F5EE3: jz      short loc_4F5F16
0x4F5EE5: movzx   eax, byte ptr [eax+4Eh]
0x4F5EE9: fld     dword ptr [ecx+0D8h]
0x4F5EEF: mov     [esp+4+var_4], eax
0x4F5EF2: fild    [esp+4+var_4]
0x4F5EF5: fmul    st, st(2)
0x4F5EF7: fld     qword ptr ds:0A3F460h
0x4F5EFD: fldz
0x4F5EFF: fsub    st(1), st
0x4F5F01: fxch    st(2)
0x4F5F03: fmulp   st(1), st
0x4F5F05: faddp   st(1), st
0x4F5F07: fstp    [esp+4+var_4]
0x4F5F0A: fld     [esp+4+var_4]
0x4F5F0D: fcompp
0x4F5F0F: fnstsw  ax
0x4F5F11: test    ah, 5
0x4F5F14: jnp     short loc_4F5F58
0x4F5F16: mov     eax, [ecx+14h]
0x4F5F19: test    eax, eax
0x4F5F1B: jz      short loc_4F5F61
0x4F5F1D: test    [eax+53h], dl
0x4F5F20: jz      short loc_4F5F61
0x4F5F22: fld     dword ptr [ecx+0D8h]
0x4F5F28: movzx   ecx, byte ptr [eax+4Fh]
0x4F5F2C: mov     [esp+4+var_4], ecx
0x4F5F2F: fild    [esp+4+var_4]
0x4F5F32: fmulp   st(2), st
0x4F5F34: fxch    st(1)
0x4F5F36: fmul    qword ptr ds:0A48DD8h
0x4F5F3C: fadd    qword ptr ds:0A30E40h
0x4F5F42: fstp    [esp+4+var_4]
0x4F5F45: fld     [esp+4+var_4]
0x4F5F48: fcompp
0x4F5F4A: fnstsw  ax
0x4F5F4C: test    ah, 41h
0x4F5F4F: jnz     short loc_4F5F63
0x4F5F51: mov     eax, 1
0x4F5F56: pop     ecx
0x4F5F57: retn
0x4F5F58: fstp    st
0x4F5F5A: mov     eax, 1
0x4F5F5F: pop     ecx
0x4F5F60: retn
0x4F5F61: fstp    st
0x4F5F63: xor     eax, eax
0x4F5F65: pop     ecx
0x4F5F66: retn
