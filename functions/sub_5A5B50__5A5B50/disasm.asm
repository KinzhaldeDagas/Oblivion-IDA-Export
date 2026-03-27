0x5A5B50: mov     eax, [esp+arg_0]
0x5A5B54: sub     esp, 8
0x5A5B57: sub     eax, 8
0x5A5B5A: push    esi
0x5A5B5B: mov     esi, ecx
0x5A5B5D: jz      loc_5A5D25
0x5A5B63: sub     eax, 1
0x5A5B66: jz      loc_5A5C4D
0x5A5B6C: sub     eax, 1
0x5A5B6F: jnz     loc_5A5DF6
0x5A5B75: mov     ecx, ds:0B333C4h
0x5A5B7B: push    0Ah
0x5A5B7D: push    0
0x5A5B7F: call    Player_GetAVModifierf
0x5A5B84: fstp    [esp+0Ch+var_8]
0x5A5B88: mov     ecx, ds:0B333C4h
0x5A5B8E: push    0Ah
0x5A5B90: call    Actor_GetBaseCalcAVi
0x5A5B95: mov     [esp+0Ch+arg_0], eax
0x5A5B99: fild    [esp+0Ch+arg_0]
0x5A5B9D: fadd    [esp+0Ch+var_8]
0x5A5BA1: fldz
0x5A5BA3: fcom    st(1)
0x5A5BA5: fnstsw  ax
0x5A5BA7: fstp    st(1)
0x5A5BA9: test    ah, 41h
0x5A5BAC: jz      short loc_5A5BDC
0x5A5BAE: mov     ecx, ds:0B333C4h
0x5A5BB4: fstp    st
0x5A5BB6: push    0Ah
0x5A5BB8: push    0
0x5A5BBA: call    Player_GetAVModifierf
0x5A5BBF: fstp    [esp+0Ch+var_8]
0x5A5BC3: mov     ecx, ds:0B333C4h
0x5A5BC9: push    0Ah
0x5A5BCB: call    Actor_GetBaseCalcAVi
0x5A5BD0: mov     [esp+0Ch+arg_0], eax
0x5A5BD4: fild    [esp+0Ch+arg_0]
0x5A5BD8: fadd    [esp+0Ch+var_8]
0x5A5BDC: fstp    dword ptr [esp+0Ch+var_8]
0x5A5BE0: fldz
0x5A5BE2: fcom    dword ptr [esp+0Ch+var_8]
0x5A5BE6: fnstsw  ax
0x5A5BE8: test    ah, 44h
0x5A5BEB: jnp     short loc_5A5C35
0x5A5BED: mov     ecx, ds:0B333C4h
0x5A5BF3: fstp    st
0x5A5BF5: mov     eax, [ecx]
0x5A5BF7: mov     edx, [eax+284h]
0x5A5BFD: push    0Ah; a3
0x5A5BFF: call    edx
0x5A5C01: test    eax, eax
0x5A5C03: jge     short loc_5A5C0F
0x5A5C05: mov     [esp+0Ch+arg_0], 0
0x5A5C0D: jmp     short loc_5A5C25
0x5A5C0F: mov     ecx, ds:0B333C4h
0x5A5C15: mov     eax, [ecx]
0x5A5C17: mov     edx, [eax+284h]
0x5A5C1D: push    0Ah
0x5A5C1F: call    edx
0x5A5C21: mov     [esp+0Ch+arg_0], eax
0x5A5C25: fild    [esp+0Ch+arg_0]
0x5A5C29: fdiv    dword ptr [esp+0Ch+var_8]
0x5A5C2D: fstp    [esp+0Ch+arg_0]
0x5A5C31: fld     [esp+0Ch+arg_0]
0x5A5C35: push    ecx
0x5A5C36: mov     ecx, [esi+34h]; this
0x5A5C39: fstp    [esp+10h+a3]; a3
0x5A5C3C: push    0FAEh; a2
0x5A5C41: call    Tile_SetFloat
0x5A5C46: pop     esi
0x5A5C47: add     esp, 8
0x5A5C4A: retn    4
0x5A5C4D: mov     ecx, ds:0B333C4h
0x5A5C53: push    9
0x5A5C55: push    0
0x5A5C57: call    Player_GetAVModifierf
0x5A5C5C: fstp    [esp+0Ch+var_8]
0x5A5C60: mov     ecx, ds:0B333C4h
0x5A5C66: push    9
0x5A5C68: call    Actor_GetBaseCalcAVi
0x5A5C6D: mov     [esp+0Ch+arg_0], eax
0x5A5C71: fild    [esp+0Ch+arg_0]
0x5A5C75: fadd    [esp+0Ch+var_8]
0x5A5C79: fldz
0x5A5C7B: fcom    st(1)
0x5A5C7D: fnstsw  ax
0x5A5C7F: fstp    st(1)
0x5A5C81: test    ah, 41h
0x5A5C84: jz      short loc_5A5CB4
0x5A5C86: mov     ecx, ds:0B333C4h
0x5A5C8C: fstp    st
0x5A5C8E: push    9
0x5A5C90: push    0
0x5A5C92: call    Player_GetAVModifierf
0x5A5C97: fstp    [esp+0Ch+var_8]
0x5A5C9B: mov     ecx, ds:0B333C4h
0x5A5CA1: push    9
0x5A5CA3: call    Actor_GetBaseCalcAVi
0x5A5CA8: mov     [esp+0Ch+arg_0], eax
0x5A5CAC: fild    [esp+0Ch+arg_0]
0x5A5CB0: fadd    [esp+0Ch+var_8]
0x5A5CB4: fstp    dword ptr [esp+0Ch+var_8]
0x5A5CB8: fldz
0x5A5CBA: fcom    dword ptr [esp+0Ch+var_8]
0x5A5CBE: fnstsw  ax
0x5A5CC0: test    ah, 44h
0x5A5CC3: jnp     short loc_5A5D0D
0x5A5CC5: mov     ecx, ds:0B333C4h
0x5A5CCB: fstp    st
0x5A5CCD: mov     eax, [ecx]
0x5A5CCF: mov     edx, [eax+284h]
0x5A5CD5: push    9; a3
0x5A5CD7: call    edx
0x5A5CD9: test    eax, eax
0x5A5CDB: jge     short loc_5A5CE7
0x5A5CDD: mov     [esp+0Ch+arg_0], 0
0x5A5CE5: jmp     short loc_5A5CFD
0x5A5CE7: mov     ecx, ds:0B333C4h
0x5A5CED: mov     eax, [ecx]
0x5A5CEF: mov     edx, [eax+284h]
0x5A5CF5: push    9
0x5A5CF7: call    edx
0x5A5CF9: mov     [esp+0Ch+arg_0], eax
0x5A5CFD: fild    [esp+0Ch+arg_0]
0x5A5D01: fdiv    dword ptr [esp+0Ch+var_8]
0x5A5D05: fstp    [esp+0Ch+arg_0]
0x5A5D09: fld     [esp+0Ch+arg_0]
0x5A5D0D: push    ecx
0x5A5D0E: mov     ecx, [esi+30h]; this
0x5A5D11: fstp    [esp+10h+a3]; a3
0x5A5D14: push    0FAEh; a2
0x5A5D19: call    Tile_SetFloat
0x5A5D1E: pop     esi
0x5A5D1F: add     esp, 8
0x5A5D22: retn    4
0x5A5D25: mov     ecx, ds:0B333C4h
0x5A5D2B: push    8
0x5A5D2D: push    0
0x5A5D2F: call    Player_GetAVModifierf
0x5A5D34: fstp    [esp+0Ch+var_8]
0x5A5D38: mov     ecx, ds:0B333C4h
0x5A5D3E: push    8
0x5A5D40: call    Actor_GetBaseCalcAVi
0x5A5D45: mov     [esp+0Ch+arg_0], eax
0x5A5D49: fild    [esp+0Ch+arg_0]
0x5A5D4D: fadd    [esp+0Ch+var_8]
0x5A5D51: fldz
0x5A5D53: fcom    st(1)
0x5A5D55: fnstsw  ax
0x5A5D57: fstp    st(1)
0x5A5D59: test    ah, 41h
0x5A5D5C: jz      short loc_5A5D8C
0x5A5D5E: mov     ecx, ds:0B333C4h
0x5A5D64: fstp    st
0x5A5D66: push    8
0x5A5D68: push    0
0x5A5D6A: call    Player_GetAVModifierf
0x5A5D6F: fstp    [esp+0Ch+var_8]
0x5A5D73: mov     ecx, ds:0B333C4h
0x5A5D79: push    8
0x5A5D7B: call    Actor_GetBaseCalcAVi
0x5A5D80: mov     [esp+0Ch+arg_0], eax
0x5A5D84: fild    [esp+0Ch+arg_0]
0x5A5D88: fadd    [esp+0Ch+var_8]
0x5A5D8C: fstp    dword ptr [esp+0Ch+var_8]
0x5A5D90: fldz
0x5A5D92: fcom    dword ptr [esp+0Ch+var_8]
0x5A5D96: fnstsw  ax
0x5A5D98: test    ah, 44h
0x5A5D9B: jnp     short loc_5A5DE5
0x5A5D9D: mov     ecx, ds:0B333C4h
0x5A5DA3: fstp    st
0x5A5DA5: mov     eax, [ecx]
0x5A5DA7: mov     edx, [eax+284h]
0x5A5DAD: push    8; a3
0x5A5DAF: call    edx
0x5A5DB1: test    eax, eax
0x5A5DB3: jge     short loc_5A5DBF
0x5A5DB5: mov     [esp+0Ch+arg_0], 0
0x5A5DBD: jmp     short loc_5A5DD5
0x5A5DBF: mov     ecx, ds:0B333C4h
0x5A5DC5: mov     eax, [ecx]
0x5A5DC7: mov     edx, [eax+284h]
0x5A5DCD: push    8
0x5A5DCF: call    edx
0x5A5DD1: mov     [esp+0Ch+arg_0], eax
0x5A5DD5: fild    [esp+0Ch+arg_0]
0x5A5DD9: fdiv    dword ptr [esp+0Ch+var_8]
0x5A5DDD: fstp    [esp+0Ch+arg_0]
0x5A5DE1: fld     [esp+0Ch+arg_0]
0x5A5DE5: push    ecx
0x5A5DE6: mov     ecx, [esi+2Ch]; this
0x5A5DE9: fstp    [esp+10h+a3]; a3
0x5A5DEC: push    0FAEh; a2
0x5A5DF1: call    Tile_SetFloat
0x5A5DF6: pop     esi
0x5A5DF7: add     esp, 8
0x5A5DFA: retn    4
