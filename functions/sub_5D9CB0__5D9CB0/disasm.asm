0x5D9CB0: push    ecx
0x5D9CB1: push    esi; a3
0x5D9CB2: mov     esi, ecx
0x5D9CB4: mov     ecx, ds:0B333C4h
0x5D9CBA: call    sub_65FD00
0x5D9CBF: fld1
0x5D9CC1: fcom    st(1)
0x5D9CC3: fnstsw  ax
0x5D9CC5: fstp    st(1)
0x5D9CC7: test    ah, 41h
0x5D9CCA: jnz     short loc_5D9CE1
0x5D9CCC: mov     ecx, ds:0B333C4h
0x5D9CD2: fstp    st
0x5D9CD4: call    sub_65FD00
0x5D9CD9: fstp    [esp+8+a3]
0x5D9CDD: fld1
0x5D9CDF: jmp     short loc_5D9CE5
0x5D9CE1: fst     [esp+8+a3]
0x5D9CE5: fld     [esp+8+a3]
0x5D9CE9: fcomp   qword ptr ds:0A2FC68h
0x5D9CEF: fnstsw  ax
0x5D9CF1: test    ah, 5
0x5D9CF4: jp      short loc_5D9CFE
0x5D9CF6: fldz
0x5D9CF8: fstp    [esp+8+a3]
0x5D9CFC: jmp     short loc_5D9D31
0x5D9CFE: mov     ecx, ds:0B333C4h
0x5D9D04: fstp    st
0x5D9D06: call    sub_65FD00
0x5D9D0B: fld1
0x5D9D0D: fcom    st(1)
0x5D9D0F: fnstsw  ax
0x5D9D11: fstp    st(1)
0x5D9D13: test    ah, 41h
0x5D9D16: jnz     short loc_5D9D2D
0x5D9D18: mov     ecx, ds:0B333C4h
0x5D9D1E: fstp    st
0x5D9D20: call    sub_65FD00
0x5D9D25: fstp    [esp+8+a3]
0x5D9D29: fld1
0x5D9D2B: jmp     short loc_5D9D31
0x5D9D2D: fst     [esp+8+a3]; a3
0x5D9D31: push    ecx
0x5D9D32: mov     ecx, [esi+30h]; this
0x5D9D35: fstp    [esp+0Ch+a2]; a3
0x5D9D38: push    0FAFh; a2
0x5D9D3D: call    Tile_SetFloat
0x5D9D42: fld     [esp+8+a3]
0x5D9D46: push    ecx
0x5D9D47: mov     ecx, [esi+30h]; this
0x5D9D4A: fstp    [esp+0Ch+a2]; a3
0x5D9D4D: push    0FB0h; a2
0x5D9D52: call    Tile_SetFloat
0x5D9D57: pop     esi
0x5D9D58: pop     ecx
0x5D9D59: retn
