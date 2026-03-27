0xA166A0: push    esi
0xA166A1: mov     esi, ScreenElementsRoot?
0xA166A7: test    esi, esi
0xA166A9: jz      short loc_A166C7
0xA166AB: lea     eax, [esi+4]
0xA166AE: push    eax; lpAddend
0xA166AF: call    ds:InterlockedDecrement
0xA166B5: test    eax, eax
0xA166B7: jnz     short loc_A166C7
0xA166B9: test    esi, esi
0xA166BB: jz      short loc_A166C7
0xA166BD: mov     edx, [esi]
0xA166BF: mov     eax, [edx]
0xA166C1: push    1
0xA166C3: mov     ecx, esi
0xA166C5: call    eax
0xA166C7: pop     esi
0xA166C8: retn
