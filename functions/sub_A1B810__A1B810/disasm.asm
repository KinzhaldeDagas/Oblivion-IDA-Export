0xA1B810: push    esi
0xA1B811: mov     esi, dword_B35BEC
0xA1B817: test    esi, esi
0xA1B819: jz      short loc_A1B837
0xA1B81B: lea     eax, [esi+4]
0xA1B81E: push    eax; lpAddend
0xA1B81F: call    ds:InterlockedDecrement
0xA1B825: test    eax, eax
0xA1B827: jnz     short loc_A1B837
0xA1B829: test    esi, esi
0xA1B82B: jz      short loc_A1B837
0xA1B82D: mov     edx, [esi]
0xA1B82F: mov     eax, [edx]
0xA1B831: push    1
0xA1B833: mov     ecx, esi
0xA1B835: call    eax
0xA1B837: pop     esi
0xA1B838: retn
