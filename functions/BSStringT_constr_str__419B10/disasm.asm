0x419B10: xor     eax, eax
0x419B12: push    esi
0x419B13: mov     esi, ecx
0x419B15: push    eax; a3
0x419B16: mov     [esi], eax
0x419B18: mov     [esi+4], ax
0x419B1C: mov     [esi+6], ax
0x419B20: mov     eax, [esp+8+a2]
0x419B24: push    eax; a2
0x419B25: call    BSStringT_Set
0x419B2A: mov     eax, esi
0x419B2C: pop     esi
0x419B2D: retn    4
