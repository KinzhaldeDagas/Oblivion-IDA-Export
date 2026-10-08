0x57FD60: push    ecx
0x57FD61: push    esi; a3
0x57FD62: push    0; root
0x57FD64: lea     eax, [esp+0Ch+maxFocus]
0x57FD68: push    eax; maxFocus
0x57FD69: mov     esi, ecx
0x57FD6B: mov     [esp+10h+maxFocus], 80000000h
0x57FD73: call    InterfaceManager__ScanForMaxFocus; AchievementsNative evidence: default UI hit-test recursively scans visible/non-hidden target tiles, chooses highest depth, and tie-breaks list items by lower listindex; use active/mouseover tile evidence before cursor-sprite coordinate fallbacks.
0x57FD78: test    eax, eax
0x57FD7A: push    0
0x57FD7C: mov     ecx, esi
0x57FD7E: push    0FDDh
0x57FD83: jz      short loc_57FDB3
0x57FD85: push    eax
0x57FD86: call    InterfaceManager__SetCurrentFocusTarget; AchievementsNative evidence: focused tile with xlist=&xitem drives parent xscroll by pulsing the xscroll target's user5 through -999999, tile xscroll, then 0; do not leave scroll target user5 at the desired scroll value.
0x57FD8B: fld1
0x57FD8D: mov     ecx, [esi+1Ch]
0x57FD90: mov     eax, [ecx+24h]
0x57FD93: or      word ptr [eax+18h], 1
0x57FD98: push    ecx
0x57FD99: mov     ecx, [esi+1Ch]; this
0x57FD9C: fstp    [esp+0Ch+a2]; value
0x57FD9F: push    0FA1h; propertyCode
0x57FDA4: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x57FDA9: mov     byte ptr [esi+0B9h], 0
0x57FDB0: pop     esi
0x57FDB1: pop     ecx
0x57FDB2: retn
0x57FDB3: push    0
0x57FDB5: call    InterfaceManager__SetCurrentFocusTarget; AchievementsNative evidence: focused tile with xlist=&xitem drives parent xscroll by pulsing the xscroll target's user5 through -999999, tile xscroll, then 0; do not leave scroll target user5 at the desired scroll value.
0x57FDBA: pop     esi
0x57FDBB: pop     ecx
0x57FDBC: retn
