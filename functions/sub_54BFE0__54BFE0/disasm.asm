0x54BFE0: mov     eax, [esp+arg_0]
0x54BFE4: cmp     eax, 1
0x54BFE7: jge     short loc_54C006
0x54BFE9: mov     edx, [ecx+15Ch]
0x54BFEF: add     ecx, 15Ch
0x54BFF5: push    eax
0x54BFF6: mov     eax, [edx+48h]
0x54BFF9: call    eax
0x54BFFB: fstp    [esp+arg_0]
0x54BFFF: fld     [esp+arg_0]
0x54C003: retn    4
0x54C006: fldz
0x54C008: fstp    [esp+arg_0]
0x54C00C: fld     [esp+arg_0]
0x54C010: retn    4
