0xA277F0: push    esi
0xA277F1: mov     esi, dword_B4690C
0xA277F7: test    esi, esi
0xA277F9: jz      short loc_A27817
0xA277FB: lea     eax, [esi+4]
0xA277FE: push    eax; lpAddend
0xA277FF: call    ds:InterlockedDecrement
0xA27805: test    eax, eax
0xA27807: jnz     short loc_A27817
0xA27809: test    esi, esi
0xA2780B: jz      short loc_A27817
0xA2780D: mov     edx, [esi]
0xA2780F: mov     eax, [edx]
0xA27811: push    1
0xA27813: mov     ecx, esi
0xA27815: call    eax
0xA27817: pop     esi
0xA27818: retn
