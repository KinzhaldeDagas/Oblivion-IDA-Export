0xA1C550: push    esi
0xA1C551: mov     esi, dword_B3658C
0xA1C557: test    esi, esi
0xA1C559: jz      short loc_A1C577
0xA1C55B: lea     eax, [esi+4]
0xA1C55E: push    eax; lpAddend
0xA1C55F: call    ds:InterlockedDecrement
0xA1C565: test    eax, eax
0xA1C567: jnz     short loc_A1C577
0xA1C569: test    esi, esi
0xA1C56B: jz      short loc_A1C577
0xA1C56D: mov     edx, [esi]
0xA1C56F: mov     eax, [edx]
0xA1C571: push    1
0xA1C573: mov     ecx, esi
0xA1C575: call    eax
0xA1C577: pop     esi
0xA1C578: retn
