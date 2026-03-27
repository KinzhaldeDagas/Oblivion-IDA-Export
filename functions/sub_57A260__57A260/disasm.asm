0x57A260: push    1; arg1
0x57A262: push    0; canCreate
0x57A264: call    InterfaceManager_GetSingleton
0x57A269: add     esp, 8
0x57A26C: test    eax, eax
0x57A26E: jz      short locret_57A2C1
0x57A270: push    1; arg1
0x57A272: push    0; canCreate
0x57A274: call    InterfaceManager_GetSingleton
0x57A279: add     esp, 8
0x57A27C: cmp     dword ptr [eax+1Ch], 0
0x57A280: jz      short locret_57A2C1
0x57A282: push    1; arg1
0x57A284: push    0; canCreate
0x57A286: call    InterfaceManager_GetSingleton
0x57A28B: add     esp, 8
0x57A28E: cmp     dword ptr [eax+68h], 0
0x57A292: jz      short locret_57A2C1
0x57A294: push    1; arg1
0x57A296: push    0; canCreate
0x57A298: call    InterfaceManager_GetSingleton
0x57A29D: mov     eax, [eax+68h]
0x57A2A0: add     esp, 8
0x57A2A3: push    0FAEh
0x57A2A8: mov     ecx, eax
0x57A2AA: call    Tile_GetFloat
0x57A2AF: fcomp   dword ptr ds:0A379B4h
0x57A2B5: fnstsw  ax
0x57A2B7: test    ah, 44h
0x57A2BA: jp      short locret_57A2C1
0x57A2BC: jmp     sub_5B2B70
0x57A2C1: retn
