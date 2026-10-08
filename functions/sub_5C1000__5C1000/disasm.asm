0x5C1000: push    416h
0x5C1005: call    Menu_GetOpenMenuTile
0x5C100A: add     esp, 4
0x5C100D: test    eax, eax
0x5C100F: jz      short locret_5C1059
0x5C1011: push    esi; a3
0x5C1012: mov     ecx, eax
0x5C1014: call    Tile_GetParentMenu
0x5C1019: mov     esi, eax
0x5C101B: test    esi, esi
0x5C101D: jz      short loc_5C1058
0x5C101F: cmp     dword ptr [esi+24h], 2
0x5C1023: jz      short loc_5C1058
0x5C1025: fld1
0x5C1027: push    ecx
0x5C1028: mov     ecx, [esi+2Ch]; this
0x5C102B: fstp    [esp+8+var_8]; value
0x5C102E: push    0FA1h; propertyCode
0x5C1033: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C1038: fldz
0x5C103A: push    ecx
0x5C103B: fstp    [esp+8+var_8]; value
0x5C103E: mov     ecx, [esi+28h]; this
0x5C1041: push    0FA7h; propertyCode
0x5C1046: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C104B: mov     byte ptr ds:0B3B43Dh, 0
0x5C1052: pop     esi
0x5C1053: jmp     loc_5C0D20
0x5C1058: pop     esi
0x5C1059: retn
0x5C0D20: push    esi
0x5C0D21: push    416h
0x5C0D26: call    Menu_GetOpenMenuTile
0x5C0D2B: mov     esi, eax
0x5C0D2D: add     esp, 4
0x5C0D30: test    esi, esi
0x5C0D32: jz      short loc_5C0D5E
0x5C0D34: push    edi; a3
0x5C0D35: mov     ecx, esi
0x5C0D37: call    Tile_GetParentMenu
0x5C0D3C: mov     edi, eax
0x5C0D3E: test    edi, edi
0x5C0D40: jz      short loc_5C0D5D
0x5C0D42: fld1
0x5C0D44: push    ecx
0x5C0D45: fstp    [esp+0Ch+a3]; value
0x5C0D48: mov     ecx, esi; this
0x5C0D4A: push    1772h; propertyCode
0x5C0D4F: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C0D54: mov     ecx, edi; int
0x5C0D56: pop     edi
0x5C0D57: pop     esi
0x5C0D58: jmp     Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5C0D5D: pop     edi
0x5C0D5E: pop     esi
0x5C0D5F: retn
