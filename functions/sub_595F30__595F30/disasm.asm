0x595F30: push    esi
0x595F31: push    edi; a3
0x595F32: push    402h
0x595F37: mov     edi, ecx
0x595F39: call    Menu_GetOpenMenuTile
0x595F3E: mov     esi, eax
0x595F40: add     esp, 4
0x595F43: test    esi, esi
0x595F45: jz      short loc_595F99
0x595F47: mov     ecx, esi
0x595F49: call    Tile_GetParentMenu
0x595F4E: test    eax, eax
0x595F50: jz      short loc_595F99
0x595F52: fld     dword ptr ds:0A379B4h
0x595F58: push    ecx
0x595F59: fstp    [esp+0Ch+a2]; value
0x595F5C: push    1772h; propertyCode
0x595F61: mov     ecx, esi; this
0x595F63: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x595F68: mov     ecx, esi
0x595F6A: call    Tile_GetParentMenu
0x595F6F: mov     ecx, eax; int
0x595F71: call    Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x595F76: mov     eax, [edi+34h]
0x595F79: test    byte ptr [eax+88h], 1
0x595F80: jz      short loc_595F8F
0x595F82: push    1Ah; int
0x595F84: call    sub_57DE50
0x595F89: add     esp, 4
0x595F8C: pop     edi
0x595F8D: pop     esi
0x595F8E: retn
0x595F8F: push    1Ch; int
0x595F91: call    sub_57DE50
0x595F96: add     esp, 4
0x595F99: pop     edi
0x595F9A: pop     esi
0x595F9B: retn
