0xA26830: push    esi
0xA26831: mov     esi, dword_B3CB30
0xA26837: test    esi, esi
0xA26839: jz      short loc_A26857
0xA2683B: lea     eax, [esi+4]
0xA2683E: push    eax; lpAddend
0xA2683F: call    ds:InterlockedDecrement
0xA26845: test    eax, eax
0xA26847: jnz     short loc_A26857
0xA26849: test    esi, esi
0xA2684B: jz      short loc_A26857
0xA2684D: mov     edx, [esi]
0xA2684F: mov     eax, [edx]
0xA26851: push    1
0xA26853: mov     ecx, esi
0xA26855: call    eax
0xA26857: pop     esi
0xA26858: retn
