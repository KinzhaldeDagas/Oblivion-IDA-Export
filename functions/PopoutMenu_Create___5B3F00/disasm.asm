0x5B3F00: push    ecx
0x5B3F01: push    400h
0x5B3F06: call    Menu_GetOpenMenuTile
0x5B3F0B: add     esp, 4
0x5B3F0E: test    eax, eax
0x5B3F10: jz      short loc_5B3F1C
0x5B3F12: mov     edx, [eax]
0x5B3F14: mov     ecx, eax
0x5B3F16: mov     eax, [edx]
0x5B3F18: push    1
0x5B3F1A: call    eax
0x5B3F1C: push    ebp
0x5B3F1D: push    esi; a3
0x5B3F1E: push    edi; a3
0x5B3F1F: push    1; arg1
0x5B3F21: push    0; canCreate
0x5B3F23: call    InterfaceManager_GetSingleton
0x5B3F28: add     esp, 8
0x5B3F2B: mov     esi, eax
0x5B3F2D: call    InterfaceManager_GetDepth
0x5B3F32: fstp    [esp+10h+var_4]
0x5B3F36: mov     ecx, [esi+68h]; TileWindow *
0x5B3F39: push    offset aDataMenusMai_5; "Data\\Menus\\Main\\magic_popup_menu.xml"
0x5B3F3E: call    Menu_LoadXML
0x5B3F43: mov     ebp, eax
0x5B3F45: mov     ecx, ebp
0x5B3F47: call    Tile_GetParentMenu
0x5B3F4C: mov     edi, eax
0x5B3F4E: test    edi, edi
0x5B3F50: jz      loc_5B4070
0x5B3F56: mov     edx, [edi]
0x5B3F58: mov     eax, [edx+34h]
0x5B3F5B: mov     ecx, edi
0x5B3F5D: call    eax
0x5B3F5F: cmp     eax, 400h
0x5B3F64: jnz     loc_5B4060
0x5B3F6A: push    0; int
0x5B3F6C: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5B3F71: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5B3F76: push    0; int
0x5B3F78: push    ebp; void *
0x5B3F79: call    OblivionDynamicCast
0x5B3F7E: add     esp, 14h
0x5B3F81: push    eax
0x5B3F82: mov     ecx, edi
0x5B3F84: call    Menu_SetTileMenu
0x5B3F89: push    0; int
0x5B3F8B: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x5B3F90: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B3F95: push    0; int
0x5B3F97: push    edi; void *
0x5B3F98: call    OblivionDynamicCast
0x5B3F9D: mov     esi, eax
0x5B3F9F: add     esp, 14h
0x5B3FA2: mov     ecx, esi
0x5B3FA4: call    sub_5A46B0
0x5B3FA9: test    al, al
0x5B3FAB: jnz     short loc_5B3FC1
0x5B3FAD: push    offset aMagicMenuCreat; "Magic Menu Creation Failed... Are your "...
0x5B3FB2: call    PrintError
0x5B3FB7: add     esp, 4
0x5B3FBA: pop     edi
0x5B3FBB: pop     esi
0x5B3FBC: xor     eax, eax
0x5B3FBE: pop     ebp
0x5B3FBF: pop     ecx
0x5B3FC0: retn
0x5B3FC1: push    0FA5h
0x5B3FC6: mov     ecx, ebp
0x5B3FC8: call    Tile_GetFloat
0x5B3FCD: fcomp   dword ptr ds:0A69770h
0x5B3FD3: fnstsw  ax
0x5B3FD5: test    ah, 44h
0x5B3FD8: jnp     short loc_5B3FF3
0x5B3FDA: push    0FA5h
0x5B3FDF: mov     ecx, ebp
0x5B3FE1: call    Tile_GetFloat
0x5B3FE6: fcomp   qword ptr ds:0A69778h
0x5B3FEC: fnstsw  ax
0x5B3FEE: test    ah, 44h
0x5B3FF1: jp      short loc_5B4007
0x5B3FF3: fld     [esp+10h+var_4]
0x5B3FF7: push    ecx
0x5B3FF8: fstp    [esp+14h+var_14]; a3
0x5B3FFB: push    0FABh; a2
0x5B4000: mov     ecx, ebp; this
0x5B4002: call    Tile_SetFloat
0x5B4007: mov     ecx, [esi+4Ch]
0x5B400A: push    ebx; a3
0x5B400B: push    offset EmptyString
0x5B4010: push    0FDEh
0x5B4015: call    Tile_SetString
0x5B401A: fld1
0x5B401C: push    ecx
0x5B401D: fstp    [esp+18h+a2]; a3
0x5B4020: mov     ecx, [esi+4Ch]; this
0x5B4023: push    0FA1h; a2
0x5B4028: call    Tile_SetFloat
0x5B402D: add     esi, 2Ch ; ','
0x5B4030: mov     ebx, 8
0x5B4035: mov     ecx, [esi]; this
0x5B4037: fld1
0x5B4039: push    ecx
0x5B403A: fstp    [esp+18h+a2]; a3
0x5B403D: push    0FA1h; a2
0x5B4042: add     esi, 4
0x5B4045: call    Tile_SetFloat
0x5B404A: sub     ebx, 1
0x5B404D: jnz     short loc_5B4035
0x5B404F: push    0; char
0x5B4051: mov     ecx, edi; int
0x5B4053: call    EnableMenu
0x5B4058: pop     ebx
0x5B4059: pop     edi
0x5B405A: pop     esi
0x5B405B: mov     eax, ebp
0x5B405D: pop     ebp
0x5B405E: pop     ecx
0x5B405F: retn
0x5B4060: cmp     dword ptr [edi+4], 0
0x5B4064: jz      short loc_5B4070
0x5B4066: mov     edx, [edi]
0x5B4068: mov     eax, [edx]
0x5B406A: push    1
0x5B406C: mov     ecx, edi
0x5B406E: call    eax
0x5B4070: pop     edi
0x5B4071: pop     esi
0x5B4072: xor     eax, eax
0x5B4074: pop     ebp
0x5B4075: pop     ecx
0x5B4076: retn
