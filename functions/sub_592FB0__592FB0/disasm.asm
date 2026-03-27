0x592FB0: push    esi
0x592FB1: mov     esi, ecx
0x592FB3: cmp     byte ptr [esi+0A4h], 0
0x592FBA: jnz     short loc_592FCE
0x592FBC: mov     ecx, [esi+2Ch]
0x592FBF: push    offset EmptyString
0x592FC4: push    0FDEh
0x592FC9: call    Tile_SetString
0x592FCE: mov     ecx, [esi+2Ch]
0x592FD1: push    0FD3h
0x592FD6: call    Tile_GetFloat
0x592FDB: call    Double_To_SInt32
0x592FE0: mov     ecx, [esi+0A0h]
0x592FE6: push    eax
0x592FE7: call    sub_57D2D0
0x592FEC: mov     ecx, [esi+2Ch]
0x592FEF: push    0FD4h
0x592FF4: call    Tile_GetFloat
0x592FF9: call    Double_To_SInt32
0x592FFE: mov     ecx, [esi+0A0h]
0x593004: push    eax
0x593005: call    sub_583DD0
0x59300A: mov     ecx, [esi+0A0h]
0x593010: push    1
0x593012: call    sub_57DD90
0x593017: pop     esi
0x593018: retn
