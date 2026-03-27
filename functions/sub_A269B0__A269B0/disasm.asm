0xA269B0: push    esi
0xA269B1: mov     esi, dword_B3F980
0xA269B7: test    esi, esi
0xA269B9: jz      short loc_A269D7
0xA269BB: lea     eax, [esi+4]
0xA269BE: push    eax; lpAddend
0xA269BF: call    ds:InterlockedDecrement
0xA269C5: test    eax, eax
0xA269C7: jnz     short loc_A269D7
0xA269C9: test    esi, esi
0xA269CB: jz      short loc_A269D7
0xA269CD: mov     edx, [esi]
0xA269CF: mov     eax, [edx]
0xA269D1: push    1
0xA269D3: mov     ecx, esi
0xA269D5: call    eax
0xA269D7: pop     esi
0xA269D8: retn
