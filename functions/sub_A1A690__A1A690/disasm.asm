0xA1A690: push    esi
0xA1A691: mov     esi, dword_B35290
0xA1A697: test    esi, esi
0xA1A699: jz      short loc_A1A6B7
0xA1A69B: lea     eax, [esi+4]
0xA1A69E: push    eax; lpAddend
0xA1A69F: call    ds:InterlockedDecrement
0xA1A6A5: test    eax, eax
0xA1A6A7: jnz     short loc_A1A6B7
0xA1A6A9: test    esi, esi
0xA1A6AB: jz      short loc_A1A6B7
0xA1A6AD: mov     edx, [esi]
0xA1A6AF: mov     eax, [edx]
0xA1A6B1: push    1
0xA1A6B3: mov     ecx, esi
0xA1A6B5: call    eax
0xA1A6B7: pop     esi
0xA1A6B8: retn
