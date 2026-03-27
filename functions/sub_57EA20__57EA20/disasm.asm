0x57EA20: push    ecx
0x57EA21: push    esi
0x57EA22: mov     esi, [esp+8+arg_0]
0x57EA26: test    esi, esi
0x57EA28: mov     [esp+8+var_4], ecx
0x57EA2C: jz      loc_57EC53
0x57EA32: mov     eax, [esi]
0x57EA34: mov     edx, [eax+8]
0x57EA37: push    ebx
0x57EA38: push    ebp
0x57EA39: push    edi; a3
0x57EA3A: mov     ecx, esi
0x57EA3C: call    edx
0x57EA3E: push    2
0x57EA40: mov     ecx, esi
0x57EA42: mov     edi, eax
0x57EA44: call    NiNode_GetNiPropertyByID
0x57EA49: push    edi
0x57EA4A: mov     ebx, eax
0x57EA4C: call    sub_588E60
0x57EA51: mov     ebp, eax
0x57EA53: add     esp, 4
0x57EA56: test    ebp, ebp
0x57EA58: jnz     short loc_57EA6C
0x57EA5A: test    edi, edi
0x57EA5C: jz      short loc_57EA6C
0x57EA5E: mov     eax, [edi+1Ch]
0x57EA61: push    eax
0x57EA62: call    sub_588E60
0x57EA67: add     esp, 4
0x57EA6A: mov     ebp, eax
0x57EA6C: test    ebp, ebp
0x57EA6E: fld     [esp+14h+arg_8]
0x57EA72: fstp    [esp+14h+arg_0]
0x57EA76: jz      loc_57EAFD
0x57EA7C: push    0FA9h
0x57EA81: mov     ecx, ebp
0x57EA83: call    Tile_GetFloat
0x57EA88: fld     dword ptr ds:0A379B4h
0x57EA8E: fucom   st(1)
0x57EA90: fnstsw  ax
0x57EA92: fstp    st(1)
0x57EA94: test    ah, 44h
0x57EA97: jp      short loc_57EAE5
0x57EA99: fld     [esp+14h+arg_4]
0x57EA9D: push    ecx
0x57EA9E: fabs
0x57EAA0: mov     ecx, ebp; this
0x57EAA2: fstp    [esp+18h+arg_4]
0x57EAA6: fld     [esp+18h+arg_4]
0x57EAAA: fld1
0x57EAAC: fcom    st(1)
0x57EAAE: fnstsw  ax
0x57EAB0: fstp    st(1)
0x57EAB2: test    ah, 41h
0x57EAB5: jnz     short loc_57EACE
0x57EAB7: fstp    st(1)
0x57EAB9: fstp    [esp+18h+a2]; a3
0x57EABC: push    0FA1h; a2
0x57EAC1: call    Tile_SetFloat
0x57EAC6: pop     edi
0x57EAC7: pop     ebp
0x57EAC8: pop     ebx
0x57EAC9: pop     esi
0x57EACA: pop     ecx
0x57EACB: retn    0Ch
0x57EACE: fstp    st
0x57EAD0: fstp    [esp+18h+a2]; a3
0x57EAD3: push    0FA1h; a2
0x57EAD8: call    Tile_SetFloat
0x57EADD: pop     edi
0x57EADE: pop     ebp
0x57EADF: pop     ebx
0x57EAE0: pop     esi
0x57EAE1: pop     ecx
0x57EAE2: retn    0Ch
0x57EAE5: push    0FA7h
0x57EAEA: fstp    st
0x57EAEC: mov     ecx, ebp
0x57EAEE: call    Tile_GetFloat
0x57EAF3: fdiv    qword ptr ds:0A3DDD8h
0x57EAF9: fstp    [esp+14h+arg_0]
0x57EAFD: push    esi
0x57EAFE: push    offset dword_B3FCD4
0x57EB03: call    NiRTTI_Cast
0x57EB08: fld     [esp+1Ch+arg_0]
0x57EB0C: fld     [esp+1Ch+arg_4]
0x57EB10: mov     esi, eax
0x57EB12: add     esp, 8
0x57EB15: test    esi, esi
0x57EB17: jz      loc_57EBB4
0x57EB1D: mov     eax, [esi+0B4h]
0x57EB23: mov     ecx, [eax+24h]
0x57EB26: test    ecx, ecx
0x57EB28: jz      loc_57EBB4
0x57EB2E: movzx   eax, word ptr [eax+8]
0x57EB32: test    eax, eax
0x57EB34: jle     short loc_57EBA7
0x57EB36: fld     st
0x57EB38: add     ecx, 0Ch
0x57EB3B: fabs
0x57EB3D: mov     edx, eax
0x57EB3F: fstp    [esp+14h+arg_8]
0x57EB43: fld     qword ptr ds:0A68FE0h
0x57EB49: fldz
0x57EB4B: fldz
0x57EB4D: fld     [esp+14h+arg_8]
0x57EB51: jmp     short loc_57EB55
0x57EB53: fxch    st(2)
0x57EB55: fcom    st(3)
0x57EB57: fnstsw  ax
0x57EB59: test    ah, 5
0x57EB5C: jp      short loc_57EB64
0x57EB5E: fxch    st(2)
0x57EB60: fst     dword ptr [ecx]
0x57EB62: jmp     short loc_57EB97
0x57EB64: fld     st(5)
0x57EB66: fmul    st, st(5)
0x57EB68: fcom    st(6)
0x57EB6A: fnstsw  ax
0x57EB6C: test    ah, 5
0x57EB6F: jp      short loc_57EB75
0x57EB71: fld     st
0x57EB73: jmp     short loc_57EB77
0x57EB75: fld     st(6)
0x57EB77: fcomp   st(3)
0x57EB79: fnstsw  ax
0x57EB7B: test    ah, 5
0x57EB7E: jp      short loc_57EB86
0x57EB80: fstp    st
0x57EB82: fld     st(1)
0x57EB84: jmp     short loc_57EB93
0x57EB86: fcom    st(6)
0x57EB88: fnstsw  ax
0x57EB8A: test    ah, 5
0x57EB8D: jnp     short loc_57EB93
0x57EB8F: fstp    st
0x57EB91: fld     st(5)
0x57EB93: fstp    dword ptr [ecx]
0x57EB95: fxch    st(2)
0x57EB97: add     ecx, 10h
0x57EB9A: sub     edx, 1
0x57EB9D: jnz     short loc_57EB53
0x57EB9F: fstp    st(1)
0x57EBA1: fstp    st(2)
0x57EBA3: fstp    st
0x57EBA5: fstp    st
0x57EBA7: mov     eax, [esi+0B4h]
0x57EBAD: or      word ptr [eax+2Eh], 4
0x57EBB2: jmp     short loc_57EC12
0x57EBB4: test    ebx, ebx
0x57EBB6: jz      short loc_57EC12
0x57EBB8: fld     st
0x57EBBA: fabs
0x57EBBC: fstp    [esp+14h+arg_8]
0x57EBC0: fld     [esp+14h+arg_8]
0x57EBC4: fcomp   qword ptr ds:0A68FE0h
0x57EBCA: fnstsw  ax
0x57EBCC: test    ah, 5
0x57EBCF: jp      short loc_57EBD8
0x57EBD1: fldz
0x57EBD3: fstp    dword ptr [ebx+50h]
0x57EBD6: jmp     short loc_57EC0E
0x57EBD8: fld     st(1)
0x57EBDA: fmul    st, st(1)
0x57EBDC: fcom    st(2)
0x57EBDE: fnstsw  ax
0x57EBE0: test    ah, 5
0x57EBE3: jp      short loc_57EBE9
0x57EBE5: fld     st
0x57EBE7: jmp     short loc_57EBEB
0x57EBE9: fld     st(2)
0x57EBEB: fldz
0x57EBED: fcom    st(1)
0x57EBEF: fnstsw  ax
0x57EBF1: fstp    st(1)
0x57EBF3: test    ah, 41h
0x57EBF6: jnz     short loc_57EBFC
0x57EBF8: fstp    st(1)
0x57EBFA: jmp     short loc_57EC0B
0x57EBFC: fstp    st
0x57EBFE: fcom    st(2)
0x57EC00: fnstsw  ax
0x57EC02: test    ah, 5
0x57EC05: jnp     short loc_57EC0B
0x57EC07: fstp    st
0x57EC09: fld     st(1)
0x57EC0B: fstp    dword ptr [ebx+50h]
0x57EC0E: add     dword ptr [ebx+54h], 1
0x57EC12: test    edi, edi
0x57EC14: jz      short loc_57EC4C
0x57EC16: test    ebp, ebp
0x57EC18: jz      short loc_57EC3F
0x57EC1A: fstp    st(1)
0x57EC1C: push    0FA8h
0x57EC21: mov     ecx, ebp
0x57EC23: fstp    st
0x57EC25: call    Tile_GetFloat
0x57EC2A: fcomp   dword ptr ds:0A68FD8h
0x57EC30: fnstsw  ax
0x57EC32: test    ah, 44h
0x57EC35: jnp     short loc_57EC50
0x57EC37: fld     [esp+14h+arg_0]
0x57EC3B: fld     [esp+14h+arg_4]
0x57EC3F: movzx   eax, word ptr [edi+0B6h]
0x57EC46: xor     esi, esi
0x57EC48: test    eax, eax
0x57EC4A: ja      short loc_57EC68
0x57EC4C: fstp    st(1)
0x57EC4E: fstp    st
0x57EC50: pop     edi
0x57EC51: pop     ebp
0x57EC52: pop     ebx
0x57EC53: pop     esi
0x57EC54: pop     ecx
0x57EC55: retn    0Ch
0x57EC58: jmp     short loc_57EC60
0x57EC5A: align 10h
0x57EC60: fld     [esp+14h+arg_0]
0x57EC64: fld     [esp+14h+arg_4]
0x57EC68: cmp     eax, esi
0x57EC6A: ja      short loc_57EC70
0x57EC6C: xor     eax, eax
0x57EC6E: jmp     short loc_57EC79
0x57EC70: mov     eax, [edi+0B0h]
0x57EC76: mov     eax, [eax+esi*4]
0x57EC79: mov     ecx, [esp+14h+var_4]
0x57EC7D: fxch    st(1)
0x57EC7F: sub     esp, 8
0x57EC82: fstp    [esp+1Ch+a2]; float
0x57EC86: fstp    [esp+1Ch+var_1C]; float
0x57EC89: push    eax; int
0x57EC8A: call    sub_57EA20
0x57EC8F: movzx   eax, word ptr [edi+0B6h]
0x57EC96: add     esi, 1
0x57EC99: cmp     esi, eax
0x57EC9B: jb      short loc_57EC60
0x57EC9D: pop     edi
0x57EC9E: pop     ebp
0x57EC9F: pop     ebx
0x57ECA0: pop     esi
0x57ECA1: pop     ecx
0x57ECA2: retn    0Ch
