0x57A7D0: push    1; arg1
0x57A7D2: push    0; canCreate
0x57A7D4: call    InterfaceManager_GetSingleton
0x57A7D9: add     esp, 8
0x57A7DC: test    eax, eax
0x57A7DE: jz      short locret_57A84F
0x57A7E0: push    1; arg1
0x57A7E2: push    0; canCreate
0x57A7E4: call    InterfaceManager_GetSingleton
0x57A7E9: add     esp, 8
0x57A7EC: cmp     dword ptr [eax+1Ch], 0
0x57A7F0: jz      short locret_57A84F
0x57A7F2: push    1; arg1
0x57A7F4: push    0; canCreate
0x57A7F6: call    InterfaceManager_GetSingleton
0x57A7FB: add     esp, 8
0x57A7FE: cmp     dword ptr [eax+68h], 0
0x57A802: jz      short locret_57A84F
0x57A804: push    1; arg1
0x57A806: push    0; canCreate
0x57A808: call    InterfaceManager_GetSingleton
0x57A80D: mov     eax, [eax+68h]
0x57A810: add     esp, 8
0x57A813: push    0FAEh
0x57A818: mov     ecx, eax
0x57A81A: call    Tile_GetFloat
0x57A81F: fcomp   dword ptr ds:0A379B4h
0x57A825: fnstsw  ax
0x57A827: test    ah, 44h
0x57A82A: jp      short locret_57A84F
0x57A82C: push    3EBh
0x57A831: call    Menu_GetOpenMenuTile
0x57A836: add     esp, 4
0x57A839: test    eax, eax
0x57A83B: jz      short locret_57A84F
0x57A83D: mov     ecx, eax
0x57A83F: call    Tile_GetParentMenu
0x57A844: test    eax, eax
0x57A846: jz      short locret_57A84F
0x57A848: mov     ecx, eax
0x57A84A: jmp     sub_5D9CB0
0x57A84F: retn
