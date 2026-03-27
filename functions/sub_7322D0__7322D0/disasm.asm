0x7322D0: push    esi
0x7322D1: mov     esi, ecx
0x7322D3: mov     eax, [esi+50h]
0x7322D6: push    eax
0x7322D7: call    FormHeapFree
0x7322DC: xor     eax, eax
0x7322DE: add     esp, 4
0x7322E1: mov     [esi+5Ch], eax
0x7322E4: mov     [esi+58h], eax
0x7322E7: mov     [esi+54h], eax
0x7322EA: mov     [esi+50h], eax
0x7322ED: pop     esi
0x7322EE: retn
