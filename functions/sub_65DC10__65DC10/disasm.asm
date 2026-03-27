0x65DC10: mov     eax, [esp+arg_0]
0x65DC14: test    al, al
0x65DC16: jz      short loc_65DC2D
0x65DC18: fld     dword ptr [ecx+61Ch]
0x65DC1E: mov     [esp+arg_0], eax
0x65DC22: fstp    dword ptr ds:0B3BB7Ch
0x65DC28: jmp     sub_5E0E50
0x65DC2D: fld     dword ptr ds:0B3BB7Ch
0x65DC33: mov     [esp+arg_0], eax
0x65DC37: fstp    dword ptr [ecx+61Ch]
0x65DC3D: jmp     sub_5E0E50
