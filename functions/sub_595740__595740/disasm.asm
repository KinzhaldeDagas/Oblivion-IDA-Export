0x595740: push    esi
0x595741: push    3F9h
0x595746: call    Menu_GetOpenMenuTile
0x59574B: mov     esi, eax
0x59574D: add     esp, 4
0x595750: test    esi, esi
0x595752: jz      short loc_595782
0x595754: push    edi; a3
0x595755: mov     ecx, esi
0x595757: call    Tile_GetParentMenu
0x59575C: mov     edi, eax
0x59575E: test    edi, edi
0x595760: jz      short loc_595781
0x595762: fld     dword ptr ds:0A379B4h
0x595768: push    ecx
0x595769: fstp    [esp+0Ch+a2]; a3
0x59576C: push    1772h; a2
0x595771: mov     ecx, esi; this
0x595773: call    Tile_SetFloat
0x595778: mov     ecx, edi; int
0x59577A: pop     edi
0x59577B: pop     esi
0x59577C: jmp     sub_584740
0x595781: pop     edi
0x595782: pop     esi
0x595783: retn
