0x5C2730: push    esi
0x5C2731: mov     esi, ecx
0x5C2733: mov     ecx, [esi+8ECh]
0x5C2739: push    offset EmptyString
0x5C273E: call    sub_57FF20
0x5C2743: mov     ecx, [esi+30h]
0x5C2746: push    0FD3h
0x5C274B: call    Tile_GetFloat
0x5C2750: call    Double_To_SInt32
0x5C2755: mov     ecx, [esi+8ECh]
0x5C275B: push    eax
0x5C275C: call    sub_57D2D0
0x5C2761: mov     ecx, [esi+30h]
0x5C2764: push    0FD4h
0x5C2769: call    Tile_GetFloat
0x5C276E: call    Double_To_SInt32
0x5C2773: mov     ecx, [esi+8ECh]
0x5C2779: push    eax
0x5C277A: call    sub_583DD0
0x5C277F: mov     ecx, [esi+8ECh]
0x5C2785: push    1
0x5C2787: call    sub_57DD90
0x5C278C: pop     esi
0x5C278D: retn
