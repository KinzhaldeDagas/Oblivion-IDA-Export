0x57A940: push    1; arg1
0x57A942: push    0; canCreate
0x57A944: call    InterfaceManager_GetSingleton
0x57A949: add     esp, 8
0x57A94C: test    eax, eax
0x57A94E: jz      short loc_57A9A1
0x57A950: push    1; arg1
0x57A952: push    0; canCreate
0x57A954: call    InterfaceManager_GetSingleton
0x57A959: add     esp, 8
0x57A95C: cmp     dword ptr [eax+1Ch], 0
0x57A960: jz      short loc_57A9A1
0x57A962: push    1; arg1
0x57A964: push    0; canCreate
0x57A966: call    InterfaceManager_GetSingleton
0x57A96B: add     esp, 8
0x57A96E: cmp     dword ptr [eax+68h], 0
0x57A972: jz      short loc_57A9A1
0x57A974: push    1; arg1
0x57A976: push    0; canCreate
0x57A978: call    InterfaceManager_GetSingleton
0x57A97D: mov     eax, [eax+68h]
0x57A980: add     esp, 8
0x57A983: push    0FAEh
0x57A988: mov     ecx, eax
0x57A98A: call    Tile_GetFloat
0x57A98F: fcomp   dword ptr ds:0A379B4h
0x57A995: fnstsw  ax
0x57A997: test    ah, 44h
0x57A99A: jp      short loc_57A9A1
0x57A99C: jmp     sub_5DD4B0
0x57A9A1: xor     eax, eax
0x57A9A3: retn
