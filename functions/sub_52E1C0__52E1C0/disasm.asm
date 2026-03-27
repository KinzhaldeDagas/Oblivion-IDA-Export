0x52E1C0: push    esi
0x52E1C1: mov     esi, ecx
0x52E1C3: mov     eax, [esi+10h]
0x52E1C6: push    eax
0x52E1C7: call    FormHeapFree
0x52E1CC: xor     eax, eax
0x52E1CE: add     esp, 4
0x52E1D1: mov     [esi+10h], eax
0x52E1D4: mov     [esi+16h], ax
0x52E1D8: mov     [esi+14h], ax
0x52E1DC: pop     esi
0x52E1DD: retn
