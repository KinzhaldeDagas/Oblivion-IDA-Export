0x57A0D0: push    1; arg1
0x57A0D2: push    0; canCreate
0x57A0D4: call    InterfaceManager_GetSingleton
0x57A0D9: add     esp, 8
0x57A0DC: test    eax, eax
0x57A0DE: jz      loc_57A16F
0x57A0E4: push    1; arg1
0x57A0E6: push    0; canCreate
0x57A0E8: call    InterfaceManager_GetSingleton
0x57A0ED: add     esp, 8
0x57A0F0: cmp     dword ptr [eax+1Ch], 0
0x57A0F4: jz      short loc_57A16F
0x57A0F6: push    1; arg1
0x57A0F8: push    0; canCreate
0x57A0FA: call    InterfaceManager_GetSingleton
0x57A0FF: add     esp, 8
0x57A102: cmp     dword ptr [eax+68h], 0
0x57A106: jz      short loc_57A16F
0x57A108: push    1; arg1
0x57A10A: push    0; canCreate
0x57A10C: call    InterfaceManager_GetSingleton
0x57A111: mov     eax, [eax+68h]
0x57A114: add     esp, 8
0x57A117: push    0FAEh
0x57A11C: mov     ecx, eax
0x57A11E: call    Tile_GetFloat
0x57A123: fcomp   dword ptr ds:0A379B4h
0x57A129: fnstsw  ax
0x57A12B: test    ah, 44h
0x57A12E: jp      short loc_57A16F
0x57A130: push    3FFh
0x57A135: call    Menu_GetOpenMenuTile
0x57A13A: add     esp, 4
0x57A13D: test    eax, eax
0x57A13F: jz      short loc_57A16F
0x57A141: mov     ecx, eax
0x57A143: call    Tile_GetParentMenu
0x57A148: test    eax, eax
0x57A14A: jz      short loc_57A16F
0x57A14C: call    sub_5B91E0
0x57A151: test    eax, eax
0x57A153: jz      short loc_57A16F
0x57A155: push    0; float
0x57A157: mov     ecx, eax
0x57A159: mov     byte ptr ds:0B3B0A2h, 1
0x57A160: call    sub_58FBA0
0x57A165: mov     byte ptr ds:0B3B0A2h, 0
0x57A16C: mov     al, 1
0x57A16E: retn
0x57A16F: xor     al, al
0x57A171: retn
