0x57BBF0: push    esi
0x57BBF1: push    edi; a3
0x57BBF2: push    1; arg1
0x57BBF4: push    0; canCreate
0x57BBF6: call    InterfaceManager_GetSingleton
0x57BBFB: add     esp, 8
0x57BBFE: test    eax, eax
0x57BC00: jz      loc_57BCB5
0x57BC06: push    1; arg1
0x57BC08: push    0; canCreate
0x57BC0A: call    InterfaceManager_GetSingleton
0x57BC0F: add     esp, 8
0x57BC12: cmp     dword ptr [eax+1Ch], 0
0x57BC16: jz      loc_57BCB5
0x57BC1C: mov     edi, [esp+8+arg_0]
0x57BC20: test    edi, edi
0x57BC22: jz      loc_57BCB5
0x57BC28: push    400h
0x57BC2D: call    Menu_GetOpenMenuTile
0x57BC32: mov     esi, eax
0x57BC34: add     esp, 4
0x57BC37: test    esi, esi
0x57BC39: jnz     short loc_57BC46
0x57BC3B: call    PopoutMenu_Create?
0x57BC40: mov     esi, eax
0x57BC42: test    esi, esi
0x57BC44: jz      short loc_57BCB5
0x57BC46: mov     ecx, esi
0x57BC48: call    Tile_GetParentMenu
0x57BC4D: test    eax, eax
0x57BC4F: jz      short loc_57BCB5
0x57BC51: push    0; int
0x57BC53: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x57BC58: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57BC5D: push    0; int
0x57BC5F: mov     ecx, esi
0x57BC61: call    Tile_GetParentMenu
0x57BC66: push    eax; void *
0x57BC67: call    OblivionDynamicCast
0x57BC6C: add     esp, 14h
0x57BC6F: test    eax, eax
0x57BC71: jz      short loc_57BCB5
0x57BC73: fldz
0x57BC75: push    ecx
0x57BC76: fstp    [esp+0Ch+a2]; a3
0x57BC79: mov     ecx, esi; this
0x57BC7B: push    0FABh; a2
0x57BC80: call    Tile_SetFloat
0x57BC85: fld     [esp+8+arg_10]
0x57BC89: sub     esp, 10h
0x57BC8C: fstp    [esp+18h+a2]; float
0x57BC90: fld     [esp+18h+arg_C]
0x57BC94: fstp    [esp+18h+var_10]; float
0x57BC98: fld     [esp+18h+arg_8]
0x57BC9C: fstp    [esp+18h+var_14]; float
0x57BCA0: fld     [esp+18h+arg_4]
0x57BCA4: fstp    [esp+18h+var_18]; float
0x57BCA7: push    edi; int
0x57BCA8: call    ActiveEffectsMenu_BuildPopup??
0x57BCAD: add     esp, 14h
0x57BCB0: pop     edi
0x57BCB1: mov     al, 1
0x57BCB3: pop     esi
0x57BCB4: retn
0x57BCB5: pop     edi
0x57BCB6: xor     al, al
0x57BCB8: pop     esi
0x57BCB9: retn
