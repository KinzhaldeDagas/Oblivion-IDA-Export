0x98C8A6: push    ebx
0x98C8A7: mov     ebx, ds:DeleteCriticalSection
0x98C8AD: push    esi
0x98C8AE: mov     esi, offset lpCriticalSection
0x98C8B3: push    edi
0x98C8B4: mov     edi, [esi]
0x98C8B6: test    edi, edi
0x98C8B8: jz      short loc_98C8CD
0x98C8BA: cmp     dword ptr [esi+4], 1
0x98C8BE: jz      short loc_98C8CD
0x98C8C0: push    edi; lpCriticalSection
0x98C8C1: call    ebx ; DeleteCriticalSection
0x98C8C3: push    edi; Memory
0x98C8C4: call    _free
0x98C8C9: and     dword ptr [esi], 0
0x98C8CC: pop     ecx
0x98C8CD: add     esi, 8
0x98C8D0: cmp     esi, offset unk_B311E0
0x98C8D6: jl      short loc_98C8B4
0x98C8D8: mov     esi, offset lpCriticalSection
0x98C8DD: pop     edi
0x98C8DE: mov     eax, [esi]
0x98C8E0: test    eax, eax
0x98C8E2: jz      short loc_98C8ED
0x98C8E4: cmp     dword ptr [esi+4], 1
0x98C8E8: jnz     short loc_98C8ED
0x98C8EA: push    eax; lpCriticalSection
0x98C8EB: call    ebx ; DeleteCriticalSection
0x98C8ED: add     esi, 8
0x98C8F0: cmp     esi, offset unk_B311E0
0x98C8F6: jl      short loc_98C8DE
0x98C8F8: pop     esi
0x98C8F9: pop     ebx
0x98C8FA: retn
