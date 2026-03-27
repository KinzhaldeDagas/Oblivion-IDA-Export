0x786FC0: push    esi
0x786FC1: mov     esi, ecx
0x786FC3: mov     eax, [esi+8]
0x786FC6: push    edi
0x786FC7: push    eax
0x786FC8: call    FormHeapFree
0x786FCD: mov     ecx, [esi+10h]
0x786FD0: xor     edi, edi
0x786FD2: push    ecx
0x786FD3: mov     [esi+8], edi
0x786FD6: call    FormHeapFree
0x786FDB: add     esp, 8
0x786FDE: mov     [esi+10h], edi
0x786FE1: mov     [esi], edi
0x786FE3: mov     [esi+14h], edi
0x786FE6: mov     [esi+18h], edi
0x786FE9: pop     edi
0x786FEA: pop     esi
0x786FEB: retn
