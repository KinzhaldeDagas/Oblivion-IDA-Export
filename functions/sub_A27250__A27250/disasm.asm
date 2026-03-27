0xA27250: push    esi
0xA27251: mov     esi, dword_B43100
0xA27257: test    esi, esi
0xA27259: jz      short loc_A27277
0xA2725B: lea     eax, [esi+4]
0xA2725E: push    eax; lpAddend
0xA2725F: call    ds:InterlockedDecrement
0xA27265: test    eax, eax
0xA27267: jnz     short loc_A27277
0xA27269: test    esi, esi
0xA2726B: jz      short loc_A27277
0xA2726D: mov     edx, [esi]
0xA2726F: mov     eax, [edx]
0xA27271: push    1
0xA27273: mov     ecx, esi
0xA27275: call    eax
0xA27277: pop     esi
0xA27278: retn
