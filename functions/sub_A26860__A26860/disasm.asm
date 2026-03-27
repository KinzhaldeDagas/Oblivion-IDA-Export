0xA26860: push    esi
0xA26861: mov     esi, dword_B3DAE8
0xA26867: test    esi, esi
0xA26869: jz      short loc_A26887
0xA2686B: lea     eax, [esi+4]
0xA2686E: push    eax; lpAddend
0xA2686F: call    ds:InterlockedDecrement
0xA26875: test    eax, eax
0xA26877: jnz     short loc_A26887
0xA26879: test    esi, esi
0xA2687B: jz      short loc_A26887
0xA2687D: mov     edx, [esi]
0xA2687F: mov     eax, [edx]
0xA26881: push    1
0xA26883: mov     ecx, esi
0xA26885: call    eax
0xA26887: pop     esi
0xA26888: retn
