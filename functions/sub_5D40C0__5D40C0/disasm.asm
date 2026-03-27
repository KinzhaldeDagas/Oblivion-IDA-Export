0x5D40C0: push    esi
0x5D40C1: mov     esi, ecx
0x5D40C3: cmp     byte ptr [esi+78h], 0
0x5D40C7: jz      short loc_5D40DF
0x5D40C9: mov     ecx, [esi+30h]
0x5D40CC: push    offset EmptyString
0x5D40D1: push    0FDEh
0x5D40D6: call    Tile_SetString
0x5D40DB: mov     byte ptr [esi+78h], 0
0x5D40DF: mov     ecx, [esi+30h]
0x5D40E2: push    0FD3h
0x5D40E7: call    Tile_GetFloat
0x5D40EC: call    Double_To_SInt32
0x5D40F1: mov     ecx, [esi+74h]
0x5D40F4: push    eax
0x5D40F5: call    sub_57D2D0
0x5D40FA: mov     ecx, [esi+30h]
0x5D40FD: push    0FD4h
0x5D4102: call    Tile_GetFloat
0x5D4107: call    Double_To_SInt32
0x5D410C: mov     ecx, [esi+74h]
0x5D410F: push    eax
0x5D4110: call    sub_583DD0
0x5D4115: mov     ecx, [esi+74h]
0x5D4118: push    1
0x5D411A: call    sub_57DD90
0x5D411F: pop     esi
0x5D4120: retn
