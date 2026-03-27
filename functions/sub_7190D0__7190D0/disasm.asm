0x7190D0: push    esi
0x7190D1: mov     esi, ds:0B3FCF8h
0x7190D7: test    esi, esi
0x7190D9: jz      short loc_719101
0x7190DB: lea     eax, [esi+4]
0x7190DE: push    eax; lpAddend
0x7190DF: call    dword ptr ds:0A2807Ch
0x7190E5: test    eax, eax
0x7190E7: jnz     short loc_7190F7
0x7190E9: test    esi, esi
0x7190EB: jz      short loc_7190F7
0x7190ED: mov     edx, [esi]
0x7190EF: mov     eax, [edx]
0x7190F1: push    1
0x7190F3: mov     ecx, esi
0x7190F5: call    eax
0x7190F7: mov     dword ptr ds:0B3FCF8h, 0
0x719101: pop     esi
0x719102: retn
