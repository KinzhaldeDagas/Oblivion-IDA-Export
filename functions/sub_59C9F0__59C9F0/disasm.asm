0x59C9F0: push    esi
0x59C9F1: push    417h
0x59C9F6: call    Menu_GetOpenMenuTile
0x59C9FB: mov     esi, eax
0x59C9FD: add     esp, 4
0x59CA00: test    esi, esi
0x59CA02: jz      short loc_59CA68
0x59CA04: push    edi; a3
0x59CA05: mov     ecx, esi
0x59CA07: call    Tile_GetParentMenu
0x59CA0C: mov     edi, eax
0x59CA0E: test    edi, edi
0x59CA10: jz      short loc_59CA67
0x59CA12: fld     dword ptr ds:0A379B4h
0x59CA18: push    ecx
0x59CA19: fstp    [esp+0Ch+a2]; a3
0x59CA1C: push    1772h; a2
0x59CA21: mov     ecx, esi; this
0x59CA23: call    Tile_SetFloat
0x59CA28: mov     ecx, edi; int
0x59CA2A: call    sub_584740
0x59CA2F: push    414h
0x59CA34: call    Menu_GetOpenMenuTile
0x59CA39: add     esp, 4
0x59CA3C: push    0; int
0x59CA3E: push    offset ??_R0?AVMainMenu@@@8; struct TypeDescriptor *
0x59CA43: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59CA48: push    0; int
0x59CA4A: mov     ecx, eax
0x59CA4C: call    Tile_GetParentMenu
0x59CA51: push    eax; void *
0x59CA52: call    OblivionDynamicCast
0x59CA57: add     esp, 14h
0x59CA5A: test    eax, eax
0x59CA5C: jz      short loc_59CA67
0x59CA5E: pop     edi
0x59CA5F: mov     ecx, eax
0x59CA61: pop     esi
0x59CA62: jmp     sub_5B5A30
0x59CA67: pop     edi
0x59CA68: pop     esi
0x59CA69: retn
