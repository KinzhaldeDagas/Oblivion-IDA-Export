0x57BCC0: push    esi; a3
0x57BCC1: push    1; arg1
0x57BCC3: push    0; canCreate
0x57BCC5: call    InterfaceManager_GetSingleton
0x57BCCA: add     esp, 8
0x57BCCD: test    eax, eax
0x57BCCF: jz      loc_57BD7B
0x57BCD5: push    1; arg1
0x57BCD7: push    0; canCreate
0x57BCD9: call    InterfaceManager_GetSingleton
0x57BCDE: add     esp, 8
0x57BCE1: cmp     dword ptr [eax+1Ch], 0
0x57BCE5: jz      loc_57BD7B
0x57BCEB: push    400h
0x57BCF0: call    Menu_GetOpenMenuTile
0x57BCF5: mov     esi, eax
0x57BCF7: add     esp, 4
0x57BCFA: test    esi, esi
0x57BCFC: jnz     short loc_57BD09
0x57BCFE: call    PopoutMenu_Create?
0x57BD03: mov     esi, eax
0x57BD05: test    esi, esi
0x57BD07: jz      short loc_57BD7B
0x57BD09: mov     ecx, esi
0x57BD0B: call    Tile_GetParentMenu
0x57BD10: test    eax, eax
0x57BD12: jz      short loc_57BD7B
0x57BD14: push    0; int
0x57BD16: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x57BD1B: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x57BD20: push    0; int
0x57BD22: mov     ecx, esi
0x57BD24: call    Tile_GetParentMenu
0x57BD29: push    eax; void *
0x57BD2A: call    OblivionDynamicCast
0x57BD2F: add     esp, 14h
0x57BD32: test    eax, eax
0x57BD34: jz      short loc_57BD7B
0x57BD36: fldz
0x57BD38: push    ecx
0x57BD39: fstp    [esp+8+a2]; a3
0x57BD3C: mov     ecx, esi; this
0x57BD3E: push    0FABh; a2
0x57BD43: call    Tile_SetFloat
0x57BD48: fld     [esp+4+arg_10]
0x57BD4C: mov     eax, [esp+4+arg_0]
0x57BD50: sub     esp, 10h
0x57BD53: fstp    [esp+14h+a2]; float
0x57BD57: fld     [esp+14h+arg_C]
0x57BD5B: fstp    [esp+14h+var_C]; float
0x57BD5F: fld     [esp+14h+arg_8]
0x57BD63: fstp    [esp+14h+var_10]; float
0x57BD67: fld     [esp+14h+arg_4]
0x57BD6B: fstp    [esp+14h+var_14]; float
0x57BD6E: push    eax; int
0x57BD6F: call    sub_5B4E10
0x57BD74: add     esp, 14h
0x57BD77: mov     al, 1
0x57BD79: pop     esi
0x57BD7A: retn
0x57BD7B: xor     al, al
0x57BD7D: pop     esi
0x57BD7E: retn
