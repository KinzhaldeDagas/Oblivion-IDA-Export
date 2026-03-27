0x5795C0: push    1; arg1
0x5795C2: push    0; canCreate
0x5795C4: call    InterfaceManager_GetSingleton
0x5795C9: add     esp, 8
0x5795CC: test    eax, eax
0x5795CE: jz      short loc_57962F
0x5795D0: push    1; arg1
0x5795D2: push    0; canCreate
0x5795D4: call    InterfaceManager_GetSingleton
0x5795D9: add     esp, 8
0x5795DC: cmp     dword ptr [eax+1Ch], 0
0x5795E0: jz      short loc_57962F
0x5795E2: push    1; arg1
0x5795E4: push    0; canCreate
0x5795E6: call    InterfaceManager_GetSingleton
0x5795EB: add     esp, 8
0x5795EE: cmp     dword ptr [eax+68h], 0
0x5795F2: jz      short loc_57962F
0x5795F4: push    1; arg1
0x5795F6: push    0; canCreate
0x5795F8: call    InterfaceManager_GetSingleton
0x5795FD: mov     eax, [eax+68h]
0x579600: add     esp, 8
0x579603: push    0FAEh
0x579608: mov     ecx, eax
0x57960A: call    Tile_GetFloat
0x57960F: fcomp   dword ptr ds:0A379B4h
0x579615: fnstsw  ax
0x579617: test    ah, 44h
0x57961A: jp      short loc_57962F
0x57961C: push    1; arg1
0x57961E: push    0; canCreate
0x579620: call    InterfaceManager_GetSingleton
0x579625: mov     eax, [eax+0CCh]
0x57962B: add     esp, 8
0x57962E: retn
0x57962F: xor     eax, eax
0x579631: retn
