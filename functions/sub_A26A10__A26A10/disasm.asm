0xA26A10: push    esi
0xA26A11: mov     esi, dword_B3F998
0xA26A17: test    esi, esi
0xA26A19: jz      short loc_A26A37
0xA26A1B: lea     eax, [esi+4]
0xA26A1E: push    eax; lpAddend
0xA26A1F: call    ds:InterlockedDecrement
0xA26A25: test    eax, eax
0xA26A27: jnz     short loc_A26A37
0xA26A29: test    esi, esi
0xA26A2B: jz      short loc_A26A37
0xA26A2D: mov     edx, [esi]
0xA26A2F: mov     eax, [edx]
0xA26A31: push    1
0xA26A33: mov     ecx, esi
0xA26A35: call    eax
0xA26A37: pop     esi
0xA26A38: retn
