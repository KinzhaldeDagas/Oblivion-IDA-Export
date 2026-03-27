0x65A760: call    MobileObject_GetCharProxy
0x65A765: test    eax, eax
0x65A767: jz      short locret_65A778
0x65A769: fld     [esp+arg_0]
0x65A76D: push    ecx
0x65A76E: mov     ecx, eax
0x65A770: fstp    [esp+4+var_4]; float
0x65A773: call    sub_894BD0
0x65A778: retn    4
