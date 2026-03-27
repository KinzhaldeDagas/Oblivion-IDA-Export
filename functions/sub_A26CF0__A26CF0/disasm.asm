0xA26CF0: push    esi
0xA26CF1: mov     esi, dword_B40884
0xA26CF7: test    esi, esi
0xA26CF9: jz      short loc_A26D17
0xA26CFB: lea     eax, [esi+4]
0xA26CFE: push    eax; lpAddend
0xA26CFF: call    ds:InterlockedDecrement
0xA26D05: test    eax, eax
0xA26D07: jnz     short loc_A26D17
0xA26D09: test    esi, esi
0xA26D0B: jz      short loc_A26D17
0xA26D0D: mov     edx, [esi]
0xA26D0F: mov     eax, [edx]
0xA26D11: push    1
0xA26D13: mov     ecx, esi
0xA26D15: call    eax
0xA26D17: pop     esi
0xA26D18: retn
