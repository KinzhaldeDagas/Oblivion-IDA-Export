0xA27910: push    esi
0xA27911: mov     esi, dword_B474EC
0xA27917: test    esi, esi
0xA27919: jz      short loc_A27937
0xA2791B: lea     eax, [esi+4]
0xA2791E: push    eax; lpAddend
0xA2791F: call    ds:InterlockedDecrement
0xA27925: test    eax, eax
0xA27927: jnz     short loc_A27937
0xA27929: test    esi, esi
0xA2792B: jz      short loc_A27937
0xA2792D: mov     edx, [esi]
0xA2792F: mov     eax, [edx]
0xA27931: push    1
0xA27933: mov     ecx, esi
0xA27935: call    eax
0xA27937: pop     esi
0xA27938: retn
