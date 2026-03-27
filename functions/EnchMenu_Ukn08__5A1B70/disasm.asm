0x5A1B70: mov     eax, [esp+arg_0]
0x5A1B74: sub     esp, 14h
0x5A1B77: sub     eax, 0Ah
0x5A1B7A: push    esi; a3
0x5A1B7B: jz      short loc_5A1B8B
0x5A1B7D: sub     eax, 1
0x5A1B80: jnz     loc_5A1D09
0x5A1B86: mov     esi, [ecx+68h]
0x5A1B89: jmp     short loc_5A1B8E
0x5A1B8B: mov     esi, [ecx+60h]
0x5A1B8E: push    edi
0x5A1B8F: push    1; arg1
0x5A1B91: push    0; canCreate
0x5A1B93: call    InterfaceManager_GetSingleton
0x5A1B98: add     esp, 8
0x5A1B9B: push    0FB0h
0x5A1BA0: mov     ecx, esi
0x5A1BA2: mov     edi, eax
0x5A1BA4: call    Tile_GetFloat
0x5A1BA9: fstp    [esp+1Ch+var_10]
0x5A1BAD: push    0FAFh
0x5A1BB2: mov     ecx, esi
0x5A1BB4: call    Tile_GetFloat
0x5A1BB9: fstp    [esp+1Ch+a3]; a3
0x5A1BBD: call    sub_57D7F0
0x5A1BC2: fstp    [esp+1Ch+var_8]
0x5A1BC6: call    sub_57D7F0
0x5A1BCB: fmul    qword ptr ds:0A2FAA0h
0x5A1BD1: fadd    dword ptr [edi+28h]
0x5A1BD4: fsubr   [esp+1Ch+var_8]
0x5A1BD8: call    Double_To_SInt32
0x5A1BDD: mov     [esp+1Ch+arg_0], eax
0x5A1BE1: fild    [esp+1Ch+arg_0]
0x5A1BE5: mov     ecx, esi
0x5A1BE7: fstp    [esp+1Ch+arg_0]
0x5A1BEB: call    sub_588CF0
0x5A1BF0: fsubr   [esp+1Ch+arg_0]
0x5A1BF4: push    0FCAh
0x5A1BF9: mov     ecx, esi
0x5A1BFB: fstp    [esp+20h+var_8]
0x5A1BFF: call    Tile_GetFloat
0x5A1C04: fdivr   [esp+1Ch+var_8]
0x5A1C08: pop     edi
0x5A1C09: fstp    [esp+18h+arg_0]
0x5A1C0D: fld1
0x5A1C0F: fld     [esp+18h+arg_0]
0x5A1C13: fcom    st(1)
0x5A1C15: fnstsw  ax
0x5A1C17: fldz
0x5A1C19: test    ah, 5
0x5A1C1C: jnp     short loc_5A1C28
0x5A1C1E: fstp    st
0x5A1C20: fstp    st
0x5A1C22: fstp    [esp+18h+arg_0]
0x5A1C26: jmp     short loc_5A1C3B
0x5A1C28: fstp    st(2)
0x5A1C2A: fcomp   st(1)
0x5A1C2C: fnstsw  ax
0x5A1C2E: test    ah, 41h
0x5A1C31: jz      short loc_5A1C39
0x5A1C33: fstp    [esp+18h+arg_0]
0x5A1C37: jmp     short loc_5A1C3B
0x5A1C39: fstp    st
0x5A1C3B: fld     [esp+18h+var_10]
0x5A1C3F: fsub    [esp+18h+a3]
0x5A1C43: fmul    [esp+18h+arg_0]
0x5A1C47: fst     [esp+18h+arg_0]
0x5A1C4B: fld     [esp+18h+arg_0]
0x5A1C4F: fst     [esp+18h+arg_0]
0x5A1C53: fld     [esp+18h+arg_0]
0x5A1C57: fld     st
0x5A1C59: call    Double_To_SInt32
0x5A1C5E: mov     [esp+18h+arg_0], eax
0x5A1C62: fild    [esp+18h+arg_0]
0x5A1C66: fstp    [esp+18h+arg_0]
0x5A1C6A: fld     [esp+18h+arg_0]
0x5A1C6E: fld     st
0x5A1C70: fsubp   st(2), st
0x5A1C72: fxch    st(1)
0x5A1C74: fcomp   qword ptr ds:0A2FC68h
0x5A1C7A: fnstsw  ax
0x5A1C7C: test    ah, 1
0x5A1C7F: jz      short loc_5A1C87
0x5A1C81: fsub    qword ptr ds:0A2F928h
0x5A1C87: fstp    [esp+18h+arg_0]
0x5A1C8B: push    ecx
0x5A1C8C: fld     [esp+1Ch+arg_0]
0x5A1C90: fsubp   st(2), st
0x5A1C92: fxch    st(1)
0x5A1C94: fcomp   qword ptr ds:0A2FAA0h
0x5A1C9A: fnstsw  ax
0x5A1C9C: fstp    [esp+1Ch+a2]; float
0x5A1C9F: test    ah, 41h
0x5A1CA2: jp      short loc_5A1CAF
0x5A1CA4: call    FloatFloor
0x5A1CA9: fstp    qword ptr [esp+1Ch+var_10]
0x5A1CAD: jmp     short loc_5A1CC2
0x5A1CAF: call    FloatFloor
0x5A1CB4: fadd    qword ptr ds:0A2F928h
0x5A1CBA: fadd    [esp+1Ch+a3]
0x5A1CBE: fstp    qword ptr [esp+1Ch+var_10]; a3
0x5A1CC2: fld     dword ptr ds:0A6B1F0h
0x5A1CC8: add     esp, 4
0x5A1CCB: push    ecx
0x5A1CCC: fstp    [esp+1Ch+a2]; a3
0x5A1CCF: push    0FB3h; a2
0x5A1CD4: mov     ecx, esi; this
0x5A1CD6: call    Tile_SetFloat
0x5A1CDB: fld     qword ptr [esp+18h+var_10]
0x5A1CDF: fstp    [esp+18h+arg_0]
0x5A1CE3: push    ecx
0x5A1CE4: fld     [esp+1Ch+arg_0]
0x5A1CE8: mov     ecx, esi; this
0x5A1CEA: fstp    [esp+1Ch+a2]; a3
0x5A1CED: push    0FB3h; a2
0x5A1CF2: call    Tile_SetFloat
0x5A1CF7: fldz
0x5A1CF9: push    ecx
0x5A1CFA: fstp    [esp+1Ch+a2]; a3
0x5A1CFD: push    0FB3h; a2
0x5A1D02: mov     ecx, esi; this
0x5A1D04: call    Tile_SetFloat
0x5A1D09: pop     esi
0x5A1D0A: add     esp, 14h
0x5A1D0D: retn    8
