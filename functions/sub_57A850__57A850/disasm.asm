0x57A850: push    1; arg1
0x57A852: push    0; canCreate
0x57A854: call    InterfaceManager_GetSingleton
0x57A859: add     esp, 8
0x57A85C: test    eax, eax
0x57A85E: jz      short locret_57A8CF
0x57A860: push    1; arg1
0x57A862: push    0; canCreate
0x57A864: call    InterfaceManager_GetSingleton
0x57A869: add     esp, 8
0x57A86C: cmp     dword ptr [eax+1Ch], 0
0x57A870: jz      short locret_57A8CF
0x57A872: push    1; arg1
0x57A874: push    0; canCreate
0x57A876: call    InterfaceManager_GetSingleton
0x57A87B: add     esp, 8
0x57A87E: cmp     dword ptr [eax+68h], 0
0x57A882: jz      short locret_57A8CF
0x57A884: push    1; arg1
0x57A886: push    0; canCreate
0x57A888: call    InterfaceManager_GetSingleton
0x57A88D: mov     eax, [eax+68h]
0x57A890: add     esp, 8
0x57A893: push    0FAEh
0x57A898: mov     ecx, eax
0x57A89A: call    Tile_GetFloat
0x57A89F: fcomp   dword ptr ds:0A379B4h
0x57A8A5: fnstsw  ax
0x57A8A7: test    ah, 44h
0x57A8AA: jp      short locret_57A8CF
0x57A8AC: push    3EBh
0x57A8B1: call    Menu_GetOpenMenuTile
0x57A8B6: add     esp, 4
0x57A8B9: test    eax, eax
0x57A8BB: jz      short locret_57A8CF
0x57A8BD: mov     ecx, eax
0x57A8BF: call    Tile_GetParentMenu
0x57A8C4: test    eax, eax
0x57A8C6: jz      short locret_57A8CF
0x57A8C8: mov     ecx, eax
0x57A8CA: jmp     sub_5DCEF0
0x57A8CF: retn
