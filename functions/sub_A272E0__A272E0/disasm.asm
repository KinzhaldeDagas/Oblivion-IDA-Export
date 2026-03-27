0xA272E0: push    esi
0xA272E1: mov     esi, dword_B43120
0xA272E7: test    esi, esi
0xA272E9: jz      short loc_A27307
0xA272EB: lea     eax, [esi+4]
0xA272EE: push    eax; lpAddend
0xA272EF: call    ds:InterlockedDecrement
0xA272F5: test    eax, eax
0xA272F7: jnz     short loc_A27307
0xA272F9: test    esi, esi
0xA272FB: jz      short loc_A27307
0xA272FD: mov     edx, [esi]
0xA272FF: mov     eax, [edx]
0xA27301: push    1
0xA27303: mov     ecx, esi
0xA27305: call    eax
0xA27307: pop     esi
0xA27308: retn
