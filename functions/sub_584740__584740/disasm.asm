0x584740: push    ecx
0x584741: push    esi
0x584742: mov     esi, ecx
0x584744: mov     ecx, [esi+4]
0x584747: push    0FA1h
0x58474C: call    Tile_GetFloat
0x584751: fcomp   dword ptr ds:0A379B4h
0x584757: fnstsw  ax
0x584759: test    ah, 44h
0x58475C: jp      loc_584815
0x584762: mov     ecx, [esi+4]
0x584765: push    0FDBh
0x58476A: call    Tile_GetFloat
0x58476F: fstp    [esp+8+var_4]
0x584773: fldz
0x584775: fcomp   [esp+8+var_4]
0x584779: fnstsw  ax
0x58477B: test    ah, 44h
0x58477E: jp      short loc_584791
0x584780: mov     ecx, [esi+4]
0x584783: push    0FDCh
0x584788: call    Tile_GetFloat
0x58478D: fstp    [esp+8+var_4]
0x584791: fld     [esp+8+var_4]
0x584795: push    ecx
0x584796: fstp    [esp+0Ch+var_C]; float
0x584799: push    esi; int
0x58479A: call    sub_584300
0x58479F: add     esp, 8
0x5847A2: cmp     dword ptr [esi+14h], 0
0x5847A6: mov     dword ptr [esi+24h], 2
0x5847AD: jz      short loc_5847FE
0x5847AF: mov     ecx, [esi+4]
0x5847B2: push    1772h
0x5847B7: call    Tile_GetFloat
0x5847BC: fcomp   dword ptr ds:0A379B4h
0x5847C2: fnstsw  ax
0x5847C4: test    ah, 44h
0x5847C7: jp      short loc_5847FE
0x5847C9: mov     eax, [esi+14h]
0x5847CC: push    0
0x5847CE: push    eax
0x5847CF: push    1; arg1
0x5847D1: push    0; canCreate
0x5847D3: call    InterfaceManager_GetSingleton
0x5847D8: add     esp, 8
0x5847DB: mov     ecx, eax
0x5847DD: call    sub_57CFE0
0x5847E2: push    0
0x5847E4: push    0FDDh
0x5847E9: push    0
0x5847EB: push    1; arg1
0x5847ED: push    0; canCreate
0x5847EF: call    InterfaceManager_GetSingleton
0x5847F4: add     esp, 8
0x5847F7: mov     ecx, eax
0x5847F9: call    sub_57F9F0
0x5847FE: push    1; arg1
0x584800: push    0; canCreate
0x584802: call    InterfaceManager_GetSingleton
0x584807: add     esp, 8
0x58480A: mov     ecx, eax
0x58480C: pop     esi
0x58480D: add     esp, 4
0x584810: jmp     sub_583C30
0x584815: pop     esi
0x584816: pop     ecx
0x584817: retn
