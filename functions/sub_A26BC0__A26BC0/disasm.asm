0xA26BC0: push    esi
0xA26BC1: mov     esi, dword_B401A0
0xA26BC7: test    esi, esi
0xA26BC9: jz      short loc_A26BE7
0xA26BCB: lea     eax, [esi+4]
0xA26BCE: push    eax; lpAddend
0xA26BCF: call    ds:InterlockedDecrement
0xA26BD5: test    eax, eax
0xA26BD7: jnz     short loc_A26BE7
0xA26BD9: test    esi, esi
0xA26BDB: jz      short loc_A26BE7
0xA26BDD: mov     edx, [esi]
0xA26BDF: mov     eax, [edx]
0xA26BE1: push    1
0xA26BE3: mov     ecx, esi
0xA26BE5: call    eax
0xA26BE7: pop     esi
0xA26BE8: retn
