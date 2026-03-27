0x57A8D0: push    1; arg1
0x57A8D2: push    0; canCreate
0x57A8D4: call    InterfaceManager_GetSingleton
0x57A8D9: add     esp, 8
0x57A8DC: test    eax, eax
0x57A8DE: jz      short loc_57A931
0x57A8E0: push    1; arg1
0x57A8E2: push    0; canCreate
0x57A8E4: call    InterfaceManager_GetSingleton
0x57A8E9: add     esp, 8
0x57A8EC: cmp     dword ptr [eax+1Ch], 0
0x57A8F0: jz      short loc_57A931
0x57A8F2: push    1; arg1
0x57A8F4: push    0; canCreate
0x57A8F6: call    InterfaceManager_GetSingleton
0x57A8FB: add     esp, 8
0x57A8FE: cmp     dword ptr [eax+68h], 0
0x57A902: jz      short loc_57A931
0x57A904: push    1; arg1
0x57A906: push    0; canCreate
0x57A908: call    InterfaceManager_GetSingleton
0x57A90D: mov     eax, [eax+68h]
0x57A910: add     esp, 8
0x57A913: push    0FAEh
0x57A918: mov     ecx, eax
0x57A91A: call    Tile_GetFloat
0x57A91F: fcomp   dword ptr ds:0A379B4h
0x57A925: fnstsw  ax
0x57A927: test    ah, 44h
0x57A92A: jp      short loc_57A931
0x57A92C: jmp     sub_599EE0
0x57A931: xor     eax, eax
0x57A933: retn
