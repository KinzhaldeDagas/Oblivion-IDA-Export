0x5BD440: push    esi
0x5BD441: push    401h
0x5BD446: call    Menu_GetOpenMenuTile
0x5BD44B: mov     esi, eax
0x5BD44D: add     esp, 4
0x5BD450: test    esi, esi
0x5BD452: jz      short loc_5BD482
0x5BD454: push    edi; a3
0x5BD455: mov     ecx, esi
0x5BD457: call    Tile_GetParentMenu
0x5BD45C: mov     edi, eax
0x5BD45E: test    edi, edi
0x5BD460: jz      short loc_5BD481
0x5BD462: fld     dword ptr ds:0A379B4h
0x5BD468: push    ecx
0x5BD469: fstp    [esp+0Ch+a2]; value
0x5BD46C: push    1772h; propertyCode
0x5BD471: mov     ecx, esi; this
0x5BD473: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5BD478: mov     ecx, edi; int
0x5BD47A: pop     edi
0x5BD47B: pop     esi
0x5BD47C: jmp     Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5BD481: pop     edi
0x5BD482: pop     esi
0x5BD483: retn
