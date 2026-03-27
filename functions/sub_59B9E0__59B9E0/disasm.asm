0x59B9E0: push    esi
0x59B9E1: push    3FDh
0x59B9E6: call    Menu_GetOpenMenuTile
0x59B9EB: mov     esi, eax
0x59B9ED: add     esp, 4
0x59B9F0: test    esi, esi
0x59B9F2: jz      short loc_59BA39
0x59B9F4: push    edi; a3
0x59B9F5: push    0; int
0x59B9F7: push    offset ??_R0?AVControlsMenu@@@8; struct TypeDescriptor *
0x59B9FC: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59BA01: push    0; int
0x59BA03: mov     ecx, esi
0x59BA05: call    Tile_GetParentMenu
0x59BA0A: push    eax; void *
0x59BA0B: call    OblivionDynamicCast
0x59BA10: mov     edi, eax
0x59BA12: add     esp, 14h
0x59BA15: test    edi, edi
0x59BA17: jz      short loc_59BA38
0x59BA19: fld     dword ptr ds:0A379B4h
0x59BA1F: push    ecx
0x59BA20: fstp    [esp+0Ch+a2]; a3
0x59BA23: push    1772h; a2
0x59BA28: mov     ecx, esi; this
0x59BA2A: call    Tile_SetFloat
0x59BA2F: mov     ecx, edi; int
0x59BA31: pop     edi
0x59BA32: pop     esi
0x59BA33: jmp     sub_584740
0x59BA38: pop     edi
0x59BA39: pop     esi
0x59BA3A: retn
