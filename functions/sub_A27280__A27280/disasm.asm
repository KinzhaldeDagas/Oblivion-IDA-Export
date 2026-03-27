0xA27280: push    esi
0xA27281: mov     esi, dword_B430E4
0xA27287: test    esi, esi
0xA27289: jz      short loc_A272A7
0xA2728B: lea     eax, [esi+4]
0xA2728E: push    eax; lpAddend
0xA2728F: call    ds:InterlockedDecrement
0xA27295: test    eax, eax
0xA27297: jnz     short loc_A272A7
0xA27299: test    esi, esi
0xA2729B: jz      short loc_A272A7
0xA2729D: mov     edx, [esi]
0xA2729F: mov     eax, [edx]
0xA272A1: push    1
0xA272A3: mov     ecx, esi
0xA272A5: call    eax
0xA272A7: pop     esi
0xA272A8: retn
