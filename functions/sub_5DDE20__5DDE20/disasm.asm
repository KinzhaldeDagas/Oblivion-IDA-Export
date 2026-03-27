0x5DDE20: push    edi
0x5DDE21: push    3FAh
0x5DDE26: call    Menu_GetOpenMenuTile
0x5DDE2B: mov     edi, eax
0x5DDE2D: add     esp, 4
0x5DDE30: test    edi, edi
0x5DDE32: jz      short loc_5DDE9B
0x5DDE34: push    esi; a3
0x5DDE35: push    0; int
0x5DDE37: push    offset ??_R0?AVVideoMenu@@@8; struct TypeDescriptor *
0x5DDE3C: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5DDE41: push    0; int
0x5DDE43: mov     ecx, edi
0x5DDE45: call    Tile_GetParentMenu
0x5DDE4A: push    eax; void *
0x5DDE4B: call    OblivionDynamicCast
0x5DDE50: mov     esi, eax
0x5DDE52: add     esp, 14h
0x5DDE55: test    esi, esi
0x5DDE57: jz      short loc_5DDE9A
0x5DDE59: fld     dword ptr ds:0A379B4h
0x5DDE5F: push    ecx
0x5DDE60: fstp    [esp+0Ch+a2]; a3
0x5DDE63: push    1772h; a2
0x5DDE68: mov     ecx, edi; this
0x5DDE6A: call    Tile_SetFloat
0x5DDE6F: mov     ecx, esi; int
0x5DDE71: call    sub_584740
0x5DDE76: mov     al, ds:0B02D70h
0x5DDE7B: cmp     al, [esi+114h]
0x5DDE81: jz      short loc_5DDE8A
0x5DDE83: mov     byte ptr ds:0B3B740h, 1
0x5DDE8A: cmp     dword ptr ds:0B42F48h, 5
0x5DDE91: jge     short loc_5DDE9A
0x5DDE93: mov     byte ptr ds:0B06F14h, 0
0x5DDE9A: pop     esi
0x5DDE9B: pop     edi
0x5DDE9C: retn
