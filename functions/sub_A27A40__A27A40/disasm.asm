0xA27A40: push    esi
0xA27A41: mov     esi, dword_BA7A64
0xA27A47: test    esi, esi
0xA27A49: jz      short loc_A27A67
0xA27A4B: lea     eax, [esi+4]
0xA27A4E: push    eax; lpAddend
0xA27A4F: call    ds:InterlockedDecrement
0xA27A55: test    eax, eax
0xA27A57: jnz     short loc_A27A67
0xA27A59: test    esi, esi
0xA27A5B: jz      short loc_A27A67
0xA27A5D: mov     edx, [esi]
0xA27A5F: mov     eax, [edx]
0xA27A61: push    1
0xA27A63: mov     ecx, esi
0xA27A65: call    eax
0xA27A67: pop     esi
0xA27A68: retn
