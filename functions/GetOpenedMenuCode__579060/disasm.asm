0x579060: push    1; arg1
0x579062: push    0; canCreate
0x579064: call    InterfaceManager_GetSingleton
0x579069: add     esp, 8
0x57906C: test    eax, eax
0x57906E: jz      short loc_5790D2
0x579070: push    1; arg1
0x579072: push    0; canCreate
0x579074: call    InterfaceManager_GetSingleton
0x579079: add     esp, 8
0x57907C: cmp     dword ptr [eax+1Ch], 0
0x579080: jz      short loc_5790D2
0x579082: push    1; arg1
0x579084: push    0; canCreate
0x579086: call    InterfaceManager_GetSingleton
0x57908B: add     esp, 8
0x57908E: cmp     dword ptr [eax+68h], 0
0x579092: jz      short loc_5790D2
0x579094: push    1; arg1
0x579096: push    0; canCreate
0x579098: call    InterfaceManager_GetSingleton
0x57909D: mov     eax, [eax+68h]
0x5790A0: add     esp, 8
0x5790A3: push    0FAEh
0x5790A8: mov     ecx, eax
0x5790AA: call    Tile_GetFloat
0x5790AF: fcomp   dword ptr ds:0A379B4h
0x5790B5: fnstsw  ax
0x5790B7: test    ah, 44h
0x5790BA: jp      short loc_5790D2
0x5790BC: push    0
0x5790BE: push    1; arg1
0x5790C0: push    0; canCreate
0x5790C2: call    InterfaceManager_GetSingleton
0x5790C7: add     esp, 8
0x5790CA: mov     ecx, eax
0x5790CC: call    sub_57CFA0
0x5790D1: retn
0x5790D2: xor     eax, eax
0x5790D4: retn
