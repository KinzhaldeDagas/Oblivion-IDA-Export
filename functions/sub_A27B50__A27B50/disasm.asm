0xA27B50: push    esi
0xA27B51: mov     esi, dword_BA8138
0xA27B57: test    esi, esi
0xA27B59: jz      short loc_A27B77
0xA27B5B: lea     eax, [esi+4]
0xA27B5E: push    eax; lpAddend
0xA27B5F: call    ds:InterlockedDecrement
0xA27B65: test    eax, eax
0xA27B67: jnz     short loc_A27B77
0xA27B69: test    esi, esi
0xA27B6B: jz      short loc_A27B77
0xA27B6D: mov     edx, [esi]
0xA27B6F: mov     eax, [edx]
0xA27B71: push    1
0xA27B73: mov     ecx, esi
0xA27B75: call    eax
0xA27B77: pop     esi
0xA27B78: retn
