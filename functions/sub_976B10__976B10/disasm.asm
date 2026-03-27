0x976B10: sub     esp, 24h
0x976B13: mov     ecx, [esp+24h+arg_4]
0x976B17: mov     edx, [esp+24h+arg_0]
0x976B1B: fld     dword ptr [ecx]
0x976B1D: fsub    dword ptr [edx]
0x976B1F: fstp    dword ptr [esp+24h+var_18]
0x976B23: fld     dword ptr [ecx+4]
0x976B26: fsub    dword ptr [edx+4]
0x976B29: fstp    dword ptr [esp+24h+var_18+4]
0x976B2D: fld     dword ptr [ecx+8]
0x976B30: fsub    dword ptr [edx+8]
0x976B33: fstp    [esp+24h+var_10]
0x976B37: fld     dword ptr [ecx+10h]
0x976B3A: fmul    dword ptr [ecx+10h]
0x976B3D: fld     dword ptr [ecx+0Ch]
0x976B40: fmul    dword ptr [ecx+0Ch]
0x976B43: faddp   st(1), st
0x976B45: fld     dword ptr [ecx+14h]
0x976B48: fmul    dword ptr [ecx+14h]
0x976B4B: faddp   st(1), st
0x976B4D: fstp    [esp+24h+var_20]
0x976B51: fld     dword ptr [ecx+1Ch]
0x976B54: fmul    dword ptr [ecx+10h]
0x976B57: fld     dword ptr [ecx+18h]
0x976B5A: fmul    dword ptr [ecx+0Ch]
0x976B5D: faddp   st(1), st
0x976B5F: fld     dword ptr [ecx+20h]
0x976B62: fmul    dword ptr [ecx+14h]
0x976B65: faddp   st(1), st
0x976B67: fstp    [esp+24h+arg_0]
0x976B6B: fld     dword ptr [ecx+1Ch]
0x976B6E: fmul    dword ptr [ecx+1Ch]
0x976B71: fld     dword ptr [ecx+18h]
0x976B74: fmul    dword ptr [ecx+18h]
0x976B77: faddp   st(1), st
0x976B79: fld     dword ptr [ecx+20h]
0x976B7C: fmul    dword ptr [ecx+20h]
0x976B7F: faddp   st(1), st
0x976B81: fstp    [esp+24h+var_24]
0x976B84: fld     dword ptr [ecx+10h]
0x976B87: fld     dword ptr [esp+24h+var_18+4]
0x976B8B: fld     st
0x976B8D: fmulp   st(2), st
0x976B8F: fld     dword ptr [ecx+0Ch]
0x976B92: fld     dword ptr [esp+24h+var_18]
0x976B96: fld     st
0x976B98: fmulp   st(2), st
0x976B9A: fxch    st(3)
0x976B9C: faddp   st(1), st
0x976B9E: fld     dword ptr [ecx+14h]
0x976BA1: fld     [esp+24h+var_10]
0x976BA5: fld     st
0x976BA7: fmulp   st(2), st
0x976BA9: fxch    st(2)
0x976BAB: faddp   st(1), st
0x976BAD: fstp    dword ptr [esp+24h+var_18]
0x976BB1: fld     dword ptr [ecx+1Ch]
0x976BB4: fmul    st, st(2)
0x976BB6: fld     dword ptr [ecx+18h]
0x976BB9: fmul    st, st(4)
0x976BBB: faddp   st(1), st
0x976BBD: fld     dword ptr [ecx+20h]
0x976BC0: fmul    st, st(2)
0x976BC2: faddp   st(1), st
0x976BC4: fstp    [esp+24h+var_1C]
0x976BC8: fld     st(2)
0x976BCA: fmulp   st(3), st
0x976BCC: fld     st(1)
0x976BCE: fmulp   st(2), st
0x976BD0: fxch    st(2)
0x976BD2: faddp   st(1), st
0x976BD4: fld     st(1)
0x976BD6: fmulp   st(2), st
0x976BD8: faddp   st(1), st
0x976BDA: fstp    [esp+24h+arg_4]
0x976BDE: fld     [esp+24h+arg_0]
0x976BE2: fld     st
0x976BE4: fld     [esp+24h+var_24]
0x976BE7: fld     st
0x976BE9: fld     [esp+24h+var_20]
0x976BED: fld     st
0x976BEF: fmulp   st(2), st
0x976BF1: fld     st(3)
0x976BF3: fmulp   st(4), st
0x976BF5: fxch    st(1)
0x976BF7: fsubrp  st(3), st
0x976BF9: fxch    st(2)
0x976BFB: fstp    [esp+24h+arg_0]
0x976BFF: fld     [esp+24h+arg_0]
0x976C03: fabs
0x976C05: fstp    [esp+24h+arg_0]
0x976C09: fld     [esp+24h+arg_0]
0x976C0D: fstp    [esp+24h+arg_0]
0x976C11: fld     dword ptr ds:0A3C778h
0x976C17: fcomp   [esp+24h+arg_0]
0x976C1B: fnstsw  ax
0x976C1D: test    ah, 41h
0x976C20: jp      loc_97748A
0x976C26: fld     [esp+24h+var_1C]
0x976C2A: mov     ecx, [esp+24h+arg_8]
0x976C2E: fld     st
0x976C30: mov     edx, [esp+24h+arg_C]
0x976C34: fmul    st, st(4)
0x976C36: fld     dword ptr [esp+24h+var_18]
0x976C3A: fld     st
0x976C3C: fmul    st, st(4)
0x976C3E: fsubp   st(2), st
0x976C40: fxch    st(1)
0x976C42: fstp    dword ptr [ecx]
0x976C44: fld     st
0x976C46: fmul    st, st(5)
0x976C48: fld     st(2)
0x976C4A: fmul    st, st(5)
0x976C4C: fsubp   st(1), st
0x976C4E: fstp    [esp+24h+var_24]
0x976C51: fld     [esp+24h+var_24]
0x976C54: fst     dword ptr [edx]
0x976C56: fldz
0x976C58: fcom    dword ptr [ecx]
0x976C5A: fnstsw  ax
0x976C5C: test    ah, 41h
0x976C5F: jnz     loc_976F3D
0x976C65: fcom    st(1)
0x976C67: fnstsw  ax
0x976C69: test    ah, 41h
0x976C6C: jnz     loc_976D78
0x976C72: fstp    st(6)
0x976C74: fstp    st
0x976C76: fcom    st(4)
0x976C78: fnstsw  ax
0x976C7A: test    ah, 5
0x976C7D: jp      short loc_976CEA
0x976C7F: fstp    st(1)
0x976C81: fstp    st(1)
0x976C83: fxch    st(2)
0x976C85: fstp    dword ptr [edx]
0x976C87: fld     st(1)
0x976C89: fchs
0x976C8B: fstp    [esp+24h+arg_0]
0x976C8F: fld     [esp+24h+arg_0]
0x976C93: fcom    st(1)
0x976C95: fnstsw  ax
0x976C97: test    ah, 1
0x976C9A: jnz     short loc_976CC2
0x976C9C: fstp    st
0x976C9E: fld1
0x976CA0: fstp    dword ptr [ecx]
0x976CA2: fxch    st(1)
0x976CA4: fadd    st, st
0x976CA6: faddp   st(1), st
0x976CA8: fadd    [esp+24h+arg_4]
0x976CAC: fstp    [esp+24h+arg_4]
0x976CB0: fld     [esp+24h+arg_4]
0x976CB4: fabs
0x976CB6: fstp    [esp+24h+arg_4]
0x976CBA: fld     [esp+24h+arg_4]
0x976CBE: add     esp, 24h
0x976CC1: retn
0x976CC2: fdivrp  st(1), st
0x976CC4: fstp    [esp+24h+arg_0]
0x976CC8: fld     [esp+24h+arg_0]
0x976CCC: fst     dword ptr [ecx]
0x976CCE: fmulp   st(1), st
0x976CD0: fadd    [esp+24h+arg_4]
0x976CD4: fstp    [esp+24h+arg_4]
0x976CD8: fld     [esp+24h+arg_4]
0x976CDC: fabs
0x976CDE: fstp    [esp+24h+arg_4]
0x976CE2: fld     [esp+24h+arg_4]
0x976CE6: add     esp, 24h
0x976CE9: retn
0x976CEA: fstp    st(3)
0x976CEC: fstp    st(2)
0x976CEE: fxch    st(2)
0x976CF0: fst     dword ptr [ecx]
0x976CF2: fcom    st(1)
0x976CF4: fnstsw  ax
0x976CF6: test    ah, 41h
0x976CF9: jp      short loc_976D13
0x976CFB: fstp    st(1)
0x976CFD: fstp    st(1)
0x976CFF: fstp    dword ptr [edx]
0x976D01: fld     [esp+24h+arg_4]
0x976D05: fabs
0x976D07: fstp    [esp+24h+arg_4]
0x976D0B: fld     [esp+24h+arg_4]
0x976D0F: add     esp, 24h
0x976D12: retn
0x976D13: fstp    st
0x976D15: fld     st
0x976D17: fchs
0x976D19: fstp    [esp+24h+arg_0]
0x976D1D: fld     [esp+24h+arg_0]
0x976D21: fcom    st(2)
0x976D23: fnstsw  ax
0x976D25: test    ah, 1
0x976D28: jnz     short loc_976D4E
0x976D2A: fstp    st
0x976D2C: fld1
0x976D2E: fstp    dword ptr [edx]
0x976D30: fadd    st, st
0x976D32: faddp   st(1), st
0x976D34: fadd    [esp+24h+arg_4]
0x976D38: fstp    [esp+24h+arg_4]
0x976D3C: fld     [esp+24h+arg_4]
0x976D40: fabs
0x976D42: fstp    [esp+24h+arg_4]
0x976D46: fld     [esp+24h+arg_4]
0x976D4A: add     esp, 24h
0x976D4D: retn
0x976D4E: fdivrp  st(2), st
0x976D50: fxch    st(1)
0x976D52: fstp    [esp+24h+arg_0]
0x976D56: fld     [esp+24h+arg_0]
0x976D5A: fst     dword ptr [edx]
0x976D5C: fmulp   st(1), st
0x976D5E: fadd    [esp+24h+arg_4]
0x976D62: fstp    [esp+24h+arg_4]
0x976D66: fld     [esp+24h+arg_4]
0x976D6A: fabs
0x976D6C: fstp    [esp+24h+arg_4]
0x976D70: fld     [esp+24h+arg_4]
0x976D74: add     esp, 24h
0x976D77: retn
0x976D78: fld     [esp+24h+arg_0]
0x976D7C: fcomp   st(2)
0x976D7E: fnstsw  ax
0x976D80: fstp    st(1)
0x976D82: test    ah, 1
0x976D85: jnz     loc_976E1B
0x976D8B: fstp    st(4)
0x976D8D: fstp    st
0x976D8F: fstp    st(3)
0x976D91: fxch    st(1)
0x976D93: fst     dword ptr [ecx]
0x976D95: fcom    st(2)
0x976D97: fnstsw  ax
0x976D99: test    ah, 41h
0x976D9C: jp      short loc_976DB6
0x976D9E: fstp    st(2)
0x976DA0: fstp    st
0x976DA2: fstp    dword ptr [edx]
0x976DA4: fld     [esp+24h+arg_4]
0x976DA8: fabs
0x976DAA: fstp    [esp+24h+arg_4]
0x976DAE: fld     [esp+24h+arg_4]
0x976DB2: add     esp, 24h
0x976DB5: retn
0x976DB6: fstp    st
0x976DB8: fld     st(1)
0x976DBA: fchs
0x976DBC: fstp    [esp+24h+arg_0]
0x976DC0: fld     [esp+24h+arg_0]
0x976DC4: fcom    st(1)
0x976DC6: fnstsw  ax
0x976DC8: test    ah, 1
0x976DCB: jnz     short loc_976DF3
0x976DCD: fstp    st
0x976DCF: fld1
0x976DD1: fstp    dword ptr [edx]
0x976DD3: fxch    st(1)
0x976DD5: fadd    st, st
0x976DD7: faddp   st(1), st
0x976DD9: fadd    [esp+24h+arg_4]
0x976DDD: fstp    [esp+24h+arg_4]
0x976DE1: fld     [esp+24h+arg_4]
0x976DE5: fabs
0x976DE7: fstp    [esp+24h+arg_4]
0x976DEB: fld     [esp+24h+arg_4]
0x976DEF: add     esp, 24h
0x976DF2: retn
0x976DF3: fdivrp  st(1), st
0x976DF5: fstp    [esp+24h+arg_0]
0x976DF9: fld     [esp+24h+arg_0]
0x976DFD: fst     dword ptr [edx]
0x976DFF: fmulp   st(1), st
0x976E01: fadd    [esp+24h+arg_4]
0x976E05: fstp    [esp+24h+arg_4]
0x976E09: fld     [esp+24h+arg_4]
0x976E0D: fabs
0x976E0F: fstp    [esp+24h+arg_4]
0x976E13: fld     [esp+24h+arg_4]
0x976E17: add     esp, 24h
0x976E1A: retn
0x976E1B: fxch    st(1)
0x976E1D: faddp   st(5), st
0x976E1F: fxch    st(4)
0x976E21: fst     [esp+24h+var_24]
0x976E24: fld     [esp+24h+var_24]
0x976E27: fcom    st(5)
0x976E29: fnstsw  ax
0x976E2B: test    ah, 5
0x976E2E: jp      short loc_976EAD
0x976E30: fstp    st(5)
0x976E32: fld1
0x976E34: fstp    dword ptr [edx]
0x976E36: fld     st(4)
0x976E38: fchs
0x976E3A: fstp    [esp+24h+arg_0]
0x976E3E: fld     [esp+24h+arg_0]
0x976E42: fcom    st(4)
0x976E44: fnstsw  ax
0x976E46: test    ah, 1
0x976E49: jnz     short loc_976E7B
0x976E4B: fstp    st(5)
0x976E4D: fstp    st(4)
0x976E4F: fld1
0x976E51: fstp    dword ptr [ecx]
0x976E53: fxch    st(1)
0x976E55: faddp   st(2), st
0x976E57: fld     [esp+24h+arg_4]
0x976E5B: faddp   st(2), st
0x976E5D: faddp   st(2), st
0x976E5F: fxch    st(1)
0x976E61: fadd    st, st
0x976E63: faddp   st(1), st
0x976E65: fstp    [esp+24h+arg_4]
0x976E69: fld     [esp+24h+arg_4]
0x976E6D: fabs
0x976E6F: fstp    [esp+24h+arg_4]
0x976E73: fld     [esp+24h+arg_4]
0x976E77: add     esp, 24h
0x976E7A: retn
0x976E7B: fstp    st(1)
0x976E7D: fdivrp  st(3), st
0x976E7F: fxch    st(2)
0x976E81: fstp    [esp+24h+arg_0]
0x976E85: fld     [esp+24h+arg_0]
0x976E89: fst     dword ptr [ecx]
0x976E8B: fmulp   st(3), st
0x976E8D: faddp   st(2), st
0x976E8F: fadd    st, st
0x976E91: faddp   st(1), st
0x976E93: fadd    [esp+24h+arg_4]
0x976E97: fstp    [esp+24h+arg_4]
0x976E9B: fld     [esp+24h+arg_4]
0x976E9F: fabs
0x976EA1: fstp    [esp+24h+arg_4]
0x976EA5: fld     [esp+24h+arg_4]
0x976EA9: add     esp, 24h
0x976EAC: retn
0x976EAD: fstp    st(4)
0x976EAF: fstp    st(3)
0x976EB1: fstp    st(2)
0x976EB3: fxch    st(2)
0x976EB5: fst     dword ptr [ecx]
0x976EB7: fcom    st(1)
0x976EB9: fnstsw  ax
0x976EBB: test    ah, 41h
0x976EBE: jp      short loc_976ED8
0x976EC0: fstp    st(1)
0x976EC2: fstp    st(1)
0x976EC4: fstp    dword ptr [edx]
0x976EC6: fld     [esp+24h+arg_4]
0x976ECA: fabs
0x976ECC: fstp    [esp+24h+arg_4]
0x976ED0: fld     [esp+24h+arg_4]
0x976ED4: add     esp, 24h
0x976ED7: retn
0x976ED8: fstp    st
0x976EDA: fld     st
0x976EDC: fchs
0x976EDE: fstp    [esp+24h+arg_0]
0x976EE2: fld     [esp+24h+arg_0]
0x976EE6: fcom    st(2)
0x976EE8: fnstsw  ax
0x976EEA: test    ah, 1
0x976EED: jnz     short loc_976F13
0x976EEF: fstp    st
0x976EF1: fld1
0x976EF3: fstp    dword ptr [edx]
0x976EF5: fadd    st, st
0x976EF7: faddp   st(1), st
0x976EF9: fadd    [esp+24h+arg_4]
0x976EFD: fstp    [esp+24h+arg_4]
0x976F01: fld     [esp+24h+arg_4]
0x976F05: fabs
0x976F07: fstp    [esp+24h+arg_4]
0x976F0B: fld     [esp+24h+arg_4]
0x976F0F: add     esp, 24h
0x976F12: retn
0x976F13: fdivrp  st(2), st
0x976F15: fxch    st(1)
0x976F17: fstp    [esp+24h+arg_0]
0x976F1B: fld     [esp+24h+arg_0]
0x976F1F: fst     dword ptr [edx]
0x976F21: fmulp   st(1), st
0x976F23: fadd    [esp+24h+arg_4]
0x976F27: fstp    [esp+24h+arg_4]
0x976F2B: fld     [esp+24h+arg_4]
0x976F2F: fabs
0x976F31: fstp    [esp+24h+arg_4]
0x976F35: fld     [esp+24h+arg_4]
0x976F39: add     esp, 24h
0x976F3C: retn
0x976F3D: fstp    st(1)
0x976F3F: fld     dword ptr [ecx]
0x976F41: fld     [esp+24h+arg_0]
0x976F45: fcompp
0x976F47: fnstsw  ax
0x976F49: fld     [esp+24h+var_24]
0x976F4C: fcom    st(1)
0x976F4E: test    ah, 1
0x976F51: fnstsw  ax
0x976F53: jnz     loc_97712F
0x976F59: test    ah, 5
0x976F5C: jp      loc_976FF2
0x976F62: fstp    st(3)
0x976F64: fstp    st(3)
0x976F66: fstp    st(4)
0x976F68: fstp    st
0x976F6A: fst     dword ptr [edx]
0x976F6C: fcom    st(2)
0x976F6E: fnstsw  ax
0x976F70: test    ah, 41h
0x976F73: jp      short loc_976F8D
0x976F75: fstp    st(1)
0x976F77: fstp    st(1)
0x976F79: fstp    dword ptr [ecx]
0x976F7B: fld     [esp+24h+arg_4]
0x976F7F: fabs
0x976F81: fstp    [esp+24h+arg_4]
0x976F85: fld     [esp+24h+arg_4]
0x976F89: add     esp, 24h
0x976F8C: retn
0x976F8D: fstp    st
0x976F8F: fld     st(1)
0x976F91: fchs
0x976F93: fstp    [esp+24h+arg_0]
0x976F97: fld     [esp+24h+arg_0]
0x976F9B: fcom    st(1)
0x976F9D: fnstsw  ax
0x976F9F: test    ah, 1
0x976FA2: jnz     short loc_976FCA
0x976FA4: fstp    st
0x976FA6: fld1
0x976FA8: fstp    dword ptr [ecx]
0x976FAA: fxch    st(1)
0x976FAC: fadd    st, st
0x976FAE: faddp   st(1), st
0x976FB0: fadd    [esp+24h+arg_4]
0x976FB4: fstp    [esp+24h+arg_4]
0x976FB8: fld     [esp+24h+arg_4]
0x976FBC: fabs
0x976FBE: fstp    [esp+24h+arg_4]
0x976FC2: fld     [esp+24h+arg_4]
0x976FC6: add     esp, 24h
0x976FC9: retn
0x976FCA: fdivrp  st(1), st
0x976FCC: fstp    [esp+24h+arg_0]
0x976FD0: fld     [esp+24h+arg_0]
0x976FD4: fst     dword ptr [ecx]
0x976FD6: fmulp   st(1), st
0x976FD8: fadd    [esp+24h+arg_4]
0x976FDC: fstp    [esp+24h+arg_4]
0x976FE0: fld     [esp+24h+arg_4]
0x976FE4: fabs
0x976FE6: fstp    [esp+24h+arg_4]
0x976FEA: fld     [esp+24h+arg_4]
0x976FEE: add     esp, 24h
0x976FF1: retn
0x976FF2: fld     [esp+24h+arg_0]
0x976FF6: fcompp
0x976FF8: fnstsw  ax
0x976FFA: test    ah, 1
0x976FFD: jnz     short loc_977071
0x976FFF: fstp    st
0x977001: fld     [esp+24h+arg_0]
0x977005: fld1
0x977007: fdivrp  st(1), st
0x977009: fstp    [esp+24h+arg_0]
0x97700D: fld     dword ptr [ecx]
0x97700F: fld     [esp+24h+arg_0]
0x977013: fld     st
0x977015: fmulp   st(2), st
0x977017: fxch    st(1)
0x977019: fstp    dword ptr [ecx]
0x97701B: fmul    dword ptr [edx]
0x97701D: fstp    [esp+24h+arg_0]
0x977021: fld     [esp+24h+arg_0]
0x977025: fst     dword ptr [edx]
0x977027: fld     st
0x977029: fmulp   st(4), st
0x97702B: fld     dword ptr [ecx]
0x97702D: fmul    st, st(6)
0x97702F: faddp   st(4), st
0x977031: fld     qword ptr ds:0A3D0C0h
0x977037: fmul    st(3), st
0x977039: fxch    st(4)
0x97703B: faddp   st(3), st
0x97703D: fmulp   st(2), st
0x97703F: fld     dword ptr [ecx]
0x977041: fmulp   st(4), st
0x977043: fld     dword ptr [edx]
0x977045: fmulp   st(5), st
0x977047: fxch    st(3)
0x977049: faddp   st(4), st
0x97704B: fxch    st(2)
0x97704D: fmulp   st(1), st
0x97704F: faddp   st(2), st
0x977051: fld     dword ptr [ecx]
0x977053: fmulp   st(2), st
0x977055: faddp   st(1), st
0x977057: fadd    [esp+24h+arg_4]
0x97705B: fstp    [esp+24h+arg_4]
0x97705F: fld     [esp+24h+arg_4]
0x977063: fabs
0x977065: fstp    [esp+24h+arg_4]
0x977069: fld     [esp+24h+arg_4]
0x97706D: add     esp, 24h
0x977070: retn
0x977071: fld1
0x977073: fst     dword ptr [edx]
0x977075: fxch    st(2)
0x977077: faddp   st(6), st
0x977079: fxch    st(5)
0x97707B: fst     [esp+24h+var_24]
0x97707E: fld     [esp+24h+var_24]
0x977081: fcom    st(6)
0x977083: fnstsw  ax
0x977085: test    ah, 1
0x977088: jnz     short loc_9770B4
0x97708A: fstp    st(5)
0x97708C: fstp    st
0x97708E: fstp    st(3)
0x977090: fstp    st(2)
0x977092: fxch    st(2)
0x977094: fstp    dword ptr [ecx]
0x977096: fadd    st, st
0x977098: faddp   st(1), st
0x97709A: fadd    [esp+24h+arg_4]
0x97709E: fstp    [esp+24h+arg_4]
0x9770A2: fld     [esp+24h+arg_4]
0x9770A6: fabs
0x9770A8: fstp    [esp+24h+arg_4]
0x9770AC: fld     [esp+24h+arg_4]
0x9770B0: add     esp, 24h
0x9770B3: retn
0x9770B4: fstp    st(6)
0x9770B6: fld     st(5)
0x9770B8: fchs
0x9770BA: fstp    [esp+24h+arg_0]
0x9770BE: fld     [esp+24h+arg_0]
0x9770C2: fcomp   st(5)
0x9770C4: fnstsw  ax
0x9770C6: test    ah, 1
0x9770C9: jnz     short loc_9770F7
0x9770CB: fstp    st(5)
0x9770CD: fstp    dword ptr [ecx]
0x9770CF: fxch    st(1)
0x9770D1: faddp   st(2), st
0x9770D3: fld     [esp+24h+arg_4]
0x9770D7: faddp   st(2), st
0x9770D9: faddp   st(2), st
0x9770DB: fxch    st(1)
0x9770DD: fadd    st, st
0x9770DF: faddp   st(1), st
0x9770E1: fstp    [esp+24h+arg_4]
0x9770E5: fld     [esp+24h+arg_4]
0x9770E9: fabs
0x9770EB: fstp    [esp+24h+arg_4]
0x9770EF: fld     [esp+24h+arg_4]
0x9770F3: add     esp, 24h
0x9770F6: retn
0x9770F7: fstp    st
0x9770F9: fstp    st
0x9770FB: fld     [esp+24h+arg_0]
0x9770FF: fdivrp  st(3), st
0x977101: fxch    st(2)
0x977103: fstp    [esp+24h+arg_0]
0x977107: fld     [esp+24h+arg_0]
0x97710B: fst     dword ptr [ecx]
0x97710D: fmulp   st(3), st
0x97710F: faddp   st(2), st
0x977111: fadd    st, st
0x977113: faddp   st(1), st
0x977115: fadd    [esp+24h+arg_4]
0x977119: fstp    [esp+24h+arg_4]
0x97711D: fld     [esp+24h+arg_4]
0x977121: fabs
0x977123: fstp    [esp+24h+arg_4]
0x977127: fld     [esp+24h+arg_4]
0x97712B: add     esp, 24h
0x97712E: retn
0x97712F: test    ah, 5
0x977132: jp      loc_977266
0x977138: fstp    st
0x97713A: fld     st(1)
0x97713C: fchs
0x97713E: fstp    [esp+24h+arg_0]
0x977142: fld     [esp+24h+arg_0]
0x977146: fcomp   st(5)
0x977148: fnstsw  ax
0x97714A: test    ah, 5
0x97714D: jp      short loc_9771A6
0x97714F: fstp    st(2)
0x977151: fstp    st(2)
0x977153: fstp    st(3)
0x977155: fxch    st(2)
0x977157: fst     dword ptr [edx]
0x977159: fcom    st(2)
0x97715B: fnstsw  ax
0x97715D: test    ah, 41h
0x977160: jp      short loc_97717A
0x977162: fstp    st(1)
0x977164: fstp    st(1)
0x977166: fstp    dword ptr [ecx]
0x977168: fld     [esp+24h+arg_4]
0x97716C: fabs
0x97716E: fstp    [esp+24h+arg_4]
0x977172: fld     [esp+24h+arg_4]
0x977176: add     esp, 24h
0x977179: retn
0x97717A: fstp    st
0x97717C: fdivr   [esp+24h+arg_0]
0x977180: fstp    [esp+24h+arg_0]
0x977184: fld     [esp+24h+arg_0]
0x977188: fst     dword ptr [ecx]
0x97718A: fmulp   st(1), st
0x97718C: fadd    [esp+24h+arg_4]
0x977190: fstp    [esp+24h+arg_4]
0x977194: fld     [esp+24h+arg_4]
0x977198: fabs
0x97719A: fstp    [esp+24h+arg_4]
0x97719E: fld     [esp+24h+arg_4]
0x9771A2: add     esp, 24h
0x9771A5: retn
0x9771A6: fld1
0x9771A8: fstp    dword ptr [ecx]
0x9771AA: fld     st(2)
0x9771AC: fadd    st, st(6)
0x9771AE: fstp    [esp+24h+var_24]
0x9771B1: fld     [esp+24h+var_24]
0x9771B4: fcom    st(1)
0x9771B6: fnstsw  ax
0x9771B8: test    ah, 1
0x9771BB: jnz     short loc_9771E7
0x9771BD: fstp    st(3)
0x9771BF: fstp    st(3)
0x9771C1: fstp    st(4)
0x9771C3: fstp    st
0x9771C5: fstp    dword ptr [edx]
0x9771C7: fxch    st(1)
0x9771C9: fadd    st, st
0x9771CB: faddp   st(1), st
0x9771CD: fadd    [esp+24h+arg_4]
0x9771D1: fstp    [esp+24h+arg_4]
0x9771D5: fld     [esp+24h+arg_4]
0x9771D9: fabs
0x9771DB: fstp    [esp+24h+arg_4]
0x9771DF: fld     [esp+24h+arg_4]
0x9771E3: add     esp, 24h
0x9771E6: retn
0x9771E7: fstp    st(1)
0x9771E9: fld     st
0x9771EB: fchs
0x9771ED: fstp    [esp+24h+arg_0]
0x9771F1: fld     [esp+24h+arg_0]
0x9771F5: fcomp   st(4)
0x9771F7: fnstsw  ax
0x9771F9: test    ah, 1
0x9771FC: jnz     short loc_97722C
0x9771FE: fstp    st
0x977200: fld1
0x977202: fstp    dword ptr [edx]
0x977204: faddp   st(4), st
0x977206: faddp   st(3), st
0x977208: fxch    st(2)
0x97720A: fadd    st, st
0x97720C: fxch    st(2)
0x97720E: faddp   st(1), st
0x977210: fadd    [esp+24h+arg_4]
0x977214: faddp   st(1), st
0x977216: fstp    [esp+24h+arg_4]
0x97721A: fld     [esp+24h+arg_4]
0x97721E: fabs
0x977220: fstp    [esp+24h+arg_4]
0x977224: fld     [esp+24h+arg_4]
0x977228: add     esp, 24h
0x97722B: retn
0x97722C: fstp    st(2)
0x97722E: fstp    st(4)
0x977230: fld     [esp+24h+arg_0]
0x977234: fdivrp  st(2), st
0x977236: fxch    st(1)
0x977238: fstp    [esp+24h+arg_0]
0x97723C: fld     [esp+24h+arg_0]
0x977240: fst     dword ptr [edx]
0x977242: fmulp   st(1), st
0x977244: faddp   st(1), st
0x977246: fxch    st(1)
0x977248: fadd    st, st
0x97724A: faddp   st(1), st
0x97724C: fadd    [esp+24h+arg_4]
0x977250: fstp    [esp+24h+arg_4]
0x977254: fld     [esp+24h+arg_4]
0x977258: fabs
0x97725A: fstp    [esp+24h+arg_4]
0x97725E: fld     [esp+24h+arg_4]
0x977262: add     esp, 24h
0x977265: retn
0x977266: fld     [esp+24h+arg_0]
0x97726A: fcompp
0x97726C: fnstsw  ax
0x97726E: test    ah, 1
0x977271: jnz     loc_977337
0x977277: fld1
0x977279: fstp    dword ptr [ecx]
0x97727B: fld     st(2)
0x97727D: fadd    st, st(6)
0x97727F: fstp    [esp+24h+var_24]
0x977282: fld     [esp+24h+var_24]
0x977285: fcom    st(1)
0x977287: fnstsw  ax
0x977289: test    ah, 1
0x97728C: jnz     short loc_9772B8
0x97728E: fstp    st(3)
0x977290: fstp    st(3)
0x977292: fstp    st(4)
0x977294: fstp    st
0x977296: fstp    dword ptr [edx]
0x977298: fxch    st(1)
0x97729A: fadd    st, st
0x97729C: faddp   st(1), st
0x97729E: fadd    [esp+24h+arg_4]
0x9772A2: fstp    [esp+24h+arg_4]
0x9772A6: fld     [esp+24h+arg_4]
0x9772AA: fabs
0x9772AC: fstp    [esp+24h+arg_4]
0x9772B0: fld     [esp+24h+arg_4]
0x9772B4: add     esp, 24h
0x9772B7: retn
0x9772B8: fstp    st(1)
0x9772BA: fld     st
0x9772BC: fchs
0x9772BE: fstp    [esp+24h+arg_0]
0x9772C2: fld     [esp+24h+arg_0]
0x9772C6: fcomp   st(4)
0x9772C8: fnstsw  ax
0x9772CA: test    ah, 1
0x9772CD: jnz     short loc_9772FD
0x9772CF: fstp    st
0x9772D1: fld1
0x9772D3: fstp    dword ptr [edx]
0x9772D5: faddp   st(4), st
0x9772D7: faddp   st(3), st
0x9772D9: fxch    st(2)
0x9772DB: fadd    st, st
0x9772DD: fxch    st(2)
0x9772DF: faddp   st(1), st
0x9772E1: fadd    [esp+24h+arg_4]
0x9772E5: faddp   st(1), st
0x9772E7: fstp    [esp+24h+arg_4]
0x9772EB: fld     [esp+24h+arg_4]
0x9772EF: fabs
0x9772F1: fstp    [esp+24h+arg_4]
0x9772F5: fld     [esp+24h+arg_4]
0x9772F9: add     esp, 24h
0x9772FC: retn
0x9772FD: fstp    st(2)
0x9772FF: fstp    st(4)
0x977301: fld     [esp+24h+arg_0]
0x977305: fdivrp  st(2), st
0x977307: fxch    st(1)
0x977309: fstp    [esp+24h+arg_0]
0x97730D: fld     [esp+24h+arg_0]
0x977311: fst     dword ptr [edx]
0x977313: fmulp   st(1), st
0x977315: faddp   st(1), st
0x977317: fxch    st(1)
0x977319: fadd    st, st
0x97731B: faddp   st(1), st
0x97731D: fadd    [esp+24h+arg_4]
0x977321: fstp    [esp+24h+arg_4]
0x977325: fld     [esp+24h+arg_4]
0x977329: fabs
0x97732B: fstp    [esp+24h+arg_4]
0x97732F: fld     [esp+24h+arg_4]
0x977333: add     esp, 24h
0x977336: retn
0x977337: fld     st(1)
0x977339: fadd    st, st(6)
0x97733B: fst     [esp+24h+var_18]
0x97733F: fstp    [esp+24h+var_24]
0x977342: fld     [esp+24h+var_24]
0x977345: fchs
0x977347: fstp    [esp+24h+arg_0]
0x97734B: fld     [esp+24h+arg_0]
0x97734F: fcomp   st(5)
0x977351: fnstsw  ax
0x977353: test    ah, 5
0x977356: jp      short loc_9773C8
0x977358: fstp    st(1)
0x97735A: fstp    st(4)
0x97735C: fld1
0x97735E: fstp    dword ptr [edx]
0x977360: fld     [esp+24h+var_24]
0x977363: fcom    st(4)
0x977365: fnstsw  ax
0x977367: test    ah, 1
0x97736A: jnz     short loc_977392
0x97736C: fstp    st(3)
0x97736E: fstp    st(2)
0x977370: fxch    st(2)
0x977372: fstp    dword ptr [ecx]
0x977374: fadd    st, st
0x977376: faddp   st(1), st
0x977378: fadd    [esp+24h+arg_4]
0x97737C: fstp    [esp+24h+arg_4]
0x977380: fld     [esp+24h+arg_4]
0x977384: fabs
0x977386: fstp    [esp+24h+arg_4]
0x97738A: fld     [esp+24h+arg_4]
0x97738E: add     esp, 24h
0x977391: retn
0x977392: fstp    st(4)
0x977394: fld     [esp+24h+arg_0]
0x977398: fdivrp  st(3), st
0x97739A: fxch    st(2)
0x97739C: fstp    [esp+24h+arg_0]
0x9773A0: fld     [esp+24h+arg_0]
0x9773A4: fst     dword ptr [ecx]
0x9773A6: fmulp   st(3), st
0x9773A8: faddp   st(2), st
0x9773AA: fadd    st, st
0x9773AC: faddp   st(1), st
0x9773AE: fadd    [esp+24h+arg_4]
0x9773B2: fstp    [esp+24h+arg_4]
0x9773B6: fld     [esp+24h+arg_4]
0x9773BA: fabs
0x9773BC: fstp    [esp+24h+arg_4]
0x9773C0: fld     [esp+24h+arg_4]
0x9773C4: add     esp, 24h
0x9773C7: retn
0x9773C8: fld1
0x9773CA: fstp    dword ptr [ecx]
0x9773CC: fld     st(2)
0x9773CE: faddp   st(6), st
0x9773D0: fxch    st(5)
0x9773D2: fstp    [esp+24h+var_24]
0x9773D5: fld     [esp+24h+var_24]
0x9773D8: fcom    st(5)
0x9773DA: fnstsw  ax
0x9773DC: test    ah, 1
0x9773DF: jnz     short loc_97740B
0x9773E1: fstp    st(2)
0x9773E3: fstp    st(2)
0x9773E5: fstp    st
0x9773E7: fxch    st(2)
0x9773E9: fstp    dword ptr [edx]
0x9773EB: fxch    st(1)
0x9773ED: fadd    st, st
0x9773EF: faddp   st(1), st
0x9773F1: fadd    [esp+24h+arg_4]
0x9773F5: fstp    [esp+24h+arg_4]
0x9773F9: fld     [esp+24h+arg_4]
0x9773FD: fabs
0x9773FF: fstp    [esp+24h+arg_4]
0x977403: fld     [esp+24h+arg_4]
0x977407: add     esp, 24h
0x97740A: retn
0x97740B: fstp    st(5)
0x97740D: fld     st(4)
0x97740F: fchs
0x977411: fstp    [esp+24h+arg_0]
0x977415: fld     [esp+24h+arg_0]
0x977419: fcom    st(3)
0x97741B: fnstsw  ax
0x97741D: test    ah, 1
0x977420: jnz     short loc_977452
0x977422: fstp    st(1)
0x977424: fstp    st
0x977426: fstp    st(3)
0x977428: fld1
0x97742A: fstp    dword ptr [edx]
0x97742C: faddp   st(1), st
0x97742E: fadd    [esp+24h+arg_4]
0x977432: fxch    st(1)
0x977434: fadd    [esp+24h+var_18]
0x977438: fadd    st, st
0x97743A: faddp   st(1), st
0x97743C: fstp    [esp+24h+arg_4]
0x977440: fld     [esp+24h+arg_4]
0x977444: fabs
0x977446: fstp    [esp+24h+arg_4]
0x97744A: fld     [esp+24h+arg_4]
0x97744E: add     esp, 24h
0x977451: retn
0x977452: fstp    st(2)
0x977454: fxch    st(1)
0x977456: fdivrp  st(2), st
0x977458: fxch    st(1)
0x97745A: fstp    [esp+24h+arg_0]
0x97745E: fld     [esp+24h+arg_0]
0x977462: fst     dword ptr [edx]
0x977464: fmulp   st(3), st
0x977466: fxch    st(2)
0x977468: faddp   st(1), st
0x97746A: fxch    st(1)
0x97746C: fadd    st, st
0x97746E: faddp   st(1), st
0x977470: fadd    [esp+24h+arg_4]
0x977474: fstp    [esp+24h+arg_4]
0x977478: fld     [esp+24h+arg_4]
0x97747C: fabs
0x97747E: fstp    [esp+24h+arg_4]
0x977482: fld     [esp+24h+arg_4]
0x977486: add     esp, 24h
0x977489: retn
0x97748A: mov     eax, [ecx]
0x97748C: fstp    st(2)
0x97748E: mov     dword ptr [esp+24h+var_18], eax
0x977492: fcompp
0x977494: mov     eax, [ecx+4]
0x977497: mov     dword ptr [esp+24h+var_18+4], eax
0x97749B: mov     eax, [ecx+8]
0x97749E: mov     [esp+24h+var_10], eax
0x9774A2: fnstsw  ax
0x9774A4: fldz
0x9774A6: test    ah, 1
0x9774A9: jnz     short loc_9774DD
0x9774AB: mov     eax, [ecx+0Ch]
0x9774AE: mov     [esp+24h+var_C], eax
0x9774B2: mov     eax, [ecx+10h]
0x9774B5: mov     ecx, [ecx+14h]
0x9774B8: mov     [esp+24h+var_8], eax
0x9774BC: mov     eax, [esp+24h+arg_C]
0x9774C0: mov     [esp+24h+var_4], ecx
0x9774C4: fstp    dword ptr [eax]
0x9774C6: mov     ecx, [esp+24h+arg_8]
0x9774CA: push    ecx
0x9774CB: lea     eax, [esp+28h+var_18]
0x9774CF: push    eax
0x9774D0: push    edx
0x9774D1: call    sub_96FBB0
0x9774D6: add     esp, 0Ch
0x9774D9: add     esp, 24h
0x9774DC: retn
0x9774DD: mov     eax, [ecx+18h]
0x9774E0: mov     [esp+24h+var_C], eax
0x9774E4: mov     eax, [ecx+1Ch]
0x9774E7: mov     ecx, [ecx+20h]
0x9774EA: mov     [esp+24h+var_8], eax
0x9774EE: mov     eax, [esp+24h+arg_8]
0x9774F2: mov     [esp+24h+var_4], ecx
0x9774F6: fstp    dword ptr [eax]
0x9774F8: mov     ecx, [esp+24h+arg_C]
0x9774FC: push    ecx
0x9774FD: lea     eax, [esp+28h+var_18]
0x977501: push    eax
0x977502: push    edx
0x977503: call    sub_96FBB0
0x977508: add     esp, 0Ch
0x97750B: add     esp, 24h
0x97750E: retn
