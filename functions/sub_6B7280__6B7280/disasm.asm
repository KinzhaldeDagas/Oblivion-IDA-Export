0x6B7280: mov     eax, ecx
0x6B7282: mov     ecx, ds:0B3C214h
0x6B7288: test    ecx, ecx
0x6B728A: jz      short loc_6B729F
0x6B728C: fld     [esp+arg_0]
0x6B7290: mov     eax, [eax]
0x6B7292: push    ecx
0x6B7293: fstp    [esp+4+var_4]; float
0x6B7296: push    eax; int
0x6B7297: call    sub_6ABA20
0x6B729C: retn    4
0x6B729F: mov     eax, 80004005h
0x6B72A4: retn    4
