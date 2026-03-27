0xA27160: push    esi
0xA27161: mov     esi, dword_B43104
0xA27167: test    esi, esi
0xA27169: jz      short loc_A27187
0xA2716B: lea     eax, [esi+4]
0xA2716E: push    eax; lpAddend
0xA2716F: call    ds:InterlockedDecrement
0xA27175: test    eax, eax
0xA27177: jnz     short loc_A27187
0xA27179: test    esi, esi
0xA2717B: jz      short loc_A27187
0xA2717D: mov     edx, [esi]
0xA2717F: mov     eax, [edx]
0xA27181: push    1
0xA27183: mov     ecx, esi
0xA27185: call    eax
0xA27187: pop     esi
0xA27188: retn
