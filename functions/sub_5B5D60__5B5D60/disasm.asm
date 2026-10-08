0x5B5D60: push    ebx
0x5B5D61: call    InterfaceManager_ConsumeMessageButton
0x5B5D66: push    414h
0x5B5D6B: mov     bl, al
0x5B5D6D: call    Menu_GetOpenMenuTile
0x5B5D72: add     esp, 4
0x5B5D75: test    eax, eax
0x5B5D77: jz      short loc_5B5DE3
0x5B5D79: push    esi
0x5B5D7A: mov     ecx, eax
0x5B5D7C: call    Tile_GetParentMenu
0x5B5D81: mov     esi, eax
0x5B5D83: test    esi, esi
0x5B5D85: jz      short loc_5B5DE2
0x5B5D87: cmp     bl, 1
0x5B5D8A: mov     byte ptr [esi+4Dh], 1
0x5B5D8E: jnz     short loc_5B5DDE
0x5B5D90: mov     ecx, ds:0B33B00h; ContinueFromLastSave fidelity decode: main-menu Continue loads first/selected entry from SaveLoad_CurrentSavegame+0x6C; this list exists only after save enumeration, not a direct highest-number API.
0x5B5D96: mov     eax, [ecx+6Ch]
0x5B5D99: test    eax, eax
0x5B5D9B: jz      short loc_5B5DC3
0x5B5D9D: mov     eax, [eax]
0x5B5D9F: test    eax, eax
0x5B5DA1: jz      short loc_5B5DC3
0x5B5DA3: push    0; ContinueFromLastSave decode: main-menu Continue loads selected/current save with TESSaveLoadGame_LoadGame(this, selectedStem, 0), then calls sub_459400 and sub_5B5960 on success.
0x5B5DA5: push    0
0x5B5DA7: push    eax
0x5B5DA8: call    TESSaveLoadGame_LoadGame;  Verified map lifecycle: allocates incomingChangesMap at +4, stores save records there, reconciles pre-load currentChangesMap at +0 after form loading, then swaps in incoming map via 464440. The map roles are based on direct stores/lookups and final pointer assignments.
0x5B5DAD: test    al, al
0x5B5DAF: jz      short loc_5B5DDE
0x5B5DB1: mov     ecx, ds:0B33B00h
0x5B5DB7: call    sub_459400
0x5B5DBC: pop     esi
0x5B5DBD: pop     ebx
0x5B5DBE: jmp     sub_5B5960; ContinueFromLastSave decode: post-success main-menu Continue cleanup. Sets tile float 0x1772 on menu 0x414 and jumps to Menu close/transition helper sub_584740.
0x5B5DC3: mov     eax, ds:0B38CF0h
0x5B5DC8: mov     ecx, ds:0B386D8h
0x5B5DCE: push    0
0x5B5DD0: push    eax; firstButton
0x5B5DD1: push    0; baseButtonIndex
0x5B5DD3: push    0; callback
0x5B5DD5: push    ecx; message
0x5B5DD6: call    ShowUIMessageBox
0x5B5DDB: add     esp, 14h
0x5B5DDE: mov     byte ptr [esi+4Dh], 0
0x5B5DE2: pop     esi
0x5B5DE3: pop     ebx
0x5B5DE4: retn
