0xA26980: push    esi
0xA26981: mov     esi, dword_B3F974
0xA26987: test    esi, esi
0xA26989: jz      short loc_A269A7
0xA2698B: lea     eax, [esi+4]
0xA2698E: push    eax; lpAddend
0xA2698F: call    ds:InterlockedDecrement
0xA26995: test    eax, eax
0xA26997: jnz     short loc_A269A7
0xA26999: test    esi, esi
0xA2699B: jz      short loc_A269A7
0xA2699D: mov     edx, [esi]
0xA2699F: mov     eax, [edx]
0xA269A1: push    1
0xA269A3: mov     ecx, esi
0xA269A5: call    eax
0xA269A7: pop     esi
0xA269A8: retn
