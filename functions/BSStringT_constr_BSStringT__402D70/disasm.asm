0x402D70: xor     eax, eax
0x402D72: push    esi
0x402D73: mov     esi, ecx
0x402D75: mov     [esi], eax
0x402D77: mov     [esi+4], ax
0x402D7B: mov     [esi+6], ax
0x402D7F: push    eax; a3
0x402D80: mov     eax, [esp+8+arg_0]
0x402D84: mov     ecx, [eax]
0x402D86: push    ecx; a2
0x402D87: mov     ecx, esi; this
0x402D89: call    BSStringT_Set
0x402D8E: mov     eax, esi
0x402D90: pop     esi
0x402D91: retn    4
