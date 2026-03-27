0x402DA0: push    esi
0x402DA1: mov     esi, ecx
0x402DA3: mov     eax, [esi]
0x402DA5: push    eax
0x402DA6: call    FormHeapFree
0x402DAB: xor     eax, eax
0x402DAD: add     esp, 4
0x402DB0: mov     [esi], eax
0x402DB2: mov     [esi+6], ax
0x402DB6: mov     [esi+4], ax
0x402DBA: pop     esi
0x402DBB: retn
