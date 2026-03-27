0x5790E0: push    esi
0x5790E1: push    1; arg1
0x5790E3: push    0; canCreate
0x5790E5: call    InterfaceManager_GetSingleton
0x5790EA: add     esp, 8
0x5790ED: test    eax, eax
0x5790EF: jz      loc_579198
0x5790F5: push    1; arg1
0x5790F7: push    0; canCreate
0x5790F9: call    InterfaceManager_GetSingleton
0x5790FE: add     esp, 8
0x579101: cmp     dword ptr [eax+1Ch], 0
0x579105: jz      loc_579198
0x57910B: push    1; arg1
0x57910D: push    0; canCreate
0x57910F: call    InterfaceManager_GetSingleton
0x579114: add     esp, 8
0x579117: cmp     dword ptr [eax+68h], 0
0x57911B: jz      short loc_579198
0x57911D: push    1; arg1
0x57911F: push    0; canCreate
0x579121: call    InterfaceManager_GetSingleton
0x579126: mov     eax, [eax+68h]
0x579129: add     esp, 8
0x57912C: push    0FAEh
0x579131: mov     ecx, eax
0x579133: call    Tile_GetFloat
0x579138: fcomp   dword ptr ds:0A379B4h
0x57913E: fnstsw  ax
0x579140: test    ah, 44h
0x579143: jp      short loc_579198
0x579145: mov     eax, [esp+4+arg_0]
0x579149: push    eax
0x57914A: call    Menu_GetOpenMenuTile
0x57914F: mov     esi, eax
0x579151: add     esp, 4
0x579154: test    esi, esi
0x579156: jz      short loc_579198
0x579158: push    edi
0x579159: mov     edi, [esp+8+arg_4]
0x57915D: test    edi, edi
0x57915F: jz      short loc_579172
0x579161: mov     ecx, esi
0x579163: call    Tile_GetParentMenu
0x579168: test    [eax+24h], edi
0x57916B: jnz     short loc_579172
0x57916D: pop     edi
0x57916E: xor     al, al
0x579170: pop     esi
0x579171: retn
0x579172: push    0FA1h
0x579177: mov     ecx, esi
0x579179: call    Tile_GetFloat
0x57917E: fcomp   dword ptr ds:0A2F948h
0x579184: fnstsw  ax
0x579186: test    ah, 44h
0x579189: jnp     short loc_579193
0x57918B: pop     edi
0x57918C: mov     eax, 1
0x579191: pop     esi
0x579192: retn
0x579193: pop     edi
0x579194: xor     eax, eax
0x579196: pop     esi
0x579197: retn
0x579198: xor     al, al
0x57919A: pop     esi
0x57919B: retn
