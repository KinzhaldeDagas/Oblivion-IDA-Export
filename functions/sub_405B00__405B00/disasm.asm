0x405B00: push    esi
0x405B01: mov     esi, g_InterfaceScenegraph
0x405B07: test    esi, esi
0x405B09: jz      short loc_405B31
0x405B0B: lea     eax, [esi+4]
0x405B0E: push    eax; lpAddend
0x405B0F: call    ds:InterlockedDecrement
0x405B15: test    eax, eax
0x405B17: jnz     short loc_405B27
0x405B19: test    esi, esi
0x405B1B: jz      short loc_405B27
0x405B1D: mov     edx, [esi]
0x405B1F: mov     eax, [edx]
0x405B21: push    1
0x405B23: mov     ecx, esi
0x405B25: call    eax
0x405B27: mov     g_InterfaceScenegraph, 0
0x405B31: pop     esi
0x405B32: retn
