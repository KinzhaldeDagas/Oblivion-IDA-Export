0x57A060: push    1; arg1
0x57A062: push    0; canCreate
0x57A064: call    InterfaceManager_GetSingleton
0x57A069: add     esp, 8
0x57A06C: test    eax, eax
0x57A06E: jz      short locret_57A0C1
0x57A070: push    1; arg1
0x57A072: push    0; canCreate
0x57A074: call    InterfaceManager_GetSingleton
0x57A079: add     esp, 8
0x57A07C: cmp     dword ptr [eax+1Ch], 0
0x57A080: jz      short locret_57A0C1
0x57A082: push    1; arg1
0x57A084: push    0; canCreate
0x57A086: call    InterfaceManager_GetSingleton
0x57A08B: add     esp, 8
0x57A08E: cmp     dword ptr [eax+68h], 0
0x57A092: jz      short locret_57A0C1
0x57A094: push    1; arg1
0x57A096: push    0; canCreate
0x57A098: call    InterfaceManager_GetSingleton
0x57A09D: mov     eax, [eax+68h]
0x57A0A0: add     esp, 8
0x57A0A3: push    0FAEh
0x57A0A8: mov     ecx, eax
0x57A0AA: call    Tile_GetFloat
0x57A0AF: fcomp   dword ptr ds:0A379B4h
0x57A0B5: fnstsw  ax
0x57A0B7: test    ah, 44h
0x57A0BA: jp      short locret_57A0C1
0x57A0BC: jmp     loc_5BB1B0
0x57A0C1: retn
0x5BB1B0: push    3FFh
0x5BB1B5: call    Menu_GetOpenMenuTile
0x5BB1BA: add     esp, 4
0x5BB1BD: test    eax, eax
0x5BB1BF: jz      short locret_5BB20A
0x5BB1C1: mov     ecx, eax
0x5BB1C3: call    Tile_GetParentMenu
0x5BB1C8: mov     ecx, [eax+28h]
0x5BB1CB: push    0FAEh
0x5BB1D0: call    Tile_GetFloat
0x5BB1D5: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5BB1DA: cmp     eax, 3
0x5BB1DD: jz      short loc_5BB202
0x5BB1DF: cmp     eax, 4
0x5BB1E2: jz      short loc_5BB202
0x5BB1E4: cmp     eax, 5
0x5BB1E7: jz      short loc_5BB202
0x5BB1E9: cmp     eax, 2
0x5BB1EC: jnz     short loc_5BB1F3
0x5BB1EE: jmp     TravelPath_DebugRouteToPoint; Verified travel-path diagnostic: called from WorldMapMenu interaction paths, repeatedly builds low-level routes to candidate points, prints each travel/door/coordinate segment, total distance and estimated game hours, reports 'No Path found' on failure, and adds a debug line render. Exact UI action name remains Unknown.
0x5BB1F3: cmp     eax, 1
0x5BB1F6: jnz     short locret_5BB20A
0x5BB1F8: push    eax
0x5BB1F9: call    sub_5BA4D0
0x5BB1FE: add     esp, 4
0x5BB201: retn
0x5BB202: push    0
0x5BB204: call    sub_5BACB0
0x5BB209: pop     ecx
0x5BB20A: retn
