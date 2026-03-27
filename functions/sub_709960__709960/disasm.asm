0x709960: push    esi
0x709961: mov     esi, ds:0B3FAA4h
0x709967: test    esi, esi
0x709969: jz      short loc_709991
0x70996B: lea     eax, [esi+4]
0x70996E: push    eax; lpAddend
0x70996F: call    dword ptr ds:0A2807Ch
0x709975: test    eax, eax
0x709977: jnz     short loc_709987
0x709979: test    esi, esi
0x70997B: jz      short loc_709987
0x70997D: mov     edx, [esi]
0x70997F: mov     eax, [edx]
0x709981: push    1
0x709983: mov     ecx, esi
0x709985: call    eax
0x709987: mov     dword ptr ds:0B3FAA4h, 0
0x709991: pop     esi
0x709992: retn
