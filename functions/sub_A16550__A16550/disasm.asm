0xA16550: push    esi
0xA16551: mov     esi, g_InterfaceScenegraph
0xA16557: test    esi, esi
0xA16559: jz      short loc_A16577
0xA1655B: lea     eax, [esi+4]
0xA1655E: push    eax; lpAddend
0xA1655F: call    ds:InterlockedDecrement
0xA16565: test    eax, eax
0xA16567: jnz     short loc_A16577
0xA16569: test    esi, esi
0xA1656B: jz      short loc_A16577
0xA1656D: mov     edx, [esi]
0xA1656F: mov     eax, [edx]
0xA16571: push    1
0xA16573: mov     ecx, esi
0xA16575: call    eax
0xA16577: pop     esi
0xA16578: retn
