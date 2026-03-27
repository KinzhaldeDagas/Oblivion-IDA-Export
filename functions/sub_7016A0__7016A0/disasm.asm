0x7016A0: push    esi
0x7016A1: mov     esi, [ecx]
0x7016A3: test    esi, esi
0x7016A5: jz      short loc_7016C3
0x7016A7: lea     eax, [esi+4]
0x7016AA: push    eax; lpAddend
0x7016AB: call    dword ptr ds:0A2807Ch
0x7016B1: test    eax, eax
0x7016B3: jnz     short loc_7016C3
0x7016B5: test    esi, esi
0x7016B7: jz      short loc_7016C3
0x7016B9: mov     edx, [esi]
0x7016BB: mov     eax, [edx]
0x7016BD: push    1
0x7016BF: mov     ecx, esi
0x7016C1: call    eax
0x7016C3: pop     esi
0x7016C4: retn
