0xA1BD30: push    esi
0xA1BD31: mov     esi, dword_B36088
0xA1BD37: test    esi, esi
0xA1BD39: jz      short loc_A1BD57
0xA1BD3B: lea     eax, [esi+4]
0xA1BD3E: push    eax; lpAddend
0xA1BD3F: call    ds:InterlockedDecrement
0xA1BD45: test    eax, eax
0xA1BD47: jnz     short loc_A1BD57
0xA1BD49: test    esi, esi
0xA1BD4B: jz      short loc_A1BD57
0xA1BD4D: mov     edx, [esi]
0xA1BD4F: mov     eax, [edx]
0xA1BD51: push    1
0xA1BD53: mov     ecx, esi
0xA1BD55: call    eax
0xA1BD57: pop     esi
0xA1BD58: retn
