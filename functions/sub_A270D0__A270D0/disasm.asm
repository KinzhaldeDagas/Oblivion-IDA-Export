0xA270D0: push    esi
0xA270D1: mov     esi, dword_B42D44
0xA270D7: test    esi, esi
0xA270D9: jz      short loc_A270F7
0xA270DB: lea     eax, [esi+4]
0xA270DE: push    eax; lpAddend
0xA270DF: call    ds:InterlockedDecrement
0xA270E5: test    eax, eax
0xA270E7: jnz     short loc_A270F7
0xA270E9: test    esi, esi
0xA270EB: jz      short loc_A270F7
0xA270ED: mov     edx, [esi]
0xA270EF: mov     eax, [edx]
0xA270F1: push    1
0xA270F3: mov     ecx, esi
0xA270F5: call    eax
0xA270F7: pop     esi
0xA270F8: retn
