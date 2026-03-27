0x57CC00: push    1; arg1
0x57CC02: push    0; canCreate
0x57CC04: call    InterfaceManager_GetSingleton
0x57CC09: add     esp, 8
0x57CC0C: test    eax, eax
0x57CC0E: jz      locret_57CCB8
0x57CC14: push    1; arg1
0x57CC16: push    0; canCreate
0x57CC18: call    InterfaceManager_GetSingleton
0x57CC1D: add     esp, 8
0x57CC20: cmp     dword ptr [eax+1Ch], 0
0x57CC24: jz      locret_57CCB8
0x57CC2A: push    1; arg1
0x57CC2C: push    0; canCreate
0x57CC2E: call    InterfaceManager_GetSingleton
0x57CC33: add     esp, 8
0x57CC36: cmp     dword ptr [eax+68h], 0
0x57CC3A: jz      short locret_57CCB8
0x57CC3C: push    1; arg1
0x57CC3E: push    0; canCreate
0x57CC40: call    InterfaceManager_GetSingleton
0x57CC45: mov     eax, [eax+68h]
0x57CC48: add     esp, 8
0x57CC4B: push    0FAEh
0x57CC50: mov     ecx, eax
0x57CC52: call    Tile_GetFloat
0x57CC57: fcomp   dword ptr ds:0A379B4h
0x57CC5D: fnstsw  ax
0x57CC5F: test    ah, 44h
0x57CC62: jp      short locret_57CCB8
0x57CC64: push    esi
0x57CC65: push    1; arg1
0x57CC67: push    0; canCreate
0x57CC69: call    InterfaceManager_GetSingleton
0x57CC6E: push    1
0x57CC70: push    0
0x57CC72: mov     esi, eax
0x57CC74: call    sub_57C420
0x57CC79: push    1
0x57CC7B: push    0
0x57CC7D: call    sub_57C5F0
0x57CC82: push    1
0x57CC84: push    0
0x57CC86: call    sub_57C7C0
0x57CC8B: push    1
0x57CC8D: push    0
0x57CC8F: call    sub_57A480
0x57CC94: add     esp, 28h
0x57CC97: mov     ecx, esi
0x57CC99: call    sub_57ECB0
0x57CC9E: call    sub_57AA90
0x57CCA3: call    sub_57B600
0x57CCA8: mov     ecx, ds:0B333C4h
0x57CCAE: push    1
0x57CCB0: push    0
0x57CCB2: call    HideEquipment
0x57CCB7: pop     esi
0x57CCB8: retn
