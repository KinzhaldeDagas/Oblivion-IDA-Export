0x5DCB70: push    ecx
0x5DCB71: push    3EBh
0x5DCB76: call    Menu_GetOpenMenuTile
0x5DCB7B: add     esp, 4
0x5DCB7E: test    eax, eax
0x5DCB80: jz      short loc_5DCB8C
0x5DCB82: mov     edx, [eax]
0x5DCB84: mov     ecx, eax
0x5DCB86: mov     eax, [edx]
0x5DCB88: push    1
0x5DCB8A: call    eax
0x5DCB8C: push    esi; a3
0x5DCB8D: push    edi; a3
0x5DCB8E: push    1; arg1
0x5DCB90: push    0; canCreate
0x5DCB92: call    InterfaceManager_GetSingleton
0x5DCB97: add     esp, 8
0x5DCB9A: mov     esi, eax
0x5DCB9C: call    InterfaceManager_GetDepth
0x5DCBA1: fstp    [esp+0Ch+var_4]; a3
0x5DCBA5: mov     ecx, [esi+68h]; TileWindow *
0x5DCBA8: push    offset aDataMenusMai_4; "Data\\Menus\\Main\\stats_menu.xml"
0x5DCBAD: call    Menu_LoadXML
0x5DCBB2: mov     edi, eax
0x5DCBB4: mov     ecx, edi
0x5DCBB6: call    Tile_GetParentMenu
0x5DCBBB: mov     esi, eax
0x5DCBBD: push    esi; int
0x5DCBBE: push    offset aDataMenusMai_4; "Data\\Menus\\Main\\stats_menu.xml"
0x5DCBC3: call    sub_584670
0x5DCBC8: add     esp, 8
0x5DCBCB: test    esi, esi
0x5DCBCD: jz      loc_5DCD63
0x5DCBD3: mov     edx, [esi]
0x5DCBD5: mov     eax, [edx+34h]
0x5DCBD8: mov     ecx, esi
0x5DCBDA: call    eax
0x5DCBDC: cmp     eax, 3EBh
0x5DCBE1: jnz     loc_5DCD53
0x5DCBE7: push    0; int
0x5DCBE9: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5DCBEE: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5DCBF3: push    0; int
0x5DCBF5: push    edi; void *
0x5DCBF6: call    OblivionDynamicCast
0x5DCBFB: add     esp, 14h
0x5DCBFE: push    eax
0x5DCBFF: mov     ecx, esi
0x5DCC01: call    Menu_SetTileMenu
0x5DCC06: mov     ecx, esi
0x5DCC08: call    sub_5D9B80
0x5DCC0D: test    al, al
0x5DCC0F: jnz     short loc_5DCC24
0x5DCC11: push    offset aStatsMenuCreat; "Stats Menu Creation Failed... Are your "...
0x5DCC16: call    PrintError
0x5DCC1B: add     esp, 4
0x5DCC1E: pop     edi
0x5DCC1F: xor     eax, eax
0x5DCC21: pop     esi
0x5DCC22: pop     ecx
0x5DCC23: retn
0x5DCC24: push    0FA5h
0x5DCC29: mov     ecx, edi
0x5DCC2B: call    Tile_GetFloat
0x5DCC30: fcomp   dword ptr ds:0A69770h
0x5DCC36: fnstsw  ax
0x5DCC38: test    ah, 44h
0x5DCC3B: jnp     short loc_5DCC56
0x5DCC3D: push    0FA5h
0x5DCC42: mov     ecx, edi
0x5DCC44: call    Tile_GetFloat
0x5DCC49: fcomp   qword ptr ds:0A69778h
0x5DCC4F: fnstsw  ax
0x5DCC51: test    ah, 44h
0x5DCC54: jp      short loc_5DCC6A
0x5DCC56: fld     [esp+0Ch+var_4]
0x5DCC5A: push    ecx
0x5DCC5B: fstp    [esp+10h+var_10]; a3
0x5DCC5E: push    0FABh; a2
0x5DCC63: mov     ecx, edi; this
0x5DCC65: call    Tile_SetFloat
0x5DCC6A: push    1; arg1
0x5DCC6C: push    0; canCreate
0x5DCC6E: call    InterfaceManager_GetSingleton
0x5DCC73: mov     al, [eax+0Ah]
0x5DCC76: add     esp, 8
0x5DCC79: cmp     al, 0FFh
0x5DCC7B: jz      short loc_5DCC98
0x5DCC7D: movsx   ecx, al
0x5DCC80: mov     [esp+0Ch+var_4], ecx; a3
0x5DCC84: push    ecx
0x5DCC85: mov     ecx, edi; this
0x5DCC87: fild    [esp+10h+var_4]
0x5DCC8B: fstp    [esp+10h+var_10]; a3
0x5DCC8E: push    0FAEh; a2
0x5DCC93: call    Tile_SetFloat
0x5DCC98: push    0FFFFFFFFh
0x5DCC9A: mov     ecx, esi
0x5DCC9C: call    sub_5DA1A0
0x5DCCA1: mov     ecx, esi
0x5DCCA3: call    sub_5DC630
0x5DCCA8: mov     ecx, esi
0x5DCCAA: call    sub_5D9CB0
0x5DCCAF: mov     ecx, esi
0x5DCCB1: call    sub_5DC950
0x5DCCB6: mov     ecx, esi
0x5DCCB8: call    sub_5DBB00
0x5DCCBD: fld     dword ptr ds:0A6B328h
0x5DCCC3: push    ecx
0x5DCCC4: mov     ecx, [esi+40h]; this
0x5DCCC7: fstp    [esp+10h+var_10]; a3
0x5DCCCA: push    0FB3h; a2
0x5DCCCF: call    Tile_SetFloat
0x5DCCD4: fldz
0x5DCCD6: push    ecx
0x5DCCD7: fstp    [esp+10h+var_10]; a3
0x5DCCDA: mov     ecx, [esi+40h]; this
0x5DCCDD: push    0FB3h; a2
0x5DCCE2: call    Tile_SetFloat
0x5DCCE7: fld     dword ptr ds:0A6B328h
0x5DCCED: push    ecx
0x5DCCEE: mov     ecx, [esi+48h]; this
0x5DCCF1: fstp    [esp+10h+var_10]; a3
0x5DCCF4: push    0FB3h; a2
0x5DCCF9: call    Tile_SetFloat
0x5DCCFE: fldz
0x5DCD00: push    ecx
0x5DCD01: fstp    [esp+10h+var_10]; a3
0x5DCD04: mov     ecx, [esi+48h]; this
0x5DCD07: push    0FB3h; a2
0x5DCD0C: call    Tile_SetFloat
0x5DCD11: fld     dword ptr ds:0A6B328h
0x5DCD17: push    ecx
0x5DCD18: mov     ecx, [esi+50h]; this
0x5DCD1B: fstp    [esp+10h+var_10]; a3
0x5DCD1E: push    0FB3h; a2
0x5DCD23: call    Tile_SetFloat
0x5DCD28: fldz
0x5DCD2A: push    ecx
0x5DCD2B: fstp    [esp+10h+var_10]; a3
0x5DCD2E: mov     ecx, [esi+50h]; this
0x5DCD31: push    0FB3h; a2
0x5DCD36: call    Tile_SetFloat
0x5DCD3B: push    1; char
0x5DCD3D: mov     ecx, esi; int
0x5DCD3F: call    EnableMenu
0x5DCD44: mov     edx, [esi]
0x5DCD46: mov     eax, [edx+2Ch]
0x5DCD49: mov     ecx, esi
0x5DCD4B: call    eax
0x5DCD4D: mov     eax, edi
0x5DCD4F: pop     edi
0x5DCD50: pop     esi
0x5DCD51: pop     ecx
0x5DCD52: retn
0x5DCD53: cmp     dword ptr [esi+4], 0
0x5DCD57: jz      short loc_5DCD63
0x5DCD59: mov     edx, [esi]
0x5DCD5B: mov     eax, [edx]
0x5DCD5D: push    1
0x5DCD5F: mov     ecx, esi
0x5DCD61: call    eax
0x5DCD63: pop     edi
0x5DCD64: xor     eax, eax
0x5DCD66: pop     esi
0x5DCD67: pop     ecx
0x5DCD68: retn
