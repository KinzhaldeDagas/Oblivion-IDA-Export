0x5B5960: push    esi; ContinueFromLastSave decode: post-success main-menu Continue cleanup. Sets tile float 0x1772 on menu 0x414 and jumps to Menu close/transition helper sub_584740.
0x5B5961: push    414h
0x5B5966: call    Menu_GetOpenMenuTile
0x5B596B: mov     esi, eax
0x5B596D: add     esp, 4
0x5B5970: test    esi, esi
0x5B5972: jz      short loc_5B59A2
0x5B5974: push    edi; a3
0x5B5975: mov     ecx, esi
0x5B5977: call    Tile_GetParentMenu
0x5B597C: mov     edi, eax
0x5B597E: test    edi, edi
0x5B5980: jz      short loc_5B59A1
0x5B5982: fld     dword ptr ds:0A379B4h
0x5B5988: push    ecx
0x5B5989: fstp    [esp+0Ch+a2]; value
0x5B598C: push    1772h; propertyCode
0x5B5991: mov     ecx, esi; this
0x5B5993: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5B5998: mov     ecx, edi; int
0x5B599A: pop     edi
0x5B599B: pop     esi
0x5B599C: jmp     Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5B59A1: pop     edi
0x5B59A2: pop     esi
0x5B59A3: retn
