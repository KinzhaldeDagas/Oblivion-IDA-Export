0x5B5D60: push    ebx
0x5B5D61: call    sub_578D70
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
0x5B5D90: mov     ecx, ds:0B33B00h
0x5B5D96: mov     eax, [ecx+6Ch]
0x5B5D99: test    eax, eax
0x5B5D9B: jz      short loc_5B5DC3
0x5B5D9D: mov     eax, [eax]
0x5B5D9F: test    eax, eax
0x5B5DA1: jz      short loc_5B5DC3
0x5B5DA3: push    0
0x5B5DA5: push    0
0x5B5DA7: push    eax
0x5B5DA8: call    TESSaveLoadGame_LoadGame
0x5B5DAD: test    al, al
0x5B5DAF: jz      short loc_5B5DDE
0x5B5DB1: mov     ecx, ds:0B33B00h
0x5B5DB7: call    sub_459400
0x5B5DBC: pop     esi
0x5B5DBD: pop     ebx
0x5B5DBE: jmp     sub_5B5960
0x5B5DC3: mov     eax, ds:0B38CF0h
0x5B5DC8: mov     ecx, ds:0B386D8h
0x5B5DCE: push    0
0x5B5DD0: push    eax
0x5B5DD1: push    0
0x5B5DD3: push    0
0x5B5DD5: push    ecx
0x5B5DD6: call    ShowUIMessageBox
0x5B5DDB: add     esp, 14h
0x5B5DDE: mov     byte ptr [esi+4Dh], 0
0x5B5DE2: pop     esi
0x5B5DE3: pop     ebx
0x5B5DE4: retn
