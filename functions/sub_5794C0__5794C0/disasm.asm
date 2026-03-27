0x5794C0: push    1; arg1
0x5794C2: push    0; canCreate
0x5794C4: call    InterfaceManager_GetSingleton
0x5794C9: add     esp, 8
0x5794CC: test    eax, eax
0x5794CE: jz      short locret_579532
0x5794D0: push    1; arg1
0x5794D2: push    0; canCreate
0x5794D4: call    InterfaceManager_GetSingleton
0x5794D9: add     esp, 8
0x5794DC: cmp     dword ptr [eax+1Ch], 0
0x5794E0: jz      short locret_579532
0x5794E2: push    1; arg1
0x5794E4: push    0; canCreate
0x5794E6: call    InterfaceManager_GetSingleton
0x5794EB: add     esp, 8
0x5794EE: cmp     dword ptr [eax+68h], 0
0x5794F2: jz      short locret_579532
0x5794F4: push    1; arg1
0x5794F6: push    0; canCreate
0x5794F8: call    InterfaceManager_GetSingleton
0x5794FD: mov     eax, [eax+68h]
0x579500: add     esp, 8
0x579503: push    0FAEh
0x579508: mov     ecx, eax
0x57950A: call    Tile_GetFloat
0x57950F: fcomp   dword ptr ds:0A379B4h
0x579515: fnstsw  ax
0x579517: test    ah, 44h
0x57951A: jp      short locret_579532
0x57951C: push    1; arg1
0x57951E: push    0; canCreate
0x579520: call    InterfaceManager_GetSingleton
0x579525: mov     ecx, [esp+8+arg_0]
0x579529: add     esp, 8
0x57952C: mov     [eax+0C4h], ecx
0x579532: retn
