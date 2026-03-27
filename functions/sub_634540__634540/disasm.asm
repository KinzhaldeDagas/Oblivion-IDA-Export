0x634540: mov     eax, [esp+arg_0]
0x634544: push    esi
0x634545: mov     esi, ecx
0x634547: mov     edx, [esi]
0x634549: mov     [esi+2D8h], eax
0x63454F: mov     eax, [edx+4CCh]
0x634555: mov     byte ptr [esi+2E0h], 1
0x63455C: call    eax
0x63455E: cmp     [esi+2E4h], eax
0x634564: jz      short loc_63457F
0x634566: mov     edx, [esi]
0x634568: mov     eax, [edx+4CCh]
0x63456E: mov     ecx, esi
0x634570: mov     byte ptr [esi+2E8h], 0
0x634577: call    eax
0x634579: mov     [esi+2E4h], eax
0x63457F: pop     esi
0x634580: retn    4
