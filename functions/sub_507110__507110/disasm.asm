0x507110: push    ecx
0x507111: cmp     byte ptr ds:0B43074h, 0
0x507118: jz      short loc_507128
0x50711A: fld     dword ptr ds:0B43204h
0x507120: fstp    [esp+4+var_4]
0x507123: fld     [esp+4+var_4]
0x507126: pop     ecx
0x507127: retn
0x507128: fld     dword ptr ds:0B43200h
0x50712E: fstp    [esp+4+var_4]
0x507131: fld     [esp+4+var_4]
0x507134: pop     ecx
0x507135: retn
