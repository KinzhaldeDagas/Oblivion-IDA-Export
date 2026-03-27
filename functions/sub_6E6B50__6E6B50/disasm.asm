0x6E6B50: mov     eax, [esp+arg_0]
0x6E6B54: sub     esp, 24h
0x6E6B57: push    esi
0x6E6B58: mov     esi, ecx
0x6E6B5A: cmp     eax, [esi+14h]
0x6E6B5D: jnz     short loc_6E6B78
0x6E6B5F: mov     eax, [esi+18h]
0x6E6B62: mov     ecx, [esp+28h+arg_4]
0x6E6B66: mov     [ecx], eax
0x6E6B68: mov     edx, [esi+1Ch]
0x6E6B6B: mov     eax, [esp+28h+arg_8]
0x6E6B6F: mov     [eax], edx
0x6E6B71: pop     esi
0x6E6B72: add     esp, 24h
0x6E6B75: retn    0Ch
0x6E6B78: fld1
0x6E6B7A: mov     ecx, [esi]
0x6E6B7C: fld     [esp+28h+arg_0]
0x6E6B80: mov     [esi+14h], eax
0x6E6B83: fcom    st(1)
0x6E6B85: push    edi
0x6E6B86: lea     edi, [ecx-3]
0x6E6B89: mov     [esp+2Ch+var_24], edi
0x6E6B8D: fnstsw  ax
0x6E6B8F: test    ah, 5
0x6E6B92: jp      short loc_6E6BA4
0x6E6B94: fild    [esp+2Ch+var_24]
0x6E6B98: fmul    st, st(1)
0x6E6B9A: call    Double_To_SInt32
0x6E6B9F: add     eax, 3
0x6E6BA2: jmp     short loc_6E6BA7
0x6E6BA4: lea     eax, [ecx-1]
0x6E6BA7: fild    [esp+2Ch+var_24]
0x6E6BAB: mov     edx, [esp+2Ch+arg_4]
0x6E6BAF: lea     ecx, [eax-3]
0x6E6BB2: mov     [edx], ecx
0x6E6BB4: fstp    [esp+2Ch+arg_0]
0x6E6BB8: mov     [esi+18h], ecx
0x6E6BBB: fld     [esp+2Ch+arg_0]
0x6E6BBF: mov     [esp+2Ch+var_C], ecx
0x6E6BC3: mov     ecx, [esp+2Ch+arg_8]
0x6E6BC7: fld     st
0x6E6BC9: mov     [ecx], eax
0x6E6BCB: fmulp   st(2), st
0x6E6BCD: mov     ecx, [esi]
0x6E6BCF: fxch    st(1)
0x6E6BD1: cmp     ecx, 7
0x6E6BD4: fstp    [esp+2Ch+arg_0]
0x6E6BD8: mov     [esp+2Ch+var_20], eax
0x6E6BDC: mov     [esi+1Ch], eax
0x6E6BDF: jl      loc_6E6DCE
0x6E6BE5: cmp     eax, 5
0x6E6BE8: fldz
0x6E6BEA: lea     ecx, [edi+1]
0x6E6BED: push    ebx
0x6E6BEE: lea     edx, [ecx+1]
0x6E6BF1: jle     short loc_6E6C04
0x6E6BF3: lea     ebx, [eax-5]
0x6E6BF6: mov     [esp+30h+arg_4], ebx
0x6E6BFA: fild    [esp+30h+arg_4]
0x6E6BFE: fstp    [esp+30h+var_10]
0x6E6C02: jmp     short loc_6E6C08
0x6E6C04: fst     [esp+30h+var_10]
0x6E6C08: cmp     eax, 4
0x6E6C0B: jle     short loc_6E6C1A
0x6E6C0D: lea     ebx, [eax-4]
0x6E6C10: fstp    st
0x6E6C12: mov     [esp+30h+arg_4], ebx
0x6E6C16: fild    [esp+30h+arg_4]
0x6E6C1A: cmp     eax, ecx
0x6E6C1C: fstp    [esp+30h+var_24]
0x6E6C20: fild    [esp+30h+var_C]
0x6E6C24: lea     ebx, [eax-2]
0x6E6C27: mov     [esp+30h+arg_4], ebx
0x6E6C2B: fstp    [esp+30h+var_8]
0x6E6C2F: fild    [esp+30h+arg_4]
0x6E6C33: fstp    [esp+30h+var_4]
0x6E6C37: jge     short loc_6E6C4A
0x6E6C39: lea     ebx, [eax-1]
0x6E6C3C: mov     [esp+30h+arg_4], ebx
0x6E6C40: fild    [esp+30h+arg_4]
0x6E6C44: fstp    [esp+30h+var_1C]
0x6E6C48: jmp     short loc_6E6C4E
0x6E6C4A: fst     [esp+30h+var_1C]
0x6E6C4E: cmp     eax, edi
0x6E6C50: pop     ebx
0x6E6C51: jge     short loc_6E6C59
0x6E6C53: fstp    st
0x6E6C55: fild    [esp+2Ch+var_20]
0x6E6C59: cmp     eax, 3
0x6E6C5C: fstp    [esp+2Ch+var_C]
0x6E6C60: fld     dword ptr ds:0A3D65Ch
0x6E6C66: jnz     short loc_6E6C70
0x6E6C68: fxch    st(1)
0x6E6C6A: fst     [esp+2Ch+var_20]
0x6E6C6E: jmp     short loc_6E6C76
0x6E6C70: fst     [esp+2Ch+var_20]
0x6E6C74: fxch    st(1)
0x6E6C76: cmp     eax, edx
0x6E6C78: jnz     short loc_6E6C80
0x6E6C7A: fst     [esp+2Ch+var_18]
0x6E6C7E: jmp     short loc_6E6C88
0x6E6C80: fxch    st(1)
0x6E6C82: fst     [esp+2Ch+var_18]
0x6E6C86: fxch    st(1)
0x6E6C88: cmp     eax, 3
0x6E6C8B: fld     dword ptr ds:0A7C038h
0x6E6C91: jnz     short loc_6E6CA1
0x6E6C93: fxch    st(1)
0x6E6C95: fst     [esp+2Ch+arg_4]
0x6E6C99: fxch    st(2)
0x6E6C9B: fst     [esp+2Ch+var_14]
0x6E6C9F: jmp     short loc_6E6CC2
0x6E6CA1: cmp     eax, 4
0x6E6CA4: jnz     short loc_6E6CAE
0x6E6CA6: fxch    st(2)
0x6E6CA8: fst     [esp+2Ch+arg_4]
0x6E6CAC: jmp     short loc_6E6CB4
0x6E6CAE: fst     [esp+2Ch+arg_4]
0x6E6CB2: fxch    st(2)
0x6E6CB4: cmp     eax, edx
0x6E6CB6: fxch    st(2)
0x6E6CB8: jz      short loc_6E6CCC
0x6E6CBA: fst     [esp+2Ch+var_14]
0x6E6CBE: fxch    st(1)
0x6E6CC0: fxch    st(2)
0x6E6CC2: cmp     eax, edx
0x6E6CC4: jnz     short loc_6E6CD6
0x6E6CC6: fstp    st
0x6E6CC8: fstp    st
0x6E6CCA: jmp     short loc_6E6CDE
0x6E6CCC: fxch    st(1)
0x6E6CCE: fxch    st(2)
0x6E6CD0: fst     [esp+2Ch+var_14]
0x6E6CD4: jmp     short loc_6E6CC2
0x6E6CD6: cmp     eax, ecx
0x6E6CD8: fstp    st(2)
0x6E6CDA: jz      short loc_6E6CC8
0x6E6CDC: fstp    st(1)
0x6E6CDE: fstp    [esp+2Ch+arg_8]
0x6E6CE2: pop     edi
0x6E6CE3: fld     [esp+28h+arg_0]
0x6E6CE7: fld     st
0x6E6CE9: fsub    [esp+28h+var_24]
0x6E6CED: fstp    [esp+28h+arg_0]
0x6E6CF1: fld     st
0x6E6CF3: fsub    [esp+28h+var_8]
0x6E6CF7: fstp    [esp+28h+var_8]
0x6E6CFB: fld     [esp+28h+var_4]
0x6E6CFF: fsub    st, st(1)
0x6E6D01: fstp    [esp+28h+var_4]
0x6E6D05: fld     [esp+28h+var_1C]
0x6E6D09: fsub    st, st(1)
0x6E6D0B: fstp    [esp+28h+var_1C]
0x6E6D0F: fld     [esp+28h+var_4]
0x6E6D13: fld     st
0x6E6D15: fmul    [esp+28h+var_20]
0x6E6D19: fstp    [esp+28h+var_4]
0x6E6D1D: fld     [esp+28h+var_8]
0x6E6D21: fld     st
0x6E6D23: fmul    [esp+28h+var_18]
0x6E6D27: fstp    [esp+28h+var_8]
0x6E6D2B: fld     st(1)
0x6E6D2D: fmul    [esp+28h+arg_4]
0x6E6D31: fld     [esp+28h+var_4]
0x6E6D35: fld     st
0x6E6D37: fmulp   st(2), st
0x6E6D39: fxch    st(1)
0x6E6D3B: fstp    [esp+28h+arg_4]
0x6E6D3F: fld     [esp+28h+var_8]
0x6E6D43: fld     st
0x6E6D45: fld     [esp+28h+var_1C]
0x6E6D49: fld     st
0x6E6D4B: fmulp   st(2), st
0x6E6D4D: fld     [esp+28h+arg_0]
0x6E6D51: fmulp   st(4), st
0x6E6D53: fxch    st(1)
0x6E6D55: faddp   st(3), st
0x6E6D57: fld     [esp+28h+var_14]
0x6E6D5B: fmulp   st(3), st
0x6E6D5D: fxch    st(2)
0x6E6D5F: fstp    [esp+28h+var_4]
0x6E6D63: fld     st(2)
0x6E6D65: fmul    [esp+28h+arg_8]
0x6E6D69: fmulp   st(1), st
0x6E6D6B: fstp    [esp+28h+arg_8]
0x6E6D6F: fld     [esp+28h+arg_4]
0x6E6D73: fld     st
0x6E6D75: fmulp   st(4), st
0x6E6D77: fxch    st(3)
0x6E6D79: fstp    dword ptr [esi+4]
0x6E6D7C: fld     st(3)
0x6E6D7E: fsub    [esp+28h+var_10]
0x6E6D82: fstp    [esp+28h+arg_4]
0x6E6D86: fld     [esp+28h+arg_4]
0x6E6D8A: fmulp   st(3), st
0x6E6D8C: fld     [esp+28h+var_4]
0x6E6D90: fld     st
0x6E6D92: fmulp   st(2), st
0x6E6D94: fxch    st(3)
0x6E6D96: faddp   st(1), st
0x6E6D98: fstp    dword ptr [esi+8]
0x6E6D9B: fld     [esp+28h+var_C]
0x6E6D9F: fsubrp  st(3), st
0x6E6DA1: fxch    st(2)
0x6E6DA3: fstp    [esp+28h+arg_4]
0x6E6DA7: fld     [esp+28h+arg_4]
0x6E6DAB: fld     [esp+28h+arg_8]
0x6E6DAF: fld     st
0x6E6DB1: fmulp   st(2), st
0x6E6DB3: fld     [esp+28h+arg_0]
0x6E6DB7: fmulp   st(3), st
0x6E6DB9: fxch    st(1)
0x6E6DBB: faddp   st(2), st
0x6E6DBD: fxch    st(1)
0x6E6DBF: fstp    dword ptr [esi+0Ch]
0x6E6DC2: fmulp   st(1), st
0x6E6DC4: fstp    dword ptr [esi+10h]
0x6E6DC7: pop     esi
0x6E6DC8: add     esp, 24h
0x6E6DCB: retn    0Ch
0x6E6DCE: cmp     ecx, 6
0x6E6DD1: fstp    st
0x6E6DD3: fstp    st
0x6E6DD5: jnz     loc_6E701D
0x6E6DDB: cmp     eax, 3
0x6E6DDE: fld     [esp+2Ch+arg_0]
0x6E6DE2: jnz     loc_6E6E98
0x6E6DE8: fld     st
0x6E6DEA: pop     edi
0x6E6DEB: fld1
0x6E6DED: fsubrp  st(1), st
0x6E6DEF: fstp    [esp+28h+arg_0]
0x6E6DF3: fld     st
0x6E6DF5: fsubr   qword ptr ds:0A3D0C0h
0x6E6DFB: fstp    [esp+28h+arg_8]
0x6E6DFF: fld     st
0x6E6E01: fld     qword ptr ds:0A2FAA0h
0x6E6E07: fmul    st(1), st
0x6E6E09: fxch    st(1)
0x6E6E0B: fstp    [esp+28h+arg_4]
0x6E6E0F: fld     [esp+28h+arg_0]
0x6E6E13: fld     st
0x6E6E15: fmul    st, st
0x6E6E17: fstp    [esp+28h+arg_0]
0x6E6E1B: fld     [esp+28h+arg_4]
0x6E6E1F: fld     st
0x6E6E21: fld     [esp+28h+arg_8]
0x6E6E25: fld     st
0x6E6E27: fmulp   st(2), st
0x6E6E29: fld     st(3)
0x6E6E2B: fmul    st, st(6)
0x6E6E2D: faddp   st(2), st
0x6E6E2F: fxch    st(1)
0x6E6E31: fmulp   st(4), st
0x6E6E33: fxch    st(3)
0x6E6E35: fstp    [esp+28h+arg_4]
0x6E6E39: fld     st(3)
0x6E6E3B: fmul    qword ptr ds:0A7C030h
0x6E6E41: fmulp   st(1), st
0x6E6E43: fstp    [esp+28h+arg_8]
0x6E6E47: fld     [esp+28h+arg_0]
0x6E6E4B: fld     st
0x6E6E4D: fmulp   st(2), st
0x6E6E4F: fxch    st(1)
0x6E6E51: fstp    dword ptr [esi+4]
0x6E6E54: fld     [esp+28h+arg_4]
0x6E6E58: fld     st
0x6E6E5A: fmulp   st(3), st
0x6E6E5C: fld     st(3)
0x6E6E5E: fmulp   st(2), st
0x6E6E60: fxch    st(2)
0x6E6E62: faddp   st(1), st
0x6E6E64: fstp    dword ptr [esi+8]
0x6E6E67: fld     st(1)
0x6E6E69: fsubr   qword ptr ds:0A30E48h
0x6E6E6F: fstp    [esp+28h+arg_0]
0x6E6E73: fld     [esp+28h+arg_0]
0x6E6E77: fld     [esp+28h+arg_8]
0x6E6E7B: fld     st
0x6E6E7D: fmulp   st(2), st
0x6E6E7F: fld     st(3)
0x6E6E81: fmulp   st(3), st
0x6E6E83: fxch    st(1)
0x6E6E85: faddp   st(2), st
0x6E6E87: fxch    st(1)
0x6E6E89: fstp    dword ptr [esi+0Ch]
0x6E6E8C: fmulp   st(1), st
0x6E6E8E: fstp    dword ptr [esi+10h]
0x6E6E91: pop     esi
0x6E6E92: add     esp, 24h
0x6E6E95: retn    0Ch
0x6E6E98: cmp     eax, 4
0x6E6E9B: jnz     loc_6E6F69
0x6E6EA1: fld     st
0x6E6EA3: pop     edi
0x6E6EA4: fld1
0x6E6EA6: fsub    st(1), st
0x6E6EA8: fxch    st(1)
0x6E6EAA: fstp    [esp+28h+arg_4]
0x6E6EAE: fld     st(1)
0x6E6EB0: fsubr   qword ptr ds:0A30E48h
0x6E6EB6: fstp    [esp+28h+arg_8]
0x6E6EBA: fld     st(1)
0x6E6EBC: fld     qword ptr ds:0A2FAA0h
0x6E6EC2: fmul    st(1), st
0x6E6EC4: fxch    st(1)
0x6E6EC6: fstp    [esp+28h+arg_0]
0x6E6ECA: fld     [esp+28h+arg_0]
0x6E6ECE: fsubp   st(2), st
0x6E6ED0: fxch    st(1)
0x6E6ED2: fstp    [esp+28h+arg_0]
0x6E6ED6: fld     [esp+28h+arg_4]
0x6E6EDA: fld     st
0x6E6EDC: fmulp   st(2), st
0x6E6EDE: fxch    st(1)
0x6E6EE0: fstp    [esp+28h+arg_4]
0x6E6EE4: fld     [esp+28h+arg_0]
0x6E6EE8: fld     st
0x6E6EEA: fmul    st, st
0x6E6EEC: fstp    [esp+28h+var_4]
0x6E6EF0: fld     [esp+28h+arg_4]
0x6E6EF4: fld     st
0x6E6EF6: fld     [esp+28h+arg_8]
0x6E6EFA: fld     st
0x6E6EFC: fmulp   st(2), st
0x6E6EFE: fld     st(5)
0x6E6F00: fmulp   st(4), st
0x6E6F02: fxch    st(1)
0x6E6F04: faddp   st(3), st
0x6E6F06: fxch    st(2)
0x6E6F08: fmul    qword ptr ds:0A7C030h
0x6E6F0E: fstp    [esp+28h+arg_4]
0x6E6F12: fmul    st, st
0x6E6F14: fstp    [esp+28h+arg_8]
0x6E6F18: fld     st(2)
0x6E6F1A: fsubr   qword ptr ds:0A3D0C0h
0x6E6F20: fstp    [esp+28h+arg_0]
0x6E6F24: fld     [esp+28h+arg_0]
0x6E6F28: fld     [esp+28h+var_4]
0x6E6F2C: fld     st
0x6E6F2E: fmulp   st(2), st
0x6E6F30: fxch    st(1)
0x6E6F32: fstp    dword ptr [esi+4]
0x6E6F35: fld     [esp+28h+arg_4]
0x6E6F39: fld     st
0x6E6F3B: fmul    st, st(3)
0x6E6F3D: fld     st(5)
0x6E6F3F: fmulp   st(3), st
0x6E6F41: faddp   st(2), st
0x6E6F43: fxch    st(1)
0x6E6F45: fstp    dword ptr [esi+8]
0x6E6F48: fld     [esp+28h+arg_8]
0x6E6F4C: fld     st
0x6E6F4E: fmulp   st(3), st
0x6E6F50: fxch    st(1)
0x6E6F52: fmulp   st(4), st
0x6E6F54: fxch    st(1)
0x6E6F56: faddp   st(3), st
0x6E6F58: fxch    st(2)
0x6E6F5A: fstp    dword ptr [esi+0Ch]
0x6E6F5D: fmulp   st(1), st
0x6E6F5F: fstp    dword ptr [esi+10h]
0x6E6F62: pop     esi
0x6E6F63: add     esp, 24h
0x6E6F66: retn    0Ch
0x6E6F69: fld     qword ptr ds:0A2F928h
0x6E6F6F: pop     edi
0x6E6F70: fsubr   st, st(1)
0x6E6F72: fstp    [esp+28h+arg_8]
0x6E6F76: fld     qword ptr ds:0A3D0C0h
0x6E6F7C: fsubr   st, st(1)
0x6E6F7E: fstp    [esp+28h+arg_4]
0x6E6F82: fld     st
0x6E6F84: fsubr   qword ptr ds:0A30E48h
0x6E6F8A: fstp    [esp+28h+arg_0]
0x6E6F8E: fld     [esp+28h+arg_0]
0x6E6F92: fld     st
0x6E6F94: fld     qword ptr ds:0A2FAA0h
0x6E6F9A: fmul    st(1), st
0x6E6F9C: fxch    st(1)
0x6E6F9E: fstp    [esp+28h+arg_0]
0x6E6FA2: fld     [esp+28h+arg_4]
0x6E6FA6: fld     st
0x6E6FA8: fmul    st, st
0x6E6FAA: fstp    [esp+28h+var_4]
0x6E6FAE: fld     st(2)
0x6E6FB0: fmul    qword ptr ds:0A7C030h
0x6E6FB6: fld     [esp+28h+arg_0]
0x6E6FBA: fld     st
0x6E6FBC: fmulp   st(2), st
0x6E6FBE: fxch    st(1)
0x6E6FC0: fstp    [esp+28h+arg_0]
0x6E6FC4: fld     st(3)
0x6E6FC6: fmul    st, st(2)
0x6E6FC8: fld     [esp+28h+arg_8]
0x6E6FCC: fld     st
0x6E6FCE: fmulp   st(3), st
0x6E6FD0: fxch    st(1)
0x6E6FD2: faddp   st(2), st
0x6E6FD4: fxch    st(1)
0x6E6FD6: fmulp   st(3), st
0x6E6FD8: fxch    st(2)
0x6E6FDA: fstp    [esp+28h+arg_4]
0x6E6FDE: fld     [esp+28h+arg_0]
0x6E6FE2: fld     st
0x6E6FE4: fmul    st, st(4)
0x6E6FE6: fstp    dword ptr [esi+4]
0x6E6FE9: fld     [esp+28h+arg_4]
0x6E6FED: fld     st
0x6E6FEF: fmul    st, st(5)
0x6E6FF1: fxch    st(2)
0x6E6FF3: fmulp   st(6), st
0x6E6FF5: fxch    st(1)
0x6E6FF7: faddp   st(5), st
0x6E6FF9: fxch    st(4)
0x6E6FFB: fstp    dword ptr [esi+8]
0x6E6FFE: fld     [esp+28h+var_4]
0x6E7002: fld     st
0x6E7004: fmulp   st(4), st
0x6E7006: fxch    st(4)
0x6E7008: fmulp   st(2), st
0x6E700A: fxch    st(2)
0x6E700C: faddp   st(1), st
0x6E700E: fstp    dword ptr [esi+0Ch]
0x6E7011: fmulp   st(1), st
0x6E7013: fstp    dword ptr [esi+10h]
0x6E7016: pop     esi
0x6E7017: add     esp, 24h
0x6E701A: retn    0Ch
0x6E701D: cmp     ecx, 5
0x6E7020: jnz     loc_6E7161
0x6E7026: cmp     eax, 3
0x6E7029: fld     [esp+2Ch+arg_0]
0x6E702D: fld     st
0x6E702F: fld1
0x6E7031: jnz     loc_6E70C9
0x6E7037: fsubrp  st(1), st
0x6E7039: pop     edi
0x6E703A: fstp    [esp+28h+arg_0]
0x6E703E: fld     st
0x6E7040: fsubr   qword ptr ds:0A3D0C0h
0x6E7046: fstp    [esp+28h+arg_8]
0x6E704A: fld     st
0x6E704C: fld     qword ptr ds:0A2FAA0h
0x6E7052: fmul    st(1), st
0x6E7054: fxch    st(1)
0x6E7056: fstp    [esp+28h+arg_4]
0x6E705A: fld     [esp+28h+arg_0]
0x6E705E: fld     st
0x6E7060: fmul    st, st
0x6E7062: fstp    [esp+28h+arg_0]
0x6E7066: fld     [esp+28h+arg_4]
0x6E706A: fld     st
0x6E706C: fld     [esp+28h+arg_8]
0x6E7070: fld     st
0x6E7072: fmulp   st(2), st
0x6E7074: fld     st(3)
0x6E7076: fmul    st, st(6)
0x6E7078: faddp   st(2), st
0x6E707A: fxch    st(1)
0x6E707C: fmulp   st(4), st
0x6E707E: fxch    st(3)
0x6E7080: fstp    [esp+28h+arg_4]
0x6E7084: fmul    st, st
0x6E7086: fstp    [esp+28h+arg_8]
0x6E708A: fld     [esp+28h+arg_0]
0x6E708E: fld     st
0x6E7090: fmulp   st(2), st
0x6E7092: fxch    st(1)
0x6E7094: fstp    dword ptr [esi+4]
0x6E7097: fld     [esp+28h+arg_4]
0x6E709B: fld     st
0x6E709D: fmul    st, st(3)
0x6E709F: fld     st(4)
0x6E70A1: fmulp   st(3), st
0x6E70A3: faddp   st(2), st
0x6E70A5: fxch    st(1)
0x6E70A7: fstp    dword ptr [esi+8]
0x6E70AA: fld     [esp+28h+arg_8]
0x6E70AE: fld     st
0x6E70B0: fmulp   st(3), st
0x6E70B2: fld     st(3)
0x6E70B4: fmulp   st(2), st
0x6E70B6: fxch    st(2)
0x6E70B8: faddp   st(1), st
0x6E70BA: fstp    dword ptr [esi+0Ch]
0x6E70BD: fmulp   st(1), st
0x6E70BF: fstp    dword ptr [esi+10h]
0x6E70C2: pop     esi
0x6E70C3: add     esp, 24h
0x6E70C6: retn    0Ch
0x6E70C9: fsub    st(1), st
0x6E70CB: pop     edi
0x6E70CC: fxch    st(1)
0x6E70CE: fstp    [esp+28h+arg_0]
0x6E70D2: fld     st(1)
0x6E70D4: fsubr   qword ptr ds:0A3D0C0h
0x6E70DA: fstp    [esp+28h+arg_8]
0x6E70DE: fld     st(1)
0x6E70E0: fmul    qword ptr ds:0A2FAA0h
0x6E70E6: fstp    [esp+28h+arg_4]
0x6E70EA: fld     [esp+28h+arg_0]
0x6E70EE: fld     st
0x6E70F0: fmul    st, st
0x6E70F2: fstp    [esp+28h+var_4]
0x6E70F6: fld     [esp+28h+arg_4]
0x6E70FA: fld     st
0x6E70FC: fsubp   st(3), st
0x6E70FE: fxch    st(2)
0x6E7100: fstp    [esp+28h+arg_0]
0x6E7104: fld     [esp+28h+arg_0]
0x6E7108: fld     st
0x6E710A: fmul    st, st
0x6E710C: fstp    [esp+28h+arg_0]
0x6E7110: fld     st(1)
0x6E7112: faddp   st(3), st
0x6E7114: fmulp   st(2), st
0x6E7116: fxch    st(1)
0x6E7118: fstp    [esp+28h+arg_4]
0x6E711C: fld     [esp+28h+arg_0]
0x6E7120: fld     st
0x6E7122: fld     [esp+28h+arg_8]
0x6E7126: fld     st
0x6E7128: fmulp   st(2), st
0x6E712A: fxch    st(1)
0x6E712C: fstp    dword ptr [esi+4]
0x6E712F: fld     [esp+28h+arg_4]
0x6E7133: fld     st
0x6E7135: fmul    st, st(2)
0x6E7137: fld     st(5)
0x6E7139: fmulp   st(4), st
0x6E713B: faddp   st(3), st
0x6E713D: fxch    st(2)
0x6E713F: fstp    dword ptr [esi+8]
0x6E7142: fld     [esp+28h+var_4]
0x6E7146: fld     st
0x6E7148: fmulp   st(2), st
0x6E714A: fxch    st(2)
0x6E714C: fmulp   st(4), st
0x6E714E: faddp   st(3), st
0x6E7150: fxch    st(2)
0x6E7152: fstp    dword ptr [esi+0Ch]
0x6E7155: fmulp   st(1), st
0x6E7157: fstp    dword ptr [esi+10h]
0x6E715A: pop     esi
0x6E715B: add     esp, 24h
0x6E715E: retn    0Ch
0x6E7161: cmp     ecx, 4
0x6E7164: jnz     short loc_6E71BC
0x6E7166: fld     [esp+2Ch+arg_0]
0x6E716A: fld     st
0x6E716C: fld1
0x6E716E: fsubrp  st(1), st
0x6E7170: fstp    [esp+2Ch+arg_0]
0x6E7174: fld     st
0x6E7176: fmul    st, st
0x6E7178: fstp    [esp+2Ch+arg_4]
0x6E717C: fld     [esp+2Ch+arg_0]
0x6E7180: fld     st
0x6E7182: fmul    st, st
0x6E7184: fstp    [esp+2Ch+arg_0]
0x6E7188: fld     [esp+2Ch+arg_0]
0x6E718C: fld     st
0x6E718E: fmul    st, st(2)
0x6E7190: fstp    dword ptr [esi+4]
0x6E7193: fld     st(2)
0x6E7195: fld     qword ptr ds:0A30E48h
0x6E719B: fmul    st(1), st
0x6E719D: fxch    st(1)
0x6E719F: fmulp   st(2), st
0x6E71A1: fxch    st(1)
0x6E71A3: fstp    dword ptr [esi+8]
0x6E71A6: fld     [esp+2Ch+arg_4]
0x6E71AA: fld     st
0x6E71AC: fmulp   st(2), st
0x6E71AE: fxch    st(1)
0x6E71B0: fmulp   st(2), st
0x6E71B2: fxch    st(1)
0x6E71B4: fstp    dword ptr [esi+0Ch]
0x6E71B7: fmulp   st(1), st
0x6E71B9: fstp    dword ptr [esi+10h]
0x6E71BC: pop     edi
0x6E71BD: pop     esi
0x6E71BE: add     esp, 24h
0x6E71C1: retn    0Ch
