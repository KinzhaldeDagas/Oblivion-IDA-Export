0x57A3B0: push    1; arg1
0x57A3B2: push    0; canCreate
0x57A3B4: call    InterfaceManager_GetSingleton
0x57A3B9: add     esp, 8
0x57A3BC: test    eax, eax
0x57A3BE: jz      short locret_57A434
0x57A3C0: push    1; arg1
0x57A3C2: push    0; canCreate
0x57A3C4: call    InterfaceManager_GetSingleton
0x57A3C9: add     esp, 8
0x57A3CC: cmp     dword ptr [eax+1Ch], 0
0x57A3D0: jz      short locret_57A434
0x57A3D2: push    1; arg1
0x57A3D4: push    0; canCreate
0x57A3D6: call    InterfaceManager_GetSingleton
0x57A3DB: add     esp, 8
0x57A3DE: cmp     dword ptr [eax+68h], 0
0x57A3E2: jz      short locret_57A434
0x57A3E4: push    1; arg1
0x57A3E6: push    0; canCreate
0x57A3E8: call    InterfaceManager_GetSingleton
0x57A3ED: mov     eax, [eax+68h]
0x57A3F0: add     esp, 8
0x57A3F3: push    0FAEh
0x57A3F8: mov     ecx, eax
0x57A3FA: call    Tile_GetFloat
0x57A3FF: fcomp   dword ptr ds:0A379B4h
0x57A405: fnstsw  ax
0x57A407: test    ah, 44h
0x57A40A: jp      short locret_57A434
0x57A40C: push    3EAh
0x57A411: call    Menu_GetOpenMenuTile
0x57A416: add     esp, 4
0x57A419: test    eax, eax
0x57A41B: jz      short locret_57A434
0x57A41D: cmp     [esp+arg_0], 0
0x57A422: jnz     short loc_57A42F
0x57A424: mov     ecx, eax
0x57A426: call    sub_5893B0
0x57A42B: test    al, al
0x57A42D: jz      short locret_57A434
0x57A42F: jmp     InventoryMenu_InitializeOrUpdate
0x57A434: retn
