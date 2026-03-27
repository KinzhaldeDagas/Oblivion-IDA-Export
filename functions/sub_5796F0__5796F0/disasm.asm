0x5796F0: push    1; arg1
0x5796F2: push    0; canCreate
0x5796F4: call    InterfaceManager_GetSingleton
0x5796F9: add     esp, 8
0x5796FC: test    eax, eax
0x5796FE: jz      short loc_57975F
0x579700: push    1; arg1
0x579702: push    0; canCreate
0x579704: call    InterfaceManager_GetSingleton
0x579709: add     esp, 8
0x57970C: cmp     dword ptr [eax+1Ch], 0
0x579710: jz      short loc_57975F
0x579712: push    1; arg1
0x579714: push    0; canCreate
0x579716: call    InterfaceManager_GetSingleton
0x57971B: add     esp, 8
0x57971E: cmp     dword ptr [eax+68h], 0
0x579722: jz      short loc_57975F
0x579724: push    1; arg1
0x579726: push    0; canCreate
0x579728: call    InterfaceManager_GetSingleton
0x57972D: mov     eax, [eax+68h]
0x579730: add     esp, 8
0x579733: push    0FAEh
0x579738: mov     ecx, eax
0x57973A: call    Tile_GetFloat
0x57973F: fcomp   dword ptr ds:0A379B4h
0x579745: fnstsw  ax
0x579747: test    ah, 44h
0x57974A: jp      short loc_57975F
0x57974C: push    1; arg1
0x57974E: push    0; canCreate
0x579750: call    InterfaceManager_GetSingleton
0x579755: mov     al, [eax+0DCh]
0x57975B: add     esp, 8
0x57975E: retn
0x57975F: xor     al, al
0x579761: retn
