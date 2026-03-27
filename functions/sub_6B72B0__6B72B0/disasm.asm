0x6B72B0: mov     eax, ecx
0x6B72B2: mov     ecx, ds:0B3C214h
0x6B72B8: test    ecx, ecx
0x6B72BA: jz      short loc_6B72CC
0x6B72BC: mov     edx, [esp+arg_0]
0x6B72C0: mov     eax, [eax]
0x6B72C2: push    edx
0x6B72C3: push    eax
0x6B72C4: call    sub_6ABA60
0x6B72C9: retn    4
0x6B72CC: mov     eax, 80004005h
0x6B72D1: retn    4
