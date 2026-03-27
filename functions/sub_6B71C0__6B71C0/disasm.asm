0x6B71C0: mov     eax, ecx
0x6B71C2: mov     ecx, ds:0B3C214h
0x6B71C8: test    ecx, ecx
0x6B71CA: jz      short loc_6B71DC
0x6B71CC: mov     edx, [esp+arg_0]
0x6B71D0: mov     eax, [eax]
0x6B71D2: push    edx
0x6B71D3: push    eax
0x6B71D4: call    sub_6AB6F0
0x6B71D9: retn    4
0x6B71DC: mov     eax, 80004005h
0x6B71E1: retn    4
