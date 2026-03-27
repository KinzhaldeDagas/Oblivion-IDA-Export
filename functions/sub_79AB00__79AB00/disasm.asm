0x79AB00: push    esi
0x79AB01: mov     esi, ecx
0x79AB03: cmp     dword ptr [esi+18h], 10h
0x79AB07: jb      short loc_79AB15
0x79AB09: mov     eax, [esi+4]
0x79AB0C: push    eax
0x79AB0D: call    FormHeapFree
0x79AB12: add     esp, 4
0x79AB15: xor     eax, eax
0x79AB17: mov     dword ptr [esi+18h], 0Fh
0x79AB1E: mov     [esi+14h], eax
0x79AB21: mov     [esi+4], al
0x79AB24: pop     esi
0x79AB25: retn
