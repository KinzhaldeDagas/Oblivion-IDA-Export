0xA27550: push    esi
0xA27551: mov     esi, dword_B43328
0xA27557: test    esi, esi
0xA27559: jz      short loc_A27577
0xA2755B: lea     eax, [esi+4]
0xA2755E: push    eax; lpAddend
0xA2755F: call    ds:InterlockedDecrement
0xA27565: test    eax, eax
0xA27567: jnz     short loc_A27577
0xA27569: test    esi, esi
0xA2756B: jz      short loc_A27577
0xA2756D: mov     edx, [esi]
0xA2756F: mov     eax, [edx]
0xA27571: push    1
0xA27573: mov     ecx, esi
0xA27575: call    eax
0xA27577: pop     esi
0xA27578: retn
