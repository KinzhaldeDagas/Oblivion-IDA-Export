0x579640: push    1; arg1
0x579642: push    0; canCreate
0x579644: call    InterfaceManager_GetSingleton
0x579649: add     esp, 8
0x57964C: test    eax, eax
0x57964E: jz      short loc_5796C9
0x579650: push    1; arg1
0x579652: push    0; canCreate
0x579654: call    InterfaceManager_GetSingleton
0x579659: add     esp, 8
0x57965C: cmp     dword ptr [eax+1Ch], 0
0x579660: jz      short loc_5796C9
0x579662: push    1; arg1
0x579664: push    0; canCreate
0x579666: call    InterfaceManager_GetSingleton
0x57966B: add     esp, 8
0x57966E: cmp     dword ptr [eax+68h], 0
0x579672: jz      short loc_5796C9
0x579674: push    1; arg1
0x579676: push    0; canCreate
0x579678: call    InterfaceManager_GetSingleton
0x57967D: mov     eax, [eax+68h]
0x579680: add     esp, 8
0x579683: push    0FAEh
0x579688: mov     ecx, eax
0x57968A: call    Tile_GetFloat
0x57968F: fcomp   dword ptr ds:0A379B4h
0x579695: fnstsw  ax
0x579697: test    ah, 44h
0x57969A: jp      short loc_5796C9
0x57969C: push    1; arg1
0x57969E: push    0; canCreate
0x5796A0: call    InterfaceManager_GetSingleton
0x5796A5: mov     edx, [eax+0D0h]
0x5796AB: mov     ecx, [esp+8+arg_0]
0x5796AF: mov     [ecx], edx
0x5796B1: mov     edx, [eax+0D4h]
0x5796B7: mov     eax, [eax+0D8h]
0x5796BD: mov     [ecx+4], edx
0x5796C0: mov     [ecx+8], eax
0x5796C3: add     esp, 8
0x5796C6: mov     eax, ecx
0x5796C8: retn
0x5796C9: mov     eax, [esp+arg_0]
0x5796CD: mov     ecx, ds:0B3F9A8h
0x5796D3: mov     edx, ds:0B3F9ACh
0x5796D9: mov     [eax], ecx
0x5796DB: mov     ecx, ds:0B3F9B0h
0x5796E1: mov     [eax+4], edx
0x5796E4: mov     [eax+8], ecx
0x5796E7: retn
