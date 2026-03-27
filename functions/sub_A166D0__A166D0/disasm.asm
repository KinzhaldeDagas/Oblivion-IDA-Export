0xA166D0: push    esi
0xA166D1: mov     esi, dword_B333F0
0xA166D7: test    esi, esi
0xA166D9: jz      short loc_A166F7
0xA166DB: lea     eax, [esi+4]
0xA166DE: push    eax; lpAddend
0xA166DF: call    ds:InterlockedDecrement
0xA166E5: test    eax, eax
0xA166E7: jnz     short loc_A166F7
0xA166E9: test    esi, esi
0xA166EB: jz      short loc_A166F7
0xA166ED: mov     edx, [esi]
0xA166EF: mov     eax, [edx]
0xA166F1: push    1
0xA166F3: mov     ecx, esi
0xA166F5: call    eax
0xA166F7: pop     esi
0xA166F8: retn
