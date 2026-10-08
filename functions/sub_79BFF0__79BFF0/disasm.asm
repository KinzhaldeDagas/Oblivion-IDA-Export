0x79BFF0: push    esi; OBLIVION AUTHORITY (2026-08-30): Compiler-folded stdcall destructor for a 0x10-byte vector owner. Frees and clears the pointer triplet. Calls from SFrondGuide destruction reflect its first-member vector layout; calls from vector<vector<float>> operate directly on inner float vectors.
0x79BFF1: mov     esi, [esp+4+this]
0x79BFF5: mov     eax, [esi+4]
0x79BFF8: test    eax, eax
0x79BFFA: jz      short loc_79C005
0x79BFFC: push    eax
0x79BFFD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79C002: add     esp, 4
0x79C005: mov     dword ptr [esi+4], 0
0x79C00C: mov     dword ptr [esi+8], 0
0x79C013: mov     dword ptr [esi+0Ch], 0
0x79C01A: pop     esi
0x79C01B: retn    4
