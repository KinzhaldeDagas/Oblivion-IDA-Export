0x5797E0: push    1; arg1
0x5797E2: push    0; canCreate
0x5797E4: call    InterfaceManager_GetSingleton
0x5797E9: add     esp, 8
0x5797EC: test    eax, eax
0x5797EE: jz      short locret_579861
0x5797F0: push    1; arg1
0x5797F2: push    0; canCreate
0x5797F4: call    InterfaceManager_GetSingleton
0x5797F9: add     esp, 8
0x5797FC: cmp     dword ptr [eax+1Ch], 0
0x579800: jz      short locret_579861
0x579802: push    1; arg1
0x579804: push    0; canCreate
0x579806: call    InterfaceManager_GetSingleton
0x57980B: add     esp, 8
0x57980E: cmp     dword ptr [eax+68h], 0
0x579812: jz      short locret_579861
0x579814: push    1; arg1
0x579816: push    0; canCreate
0x579818: call    InterfaceManager_GetSingleton
0x57981D: mov     eax, [eax+68h]
0x579820: add     esp, 8
0x579823: push    0FAEh
0x579828: mov     ecx, eax
0x57982A: call    Tile_GetFloat
0x57982F: fcomp   dword ptr ds:0A379B4h
0x579835: fnstsw  ax
0x579837: test    ah, 44h
0x57983A: jp      short locret_579861
0x57983C: push    1; arg1
0x57983E: push    0; canCreate
0x579840: call    InterfaceManager_GetSingleton
0x579845: mov     eax, [eax+68h]
0x579848: mov     eax, [eax+24h]
0x57984B: add     esp, 8
0x57984E: cmp     [esp+arg_0], 0
0x579853: jnz     short loc_57985B
0x579855: or      word ptr [eax+18h], 1
0x57985A: retn
0x57985B: and     word ptr [eax+18h], 0FFFEh
0x579861: retn
