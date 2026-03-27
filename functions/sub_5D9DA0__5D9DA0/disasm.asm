0x5D9DA0: push    ebp
0x5D9DA1: mov     ebp, esp
0x5D9DA3: and     esp, 0FFFFFFF8h
0x5D9DA6: sub     esp, 14h
0x5D9DA9: push    ebx; a3
0x5D9DAA: push    esi; a3
0x5D9DAB: mov     esi, [ebp+arg_0]
0x5D9DAE: cmp     esi, 21h ; '!'
0x5D9DB1: push    edi; a3
0x5D9DB2: mov     ebx, ecx
0x5D9DB4: jz      short loc_5D9DC4
0x5D9DB6: cmp     esi, 2Bh ; '+'
0x5D9DB9: jz      short loc_5D9DC4
0x5D9DBB: cmp     esi, 35h ; '5'
0x5D9DBE: jnz     loc_5D9FCF
0x5D9DC4: push    1; arg1
0x5D9DC6: push    0; canCreate
0x5D9DC8: call    InterfaceManager_GetSingleton
0x5D9DCD: add     esp, 8
0x5D9DD0: cmp     esi, 21h ; '!'
0x5D9DD3: mov     edi, eax
0x5D9DD5: jnz     short loc_5D9DDC
0x5D9DD7: mov     esi, [ebx+40h]
0x5D9DDA: jmp     short loc_5D9DE9
0x5D9DDC: cmp     esi, 2Bh ; '+'
0x5D9DDF: jnz     short loc_5D9DE6
0x5D9DE1: mov     esi, [ebx+48h]
0x5D9DE4: jmp     short loc_5D9DE9
0x5D9DE6: mov     esi, [ebx+50h]
0x5D9DE9: push    0FB0h
0x5D9DEE: mov     ecx, esi
0x5D9DF0: call    Tile_GetFloat
0x5D9DF5: fstp    [esp+20h+var_8]
0x5D9DF9: push    0FAFh
0x5D9DFE: mov     ecx, esi
0x5D9E00: call    Tile_GetFloat
0x5D9E05: fstp    [esp+20h+var_4]
0x5D9E09: call    sub_57D7F0
0x5D9E0E: fstp    [esp+20h+var_10]
0x5D9E12: call    sub_57D7F0
0x5D9E17: fmul    qword ptr ds:0A2FAA0h
0x5D9E1D: fadd    dword ptr [edi+28h]
0x5D9E20: fsubr   [esp+20h+var_10]
0x5D9E24: call    Double_To_SInt32
0x5D9E29: mov     dword ptr [esp+20h+var_10], eax
0x5D9E2D: fild    dword ptr [esp+20h+var_10]
0x5D9E31: mov     ecx, esi
0x5D9E33: fstp    dword ptr [esp+20h+var_10]
0x5D9E37: call    sub_588CF0
0x5D9E3C: fsubr   dword ptr [esp+20h+var_10]
0x5D9E40: push    0FCAh
0x5D9E45: mov     ecx, esi
0x5D9E47: fstp    [esp+24h+var_10]
0x5D9E4B: call    Tile_GetFloat
0x5D9E50: fdivr   [esp+20h+var_10]
0x5D9E54: fcomp   qword ptr ds:0A2FC68h
0x5D9E5A: fnstsw  ax
0x5D9E5C: test    ah, 5
0x5D9E5F: jnp     short loc_5D9EBF
0x5D9E61: call    sub_57D7F0
0x5D9E66: fstp    [esp+20h+var_10]
0x5D9E6A: call    sub_57D7F0
0x5D9E6F: fmul    qword ptr ds:0A2FAA0h
0x5D9E75: fadd    dword ptr [edi+28h]
0x5D9E78: fsubr   [esp+20h+var_10]
0x5D9E7C: call    Double_To_SInt32
0x5D9E81: mov     dword ptr [esp+20h+var_10], eax
0x5D9E85: fild    dword ptr [esp+20h+var_10]
0x5D9E89: mov     ecx, esi
0x5D9E8B: fstp    dword ptr [esp+20h+var_10]
0x5D9E8F: call    sub_588CF0
0x5D9E94: fsubr   dword ptr [esp+20h+var_10]
0x5D9E98: push    0FCAh
0x5D9E9D: mov     ecx, esi
0x5D9E9F: fstp    [esp+24h+var_10]
0x5D9EA3: call    Tile_GetFloat
0x5D9EA8: fdivr   [esp+20h+var_10]
0x5D9EAC: fld1
0x5D9EAE: fcom    st(1)
0x5D9EB0: fnstsw  ax
0x5D9EB2: fstp    st(1)
0x5D9EB4: test    ah, 41h
0x5D9EB7: jnz     loc_5D9F64
0x5D9EBD: fstp    st
0x5D9EBF: call    sub_57D7F0
0x5D9EC4: fstp    [esp+20h+var_10]
0x5D9EC8: call    sub_57D7F0
0x5D9ECD: fmul    qword ptr ds:0A2FAA0h
0x5D9ED3: fadd    dword ptr [edi+28h]
0x5D9ED6: fsubr   [esp+20h+var_10]
0x5D9EDA: call    Double_To_SInt32
0x5D9EDF: mov     dword ptr [esp+20h+var_10], eax
0x5D9EE3: fild    dword ptr [esp+20h+var_10]
0x5D9EE7: mov     ecx, esi
0x5D9EE9: fstp    dword ptr [esp+20h+var_10]
0x5D9EED: call    sub_588CF0
0x5D9EF2: fsubr   dword ptr [esp+20h+var_10]
0x5D9EF6: push    0FCAh
0x5D9EFB: mov     ecx, esi
0x5D9EFD: fstp    [esp+24h+var_10]
0x5D9F01: call    Tile_GetFloat
0x5D9F06: fdivr   [esp+20h+var_10]
0x5D9F0A: fldz
0x5D9F0C: fcom    st(1)
0x5D9F0E: fnstsw  ax
0x5D9F10: fstp    st(1)
0x5D9F12: test    ah, 41h
0x5D9F15: jz      short loc_5D9F64
0x5D9F17: fstp    st
0x5D9F19: call    sub_57D7F0
0x5D9F1E: fstp    [esp+20h+var_10]
0x5D9F22: call    sub_57D7F0
0x5D9F27: fmul    qword ptr ds:0A2FAA0h
0x5D9F2D: fadd    dword ptr [edi+28h]
0x5D9F30: fsubr   [esp+20h+var_10]
0x5D9F34: call    Double_To_SInt32
0x5D9F39: mov     dword ptr [esp+20h+var_10], eax
0x5D9F3D: fild    dword ptr [esp+20h+var_10]
0x5D9F41: mov     ecx, esi
0x5D9F43: fstp    dword ptr [esp+20h+var_10]
0x5D9F47: call    sub_588CF0
0x5D9F4C: fsubr   dword ptr [esp+20h+var_10]
0x5D9F50: push    0FCAh
0x5D9F55: mov     ecx, esi
0x5D9F57: fstp    [esp+24h+var_10]
0x5D9F5B: call    Tile_GetFloat
0x5D9F60: fdivr   [esp+20h+var_10]
0x5D9F64: push    ecx
0x5D9F65: fstp    [esp+24h+var_10]
0x5D9F69: fld     dword ptr ds:0A6B1F0h
0x5D9F6F: mov     ecx, esi; this
0x5D9F71: fstp    [esp+24h+a2]; a3
0x5D9F74: push    0FB3h; a2
0x5D9F79: call    Tile_SetFloat
0x5D9F7E: fld     [esp+20h+var_8]
0x5D9F82: fld     [esp+20h+var_4]
0x5D9F86: fld     st
0x5D9F88: fsubp   st(2), st
0x5D9F8A: fxch    st(1)
0x5D9F8C: fmul    [esp+20h+var_10]
0x5D9F90: faddp   st(1), st
0x5D9F92: fadd    qword ptr ds:0A2FAA0h
0x5D9F98: fstp    [esp+20h+var_4]
0x5D9F9C: fld     [esp+20h+var_4]
0x5D9FA0: call    Double_To_SInt32
0x5D9FA5: mov     [esp+20h+var_4], eax
0x5D9FA9: fild    [esp+20h+var_4]
0x5D9FAD: push    ecx
0x5D9FAE: mov     ecx, esi; this
0x5D9FB0: fstp    [esp+24h+a2]; a3
0x5D9FB3: push    0FB3h; a2
0x5D9FB8: call    Tile_SetFloat
0x5D9FBD: fldz
0x5D9FBF: push    ecx
0x5D9FC0: fstp    [esp+24h+a2]; a3
0x5D9FC3: push    0FB3h; a2
0x5D9FC8: mov     ecx, esi; this
0x5D9FCA: call    Tile_SetFloat
0x5D9FCF: pop     edi
0x5D9FD0: pop     esi
0x5D9FD1: pop     ebx
0x5D9FD2: mov     esp, ebp
0x5D9FD4: pop     ebp
0x5D9FD5: retn    8
