0x6B71F0: mov     eax, ecx
0x6B71F2: mov     ecx, ds:0B3C214h
0x6B71F8: test    ecx, ecx
0x6B71FA: jz      short loc_6B7211
0x6B71FC: mov     edx, [esp+arg_4]
0x6B7200: mov     eax, [eax]
0x6B7202: push    edx
0x6B7203: mov     edx, [esp+4+arg_0]
0x6B7207: push    edx
0x6B7208: push    eax
0x6B7209: call    sub_6ACAB0
0x6B720E: retn    8
0x6B7211: mov     eax, 80004005h
0x6B7216: retn    8
