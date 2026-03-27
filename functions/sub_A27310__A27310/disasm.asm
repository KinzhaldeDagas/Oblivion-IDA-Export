0xA27310: push    esi
0xA27311: mov     esi, dword_B430F8
0xA27317: test    esi, esi
0xA27319: jz      short loc_A27337
0xA2731B: lea     eax, [esi+4]
0xA2731E: push    eax; lpAddend
0xA2731F: call    ds:InterlockedDecrement
0xA27325: test    eax, eax
0xA27327: jnz     short loc_A27337
0xA27329: test    esi, esi
0xA2732B: jz      short loc_A27337
0xA2732D: mov     edx, [esi]
0xA2732F: mov     eax, [edx]
0xA27331: push    1
0xA27333: mov     ecx, esi
0xA27335: call    eax
0xA27337: pop     esi
0xA27338: retn
