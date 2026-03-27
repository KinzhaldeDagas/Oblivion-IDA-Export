0x5B1540: sub     esp, 8
0x5B1543: push    esi
0x5B1544: push    edi
0x5B1545: push    1; arg1
0x5B1547: push    0; canCreate
0x5B1549: mov     esi, ecx
0x5B154B: call    InterfaceManager_GetSingleton
0x5B1550: add     esp, 8
0x5B1553: mov     edi, eax
0x5B1555: call    sub_57D7F0
0x5B155A: fstp    [esp+10h+var_8]
0x5B155E: call    sub_57D7F0
0x5B1563: fmul    qword ptr ds:0A2FAA0h
0x5B1569: fadd    dword ptr [edi+28h]
0x5B156C: fsubr   [esp+10h+var_8]
0x5B1570: call    Double_To_SInt32
0x5B1575: mov     ecx, [esi+34h]
0x5B1578: mov     dword ptr [esp+10h+var_8], eax
0x5B157C: call    sub_588CF0
0x5B1581: fisub   dword ptr [esp+10h+var_8]
0x5B1585: pop     edi
0x5B1586: fstp    dword ptr [esi+58h]
0x5B1589: pop     esi
0x5B158A: add     esp, 8
0x5B158D: retn    8
