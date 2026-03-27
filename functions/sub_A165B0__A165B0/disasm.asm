0xA165B0: push    esi
0xA165B1: mov     esi, dword_B333D8
0xA165B7: test    esi, esi
0xA165B9: jz      short loc_A165D7
0xA165BB: lea     eax, [esi+4]
0xA165BE: push    eax; lpAddend
0xA165BF: call    ds:InterlockedDecrement
0xA165C5: test    eax, eax
0xA165C7: jnz     short loc_A165D7
0xA165C9: test    esi, esi
0xA165CB: jz      short loc_A165D7
0xA165CD: mov     edx, [esi]
0xA165CF: mov     eax, [edx]
0xA165D1: push    1
0xA165D3: mov     ecx, esi
0xA165D5: call    eax
0xA165D7: pop     esi
0xA165D8: retn
