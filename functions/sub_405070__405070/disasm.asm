0x405070: mov     eax, [esp+arg_0]
0x405074: test    eax, eax
0x405076: push    esi
0x405077: mov     esi, ecx
0x405079: mov     [esi], eax
0x40507B: jz      short loc_405087
0x40507D: add     eax, 4
0x405080: push    eax; lpAddend
0x405081: call    ds:InterlockedIncrement
0x405087: mov     eax, esi
0x405089: pop     esi
0x40508A: retn    4
