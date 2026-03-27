0x4CA390: push    esi
0x4CA391: mov     esi, ds:0B35C24h
0x4CA397: test    esi, esi
0x4CA399: jz      short loc_4CA3C1
0x4CA39B: lea     eax, [esi+4]
0x4CA39E: push    eax; lpAddend
0x4CA39F: call    dword ptr ds:0A2807Ch
0x4CA3A5: test    eax, eax
0x4CA3A7: jnz     short loc_4CA3B7
0x4CA3A9: test    esi, esi
0x4CA3AB: jz      short loc_4CA3B7
0x4CA3AD: mov     edx, [esi]
0x4CA3AF: mov     eax, [edx]
0x4CA3B1: push    1
0x4CA3B3: mov     ecx, esi
0x4CA3B5: call    eax
0x4CA3B7: mov     dword ptr ds:0B35C24h, 0
0x4CA3C1: mov     dword ptr ds:0B3659Ch, 0
0x4CA3CB: pop     esi
0x4CA3CC: retn
