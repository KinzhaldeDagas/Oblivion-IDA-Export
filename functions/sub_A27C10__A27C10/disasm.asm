0xA27C10: push    esi
0xA27C11: mov     esi, dword_BAAA90
0xA27C17: test    esi, esi
0xA27C19: jz      short loc_A27C37
0xA27C1B: lea     eax, [esi+4]
0xA27C1E: push    eax; lpAddend
0xA27C1F: call    ds:InterlockedDecrement
0xA27C25: test    eax, eax
0xA27C27: jnz     short loc_A27C37
0xA27C29: test    esi, esi
0xA27C2B: jz      short loc_A27C37
0xA27C2D: mov     edx, [esi]
0xA27C2F: mov     eax, [edx]
0xA27C31: push    1
0xA27C33: mov     ecx, esi
0xA27C35: call    eax
0xA27C37: pop     esi
0xA27C38: retn
