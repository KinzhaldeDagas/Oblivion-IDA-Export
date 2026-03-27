0xA27490: push    esi
0xA27491: mov     esi, dword_B43108
0xA27497: test    esi, esi
0xA27499: jz      short loc_A274B7
0xA2749B: lea     eax, [esi+4]
0xA2749E: push    eax; lpAddend
0xA2749F: call    ds:InterlockedDecrement
0xA274A5: test    eax, eax
0xA274A7: jnz     short loc_A274B7
0xA274A9: test    esi, esi
0xA274AB: jz      short loc_A274B7
0xA274AD: mov     edx, [esi]
0xA274AF: mov     eax, [edx]
0xA274B1: push    1
0xA274B3: mov     ecx, esi
0xA274B5: call    eax
0xA274B7: pop     esi
0xA274B8: retn
