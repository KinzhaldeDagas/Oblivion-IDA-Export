0x98CA04: push    140h; dwBytes
0x98CA09: push    0; dwFlags
0x98CA0B: push    dword_BA9E10+49Ch; hHeap
0x98CA11: call    ds:HeapAlloc
0x98CA17: test    eax, eax
0x98CA19: mov     ds:0BAABC8h, eax
0x98CA1E: jnz     short loc_98CA21
0x98CA20: retn
0x98CA21: mov     ecx, [esp+arg_0]
0x98CA25: and     dword_BA9E10+498h, 0
0x98CA2C: and     dword ptr unk_BAABC4, 0
0x98CA33: mov     dword ptr unk_BAABD0, eax
0x98CA38: xor     eax, eax
0x98CA3A: mov     dword ptr unk_BAABCC, ecx
0x98CA40: mov     dword ptr unk_BAABD4, 10h
0x98CA4A: inc     eax
0x98CA4B: retn
