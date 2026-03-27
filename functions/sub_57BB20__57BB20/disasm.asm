0x57BB20: push    esi; int
0x57BB21: push    edi; int
0x57BB22: push    1; arg1
0x57BB24: push    0; canCreate
0x57BB26: call    InterfaceManager_GetSingleton
0x57BB2B: add     esp, 8
0x57BB2E: test    eax, eax
0x57BB30: jz      loc_57BBEA
0x57BB36: push    1; arg1
0x57BB38: push    0; canCreate
0x57BB3A: call    InterfaceManager_GetSingleton
0x57BB3F: add     esp, 8
0x57BB42: cmp     dword ptr [eax+1Ch], 0
0x57BB46: jz      loc_57BBEA
0x57BB4C: mov     edi, [esp+8+arg_0]
0x57BB50: test    edi, edi
0x57BB52: jz      loc_57BBEA
0x57BB58: push    400h
0x57BB5D: call    Menu_GetOpenMenuTile
0x57BB62: mov     esi, eax
0x57BB64: add     esp, 4
0x57BB67: test    esi, esi
0x57BB69: jnz     short loc_57BB76
0x57BB6B: call    PopoutMenu_Create?
0x57BB70: mov     esi, eax
0x57BB72: test    esi, esi
0x57BB74: jz      short loc_57BBEA
0x57BB76: mov     ecx, esi
0x57BB78: call    Tile_GetParentMenu
0x57BB7D: test    eax, eax
0x57BB7F: jz      short loc_57BBEA
0x57BB81: push    0; int
0x57BB83: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x57BB88: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57BB8D: push    0; int
0x57BB8F: mov     ecx, esi
0x57BB91: call    Tile_GetParentMenu
0x57BB96: push    eax; void *
0x57BB97: call    OblivionDynamicCast
0x57BB9C: add     esp, 14h
0x57BB9F: test    eax, eax
0x57BBA1: jz      short loc_57BBEA
0x57BBA3: fldz
0x57BBA5: push    ecx
0x57BBA6: fstp    [esp+0Ch+a2]; a3
0x57BBA9: mov     ecx, esi; this
0x57BBAB: push    0FABh; a2
0x57BBB0: call    Tile_SetFloat
0x57BBB5: fld     [esp+8+arg_14]
0x57BBB9: mov     eax, [esp+8+arg_10]
0x57BBBD: push    ecx
0x57BBBE: fstp    [esp+0Ch+a2]; float
0x57BBC1: push    eax; int
0x57BBC2: fld     [esp+10h+arg_C]
0x57BBC6: sub     esp, 0Ch
0x57BBC9: fstp    [esp+1Ch+var_14]; float
0x57BBCD: fld     [esp+1Ch+arg_8]
0x57BBD1: fstp    [esp+1Ch+var_18]; float
0x57BBD5: fld     [esp+1Ch+arg_4]
0x57BBD9: fstp    [esp+1Ch+var_1C]; float
0x57BBDC: push    edi; int
0x57BBDD: call    sub_5B4230
0x57BBE2: add     esp, 18h
0x57BBE5: pop     edi
0x57BBE6: mov     al, 1
0x57BBE8: pop     esi
0x57BBE9: retn
0x57BBEA: pop     edi
0x57BBEB: xor     al, al
0x57BBED: pop     esi
0x57BBEE: retn
