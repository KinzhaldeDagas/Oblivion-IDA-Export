0x5B5B70: push    ecx; a3
0x5B5B71: push    414h
0x5B5B76: call    Menu_GetOpenMenuTile
0x5B5B7B: add     esp, 4
0x5B5B7E: test    eax, eax
0x5B5B80: jz      loc_5B5C80
0x5B5B86: push    esi; a3
0x5B5B87: mov     ecx, eax
0x5B5B89: call    Tile_GetParentMenu
0x5B5B8E: mov     esi, eax
0x5B5B90: mov     ecx, [esi+28h]
0x5B5B93: push    0FA1h
0x5B5B98: call    Tile_GetFloat
0x5B5B9D: cmp     [esp+8+arg_0], 0
0x5B5BA2: jz      short loc_5B5C15
0x5B5BA4: fld     dword ptr ds:0A379B4h
0x5B5BAA: fucom   st(1)
0x5B5BAC: fnstsw  ax
0x5B5BAE: fstp    st(1)
0x5B5BB0: test    ah, 44h
0x5B5BB3: jnp     loc_5B5C7D
0x5B5BB9: push    ecx
0x5B5BBA: mov     ecx, [esi+28h]; this
0x5B5BBD: fstp    [esp+0Ch+a2]; a3
0x5B5BC0: push    0FA1h; a2
0x5B5BC5: call    Tile_SetFloat
0x5B5BCA: push    1; arg1
0x5B5BCC: push    0; canCreate
0x5B5BCE: call    InterfaceManager_GetSingleton
0x5B5BD3: push    1; arg1
0x5B5BD5: push    0; canCreate
0x5B5BD7: call    InterfaceManager_GetSingleton
0x5B5BDC: add     dword ptr [eax+8Ch], 1
0x5B5BE3: add     eax, 8Ch ; 'Œ'
0x5B5BE8: mov     eax, [eax]
0x5B5BEA: test    eax, eax
0x5B5BEC: mov     [esp+18h+var_4], eax
0x5B5BF0: fild    [esp+18h+var_4]
0x5B5BF4: jge     short loc_5B5BFC
0x5B5BF6: fadd    dword ptr ds:0A2FC78h
0x5B5BFC: mov     ecx, [esi+28h]; this
0x5B5BFF: fstp    [esp+18h+a2]; a3
0x5B5C03: add     esp, 0Ch
0x5B5C06: push    0FF0h; a2
0x5B5C0B: call    Tile_SetFloat
0x5B5C10: fld1
0x5B5C12: push    ecx
0x5B5C13: jmp     short loc_5B5C6A
0x5B5C15: fld1
0x5B5C17: fucom   st(1)
0x5B5C19: fnstsw  ax
0x5B5C1B: fstp    st(1)
0x5B5C1D: test    ah, 44h
0x5B5C20: jnp     short loc_5B5C7D
0x5B5C22: push    ecx
0x5B5C23: mov     ecx, [esi+28h]; this
0x5B5C26: fstp    [esp+0Ch+a2]; a3
0x5B5C29: push    0FA1h; a2
0x5B5C2E: call    Tile_SetFloat
0x5B5C33: push    1; arg1
0x5B5C35: push    0; canCreate
0x5B5C37: call    InterfaceManager_GetSingleton
0x5B5C3C: push    1; arg1
0x5B5C3E: push    0; canCreate
0x5B5C40: call    InterfaceManager_GetSingleton
0x5B5C45: add     dword ptr [eax+8Ch], 1
0x5B5C4C: fild    dword ptr [eax+8Ch]
0x5B5C52: mov     ecx, [eax+8Ch]
0x5B5C58: add     eax, 8Ch ; 'Œ'
0x5B5C5D: test    ecx, ecx
0x5B5C5F: jge     short loc_5B5C67
0x5B5C61: fadd    dword ptr ds:0A2FC78h
0x5B5C67: add     esp, 0Ch
0x5B5C6A: mov     ecx, [esi+30h]; this
0x5B5C6D: fstp    [esp+0Ch+a2]; a3
0x5B5C70: push    0FF0h; a2
0x5B5C75: call    Tile_SetFloat
0x5B5C7A: pop     esi
0x5B5C7B: pop     ecx
0x5B5C7C: retn
0x5B5C7D: fstp    st
0x5B5C7F: pop     esi
0x5B5C80: pop     ecx
0x5B5C81: retn
