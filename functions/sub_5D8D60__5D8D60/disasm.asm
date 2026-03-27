0x5D8D60: sub     esp, 14h
0x5D8D63: cmp     [esp+14h+arg_0], 5
0x5D8D68: push    esi; a3
0x5D8D69: mov     esi, ecx
0x5D8D6B: jnz     loc_5D8EF3
0x5D8D71: push    edi
0x5D8D72: push    1; arg1
0x5D8D74: push    0; canCreate
0x5D8D76: call    InterfaceManager_GetSingleton
0x5D8D7B: mov     ecx, [esi+38h]
0x5D8D7E: add     esp, 8
0x5D8D81: push    0FB0h
0x5D8D86: mov     edi, eax
0x5D8D88: call    Tile_GetFloat
0x5D8D8D: fstp    [esp+1Ch+var_10]
0x5D8D91: mov     ecx, [esi+38h]
0x5D8D94: push    0FAFh
0x5D8D99: call    Tile_GetFloat
0x5D8D9E: fstp    [esp+1Ch+a3]; a3
0x5D8DA2: call    sub_57D7F0
0x5D8DA7: fstp    [esp+1Ch+var_8]
0x5D8DAB: call    sub_57D7F0
0x5D8DB0: fmul    qword ptr ds:0A2FAA0h
0x5D8DB6: fadd    dword ptr [edi+28h]
0x5D8DB9: fsubr   [esp+1Ch+var_8]
0x5D8DBD: call    Double_To_SInt32
0x5D8DC2: mov     ecx, [esi+38h]
0x5D8DC5: mov     [esp+1Ch+arg_0], eax
0x5D8DC9: fild    [esp+1Ch+arg_0]
0x5D8DCD: fstp    [esp+1Ch+arg_0]
0x5D8DD1: call    sub_588CF0
0x5D8DD6: fsubr   [esp+1Ch+arg_0]
0x5D8DDA: mov     ecx, [esi+38h]
0x5D8DDD: push    0FCAh
0x5D8DE2: fstp    [esp+20h+var_8]
0x5D8DE6: call    Tile_GetFloat
0x5D8DEB: fdivr   [esp+1Ch+var_8]
0x5D8DEF: pop     edi
0x5D8DF0: fstp    [esp+18h+arg_0]
0x5D8DF4: fld1
0x5D8DF6: fld     [esp+18h+arg_0]
0x5D8DFA: fcom    st(1)
0x5D8DFC: fnstsw  ax
0x5D8DFE: fldz
0x5D8E00: test    ah, 5
0x5D8E03: jnp     short loc_5D8E0F
0x5D8E05: fstp    st
0x5D8E07: fstp    st
0x5D8E09: fstp    [esp+18h+arg_0]
0x5D8E0D: jmp     short loc_5D8E22
0x5D8E0F: fstp    st(2)
0x5D8E11: fcomp   st(1)
0x5D8E13: fnstsw  ax
0x5D8E15: test    ah, 41h
0x5D8E18: jz      short loc_5D8E20
0x5D8E1A: fstp    [esp+18h+arg_0]
0x5D8E1E: jmp     short loc_5D8E22
0x5D8E20: fstp    st
0x5D8E22: fld     [esp+18h+var_10]
0x5D8E26: fsub    [esp+18h+a3]
0x5D8E2A: fmul    [esp+18h+arg_0]
0x5D8E2E: fst     [esp+18h+arg_0]
0x5D8E32: fld     [esp+18h+arg_0]
0x5D8E36: fst     [esp+18h+arg_0]
0x5D8E3A: fld     [esp+18h+arg_0]
0x5D8E3E: fld     st
0x5D8E40: call    Double_To_SInt32
0x5D8E45: mov     [esp+18h+arg_0], eax
0x5D8E49: fild    [esp+18h+arg_0]
0x5D8E4D: fstp    [esp+18h+arg_0]
0x5D8E51: fld     [esp+18h+arg_0]
0x5D8E55: fld     st
0x5D8E57: fsubp   st(2), st
0x5D8E59: fxch    st(1)
0x5D8E5B: fcomp   qword ptr ds:0A2FC68h
0x5D8E61: fnstsw  ax
0x5D8E63: test    ah, 1
0x5D8E66: jz      short loc_5D8E6E
0x5D8E68: fsub    qword ptr ds:0A2F928h
0x5D8E6E: fstp    [esp+18h+arg_0]
0x5D8E72: push    ecx
0x5D8E73: fld     [esp+1Ch+arg_0]
0x5D8E77: fsubp   st(2), st
0x5D8E79: fxch    st(1)
0x5D8E7B: fcomp   qword ptr ds:0A2FAA0h
0x5D8E81: fnstsw  ax
0x5D8E83: fstp    [esp+1Ch+a2]; float
0x5D8E86: test    ah, 41h
0x5D8E89: jp      short loc_5D8E96
0x5D8E8B: call    FloatFloor
0x5D8E90: fstp    qword ptr [esp+1Ch+var_10]
0x5D8E94: jmp     short loc_5D8EA9
0x5D8E96: call    FloatFloor
0x5D8E9B: fadd    qword ptr ds:0A2F928h
0x5D8EA1: fadd    [esp+1Ch+a3]
0x5D8EA5: fstp    qword ptr [esp+1Ch+var_10]; a3
0x5D8EA9: fld     dword ptr ds:0A6B1F0h
0x5D8EAF: add     esp, 4
0x5D8EB2: push    ecx
0x5D8EB3: mov     ecx, [esi+38h]; this
0x5D8EB6: fstp    [esp+1Ch+a2]; a3
0x5D8EB9: push    0FB3h; a2
0x5D8EBE: call    Tile_SetFloat
0x5D8EC3: fld     qword ptr [esp+18h+var_10]
0x5D8EC7: fstp    [esp+18h+arg_0]
0x5D8ECB: push    ecx
0x5D8ECC: fld     [esp+1Ch+arg_0]
0x5D8ED0: mov     ecx, [esi+38h]; this
0x5D8ED3: fstp    [esp+1Ch+a2]; a3
0x5D8ED6: push    0FB3h; a2
0x5D8EDB: call    Tile_SetFloat
0x5D8EE0: fldz
0x5D8EE2: push    ecx
0x5D8EE3: fstp    [esp+1Ch+a2]; a3
0x5D8EE6: mov     ecx, [esi+38h]; this
0x5D8EE9: push    0FB3h; a2
0x5D8EEE: call    Tile_SetFloat
0x5D8EF3: pop     esi
0x5D8EF4: add     esp, 14h
0x5D8EF7: retn    8
