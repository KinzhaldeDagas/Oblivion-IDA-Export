0xA278E0: push    esi
0xA278E1: mov     esi, dword_B474AC
0xA278E7: test    esi, esi
0xA278E9: jz      short loc_A27907
0xA278EB: lea     eax, [esi+4]
0xA278EE: push    eax; lpAddend
0xA278EF: call    ds:InterlockedDecrement
0xA278F5: test    eax, eax
0xA278F7: jnz     short loc_A27907
0xA278F9: test    esi, esi
0xA278FB: jz      short loc_A27907
0xA278FD: mov     edx, [esi]
0xA278FF: mov     eax, [edx]
0xA27901: push    1
0xA27903: mov     ecx, esi
0xA27905: call    eax
0xA27907: pop     esi
0xA27908: retn
