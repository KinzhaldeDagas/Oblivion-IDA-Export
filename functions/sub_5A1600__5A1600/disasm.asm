0x5A1600: push    esi
0x5A1601: mov     esi, ecx
0x5A1603: cmp     byte ptr [esi+9Ch], 0
0x5A160A: jz      short loc_5A1625
0x5A160C: mov     ecx, [esi+3Ch]
0x5A160F: push    offset EmptyString
0x5A1614: push    0FDEh
0x5A1619: call    Tile_SetString
0x5A161E: mov     byte ptr [esi+9Ch], 0
0x5A1625: mov     ecx, [esi+3Ch]
0x5A1628: push    0FD3h
0x5A162D: call    Tile_GetFloat
0x5A1632: call    Double_To_SInt32
0x5A1637: mov     ecx, [esi+98h]
0x5A163D: push    eax
0x5A163E: call    sub_57D2D0
0x5A1643: mov     ecx, [esi+3Ch]
0x5A1646: push    0FD4h
0x5A164B: call    Tile_GetFloat
0x5A1650: call    Double_To_SInt32
0x5A1655: mov     ecx, [esi+98h]
0x5A165B: push    eax
0x5A165C: call    sub_583DD0
0x5A1661: mov     ecx, [esi+98h]
0x5A1667: push    1
0x5A1669: call    sub_57DD90
0x5A166E: pop     esi
0x5A166F: retn
