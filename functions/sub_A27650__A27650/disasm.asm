0xA27650: push    esi
0xA27651: mov     esi, dword_B45084
0xA27657: test    esi, esi
0xA27659: jz      short loc_A27677
0xA2765B: lea     eax, [esi+4]
0xA2765E: push    eax; lpAddend
0xA2765F: call    ds:InterlockedDecrement
0xA27665: test    eax, eax
0xA27667: jnz     short loc_A27677
0xA27669: test    esi, esi
0xA2766B: jz      short loc_A27677
0xA2766D: mov     edx, [esi]
0xA2766F: mov     eax, [edx]
0xA27671: push    1
0xA27673: mov     ecx, esi
0xA27675: call    eax
0xA27677: pop     esi
0xA27678: retn
