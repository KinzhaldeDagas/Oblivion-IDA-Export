0x5B1590: sub     esp, 8
0x5B1593: cmp     [esp+8+arg_0], 0Ch
0x5B1598: push    esi; a3
0x5B1599: mov     esi, ecx
0x5B159B: jnz     loc_5B1651
0x5B15A1: push    edi; a3
0x5B15A2: push    1; arg1
0x5B15A4: push    0; canCreate
0x5B15A6: call    InterfaceManager_GetSingleton
0x5B15AB: add     esp, 8
0x5B15AE: mov     edi, eax
0x5B15B0: call    sub_57D7F0
0x5B15B5: fstp    qword ptr [esp+10h+a3]
0x5B15B9: call    sub_57D7F0
0x5B15BE: fmul    qword ptr ds:0A2FAA0h
0x5B15C4: fadd    dword ptr [edi+28h]
0x5B15C7: fsubr   qword ptr [esp+10h+a3]
0x5B15CB: call    Double_To_SInt32
0x5B15D0: fld     dword ptr [esi+58h]
0x5B15D3: mov     ecx, [esi+30h]
0x5B15D6: mov     [esp+10h+arg_0], eax
0x5B15DA: fiadd   [esp+10h+arg_0]
0x5B15DE: fstp    qword ptr [esp+10h+a3]
0x5B15E2: call    sub_588CF0
0x5B15E7: fsubr   qword ptr [esp+10h+a3]
0x5B15EB: mov     ecx, [esi+34h]
0x5B15EE: push    0FB6h
0x5B15F3: fstp    qword ptr [esp+14h+a3]; a3
0x5B15F7: call    Tile_GetFloat
0x5B15FC: fdivr   qword ptr [esp+10h+a3]
0x5B1600: push    ecx
0x5B1601: mov     ecx, [esi+34h]; this
0x5B1604: fstp    [esp+14h+arg_0]
0x5B1608: fld     dword ptr ds:0A6B1F0h
0x5B160E: fstp    [esp+14h+a2]; a3
0x5B1611: push    0FB7h; a2
0x5B1616: call    Tile_SetFloat
0x5B161B: fld     [esp+10h+arg_0]
0x5B161F: call    Double_To_SInt32
0x5B1624: mov     [esp+10h+arg_0], eax
0x5B1628: fild    [esp+10h+arg_0]
0x5B162C: push    ecx
0x5B162D: mov     ecx, [esi+34h]; this
0x5B1630: fstp    [esp+14h+a2]; a3
0x5B1633: push    0FB7h; a2
0x5B1638: call    Tile_SetFloat
0x5B163D: fldz
0x5B163F: push    ecx
0x5B1640: fstp    [esp+14h+a2]; a3
0x5B1643: mov     ecx, [esi+34h]; this
0x5B1646: push    0FB7h; a2
0x5B164B: call    Tile_SetFloat
0x5B1650: pop     edi
0x5B1651: pop     esi
0x5B1652: add     esp, 8
0x5B1655: retn    8
