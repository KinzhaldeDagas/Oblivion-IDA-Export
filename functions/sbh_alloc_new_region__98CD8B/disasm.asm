0x98CD8B: mov     eax, dword_BAABD4
0x98CD90: push    esi
0x98CD91: mov     esi, dword_BAABC4
0x98CD97: push    edi; flProtect
0x98CD98: xor     edi, edi
0x98CD9A: cmp     esi, eax
0x98CD9C: jnz     short loc_98CDD2
0x98CD9E: add     eax, 10h
0x98CDA1: imul    eax, 14h
0x98CDA4: push    eax; dwBytes
0x98CDA5: push    lpMem; lpMem
0x98CDAB: push    edi; dwFlags
0x98CDAC: push    hHeap; hHeap
0x98CDB2: call    ds:HeapReAlloc
0x98CDB8: cmp     eax, edi
0x98CDBA: jnz     short loc_98CDC0
0x98CDBC: xor     eax, eax
0x98CDBE: jmp     short loc_98CE38
0x98CDC0: add     dword_BAABD4, 10h
0x98CDC7: mov     esi, dword_BAABC4
0x98CDCD: mov     lpMem, eax
0x98CDD2: imul    esi, 14h
0x98CDD5: add     esi, lpMem
0x98CDDB: push    41C4h; dwBytes
0x98CDE0: push    8; dwFlags
0x98CDE2: push    hHeap; hHeap
0x98CDE8: call    ds:HeapAlloc
0x98CDEE: cmp     eax, edi
0x98CDF0: mov     [esi+10h], eax
0x98CDF3: jz      short loc_98CDBC
0x98CDF5: push    4; flAllocationType
0x98CDF7: push    2000h; flAllocationType
0x98CDFC: push    100000h; dwSize
0x98CE01: push    edi; lpAddress
0x98CE02: call    ds:VirtualAlloc
0x98CE08: cmp     eax, edi
0x98CE0A: mov     [esi+0Ch], eax
0x98CE0D: jnz     short loc_98CE21
0x98CE0F: push    dword ptr [esi+10h]; lpMem
0x98CE12: push    edi; dwFlags
0x98CE13: push    hHeap; hHeap
0x98CE19: call    ds:HeapFree
0x98CE1F: jmp     short loc_98CDBC
0x98CE21: or      dword ptr [esi+8], 0FFFFFFFFh
0x98CE25: mov     [esi], edi
0x98CE27: mov     [esi+4], edi
0x98CE2A: inc     dword_BAABC4
0x98CE30: mov     eax, [esi+10h]
0x98CE33: or      dword ptr [eax], 0FFFFFFFFh
0x98CE36: mov     eax, esi
0x98CE38: pop     edi
0x98CE39: pop     esi
0x98CE3A: retn
