0x65CB80: mov     eax, [esp+arg_0]
0x65CB84: push    eax
0x65CB85: call    AVCollection_GetNode
0x65CB8A: test    eax, eax
0x65CB8C: jz      short loc_65CB9C
0x65CB8E: fld     dword ptr [eax+4]
0x65CB91: fstp    [esp+arg_0]
0x65CB95: fld     [esp+arg_0]
0x65CB99: retn    4
0x65CB9C: fldz
0x65CB9E: fstp    [esp+arg_0]
0x65CBA2: fld     [esp+arg_0]
0x65CBA6: retn    4
