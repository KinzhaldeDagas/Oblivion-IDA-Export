0x755D90: sub     esp, 18h
0x755D93: fld     dword ptr [ecx+5Ch]
0x755D96: push    esi
0x755D97: mov     esi, [esp+1Ch+arg_8]
0x755D9B: movzx   eax, si
0x755D9E: lea     edx, ds:0[eax*8]
0x755DA5: sub     edx, eax
0x755DA7: push    edi
0x755DA8: mov     edi, [esp+20h+arg_4]
0x755DAC: mov     eax, [edi+5Ch]
0x755DAF: lea     edx, [eax+edx*4]
0x755DB2: fmul    dword ptr [edx+4]
0x755DB5: fld     dword ptr [edx]
0x755DB7: fmul    dword ptr [ecx+58h]
0x755DBA: faddp   st(1), st
0x755DBC: fld     dword ptr [ecx+60h]
0x755DBF: fmul    dword ptr [edx+8]
0x755DC2: faddp   st(1), st
0x755DC4: fstp    [esp+20h+arg_8]
0x755DC8: fld     dword ptr [ecx+58h]
0x755DCB: fld     [esp+20h+arg_8]
0x755DCF: fld     st
0x755DD1: fmulp   st(2), st
0x755DD3: fxch    st(1)
0x755DD5: fstp    [esp+20h+var_18]
0x755DD9: fld     dword ptr [ecx+5Ch]
0x755DDC: fmul    st, st(1)
0x755DDE: fstp    [esp+20h+var_14]
0x755DE2: fld     dword ptr [ecx+60h]
0x755DE5: fmul    st, st(1)
0x755DE7: fstp    [esp+20h+var_10]
0x755DEB: fld     dword ptr [ecx+20h]
0x755DEE: fld     [esp+20h+arg_0]
0x755DF2: fld     st
0x755DF4: fucomp  st(2)
0x755DF6: fnstsw  ax
0x755DF8: fstp    st(1)
0x755DFA: test    ah, 44h
0x755DFD: jp      short loc_755E2B
0x755DFF: fld     dword ptr ds:0A86938h
0x755E05: fcomp   st(2)
0x755E07: fnstsw  ax
0x755E09: fstp    st(1)
0x755E0B: test    ah, 41h
0x755E0E: jnz     short loc_755E2D
0x755E10: fld     dword ptr [edx]
0x755E12: fsub    [esp+20h+var_18]
0x755E16: fstp    dword ptr [edx]
0x755E18: fld     dword ptr [edx+4]
0x755E1B: fsub    [esp+20h+var_14]
0x755E1F: fstp    dword ptr [edx+4]
0x755E22: fld     dword ptr [edx+8]
0x755E25: fsub    [esp+20h+var_10]
0x755E29: jmp     short loc_755E9D
0x755E2B: fstp    st(1)
0x755E2D: fld     [esp+20h+var_18]
0x755E31: fadd    st, st
0x755E33: fstp    [esp+20h+var_C]
0x755E37: fld     [esp+20h+var_14]
0x755E3B: fadd    st, st
0x755E3D: fstp    [esp+20h+var_8]
0x755E41: fld     [esp+20h+var_10]
0x755E45: fadd    st, st
0x755E47: fstp    [esp+20h+var_4]
0x755E4B: fld     dword ptr [edx]
0x755E4D: fsub    [esp+20h+var_C]
0x755E51: fstp    [esp+20h+arg_8]
0x755E55: fld     [esp+20h+arg_8]
0x755E59: fst     dword ptr [edx]
0x755E5B: fld     dword ptr [edx+4]
0x755E5E: fsub    [esp+20h+var_8]
0x755E62: fstp    [esp+20h+arg_8]
0x755E66: fld     [esp+20h+arg_8]
0x755E6A: fst     dword ptr [edx+4]
0x755E6D: fld     dword ptr [edx+8]
0x755E70: fsub    [esp+20h+var_4]
0x755E74: fstp    [esp+20h+arg_8]
0x755E78: fld     [esp+20h+arg_8]
0x755E7C: fst     dword ptr [edx+8]
0x755E7F: fld     dword ptr [ecx+8]
0x755E82: fstp    [esp+20h+arg_8]
0x755E86: fld     [esp+20h+arg_8]
0x755E8A: fld     st
0x755E8C: fmulp   st(4), st
0x755E8E: fxch    st(3)
0x755E90: fstp    dword ptr [edx]
0x755E92: fld     st(2)
0x755E94: fmulp   st(2), st
0x755E96: fxch    st(1)
0x755E98: fstp    dword ptr [edx+4]
0x755E9B: fmulp   st(1), st
0x755E9D: push    esi; int
0x755E9E: fstp    dword ptr [edx+8]
0x755EA1: push    edi; int
0x755EA2: push    ecx
0x755EA3: fstp    [esp+2Ch+var_2C]; float
0x755EA6: call    sub_75EC40
0x755EAB: pop     edi
0x755EAC: pop     esi
0x755EAD: add     esp, 18h
0x755EB0: retn    0Ch
