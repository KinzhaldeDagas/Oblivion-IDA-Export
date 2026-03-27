0x507060: push    ecx
0x507061: cmp     byte ptr ds:0B43074h, 0
0x507068: jz      short loc_507084
0x50706A: fld     dword ptr ds:0B431ECh
0x507070: fstp    [esp+4+var_4]
0x507073: fld     [esp+4+var_4]
0x507076: fdiv    dword ptr ds:0B2C7A4h
0x50707C: fstp    [esp+4+var_4]
0x50707F: fld     [esp+4+var_4]
0x507082: pop     ecx
0x507083: retn
0x507084: fld     dword ptr ds:0B431E8h
0x50708A: fstp    [esp+4+var_4]
0x50708D: fld     [esp+4+var_4]
0x507090: fdiv    dword ptr ds:0B2C7A4h
0x507096: fstp    [esp+4+var_4]
0x507099: fld     [esp+4+var_4]
0x50709C: pop     ecx
0x50709D: retn
