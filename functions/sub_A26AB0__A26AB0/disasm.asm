0xA26AB0: push    esi
0xA26AB1: mov     esi, dword_B3FCE4
0xA26AB7: test    esi, esi
0xA26AB9: jz      short loc_A26AD7
0xA26ABB: lea     eax, [esi+4]
0xA26ABE: push    eax; lpAddend
0xA26ABF: call    ds:InterlockedDecrement
0xA26AC5: test    eax, eax
0xA26AC7: jnz     short loc_A26AD7
0xA26AC9: test    esi, esi
0xA26ACB: jz      short loc_A26AD7
0xA26ACD: mov     edx, [esi]
0xA26ACF: mov     eax, [edx]
0xA26AD1: push    1
0xA26AD3: mov     ecx, esi
0xA26AD5: call    eax
0xA26AD7: pop     esi
0xA26AD8: retn
