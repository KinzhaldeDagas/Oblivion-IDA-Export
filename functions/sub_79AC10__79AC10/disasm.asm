0x79AC10: push    esi
0x79AC11: mov     esi, [esp+4+arg_0]
0x79AC15: cmp     dword ptr [esi+18h], 10h
0x79AC19: jb      short loc_79AC27
0x79AC1B: mov     eax, [esi+4]
0x79AC1E: push    eax
0x79AC1F: call    FormHeapFree
0x79AC24: add     esp, 4
0x79AC27: xor     eax, eax
0x79AC29: mov     dword ptr [esi+18h], 0Fh
0x79AC30: mov     [esi+14h], eax
0x79AC33: mov     [esi+4], al
0x79AC36: pop     esi
0x79AC37: retn    4
