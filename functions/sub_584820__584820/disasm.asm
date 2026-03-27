0x584820: push    esi; a3
0x584821: mov     esi, ecx
0x584823: cmp     dword ptr [esi+24h], 2
0x584827: jnz     short loc_584878
0x584829: fld     dword ptr ds:0A379B4h
0x58482F: push    ecx
0x584830: mov     ecx, [esi+4]; this
0x584833: fstp    [esp+8+a2]; a3
0x584836: push    0FA1h; a2
0x58483B: call    Tile_SetFloat
0x584840: fldz
0x584842: mov     eax, [esi+4]
0x584845: mov     eax, [eax+24h]
0x584848: sub     esp, 8
0x58484B: fstp    [esp+0Ch+a2]; float
0x58484F: fld1
0x584851: fstp    [esp+0Ch+var_C]; float
0x584854: push    eax; int
0x584855: push    1; arg1
0x584857: push    0; canCreate
0x584859: call    InterfaceManager_GetSingleton
0x58485E: add     esp, 8
0x584861: mov     ecx, eax
0x584863: call    sub_57EA20
0x584868: push    esi
0x584869: mov     dword ptr [esi+24h], 1
0x584870: call    sub_583CF0
0x584875: add     esp, 4
0x584878: pop     esi
0x584879: retn
