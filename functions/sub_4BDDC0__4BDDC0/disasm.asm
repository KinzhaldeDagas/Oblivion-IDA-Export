0x4BDDC0: push    esi
0x4BDDC1: mov     esi, [ecx]
0x4BDDC3: test    esi, esi
0x4BDDC5: jz      short loc_4BDDE3
0x4BDDC7: lea     eax, [esi+8]
0x4BDDCA: push    eax; lpAddend
0x4BDDCB: call    dword ptr ds:0A2807Ch
0x4BDDD1: test    eax, eax
0x4BDDD3: jnz     short loc_4BDDE3
0x4BDDD5: test    esi, esi
0x4BDDD7: jz      short loc_4BDDE3
0x4BDDD9: mov     edx, [esi]
0x4BDDDB: mov     eax, [edx]
0x4BDDDD: push    1
0x4BDDDF: mov     ecx, esi
0x4BDDE1: call    eax
0x4BDDE3: pop     esi
0x4BDDE4: retn
