0x98CA04: push    140h; dwBytes
0x98CA09: push    0; dwFlags
0x98CA0B: push    hHeap; hHeap
0x98CA11: call    ds:HeapAlloc
0x98CA17: test    eax, eax
0x98CA19: mov     lpMem, eax
0x98CA1E: jnz     short loc_98CA21
0x98CA20: retn
0x98CA21: mov     ecx, [esp+arg_0]
0x98CA25: and     dword_BAA2A8, 0
0x98CA2C: and     dword_BAABC4, 0
0x98CA33: mov     dword_BAABD0, eax
0x98CA38: xor     eax, eax
0x98CA3A: mov     dword_BAABCC, ecx
0x98CA40: mov     dword_BAABD4, 10h
0x98CA4A: inc     eax
0x98CA4B: retn
