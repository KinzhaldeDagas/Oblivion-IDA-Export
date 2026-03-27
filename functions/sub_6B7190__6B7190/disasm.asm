0x6B7190: mov     eax, ecx
0x6B7192: mov     ecx, ds:0B3C214h
0x6B7198: test    ecx, ecx
0x6B719A: jz      short loc_6B71AC
0x6B719C: mov     edx, [esp+arg_0]
0x6B71A0: mov     eax, [eax]
0x6B71A2: push    edx
0x6B71A3: push    eax
0x6B71A4: call    sub_6AB540
0x6B71A9: retn    4
0x6B71AC: mov     eax, 80004005h
0x6B71B1: retn    4
