0xA17C30: push    esi
0xA17C31: mov     esi, dword_B33A24
0xA17C37: test    esi, esi
0xA17C39: jz      short loc_A17C57
0xA17C3B: lea     eax, [esi+8]
0xA17C3E: push    eax; lpAddend
0xA17C3F: call    ds:InterlockedDecrement
0xA17C45: test    eax, eax
0xA17C47: jnz     short loc_A17C57
0xA17C49: test    esi, esi
0xA17C4B: jz      short loc_A17C57
0xA17C4D: mov     edx, [esi]
0xA17C4F: mov     eax, [edx]
0xA17C51: push    1
0xA17C53: mov     ecx, esi
0xA17C55: call    eax
0xA17C57: pop     esi
0xA17C58: retn
