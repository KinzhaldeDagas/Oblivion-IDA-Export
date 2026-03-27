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
