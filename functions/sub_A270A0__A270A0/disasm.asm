0xA270A0: push    esi
0xA270A1: mov     esi, RenderWindowNiNode
0xA270A7: test    esi, esi
0xA270A9: jz      short loc_A270C7
0xA270AB: lea     eax, [esi+4]
0xA270AE: push    eax; lpAddend
0xA270AF: call    ds:InterlockedDecrement
0xA270B5: test    eax, eax
0xA270B7: jnz     short loc_A270C7
0xA270B9: test    esi, esi
0xA270BB: jz      short loc_A270C7
0xA270BD: mov     edx, [esi]
0xA270BF: mov     eax, [edx]
0xA270C1: push    1
0xA270C3: mov     ecx, esi
0xA270C5: call    eax
0xA270C7: pop     esi
0xA270C8: retn
