0xA27370: push    esi
0xA27371: mov     esi, dword_B430D4
0xA27377: test    esi, esi
0xA27379: jz      short loc_A27397
0xA2737B: lea     eax, [esi+4]
0xA2737E: push    eax; lpAddend
0xA2737F: call    ds:InterlockedDecrement
0xA27385: test    eax, eax
0xA27387: jnz     short loc_A27397
0xA27389: test    esi, esi
0xA2738B: jz      short loc_A27397
0xA2738D: mov     edx, [esi]
0xA2738F: mov     eax, [edx]
0xA27391: push    1
0xA27393: mov     ecx, esi
0xA27395: call    eax
0xA27397: pop     esi
0xA27398: retn
