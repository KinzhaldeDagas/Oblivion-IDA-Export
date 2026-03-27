0x5070A0: push    ecx
0x5070A1: cmp     byte ptr ds:0B43074h, 0
0x5070A8: jz      short loc_5070C4
0x5070AA: fld     dword ptr ds:0B431F4h
0x5070B0: fstp    [esp+4+var_4]
0x5070B3: fld     [esp+4+var_4]
0x5070B6: fmul    dword ptr ds:0B2C7A4h
0x5070BC: fstp    [esp+4+var_4]
0x5070BF: fld     [esp+4+var_4]
0x5070C2: pop     ecx
0x5070C3: retn
0x5070C4: fld     dword ptr ds:0B431F0h
0x5070CA: fstp    [esp+4+var_4]
0x5070CD: fld     [esp+4+var_4]
0x5070D0: fmul    dword ptr ds:0B2C7A4h
0x5070D6: fstp    [esp+4+var_4]
0x5070D9: fld     [esp+4+var_4]
0x5070DC: pop     ecx
0x5070DD: retn
