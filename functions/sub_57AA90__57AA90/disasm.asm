0x57AA90: push    1; arg1
0x57AA92: push    0; canCreate
0x57AA94: call    InterfaceManager_GetSingleton
0x57AA99: add     esp, 8
0x57AA9C: test    eax, eax
0x57AA9E: jz      short locret_57AAF1
0x57AAA0: push    1; arg1
0x57AAA2: push    0; canCreate
0x57AAA4: call    InterfaceManager_GetSingleton
0x57AAA9: add     esp, 8
0x57AAAC: cmp     dword ptr [eax+1Ch], 0
0x57AAB0: jz      short locret_57AAF1
0x57AAB2: push    1; arg1
0x57AAB4: push    0; canCreate
0x57AAB6: call    InterfaceManager_GetSingleton
0x57AABB: add     esp, 8
0x57AABE: cmp     dword ptr [eax+68h], 0
0x57AAC2: jz      short locret_57AAF1
0x57AAC4: push    1; arg1
0x57AAC6: push    0; canCreate
0x57AAC8: call    InterfaceManager_GetSingleton
0x57AACD: mov     eax, [eax+68h]
0x57AAD0: add     esp, 8
0x57AAD3: push    0FAEh
0x57AAD8: mov     ecx, eax
0x57AADA: call    Tile_GetFloat
0x57AADF: fcomp   dword ptr ds:0A379B4h
0x57AAE5: fnstsw  ax
0x57AAE7: test    ah, 44h
0x57AAEA: jp      short locret_57AAF1
0x57AAEC: jmp     sub_5982A0
0x57AAF1: retn
