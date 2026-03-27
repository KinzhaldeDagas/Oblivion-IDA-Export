0xA268D0: push    esi
0xA268D1: mov     esi, dword_B3F384
0xA268D7: test    esi, esi
0xA268D9: jz      short loc_A268F7
0xA268DB: lea     eax, [esi+4]
0xA268DE: push    eax; lpAddend
0xA268DF: call    ds:InterlockedDecrement
0xA268E5: test    eax, eax
0xA268E7: jnz     short loc_A268F7
0xA268E9: test    esi, esi
0xA268EB: jz      short loc_A268F7
0xA268ED: mov     edx, [esi]
0xA268EF: mov     eax, [edx]
0xA268F1: push    1
0xA268F3: mov     ecx, esi
0xA268F5: call    eax
0xA268F7: pop     esi
0xA268F8: retn
