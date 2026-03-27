0xA27AB0: push    esi
0xA27AB1: mov     esi, dword_BA7B8C
0xA27AB7: test    esi, esi
0xA27AB9: jz      short loc_A27AD7
0xA27ABB: lea     eax, [esi+4]
0xA27ABE: push    eax; lpAddend
0xA27ABF: call    ds:InterlockedDecrement
0xA27AC5: test    eax, eax
0xA27AC7: jnz     short loc_A27AD7
0xA27AC9: test    esi, esi
0xA27ACB: jz      short loc_A27AD7
0xA27ACD: mov     edx, [esi]
0xA27ACF: mov     eax, [edx]
0xA27AD1: push    1
0xA27AD3: mov     ecx, esi
0xA27AD5: call    eax
0xA27AD7: pop     esi
0xA27AD8: retn
