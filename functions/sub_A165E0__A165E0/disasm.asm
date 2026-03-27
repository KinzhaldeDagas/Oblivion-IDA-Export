0xA165E0: push    esi
0xA165E1: mov     esi, dword_B333DC
0xA165E7: test    esi, esi
0xA165E9: jz      short loc_A16607
0xA165EB: lea     eax, [esi+4]
0xA165EE: push    eax; lpAddend
0xA165EF: call    ds:InterlockedDecrement
0xA165F5: test    eax, eax
0xA165F7: jnz     short loc_A16607
0xA165F9: test    esi, esi
0xA165FB: jz      short loc_A16607
0xA165FD: mov     edx, [esi]
0xA165FF: mov     eax, [edx]
0xA16601: push    1
0xA16603: mov     ecx, esi
0xA16605: call    eax
0xA16607: pop     esi
0xA16608: retn
