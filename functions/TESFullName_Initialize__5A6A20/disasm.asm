0x5A6A20: push    esi
0x5A6A21: mov     esi, ecx
0x5A6A23: mov     eax, [esi+4]
0x5A6A26: push    eax
0x5A6A27: call    FormHeapFree
0x5A6A2C: xor     eax, eax
0x5A6A2E: add     esp, 4
0x5A6A31: mov     [esi+4], eax
0x5A6A34: mov     [esi+0Ah], ax
0x5A6A38: mov     [esi+8], ax
0x5A6A3C: pop     esi
0x5A6A3D: retn
