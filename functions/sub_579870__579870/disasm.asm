0x579870: push    1; arg1
0x579872: push    0; canCreate
0x579874: call    InterfaceManager_GetSingleton
0x579879: add     esp, 8
0x57987C: test    eax, eax
0x57987E: jz      short locret_5798E8
0x579880: push    1; arg1
0x579882: push    0; canCreate
0x579884: call    InterfaceManager_GetSingleton
0x579889: add     esp, 8
0x57988C: cmp     dword ptr [eax+1Ch], 0
0x579890: jz      short locret_5798E8
0x579892: push    1; arg1
0x579894: push    0; canCreate
0x579896: call    InterfaceManager_GetSingleton
0x57989B: add     esp, 8
0x57989E: cmp     dword ptr [eax+68h], 0
0x5798A2: jz      short locret_5798E8
0x5798A4: push    1; arg1
0x5798A6: push    0; canCreate
0x5798A8: call    InterfaceManager_GetSingleton
0x5798AD: mov     eax, [eax+68h]
0x5798B0: add     esp, 8
0x5798B3: push    0FAEh
0x5798B8: mov     ecx, eax
0x5798BA: call    Tile_GetFloat
0x5798BF: fcomp   dword ptr ds:0A379B4h
0x5798C5: fnstsw  ax
0x5798C7: test    ah, 44h
0x5798CA: jp      short locret_5798E8
0x5798CC: call    InterfaceManager_IsMenuMode
0x5798D1: test    al, al
0x5798D3: jz      short locret_5798E8
0x5798D5: push    1; arg1
0x5798D7: push    0; canCreate
0x5798D9: call    InterfaceManager_GetSingleton
0x5798DE: add     esp, 8
0x5798E1: mov     ecx, eax
0x5798E3: jmp     sub_57ECB0
0x5798E8: retn
