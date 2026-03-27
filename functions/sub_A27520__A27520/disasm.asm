0xA27520: push    esi
0xA27521: mov     esi, dword_B430E8
0xA27527: test    esi, esi
0xA27529: jz      short loc_A27547
0xA2752B: lea     eax, [esi+4]
0xA2752E: push    eax; lpAddend
0xA2752F: call    ds:InterlockedDecrement
0xA27535: test    eax, eax
0xA27537: jnz     short loc_A27547
0xA27539: test    esi, esi
0xA2753B: jz      short loc_A27547
0xA2753D: mov     edx, [esi]
0xA2753F: mov     eax, [edx]
0xA27541: push    1
0xA27543: mov     ecx, esi
0xA27545: call    eax
0xA27547: pop     esi
0xA27548: retn
