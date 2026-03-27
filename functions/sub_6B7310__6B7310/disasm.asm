0x6B7310: mov     eax, ecx
0x6B7312: mov     ecx, ds:0B3C214h
0x6B7318: test    ecx, ecx
0x6B731A: jz      short loc_6B732F
0x6B731C: fld     [esp+arg_0]
0x6B7320: mov     eax, [eax]
0x6B7322: push    ecx
0x6B7323: fstp    [esp+4+var_4]; float
0x6B7326: push    eax; int
0x6B7327: call    sub_6AB500
0x6B732C: retn    4
0x6B732F: mov     eax, 80004005h
0x6B7334: retn    4
