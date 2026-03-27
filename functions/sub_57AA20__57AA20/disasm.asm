0x57AA20: push    1; arg1
0x57AA22: push    0; canCreate
0x57AA24: call    InterfaceManager_GetSingleton
0x57AA29: add     esp, 8
0x57AA2C: test    eax, eax
0x57AA2E: jz      short loc_57AA81
0x57AA30: push    1; arg1
0x57AA32: push    0; canCreate
0x57AA34: call    InterfaceManager_GetSingleton
0x57AA39: add     esp, 8
0x57AA3C: cmp     dword ptr [eax+1Ch], 0
0x57AA40: jz      short loc_57AA81
0x57AA42: push    1; arg1
0x57AA44: push    0; canCreate
0x57AA46: call    InterfaceManager_GetSingleton
0x57AA4B: add     esp, 8
0x57AA4E: cmp     dword ptr [eax+68h], 0
0x57AA52: jz      short loc_57AA81
0x57AA54: push    1; arg1
0x57AA56: push    0; canCreate
0x57AA58: call    InterfaceManager_GetSingleton
0x57AA5D: mov     eax, [eax+68h]
0x57AA60: add     esp, 8
0x57AA63: push    0FAEh
0x57AA68: mov     ecx, eax
0x57AA6A: call    Tile_GetFloat
0x57AA6F: fcomp   dword ptr ds:0A379B4h
0x57AA75: fnstsw  ax
0x57AA77: test    ah, 44h
0x57AA7A: jp      short loc_57AA81
0x57AA7C: jmp     loc_597540
0x57AA81: xor     eax, eax
0x57AA83: retn
