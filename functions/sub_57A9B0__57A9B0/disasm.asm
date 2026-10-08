0x57A9B0: push    1; arg1
0x57A9B2: push    0; canCreate
0x57A9B4: call    InterfaceManager_GetSingleton
0x57A9B9: add     esp, 8
0x57A9BC: test    eax, eax
0x57A9BE: jz      short loc_57AA19
0x57A9C0: push    1; arg1
0x57A9C2: push    0; canCreate
0x57A9C4: call    InterfaceManager_GetSingleton
0x57A9C9: add     esp, 8
0x57A9CC: cmp     dword ptr [eax+1Ch], 0
0x57A9D0: jz      short loc_57AA19
0x57A9D2: push    1; arg1
0x57A9D4: push    0; canCreate
0x57A9D6: call    InterfaceManager_GetSingleton
0x57A9DB: add     esp, 8
0x57A9DE: cmp     dword ptr [eax+68h], 0
0x57A9E2: jz      short loc_57AA19
0x57A9E4: push    1; arg1
0x57A9E6: push    0; canCreate
0x57A9E8: call    InterfaceManager_GetSingleton
0x57A9ED: mov     eax, [eax+68h]
0x57A9F0: add     esp, 8
0x57A9F3: push    0FAEh
0x57A9F8: mov     ecx, eax
0x57A9FA: call    Tile_GetFloat
0x57A9FF: fcomp   dword ptr ds:0A379B4h
0x57AA05: fnstsw  ax
0x57AA07: test    ah, 44h
0x57AA0A: jp      short loc_57AA19
0x57AA0C: push    3
0x57AA0E: push    0
0x57AA10: call    SkillsMenu_Create; Creates the shared SkillsMenu. In class-skill mode (mode 0), associates the open ClassMenu, sets selectionCap=7 at SkillsMenu+0x44, populates all 21 native skills, and preselects the seven staged ClassMenu major AVs.
0x57AA15: add     esp, 8
0x57AA18: retn
0x57AA19: xor     eax, eax
0x57AA1B: retn
