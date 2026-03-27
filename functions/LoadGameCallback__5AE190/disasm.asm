0x5AE190: push    ebx
0x5AE191: push    esi
0x5AE192: call    sub_578D70
0x5AE197: push    40Eh
0x5AE19C: mov     bl, al
0x5AE19E: call    Menu_GetOpenMenuTile
0x5AE1A3: add     esp, 4
0x5AE1A6: mov     ecx, eax
0x5AE1A8: call    Tile_GetParentMenu
0x5AE1AD: mov     esi, eax
0x5AE1AF: test    esi, esi
0x5AE1B1: jz      short loc_5AE214
0x5AE1B3: mov     eax, [esi+4Ch]
0x5AE1B6: test    eax, eax
0x5AE1B8: jnz     short loc_5AE1D6
0x5AE1BA: push    eax
0x5AE1BB: push    offset EmptyString
0x5AE1C0: push    eax
0x5AE1C1: push    eax
0x5AE1C2: mov     [esi+64h], al
0x5AE1C5: mov     eax, ds:0B38748h
0x5AE1CA: push    eax
0x5AE1CB: call    ShowUIMessageBox
0x5AE1D0: add     esp, 14h
0x5AE1D3: pop     esi
0x5AE1D4: pop     ebx
0x5AE1D5: retn
0x5AE1D6: cmp     bl, 2
0x5AE1D9: jz      short loc_5AE1FF
0x5AE1DB: mov     ecx, ds:0B33B00h
0x5AE1E1: push    0
0x5AE1E3: push    0
0x5AE1E5: push    eax
0x5AE1E6: call    TESSaveLoadGame_LoadGame
0x5AE1EB: test    al, al
0x5AE1ED: jz      short loc_5AE1FF
0x5AE1EF: mov     ecx, ds:0B33B00h
0x5AE1F5: call    sub_459400
0x5AE1FA: call    sub_57AFB0
0x5AE1FF: push    40Eh
0x5AE204: call    Menu_GetOpenMenuTile
0x5AE209: add     esp, 4
0x5AE20C: test    eax, eax
0x5AE20E: jz      short loc_5AE214
0x5AE210: mov     byte ptr [esi+64h], 0
0x5AE214: pop     esi
0x5AE215: pop     ebx
0x5AE216: retn
