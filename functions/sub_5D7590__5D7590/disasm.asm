0x5D7590: push    esi
0x5D7591: mov     esi, ecx
0x5D7593: cmp     byte ptr [esi+6Ch], 0
0x5D7597: jnz     short loc_5D75AF
0x5D7599: mov     ecx, [esi+54h]
0x5D759C: push    offset EmptyString
0x5D75A1: push    0FDEh
0x5D75A6: call    Tile_SetString
0x5D75AB: mov     byte ptr [esi+6Ch], 1
0x5D75AF: mov     ecx, [esi+54h]
0x5D75B2: push    0FD3h
0x5D75B7: call    Tile_GetFloat
0x5D75BC: call    Double_To_SInt32
0x5D75C1: mov     ecx, [esi+70h]
0x5D75C4: push    eax
0x5D75C5: call    sub_57D2D0
0x5D75CA: mov     ecx, [esi+54h]
0x5D75CD: push    0FD4h
0x5D75D2: call    Tile_GetFloat
0x5D75D7: call    Double_To_SInt32
0x5D75DC: mov     ecx, [esi+70h]
0x5D75DF: push    eax
0x5D75E0: call    sub_583DD0
0x5D75E5: mov     ecx, [esi+70h]
0x5D75E8: push    1
0x5D75EA: call    sub_57DD90
0x5D75EF: pop     esi
0x5D75F0: retn
