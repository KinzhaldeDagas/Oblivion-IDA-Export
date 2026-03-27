0xA27730: push    esi
0xA27731: mov     esi, dword_B45FB4
0xA27737: test    esi, esi
0xA27739: jz      short loc_A27757
0xA2773B: lea     eax, [esi+4]
0xA2773E: push    eax; lpAddend
0xA2773F: call    ds:InterlockedDecrement
0xA27745: test    eax, eax
0xA27747: jnz     short loc_A27757
0xA27749: test    esi, esi
0xA2774B: jz      short loc_A27757
0xA2774D: mov     edx, [esi]
0xA2774F: mov     eax, [edx]
0xA27751: push    1
0xA27753: mov     ecx, esi
0xA27755: call    eax
0xA27757: pop     esi
0xA27758: retn
