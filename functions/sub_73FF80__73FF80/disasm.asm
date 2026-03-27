0x73FF80: push    esi
0x73FF81: mov     esi, ds:0B401D8h
0x73FF87: test    esi, esi
0x73FF89: jz      short loc_73FFB1
0x73FF8B: lea     eax, [esi+4]
0x73FF8E: push    eax; lpAddend
0x73FF8F: call    dword ptr ds:0A2807Ch
0x73FF95: test    eax, eax
0x73FF97: jnz     short loc_73FFA7
0x73FF99: test    esi, esi
0x73FF9B: jz      short loc_73FFA7
0x73FF9D: mov     edx, [esi]
0x73FF9F: mov     eax, [edx]
0x73FFA1: push    1
0x73FFA3: mov     ecx, esi
0x73FFA5: call    eax
0x73FFA7: mov     dword ptr ds:0B401D8h, 0
0x73FFB1: pop     esi
0x73FFB2: retn
