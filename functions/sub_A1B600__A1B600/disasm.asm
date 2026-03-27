0xA1B600: push    esi
0xA1B601: mov     esi, dword_B35AD4
0xA1B607: test    esi, esi
0xA1B609: jz      short loc_A1B627
0xA1B60B: lea     eax, [esi+4]
0xA1B60E: push    eax; lpAddend
0xA1B60F: call    ds:InterlockedDecrement
0xA1B615: test    eax, eax
0xA1B617: jnz     short loc_A1B627
0xA1B619: test    esi, esi
0xA1B61B: jz      short loc_A1B627
0xA1B61D: mov     edx, [esi]
0xA1B61F: mov     eax, [edx]
0xA1B621: push    1
0xA1B623: mov     ecx, esi
0xA1B625: call    eax
0xA1B627: pop     esi
0xA1B628: retn
