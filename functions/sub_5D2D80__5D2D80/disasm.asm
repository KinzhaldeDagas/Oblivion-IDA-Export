0x5D2D80: push    ebp
0x5D2D81: mov     ebp, esp
0x5D2D83: and     esp, 0FFFFFFF8h
0x5D2D86: sub     esp, 10h
0x5D2D89: cmp     [ebp+arg_0], 4
0x5D2D8D: push    esi; a3
0x5D2D8E: push    edi; a3
0x5D2D8F: mov     esi, ecx
0x5D2D91: jnz     loc_5D2F7F
0x5D2D97: push    1; arg1
0x5D2D99: push    0; canCreate
0x5D2D9B: call    InterfaceManager_GetSingleton
0x5D2DA0: mov     ecx, [esi+34h]
0x5D2DA3: add     esp, 8
0x5D2DA6: push    0FB0h
0x5D2DAB: mov     edi, eax
0x5D2DAD: call    Tile_GetFloat
0x5D2DB2: fstp    [esp+18h+var_8]
0x5D2DB6: mov     ecx, [esi+34h]
0x5D2DB9: push    0FAFh
0x5D2DBE: call    Tile_GetFloat
0x5D2DC3: fstp    [esp+18h+var_4]
0x5D2DC7: call    sub_57D7F0
0x5D2DCC: fstp    qword ptr [esp+18h+a3]
0x5D2DD0: call    sub_57D7F0
0x5D2DD5: fmul    qword ptr ds:0A2FAA0h
0x5D2DDB: fadd    dword ptr [edi+28h]
0x5D2DDE: fsubr   qword ptr [esp+18h+a3]
0x5D2DE2: call    Double_To_SInt32
0x5D2DE7: mov     ecx, [esi+34h]
0x5D2DEA: mov     [esp+18h+a3], eax
0x5D2DEE: fild    [esp+18h+a3]
0x5D2DF2: fstp    [esp+18h+a3]
0x5D2DF6: call    sub_588CF0
0x5D2DFB: fsubr   [esp+18h+a3]
0x5D2DFF: mov     ecx, [esi+34h]
0x5D2E02: push    0FCAh
0x5D2E07: fstp    qword ptr [esp+1Ch+a3]
0x5D2E0B: call    Tile_GetFloat
0x5D2E10: fdivr   qword ptr [esp+18h+a3]
0x5D2E14: fcomp   qword ptr ds:0A2FC68h
0x5D2E1A: fnstsw  ax
0x5D2E1C: test    ah, 5
0x5D2E1F: jnp     short loc_5D2E81
0x5D2E21: call    sub_57D7F0
0x5D2E26: fstp    qword ptr [esp+18h+a3]
0x5D2E2A: call    sub_57D7F0
0x5D2E2F: fmul    qword ptr ds:0A2FAA0h
0x5D2E35: fadd    dword ptr [edi+28h]
0x5D2E38: fsubr   qword ptr [esp+18h+a3]
0x5D2E3C: call    Double_To_SInt32
0x5D2E41: mov     ecx, [esi+34h]
0x5D2E44: mov     [esp+18h+a3], eax
0x5D2E48: fild    [esp+18h+a3]
0x5D2E4C: fstp    [esp+18h+a3]
0x5D2E50: call    sub_588CF0
0x5D2E55: fsubr   [esp+18h+a3]
0x5D2E59: mov     ecx, [esi+34h]
0x5D2E5C: push    0FCAh
0x5D2E61: fstp    qword ptr [esp+1Ch+a3]
0x5D2E65: call    Tile_GetFloat
0x5D2E6A: fdivr   qword ptr [esp+18h+a3]
0x5D2E6E: fld1
0x5D2E70: fcom    st(1)
0x5D2E72: fnstsw  ax
0x5D2E74: fstp    st(1)
0x5D2E76: test    ah, 41h
0x5D2E79: jnz     loc_5D2F11
0x5D2E7F: fstp    st
0x5D2E81: call    sub_57D7F0
0x5D2E86: fstp    qword ptr [esp+18h+a3]
0x5D2E8A: call    sub_57D7F0
0x5D2E8F: fmul    qword ptr ds:0A2FAA0h
0x5D2E95: fadd    dword ptr [edi+28h]
0x5D2E98: fsubr   qword ptr [esp+18h+a3]
0x5D2E9C: call    Double_To_SInt32
0x5D2EA1: mov     ecx, [esi+34h]
0x5D2EA4: mov     [esp+18h+a3], eax
0x5D2EA8: fild    [esp+18h+a3]
0x5D2EAC: fstp    [esp+18h+a3]
0x5D2EB0: call    sub_588CF0
0x5D2EB5: fsubr   [esp+18h+a3]
0x5D2EB9: mov     ecx, [esi+34h]
0x5D2EBC: push    0FCAh
0x5D2EC1: fstp    qword ptr [esp+1Ch+a3]
0x5D2EC5: call    Tile_GetFloat
0x5D2ECA: fdivr   qword ptr [esp+18h+a3]
0x5D2ECE: fldz
0x5D2ED0: fcom    st(1)
0x5D2ED2: fnstsw  ax
0x5D2ED4: fstp    st(1)
0x5D2ED6: test    ah, 41h
0x5D2ED9: jz      short loc_5D2F11
0x5D2EDB: mov     ecx, edi
0x5D2EDD: fstp    st
0x5D2EDF: call    sub_593020
0x5D2EE4: mov     ecx, [esi+34h]
0x5D2EE7: mov     [esp+18h+a3], eax
0x5D2EEB: fild    [esp+18h+a3]
0x5D2EEF: fstp    qword ptr [esp+18h+a3]
0x5D2EF3: call    sub_588CF0
0x5D2EF8: fsubr   qword ptr [esp+18h+a3]
0x5D2EFC: mov     ecx, [esi+34h]
0x5D2EFF: push    0FCAh
0x5D2F04: fstp    qword ptr [esp+1Ch+a3]
0x5D2F08: call    Tile_GetFloat
0x5D2F0D: fdivr   qword ptr [esp+18h+a3]
0x5D2F11: push    ecx
0x5D2F12: fstp    qword ptr [esp+1Ch+a3]; a3
0x5D2F16: fld     dword ptr ds:0A6B1F0h
0x5D2F1C: mov     ecx, [esi+34h]; this
0x5D2F1F: fstp    [esp+1Ch+a2]; a3
0x5D2F22: push    0FB3h; a2
0x5D2F27: call    Tile_SetFloat
0x5D2F2C: fld     [esp+18h+var_8]
0x5D2F30: fld     [esp+18h+var_4]
0x5D2F34: fld     st
0x5D2F36: fsubp   st(2), st
0x5D2F38: fxch    st(1)
0x5D2F3A: fmul    qword ptr [esp+18h+a3]
0x5D2F3E: faddp   st(1), st
0x5D2F40: fadd    qword ptr ds:0A2FAA0h
0x5D2F46: fstp    [esp+18h+var_4]
0x5D2F4A: fld     [esp+18h+var_4]
0x5D2F4E: call    Double_To_SInt32
0x5D2F53: mov     [esp+18h+var_4], eax
0x5D2F57: fild    [esp+18h+var_4]
0x5D2F5B: push    ecx
0x5D2F5C: mov     ecx, [esi+34h]; this
0x5D2F5F: fstp    [esp+1Ch+a2]; a3
0x5D2F62: push    0FB3h; a2
0x5D2F67: call    Tile_SetFloat
0x5D2F6C: fldz
0x5D2F6E: push    ecx
0x5D2F6F: fstp    [esp+1Ch+a2]; a3
0x5D2F72: mov     ecx, [esi+34h]; this
0x5D2F75: push    0FB3h; a2
0x5D2F7A: call    Tile_SetFloat
0x5D2F7F: pop     edi
0x5D2F80: pop     esi
0x5D2F81: mov     esp, ebp
0x5D2F83: pop     ebp
0x5D2F84: retn    8
