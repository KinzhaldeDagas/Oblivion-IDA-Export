0x65A310: call    MobileObject_GetCharProxy
0x65A315: test    eax, eax
0x65A317: jz      short locret_65A32C
0x65A319: cmp     byte ptr [esp+arg_0], 0
0x65A31E: setz    cl
0x65A321: mov     [esp+arg_0], ecx
0x65A325: mov     ecx, eax
0x65A327: jmp     loc_8927E0
0x65A32C: retn    4
