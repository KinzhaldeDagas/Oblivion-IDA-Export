0x59F970: push    esi
0x59F971: push    3F1h
0x59F976: call    Menu_GetOpenMenuTile
0x59F97B: add     esp, 4
0x59F97E: mov     esi, eax
0x59F980: call    sub_6B8660
0x59F985: test    esi, esi
0x59F987: jz      short loc_59F9AE
0x59F989: test    eax, eax
0x59F98B: jz      short loc_59F9AE
0x59F98D: mov     ecx, esi
0x59F98F: call    Tile_GetParentMenu
0x59F994: mov     esi, eax
0x59F996: test    esi, esi
0x59F998: jz      short loc_59F9AE
0x59F99A: push    0
0x59F99C: push    1
0x59F99E: mov     ecx, esi
0x59F9A0: call    sub_59EA10
0x59F9A5: push    1
0x59F9A7: mov     ecx, esi
0x59F9A9: call    sub_59E2B0
0x59F9AE: pop     esi
0x59F9AF: retn
