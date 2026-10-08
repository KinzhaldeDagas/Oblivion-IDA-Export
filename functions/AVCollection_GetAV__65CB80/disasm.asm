0x65CB80: mov     eax, [esp+actorValue]
0x65CB84: push    eax; actorValue
0x65CB85: call    AVCollection_GetNode
0x65CB8A: test    eax, eax
0x65CB8C: jz      short loc_65CB9C
0x65CB8E: fld     dword ptr [eax+4]
0x65CB91: fstp    [esp+actorValue]
0x65CB95: fld     [esp+actorValue]
0x65CB99: retn    4
0x65CB9C: fldz
0x65CB9E: fstp    [esp+actorValue]
0x65CBA2: fld     [esp+actorValue]
0x65CBA6: retn    4
