0x483600: push    esi
0x483601: mov     esi, [ecx+4]
0x483604: test    esi, esi
0x483606: jz      short loc_483624
0x483608: lea     eax, [esi+4]
0x48360B: push    eax; lpAddend
0x48360C: call    dword ptr ds:0A2807Ch
0x483612: test    eax, eax
0x483614: jnz     short loc_483624
0x483616: test    esi, esi
0x483618: jz      short loc_483624
0x48361A: mov     edx, [esi]
0x48361C: mov     eax, [edx]
0x48361E: push    1
0x483620: mov     ecx, esi
0x483622: call    eax
0x483624: pop     esi
0x483625: retn
