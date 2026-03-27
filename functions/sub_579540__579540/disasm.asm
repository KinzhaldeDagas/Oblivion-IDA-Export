0x579540: push    1; arg1
0x579542: push    0; canCreate
0x579544: call    InterfaceManager_GetSingleton
0x579549: add     esp, 8
0x57954C: test    eax, eax
0x57954E: jz      short loc_5795AF
0x579550: push    1; arg1
0x579552: push    0; canCreate
0x579554: call    InterfaceManager_GetSingleton
0x579559: add     esp, 8
0x57955C: cmp     dword ptr [eax+1Ch], 0
0x579560: jz      short loc_5795AF
0x579562: push    1; arg1
0x579564: push    0; canCreate
0x579566: call    InterfaceManager_GetSingleton
0x57956B: add     esp, 8
0x57956E: cmp     dword ptr [eax+68h], 0
0x579572: jz      short loc_5795AF
0x579574: push    1; arg1
0x579576: push    0; canCreate
0x579578: call    InterfaceManager_GetSingleton
0x57957D: mov     eax, [eax+68h]
0x579580: add     esp, 8
0x579583: push    0FAEh
0x579588: mov     ecx, eax
0x57958A: call    Tile_GetFloat
0x57958F: fcomp   dword ptr ds:0A379B4h
0x579595: fnstsw  ax
0x579597: test    ah, 44h
0x57959A: jp      short loc_5795AF
0x57959C: push    1; arg1
0x57959E: push    0; canCreate
0x5795A0: call    InterfaceManager_GetSingleton
0x5795A5: mov     eax, [eax+0C8h]
0x5795AB: add     esp, 8
0x5795AE: retn
0x5795AF: xor     eax, eax
0x5795B1: retn
