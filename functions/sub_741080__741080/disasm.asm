0x741080: push    esi
0x741081: mov     esi, ds:0B401FCh
0x741087: test    esi, esi
0x741089: jz      short loc_7410B1
0x74108B: lea     eax, [esi+4]
0x74108E: push    eax; lpAddend
0x74108F: call    dword ptr ds:0A2807Ch
0x741095: test    eax, eax
0x741097: jnz     short loc_7410A7
0x741099: test    esi, esi
0x74109B: jz      short loc_7410A7
0x74109D: mov     edx, [esi]
0x74109F: mov     eax, [edx]
0x7410A1: push    1
0x7410A3: mov     ecx, esi
0x7410A5: call    eax
0x7410A7: mov     dword ptr ds:0B401FCh, 0
0x7410B1: pop     esi
0x7410B2: retn
