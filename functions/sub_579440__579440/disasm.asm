0x579440: push    1; arg1
0x579442: push    0; canCreate
0x579444: call    InterfaceManager_GetSingleton
0x579449: add     esp, 8
0x57944C: test    eax, eax
0x57944E: jz      short loc_5794AF
0x579450: push    1; arg1
0x579452: push    0; canCreate
0x579454: call    InterfaceManager_GetSingleton
0x579459: add     esp, 8
0x57945C: cmp     dword ptr [eax+1Ch], 0
0x579460: jz      short loc_5794AF
0x579462: push    1; arg1
0x579464: push    0; canCreate
0x579466: call    InterfaceManager_GetSingleton
0x57946B: add     esp, 8
0x57946E: cmp     dword ptr [eax+68h], 0
0x579472: jz      short loc_5794AF
0x579474: push    1; arg1
0x579476: push    0; canCreate
0x579478: call    InterfaceManager_GetSingleton
0x57947D: mov     eax, [eax+68h]
0x579480: add     esp, 8
0x579483: push    0FAEh
0x579488: mov     ecx, eax
0x57948A: call    Tile_GetFloat
0x57948F: fcomp   dword ptr ds:0A379B4h
0x579495: fnstsw  ax
0x579497: test    ah, 44h
0x57949A: jp      short loc_5794AF
0x57949C: push    1; arg1
0x57949E: push    0; canCreate
0x5794A0: call    InterfaceManager_GetSingleton
0x5794A5: mov     eax, [eax+0BCh]
0x5794AB: add     esp, 8
0x5794AE: retn
0x5794AF: xor     eax, eax
0x5794B1: retn
