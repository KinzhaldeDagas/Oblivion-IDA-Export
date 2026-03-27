0x71B290: mov     eax, ds:0B3FD28h
0x71B295: push    edi
0x71B296: mov     edi, [esp+4+arg_0]
0x71B29A: cmp     eax, edi
0x71B29C: jz      short loc_71B2D6
0x71B29E: test    eax, eax
0x71B2A0: jz      short loc_71B2C2
0x71B2A2: push    esi
0x71B2A3: mov     esi, eax
0x71B2A5: add     eax, 4
0x71B2A8: push    eax; lpAddend
0x71B2A9: call    dword ptr ds:0A2807Ch
0x71B2AF: test    eax, eax
0x71B2B1: jnz     short loc_71B2C1
0x71B2B3: test    esi, esi
0x71B2B5: jz      short loc_71B2C1
0x71B2B7: mov     eax, [esi]
0x71B2B9: mov     edx, [eax]
0x71B2BB: push    1
0x71B2BD: mov     ecx, esi
0x71B2BF: call    edx
0x71B2C1: pop     esi
0x71B2C2: test    edi, edi
0x71B2C4: mov     ds:0B3FD28h, edi
0x71B2CA: jz      short loc_71B2D6
0x71B2CC: add     edi, 4
0x71B2CF: push    edi; lpAddend
0x71B2D0: call    dword ptr ds:0A28078h
0x71B2D6: pop     edi
0x71B2D7: retn
