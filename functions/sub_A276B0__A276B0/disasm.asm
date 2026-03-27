0xA276B0: push    esi
0xA276B1: mov     esi, dword_B44F88
0xA276B7: test    esi, esi
0xA276B9: jz      short loc_A276D7
0xA276BB: lea     eax, [esi+4]
0xA276BE: push    eax; lpAddend
0xA276BF: call    ds:InterlockedDecrement
0xA276C5: test    eax, eax
0xA276C7: jnz     short loc_A276D7
0xA276C9: test    esi, esi
0xA276CB: jz      short loc_A276D7
0xA276CD: mov     edx, [esi]
0xA276CF: mov     eax, [edx]
0xA276D1: push    1
0xA276D3: mov     ecx, esi
0xA276D5: call    eax
0xA276D7: pop     esi
0xA276D8: retn
