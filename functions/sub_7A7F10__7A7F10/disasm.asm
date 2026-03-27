0x7A7F10: sub     esp, 14h
0x7A7F13: cmp     byte ptr [esp+14h+arg_4], 0
0x7A7F18: mov     eax, [esp+14h+arg_0]
0x7A7F1C: mov     edx, [eax]
0x7A7F1E: mov     [esp+14h+var_C], edx
0x7A7F22: mov     edx, [eax+4]
0x7A7F25: mov     eax, [eax+8]
0x7A7F28: mov     [esp+14h+var_8], edx
0x7A7F2C: mov     [esp+14h+var_4], eax
0x7A7F30: jz      short loc_7A7F68
0x7A7F32: movzx   edx, byte ptr [ecx+18h]
0x7A7F36: mov     [esp+14h+arg_4], edx
0x7A7F3A: fild    [esp+14h+arg_4]
0x7A7F3E: fdiv    qword ptr ds:0A3DDD8h
0x7A7F44: fstp    [esp+14h+arg_4]
0x7A7F48: fld     [esp+14h+arg_4]
0x7A7F4C: fld     [esp+14h+var_C]
0x7A7F50: fmul    st, st(1)
0x7A7F52: fstp    [esp+14h+var_C]
0x7A7F56: fld     [esp+14h+var_8]
0x7A7F5A: fmul    st, st(1)
0x7A7F5C: fstp    [esp+14h+var_8]
0x7A7F60: fmul    [esp+14h+var_4]
0x7A7F64: fstp    [esp+14h+var_4]
0x7A7F68: fld1
0x7A7F6A: fld     [esp+14h+var_C]
0x7A7F6E: fcom    st(1)
0x7A7F70: fnstsw  ax
0x7A7F72: fldz
0x7A7F74: test    ah, 41h
0x7A7F77: jnz     short loc_7A7F83
0x7A7F79: fstp    st(1)
0x7A7F7B: fxch    st(1)
0x7A7F7D: fst     [esp+14h+var_C]
0x7A7F81: jmp     short loc_7A7F94
0x7A7F83: fcom    st(1)
0x7A7F85: fnstsw  ax
0x7A7F87: fstp    st(1)
0x7A7F89: test    ah, 41h
0x7A7F8C: jnz     short loc_7A7F92
0x7A7F8E: fst     [esp+14h+var_C]
0x7A7F92: fxch    st(1)
0x7A7F94: fld     [esp+14h+var_8]
0x7A7F98: fcom    st(1)
0x7A7F9A: fnstsw  ax
0x7A7F9C: test    ah, 41h
0x7A7F9F: jnz     short loc_7A7FA9
0x7A7FA1: fstp    st
0x7A7FA3: fst     [esp+14h+var_8]
0x7A7FA7: jmp     short loc_7A7FBA
0x7A7FA9: fcomp   st(2)
0x7A7FAB: fnstsw  ax
0x7A7FAD: test    ah, 5
0x7A7FB0: jp      short loc_7A7FBA
0x7A7FB2: fxch    st(1)
0x7A7FB4: fst     [esp+14h+var_8]
0x7A7FB8: fxch    st(1)
0x7A7FBA: fld     [esp+14h+var_4]
0x7A7FBE: fcom    st(1)
0x7A7FC0: fnstsw  ax
0x7A7FC2: test    ah, 41h
0x7A7FC5: jnz     short loc_7A7FD1
0x7A7FC7: fstp    st(2)
0x7A7FC9: fstp    st(1)
0x7A7FCB: fstp    [esp+14h+var_4]
0x7A7FCF: jmp     short loc_7A7FDE
0x7A7FD1: fstp    st(1)
0x7A7FD3: fcomp   st(1)
0x7A7FD5: fnstsw  ax
0x7A7FD7: test    ah, 5
0x7A7FDA: jnp     short loc_7A7FCB
0x7A7FDC: fstp    st
0x7A7FDE: fld     [esp+14h+var_4]
0x7A7FE2: mov     edx, 0FF00h
0x7A7FE7: fld     qword ptr ds:0A8C6D8h
0x7A7FED: fnstcw  word ptr [esp+14h+arg_4]
0x7A7FF1: movzx   eax, word ptr [esp+14h+arg_4]
0x7A7FF6: fmul    st(1), st
0x7A7FF8: or      eax, 0C00h
0x7A7FFD: fxch    st(1)
0x7A7FFF: mov     [esp+14h+arg_0], eax
0x7A8003: fldcw   word ptr [esp+14h+arg_0]
0x7A8007: fistp   [esp+14h+var_14]
0x7A800A: mov     eax, dword ptr [esp+14h+var_14]
0x7A800D: sub     edx, eax
0x7A800F: shl     edx, 8
0x7A8012: fldcw   word ptr [esp+14h+arg_4]
0x7A8016: fld     [esp+14h+var_8]
0x7A801A: fnstcw  word ptr [esp+14h+arg_4]
0x7A801E: fmul    st, st(1)
0x7A8020: movzx   eax, word ptr [esp+14h+arg_4]
0x7A8025: or      eax, 0C00h
0x7A802A: mov     [esp+14h+arg_0], eax
0x7A802E: fldcw   word ptr [esp+14h+arg_0]
0x7A8032: fistp   [esp+14h+var_14]
0x7A8035: mov     eax, dword ptr [esp+14h+var_14]
0x7A8038: sub     edx, eax
0x7A803A: shl     edx, 8
0x7A803D: fldcw   word ptr [esp+14h+arg_4]
0x7A8041: fmul    [esp+14h+var_C]
0x7A8045: fnstcw  word ptr [esp+14h+arg_4]
0x7A8049: movzx   eax, word ptr [esp+14h+arg_4]
0x7A804E: or      eax, 0C00h
0x7A8053: mov     [esp+14h+arg_0], eax
0x7A8057: fldcw   word ptr [esp+14h+arg_0]
0x7A805B: fistp   [esp+14h+var_14]
0x7A805E: mov     eax, dword ptr [esp+14h+var_14]
0x7A8061: sub     edx, eax
0x7A8063: mov     [ecx+14h], edx
0x7A8066: fldcw   word ptr [esp+14h+arg_4]
0x7A806A: add     esp, 14h
0x7A806D: retn    8
