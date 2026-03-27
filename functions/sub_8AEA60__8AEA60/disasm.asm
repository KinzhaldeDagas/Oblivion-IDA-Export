0x8AEA60: push    esi
0x8AEA61: push    edi
0x8AEA62: mov     edi, [esp+8+arg_0]
0x8AEA66: push    edi
0x8AEA67: mov     esi, ecx
0x8AEA69: call    sub_8A2690
0x8AEA6E: test    esi, esi
0x8AEA70: jz      short loc_8AEA8C
0x8AEA72: mov     esi, [esi+8]
0x8AEA75: test    esi, esi
0x8AEA77: jz      short loc_8AEA8C
0x8AEA79: fld     dword ptr [esi+0Ch]
0x8AEA7C: fstp    [esp+8+arg_0]
0x8AEA80: fld     [esp+8+arg_0]
0x8AEA84: fstp    dword ptr [edi+4]
0x8AEA87: pop     edi
0x8AEA88: pop     esi
0x8AEA89: retn    4
0x8AEA8C: fld     dword ptr ds:0B2EFC4h
0x8AEA92: fstp    [esp+8+arg_0]
0x8AEA96: fld     [esp+8+arg_0]
0x8AEA9A: fstp    dword ptr [edi+4]
0x8AEA9D: pop     edi
0x8AEA9E: pop     esi
0x8AEA9F: retn    4
