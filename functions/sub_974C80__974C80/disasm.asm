0x974C80: sub     esp, 10h
0x974C83: mov     ecx, [esp+10h+arg_4]
0x974C87: fldz
0x974C89: mov     eax, [esp+10h+arg_0]
0x974C8D: fstp    [esp+10h+var_10]
0x974C90: fld     dword ptr [eax]
0x974C92: fsub    dword ptr [ecx]
0x974C94: fstp    [esp+10h+var_C]
0x974C98: fld     dword ptr [eax+4]
0x974C9B: fsub    dword ptr [ecx+4]
0x974C9E: fstp    [esp+10h+var_8]
0x974CA2: fld     dword ptr [eax+8]
0x974CA5: fsub    dword ptr [ecx+8]
0x974CA8: fstp    [esp+10h+var_4]
0x974CAC: fld     [esp+10h+var_8]
0x974CB0: fld     [esp+10h+var_C]
0x974CB4: fld     [esp+10h+var_4]
0x974CB8: fld     dword ptr [ecx+10h]
0x974CBB: fmul    st, st(3)
0x974CBD: fld     dword ptr [ecx+0Ch]
0x974CC0: fmul    st, st(3)
0x974CC2: faddp   st(1), st
0x974CC4: fld     dword ptr [ecx+14h]
0x974CC7: fmul    st, st(2)
0x974CC9: faddp   st(1), st
0x974CCB: fstp    [esp+10h+var_C]
0x974CCF: fld     [esp+10h+var_C]
0x974CD3: fld     dword ptr [ecx+30h]
0x974CD6: fchs
0x974CD8: fcomp   st(1)
0x974CDA: fnstsw  ax
0x974CDC: test    ah, 41h
0x974CDF: jnz     short loc_974D02
0x974CE1: fadd    dword ptr [ecx+30h]
0x974CE4: fstp    [esp+10h+arg_0]
0x974CE8: fld     [esp+10h+arg_0]
0x974CEC: fmul    st, st
0x974CEE: fadd    qword ptr ds:0A2FC68h
0x974CF4: fstp    [esp+10h+var_10]
0x974CF7: fld     dword ptr [ecx+30h]
0x974CFA: fchs
0x974CFC: fstp    [esp+10h+var_C]
0x974D00: jmp     short loc_974D2F
0x974D02: fld     dword ptr [ecx+30h]
0x974D05: fcomp   st(1)
0x974D07: fnstsw  ax
0x974D09: test    ah, 5
0x974D0C: jp      short loc_974D2D
0x974D0E: fsub    dword ptr [ecx+30h]
0x974D11: fstp    [esp+10h+arg_0]
0x974D15: fld     [esp+10h+arg_0]
0x974D19: fmul    st, st
0x974D1B: fadd    qword ptr ds:0A2FC68h
0x974D21: fstp    [esp+10h+var_10]
0x974D24: fld     dword ptr [ecx+30h]
0x974D27: fstp    [esp+10h+var_C]
0x974D2B: jmp     short loc_974D2F
0x974D2D: fstp    st
0x974D2F: fld     dword ptr [ecx+1Ch]
0x974D32: fmul    st, st(3)
0x974D34: fld     dword ptr [ecx+18h]
0x974D37: fmul    st, st(3)
0x974D39: faddp   st(1), st
0x974D3B: fld     dword ptr [ecx+20h]
0x974D3E: fmul    st, st(2)
0x974D40: faddp   st(1), st
0x974D42: fstp    [esp+10h+var_8]
0x974D46: fld     [esp+10h+var_8]
0x974D4A: fld     dword ptr [ecx+34h]
0x974D4D: fchs
0x974D4F: fcomp   st(1)
0x974D51: fnstsw  ax
0x974D53: test    ah, 41h
0x974D56: jnz     short loc_974D76
0x974D58: fadd    dword ptr [ecx+34h]
0x974D5B: fstp    [esp+10h+arg_0]
0x974D5F: fld     [esp+10h+arg_0]
0x974D63: fmul    st, st
0x974D65: fadd    [esp+10h+var_10]
0x974D68: fstp    [esp+10h+var_10]
0x974D6B: fld     dword ptr [ecx+34h]
0x974D6E: fchs
0x974D70: fstp    [esp+10h+var_8]
0x974D74: jmp     short loc_974DA0
0x974D76: fld     dword ptr [ecx+34h]
0x974D79: fcomp   st(1)
0x974D7B: fnstsw  ax
0x974D7D: test    ah, 5
0x974D80: jp      short loc_974D9E
0x974D82: fsub    dword ptr [ecx+34h]
0x974D85: fstp    [esp+10h+arg_0]
0x974D89: fld     [esp+10h+arg_0]
0x974D8D: fmul    st, st
0x974D8F: fadd    [esp+10h+var_10]
0x974D92: fstp    [esp+10h+var_10]
0x974D95: fld     dword ptr [ecx+34h]
0x974D98: fstp    [esp+10h+var_8]
0x974D9C: jmp     short loc_974DA0
0x974D9E: fstp    st
0x974DA0: fld     dword ptr [ecx+28h]
0x974DA3: fmulp   st(3), st
0x974DA5: fld     dword ptr [ecx+24h]
0x974DA8: fmulp   st(2), st
0x974DAA: fxch    st(2)
0x974DAC: faddp   st(1), st
0x974DAE: fld     dword ptr [ecx+2Ch]
0x974DB1: fmulp   st(2), st
0x974DB3: faddp   st(1), st
0x974DB5: fstp    [esp+10h+var_4]
0x974DB9: fld     [esp+10h+var_4]
0x974DBD: fld     dword ptr [ecx+38h]
0x974DC0: fchs
0x974DC2: fcomp   st(1)
0x974DC4: fnstsw  ax
0x974DC6: test    ah, 41h
0x974DC9: jnz     short loc_974DE9
0x974DCB: fadd    dword ptr [ecx+38h]
0x974DCE: fstp    [esp+10h+arg_0]
0x974DD2: fld     [esp+10h+arg_0]
0x974DD6: fmul    st, st
0x974DD8: fadd    [esp+10h+var_10]
0x974DDB: fstp    [esp+10h+var_10]
0x974DDE: fld     dword ptr [ecx+38h]
0x974DE1: fchs
0x974DE3: fstp    [esp+10h+var_4]
0x974DE7: jmp     short loc_974E13
0x974DE9: fld     dword ptr [ecx+38h]
0x974DEC: fcomp   st(1)
0x974DEE: fnstsw  ax
0x974DF0: test    ah, 5
0x974DF3: jp      short loc_974E11
0x974DF5: fsub    dword ptr [ecx+38h]
0x974DF8: fstp    [esp+10h+arg_0]
0x974DFC: fld     [esp+10h+arg_0]
0x974E00: fmul    st, st
0x974E02: fadd    [esp+10h+var_10]
0x974E05: fstp    [esp+10h+var_10]
0x974E08: fld     dword ptr [ecx+38h]
0x974E0B: fstp    [esp+10h+var_4]
0x974E0F: jmp     short loc_974E13
0x974E11: fstp    st
0x974E13: fld     [esp+10h+var_C]
0x974E17: mov     eax, [esp+10h+arg_8]
0x974E1B: mov     ecx, [esp+10h+arg_C]
0x974E1F: fstp    dword ptr [eax]
0x974E21: fld     [esp+10h+var_8]
0x974E25: mov     edx, [esp+10h+arg_10]
0x974E29: fstp    dword ptr [ecx]
0x974E2B: fld     [esp+10h+var_4]
0x974E2F: fstp    dword ptr [edx]
0x974E31: fld     [esp+10h+var_10]
0x974E34: add     esp, 10h
0x974E37: retn
