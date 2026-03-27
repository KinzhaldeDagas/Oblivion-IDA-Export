0xA27680: push    esi
0xA27681: mov     esi, dword_B44F8C
0xA27687: test    esi, esi
0xA27689: jz      short loc_A276A7
0xA2768B: lea     eax, [esi+4]
0xA2768E: push    eax; lpAddend
0xA2768F: call    ds:InterlockedDecrement
0xA27695: test    eax, eax
0xA27697: jnz     short loc_A276A7
0xA27699: test    esi, esi
0xA2769B: jz      short loc_A276A7
0xA2769D: mov     edx, [esi]
0xA2769F: mov     eax, [edx]
0xA276A1: push    1
0xA276A3: mov     ecx, esi
0xA276A5: call    eax
0xA276A7: pop     esi
0xA276A8: retn
