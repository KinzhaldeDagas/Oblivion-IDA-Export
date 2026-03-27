0x962CF0: sub     esp, 5Ch
0x962CF3: mov     ecx, [esp+5Ch+arg_4]
0x962CF7: mov     edx, [esp+5Ch+arg_C]
0x962CFB: fld     dword ptr [edx+4]
0x962CFE: fsub    dword ptr [ecx+4]
0x962D01: fstp    [esp+5Ch+var_5C]
0x962D04: fld     dword ptr [edx+8]
0x962D07: fsub    dword ptr [ecx+8]
0x962D0A: fstp    [esp+5Ch+var_58]
0x962D0E: fld     dword ptr [edx+0Ch]
0x962D11: fsub    dword ptr [ecx+0Ch]
0x962D14: fstp    [esp+5Ch+var_54]
0x962D18: fld     dword ptr [ecx+14h]
0x962D1B: fld     [esp+5Ch+var_58]
0x962D1F: fld     st
0x962D21: fmulp   st(2), st
0x962D23: fld     [esp+5Ch+var_5C]
0x962D26: fld     st
0x962D28: fmul    dword ptr [ecx+10h]
0x962D2B: faddp   st(3), st
0x962D2D: fld     dword ptr [ecx+18h]
0x962D30: fld     [esp+5Ch+var_54]
0x962D34: fld     st
0x962D36: fmulp   st(2), st
0x962D38: fxch    st(4)
0x962D3A: faddp   st(1), st
0x962D3C: fstp    [esp+5Ch+arg_4]
0x962D40: fld     [esp+5Ch+arg_4]
0x962D44: fabs
0x962D46: fstp    [esp+5Ch+arg_4]
0x962D4A: fld     [esp+5Ch+arg_4]
0x962D4E: fld     dword ptr [ecx+34h]
0x962D51: fcompp
0x962D53: fnstsw  ax
0x962D55: test    ah, 1
0x962D58: jnz     short loc_962DC0
0x962D5A: fld     dword ptr [ecx+20h]
0x962D5D: fmul    st, st(2)
0x962D5F: fld     dword ptr [ecx+1Ch]
0x962D62: fmul    st, st(2)
0x962D64: faddp   st(1), st
0x962D66: fld     dword ptr [ecx+24h]
0x962D69: fmul    st, st(4)
0x962D6B: faddp   st(1), st
0x962D6D: fstp    [esp+5Ch+arg_4]
0x962D71: fld     [esp+5Ch+arg_4]
0x962D75: fabs
0x962D77: fstp    [esp+5Ch+arg_4]
0x962D7B: fld     [esp+5Ch+arg_4]
0x962D7F: fld     dword ptr [ecx+38h]
0x962D82: fcompp
0x962D84: fnstsw  ax
0x962D86: test    ah, 1
0x962D89: jnz     short loc_962DC0
0x962D8B: fld     dword ptr [ecx+2Ch]
0x962D8E: fmulp   st(2), st
0x962D90: fmul    dword ptr [ecx+28h]
0x962D93: faddp   st(1), st
0x962D95: fld     dword ptr [ecx+30h]
0x962D98: fmulp   st(2), st
0x962D9A: faddp   st(1), st
0x962D9C: fstp    [esp+5Ch+arg_4]
0x962DA0: fld     [esp+5Ch+arg_4]
0x962DA4: fabs
0x962DA6: fstp    [esp+5Ch+arg_4]
0x962DAA: fld     [esp+5Ch+arg_4]
0x962DAE: fld     dword ptr [ecx+3Ch]
0x962DB1: fcompp
0x962DB3: fnstsw  ax
0x962DB5: test    ah, 1
0x962DB8: jnz     short loc_962DC6
0x962DBA: mov     al, 1
0x962DBC: add     esp, 5Ch
0x962DBF: retn
0x962DC0: fstp    st(1)
0x962DC2: fstp    st
0x962DC4: fstp    st
0x962DC6: fld     dword ptr ds:0A79DB4h
0x962DCC: push    20h ; ' '; int
0x962DCE: sub     esp, 0Ch
0x962DD1: fstp    [esp+6Ch+var_64]; float
0x962DD5: fld     dword ptr ds:0A37080h
0x962DDB: fstp    [esp+6Ch+var_68]; float
0x962DDF: fld     [esp+6Ch+arg_0]
0x962DE3: fstp    [esp+6Ch+var_6C]; float
0x962DE6: push    edx; int
0x962DE7: push    ecx; int
0x962DE8: lea     ecx, [esp+74h+var_50]
0x962DEC: call    sub_974250
0x962DF1: mov     eax, [esp+5Ch+arg_10]
0x962DF5: mov     ecx, [esp+5Ch+arg_8]
0x962DF9: push    eax
0x962DFA: push    ecx
0x962DFB: lea     ecx, [esp+64h+var_50]
0x962DFF: call    sub_96F160
0x962E04: lea     ecx, [esp+5Ch+var_50]
0x962E08: call    NiRenderTargetGroup__GetRenderTargetsNum
0x962E0D: cmp     eax, 3
0x962E10: jz      short loc_962E26
0x962E12: lea     ecx, [esp+5Ch+var_50]
0x962E16: call    NiRenderTargetGroup__GetRenderTargetsNum
0x962E1B: cmp     eax, 2
0x962E1E: jz      short loc_962E26
0x962E20: xor     eax, eax
0x962E22: add     esp, 5Ch
0x962E25: retn
0x962E26: mov     eax, 1
0x962E2B: add     esp, 5Ch
0x962E2E: retn
