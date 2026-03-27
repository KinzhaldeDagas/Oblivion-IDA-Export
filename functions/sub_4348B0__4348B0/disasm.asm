0x4348B0: push    ebx
0x4348B1: mov     ebx, [esp+4+arg_0]
0x4348B5: push    esi
0x4348B6: push    edi
0x4348B7: mov     edi, ecx
0x4348B9: mov     esi, [edi]
0x4348BB: cmp     esi, [ebx]
0x4348BD: jz      short loc_4348F1
0x4348BF: test    esi, esi
0x4348C1: jz      short loc_4348DF
0x4348C3: lea     eax, [esi+8]
0x4348C6: push    eax; lpAddend
0x4348C7: call    ds:InterlockedDecrement
0x4348CD: test    eax, eax
0x4348CF: jnz     short loc_4348DF
0x4348D1: test    esi, esi
0x4348D3: jz      short loc_4348DF
0x4348D5: mov     edx, [esi]
0x4348D7: mov     eax, [edx]
0x4348D9: push    1
0x4348DB: mov     ecx, esi
0x4348DD: call    eax
0x4348DF: mov     eax, [ebx]
0x4348E1: test    eax, eax
0x4348E3: mov     [edi], eax
0x4348E5: jz      short loc_4348F1
0x4348E7: add     eax, 8
0x4348EA: push    eax; lpAddend
0x4348EB: call    ds:InterlockedIncrement
0x4348F1: mov     eax, edi
0x4348F3: pop     edi
0x4348F4: pop     esi
0x4348F5: pop     ebx
0x4348F6: retn    4
