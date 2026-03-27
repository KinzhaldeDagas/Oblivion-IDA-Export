0xA274C0: push    esi
0xA274C1: mov     esi, CanopySadowMap
0xA274C7: test    esi, esi
0xA274C9: jz      short loc_A274E7
0xA274CB: lea     eax, [esi+4]
0xA274CE: push    eax; lpAddend
0xA274CF: call    ds:InterlockedDecrement
0xA274D5: test    eax, eax
0xA274D7: jnz     short loc_A274E7
0xA274D9: test    esi, esi
0xA274DB: jz      short loc_A274E7
0xA274DD: mov     edx, [esi]
0xA274DF: mov     eax, [edx]
0xA274E1: push    1
0xA274E3: mov     ecx, esi
0xA274E5: call    eax
0xA274E7: pop     esi
0xA274E8: retn
