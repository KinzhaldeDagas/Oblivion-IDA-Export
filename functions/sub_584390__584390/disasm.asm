0x584390: push    ecx
0x584391: push    esi
0x584392: mov     esi, ecx
0x584394: mov     ecx, [esi+4]
0x584397: test    ecx, ecx
0x584399: jz      short loc_5843F3
0x58439B: push    0FDBh
0x5843A0: call    Tile_GetFloat
0x5843A5: fstp    [esp+8+var_4]
0x5843A9: fldz
0x5843AB: fcomp   [esp+8+var_4]
0x5843AF: fnstsw  ax
0x5843B1: test    ah, 44h
0x5843B4: jp      short loc_5843C7
0x5843B6: mov     ecx, [esi+4]
0x5843B9: push    0FDCh
0x5843BE: call    Tile_GetFloat
0x5843C3: fstp    [esp+8+var_4]
0x5843C7: fld     [esp+8+var_4]
0x5843CB: push    ecx
0x5843CC: fstp    [esp+0Ch+var_C]; float
0x5843CF: push    esi; int
0x5843D0: call    sub_584300
0x5843D5: push    1; arg1
0x5843D7: push    0; canCreate
0x5843D9: mov     dword ptr [esi+24h], 8
0x5843E0: call    InterfaceManager_GetSingleton
0x5843E5: add     esp, 10h
0x5843E8: mov     ecx, eax
0x5843EA: pop     esi
0x5843EB: add     esp, 4
0x5843EE: jmp     sub_583C30
0x5843F3: fld     dword ptr ds:0A41304h
0x5843F9: jmp     short loc_5843C3
