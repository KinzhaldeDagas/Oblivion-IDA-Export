0x578FE0: push    1; arg1
0x578FE2: push    0; canCreate
0x578FE4: call    InterfaceManager_GetSingleton
0x578FE9: add     esp, 8
0x578FEC: test    eax, eax
0x578FEE: jz      short loc_57904F
0x578FF0: push    1; arg1
0x578FF2: push    0; canCreate
0x578FF4: call    InterfaceManager_GetSingleton
0x578FF9: add     esp, 8
0x578FFC: cmp     dword ptr [eax+1Ch], 0
0x579000: jz      short loc_57904F
0x579002: push    1; arg1
0x579004: push    0; canCreate
0x579006: call    InterfaceManager_GetSingleton
0x57900B: add     esp, 8
0x57900E: cmp     dword ptr [eax+68h], 0
0x579012: jz      short loc_57904F
0x579014: push    1; arg1
0x579016: push    0; canCreate
0x579018: call    InterfaceManager_GetSingleton
0x57901D: mov     eax, [eax+68h]
0x579020: add     esp, 8
0x579023: push    0FAEh
0x579028: mov     ecx, eax
0x57902A: call    Tile_GetFloat
0x57902F: fcomp   dword ptr ds:0A379B4h
0x579035: fnstsw  ax
0x579037: test    ah, 44h
0x57903A: jp      short loc_57904F
0x57903C: push    1; arg1
0x57903E: push    0; canCreate
0x579040: call    InterfaceManager_GetSingleton
0x579045: add     esp, 8
0x579048: mov     ecx, eax
0x57904A: jmp     InterfaceManager__GetTopVisibleMenuID
0x57904F: xor     eax, eax
0x579051: retn
