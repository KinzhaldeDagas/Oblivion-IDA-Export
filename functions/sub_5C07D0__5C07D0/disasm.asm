0x5C07D0: push    esi
0x5C07D1: push    3F8h
0x5C07D6: call    Menu_GetOpenMenuTile
0x5C07DB: mov     esi, eax
0x5C07DD: add     esp, 4
0x5C07E0: test    esi, esi
0x5C07E2: jz      short loc_5C0817
0x5C07E4: push    edi; a3
0x5C07E5: mov     ecx, esi
0x5C07E7: call    Tile_GetParentMenu
0x5C07EC: mov     edi, eax
0x5C07EE: test    edi, edi
0x5C07F0: jz      short loc_5C0816
0x5C07F2: fld     dword ptr ds:0A379B4h
0x5C07F8: push    ecx
0x5C07F9: fstp    [esp+0Ch+a2]; a3
0x5C07FC: push    1772h; a2
0x5C0801: mov     ecx, esi; this
0x5C0803: call    Tile_SetFloat
0x5C0808: mov     ecx, edi; int
0x5C080A: call    sub_584740
0x5C080F: pop     edi
0x5C0810: pop     esi
0x5C0811: jmp     loc_598640
0x5C0816: pop     edi
0x5C0817: pop     esi
0x5C0818: retn
