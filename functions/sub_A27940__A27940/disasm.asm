0xA27940: push    esi
0xA27941: mov     esi, dword_B474F0
0xA27947: test    esi, esi
0xA27949: jz      short loc_A27967
0xA2794B: lea     eax, [esi+4]
0xA2794E: push    eax; lpAddend
0xA2794F: call    ds:InterlockedDecrement
0xA27955: test    eax, eax
0xA27957: jnz     short loc_A27967
0xA27959: test    esi, esi
0xA2795B: jz      short loc_A27967
0xA2795D: mov     edx, [esi]
0xA2795F: mov     eax, [edx]
0xA27961: push    1
0xA27963: mov     ecx, esi
0xA27965: call    eax
0xA27967: pop     esi
0xA27968: retn
