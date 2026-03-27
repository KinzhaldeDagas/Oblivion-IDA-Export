0xA26800: push    esi
0xA26801: mov     esi, dword_B3CAFC
0xA26807: test    esi, esi
0xA26809: jz      short loc_A26827
0xA2680B: lea     eax, [esi+4]
0xA2680E: push    eax; lpAddend
0xA2680F: call    ds:InterlockedDecrement
0xA26815: test    eax, eax
0xA26817: jnz     short loc_A26827
0xA26819: test    esi, esi
0xA2681B: jz      short loc_A26827
0xA2681D: mov     edx, [esi]
0xA2681F: mov     eax, [edx]
0xA26821: push    1
0xA26823: mov     ecx, esi
0xA26825: call    eax
0xA26827: pop     esi
0xA26828: retn
