0x5BDCD0: push    esi
0x5BDCD1: push    edi
0x5BDCD2: call    sub_5DDCD0
0x5BDCD7: test    al, al
0x5BDCD9: jz      loc_5BDD79
0x5BDCDF: mov     ecx, ds:0B333A0h
0x5BDCE5: call    TES__GetCurrentWorldspace
0x5BDCEA: test    eax, eax
0x5BDCEC: jz      loc_5BDD79
0x5BDCF2: mov     ecx, ds:0B333A0h
0x5BDCF8: cmp     dword ptr [ecx+34h], 0
0x5BDCFC: jnz     short loc_5BDD6F
0x5BDCFE: push    4; modeBit
0x5BDD00: call    TES__GetCurrentWorldspace
0x5BDD05: mov     ecx, eax; this
0x5BDD07: call    TESWorldSpace_IsDistantLODModeEnabled; Verified .cmp mode-mask bit meanings from Oblivion consumers: 0x1 enables the tree channel (DistantLOD_UpdateExteriorGrid pairs this with bDisplayLODTrees); 0x2 enables the building/object channel (paired with bDisplayLODBuildings and CellsWithLODObjects); 0x4 enables the LandLOD channel (DistantLOD_UpdateLandLODMap). Default mask 0x7 enables all three.
0x5BDD0C: test    al, al
0x5BDD0E: jz      short loc_5BDD6F
0x5BDD10: cmp     byte ptr ds:0B02D70h, 0
0x5BDD17: jz      short loc_5BDD6F
0x5BDD19: mov     eax, ds:0B38C00h
0x5BDD1E: push    0
0x5BDD20: push    0
0x5BDD22: push    0
0x5BDD24: push    0
0x5BDD26: push    eax
0x5BDD27: call    ShowUIMessageBox
0x5BDD2C: mov     esi, ds:0A280D0h
0x5BDD32: add     esp, 14h
0x5BDD35: call    esi ; GetTickCount; ModernWindowsCompatible patch site: worldspace message delay records GetTickCount, then vanilla waits until absolute start+1000 target.
0x5BDD37: lea     edi, [eax+3E8h]
0x5BDD3D: call    esi ; GetTickCount
0x5BDD3F: cmp     eax, edi
0x5BDD41: jnb     short loc_5BDD5E; ModernWindowsCompatible decode: unsigned now >= target check skips the intended one-second pump when start+1000 wraps low.
0x5BDD43: call    sub_5791A0
0x5BDD48: call    sub_579220
0x5BDD4D: mov     ecx, ds:0B33398h
0x5BDD53: call    Input_CheckScreenshotHotkey; Verified gamma integration 2026-09-26: frame path tests B34FA4 and calls Renderer_ApplyPendingGammaRamp at40D508 before scene rendering.
0x5BDD58: call    esi ; GetTickCount
0x5BDD5A: cmp     eax, edi
0x5BDD5C: jb      short loc_5BDD43
0x5BDD5E: push    1; ModernWindowsCompatible continuation: after the delay loop, vanilla calls sub_4EBAE0(1) and sub_578DA0.
0x5BDD60: call    sub_4EBAE0
0x5BDD65: add     esp, 4
0x5BDD68: call    sub_578DA0
0x5BDD6D: jmp     short loc_5BDD79
0x5BDD6F: push    0
0x5BDD71: call    sub_4EBAE0
0x5BDD76: add     esp, 4
0x5BDD79: push    3F5h
0x5BDD7E: call    Menu_GetOpenMenuTile
0x5BDD83: mov     esi, eax
0x5BDD85: add     esp, 4
0x5BDD88: test    esi, esi
0x5BDD8A: jz      short loc_5BDDCE
0x5BDD8C: mov     ecx, esi
0x5BDD8E: call    Tile_GetParentMenu
0x5BDD93: mov     edi, eax
0x5BDD95: test    edi, edi
0x5BDD97: jz      short loc_5BDDCE
0x5BDD99: mov     ecx, ds:0B333C4h
0x5BDD9F: mov     edx, [ecx]
0x5BDDA1: mov     eax, [edx+198h]
0x5BDDA7: push    0; a3
0x5BDDA9: call    eax
0x5BDDAB: test    al, al
0x5BDDAD: jnz     short loc_5BDDCE
0x5BDDAF: fld     dword ptr ds:0A379B4h
0x5BDDB5: push    ecx
0x5BDDB6: fstp    [esp+0Ch+a3]; value
0x5BDDB9: push    1772h; propertyCode
0x5BDDBE: mov     ecx, esi; this
0x5BDDC0: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5BDDC5: mov     ecx, edi; int
0x5BDDC7: pop     edi
0x5BDDC8: pop     esi
0x5BDDC9: jmp     Menu__StartFadeOut; Verified: matches Fallout Menu::StartFadeOut 0x827E2E60: visibility check, duration fallback, NewTimer, state=2, modal stack/focus updates, UpdateAllTimers. Previous alias Menu_RequestClose describes purpose; exact inherited semantic name is StartFadeOut.
0x5BDDCE: pop     edi
0x5BDDCF: pop     esi
0x5BDDD0: retn
