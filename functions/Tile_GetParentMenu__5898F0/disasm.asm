0x5898F0: push    esi
0x5898F1: mov     esi, ecx
0x5898F3: test    esi, esi
0x5898F5: jz      short Tile_GetParentMenu___Return_0
0x5898F7: mov     eax, [esi+10h]
0x5898FA: test    eax, eax
0x5898FC: jz      short loc_58990E
0x5898FE: cmp     dword ptr [eax+10h], 0
0x589902: jz      short loc_58990E
0x589904: mov     esi, eax
0x589906: test    esi, esi
0x589908: jnz     short loc_5898F7
