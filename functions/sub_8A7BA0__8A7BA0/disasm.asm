0x8A7BA0: sub     esp, 8
0x8A7BA3: mov     edx, [esp+8+arg_0]
0x8A7BA7: fld     dword ptr [edx]
0x8A7BA9: fstp    [esp+8+arg_0]
0x8A7BAD: fld     dword ptr [ecx+0A0h]
0x8A7BB3: fstp    [esp+8+var_8]
0x8A7BB6: fld     dword ptr [ecx+80h]
0x8A7BBC: fstp    [esp+8+var_4]
0x8A7BC0: fldz
0x8A7BC2: fld     [esp+8+arg_0]
0x8A7BC6: fcom    st(1)
0x8A7BC8: fnstsw  ax
0x8A7BCA: test    ah, 5
0x8A7BCD: jp      short loc_8A7BF5
0x8A7BCF: fsub    [esp+8+var_8]
0x8A7BD2: fstp    [esp+8+arg_0]
0x8A7BD6: fld     [esp+8+arg_0]
0x8A7BDA: fadd    [esp+8+var_4]
0x8A7BDE: fstp    [esp+8+arg_0]
0x8A7BE2: fld     [esp+8+arg_0]
0x8A7BE6: fcom    st(1)
0x8A7BE8: fnstsw  ax
0x8A7BEA: test    ah, 5
0x8A7BED: jp      short loc_8A7C1B
0x8A7BEF: fsubr   dword ptr [edx]
0x8A7BF1: fstp    dword ptr [edx]
0x8A7BF3: jmp     short loc_8A7C1D
0x8A7BF5: fadd    [esp+8+var_8]
0x8A7BF8: fstp    [esp+8+arg_0]
0x8A7BFC: fld     [esp+8+arg_0]
0x8A7C00: fsub    [esp+8+var_4]
0x8A7C04: fstp    [esp+8+arg_0]
0x8A7C08: fld     [esp+8+arg_0]
0x8A7C0C: fcom    st(1)
0x8A7C0E: fnstsw  ax
0x8A7C10: test    ah, 41h
0x8A7C13: jnz     short loc_8A7C1B
0x8A7C15: fsubr   dword ptr [edx]
0x8A7C17: fstp    dword ptr [edx]
0x8A7C19: jmp     short loc_8A7C1D
0x8A7C1B: fstp    st
0x8A7C1D: fld     dword ptr [edx+4]
0x8A7C20: fstp    [esp+8+arg_0]
0x8A7C24: fld     dword ptr [ecx+0A4h]
0x8A7C2A: fstp    [esp+8+var_8]
0x8A7C2D: fld     dword ptr [ecx+84h]
0x8A7C33: fstp    [esp+8+var_4]
0x8A7C37: fld     [esp+8+arg_0]
0x8A7C3B: fcom    st(1)
0x8A7C3D: fnstsw  ax
0x8A7C3F: test    ah, 5
0x8A7C42: jp      short loc_8A7C6C
0x8A7C44: fsub    [esp+8+var_8]
0x8A7C47: fstp    [esp+8+arg_0]
0x8A7C4B: fld     [esp+8+arg_0]
0x8A7C4F: fadd    [esp+8+var_4]
0x8A7C53: fstp    [esp+8+arg_0]
0x8A7C57: fld     [esp+8+arg_0]
0x8A7C5B: fcom    st(1)
0x8A7C5D: fnstsw  ax
0x8A7C5F: test    ah, 5
0x8A7C62: jp      short loc_8A7C94
0x8A7C64: fsubr   dword ptr [edx+4]
0x8A7C67: fstp    dword ptr [edx+4]
0x8A7C6A: jmp     short loc_8A7C96
0x8A7C6C: fadd    [esp+8+var_8]
0x8A7C6F: fstp    [esp+8+arg_0]
0x8A7C73: fld     [esp+8+arg_0]
0x8A7C77: fsub    [esp+8+var_4]
0x8A7C7B: fstp    [esp+8+arg_0]
0x8A7C7F: fld     [esp+8+arg_0]
0x8A7C83: fcom    st(1)
0x8A7C85: fnstsw  ax
0x8A7C87: test    ah, 41h
0x8A7C8A: jnz     short loc_8A7C94
0x8A7C8C: fsubr   dword ptr [edx+4]
0x8A7C8F: fstp    dword ptr [edx+4]
0x8A7C92: jmp     short loc_8A7C96
0x8A7C94: fstp    st
0x8A7C96: fld     dword ptr [edx+8]
0x8A7C99: fstp    [esp+8+arg_0]
0x8A7C9D: fld     dword ptr [ecx+0A8h]
0x8A7CA3: fstp    [esp+8+var_8]
0x8A7CA6: fld     dword ptr [ecx+88h]
0x8A7CAC: fstp    [esp+8+var_4]
0x8A7CB0: fld     [esp+8+arg_0]
0x8A7CB4: fcom    st(1)
0x8A7CB6: fnstsw  ax
0x8A7CB8: test    ah, 5
0x8A7CBB: jp      short loc_8A7CEB
0x8A7CBD: fsub    [esp+8+var_8]
0x8A7CC0: fstp    [esp+8+arg_0]
0x8A7CC4: fld     [esp+8+arg_0]
0x8A7CC8: fadd    [esp+8+var_4]
0x8A7CCC: fstp    [esp+8+arg_0]
0x8A7CD0: fld     [esp+8+arg_0]
0x8A7CD4: fcom    st(1)
0x8A7CD6: fnstsw  ax
0x8A7CD8: fstp    st(1)
0x8A7CDA: test    ah, 5
0x8A7CDD: jp      short loc_8A7D0D
0x8A7CDF: fsubr   dword ptr [edx+8]
0x8A7CE2: fstp    dword ptr [edx+8]
0x8A7CE5: add     esp, 8
0x8A7CE8: retn    4
0x8A7CEB: fadd    [esp+8+var_8]
0x8A7CEE: fstp    [esp+8+arg_0]
0x8A7CF2: fld     [esp+8+arg_0]
0x8A7CF6: fsub    [esp+8+var_4]
0x8A7CFA: fstp    [esp+8+arg_0]
0x8A7CFE: fld     [esp+8+arg_0]
0x8A7D02: fcom    st(1)
0x8A7D04: fnstsw  ax
0x8A7D06: fstp    st(1)
0x8A7D08: test    ah, 41h
0x8A7D0B: jz      short loc_8A7CDF
0x8A7D0D: fstp    st
0x8A7D0F: add     esp, 8
0x8A7D12: retn    4
