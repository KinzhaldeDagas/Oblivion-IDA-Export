0x71B240: push    esi
0x71B241: mov     esi, ds:0B3FD28h
0x71B247: test    esi, esi
0x71B249: jz      short loc_71B271
0x71B24B: lea     eax, [esi+4]
0x71B24E: push    eax; lpAddend
0x71B24F: call    dword ptr ds:0A2807Ch
0x71B255: test    eax, eax
0x71B257: jnz     short loc_71B267
0x71B259: test    esi, esi
0x71B25B: jz      short loc_71B267
0x71B25D: mov     edx, [esi]
0x71B25F: mov     eax, [edx]
0x71B261: push    1
0x71B263: mov     ecx, esi
0x71B265: call    eax
0x71B267: mov     dword ptr ds:0B3FD28h, 0
0x71B271: pop     esi
0x71B272: retn
