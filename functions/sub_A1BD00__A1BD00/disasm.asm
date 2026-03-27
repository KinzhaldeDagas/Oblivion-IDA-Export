0xA1BD00: push    esi
0xA1BD01: mov     esi, dword_B36084
0xA1BD07: test    esi, esi
0xA1BD09: jz      short loc_A1BD27
0xA1BD0B: lea     eax, [esi+4]
0xA1BD0E: push    eax; lpAddend
0xA1BD0F: call    ds:InterlockedDecrement
0xA1BD15: test    eax, eax
0xA1BD17: jnz     short loc_A1BD27
0xA1BD19: test    esi, esi
0xA1BD1B: jz      short loc_A1BD27
0xA1BD1D: mov     edx, [esi]
0xA1BD1F: mov     eax, [edx]
0xA1BD21: push    1
0xA1BD23: mov     ecx, esi
0xA1BD25: call    eax
0xA1BD27: pop     esi
0xA1BD28: retn
