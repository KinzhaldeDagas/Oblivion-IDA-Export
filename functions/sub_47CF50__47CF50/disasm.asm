0x47CF50: push    esi
0x47CF51: mov     esi, ecx
0x47CF53: mov     ecx, [esi+4]
0x47CF56: push    offset aResume_thread; lpCriticalSection
0x47CF5B: call    NiEnterCriticalSection
0x47CF60: cmp     byte ptr [esi+18h], 0
0x47CF64: jnz     short loc_47CF8A
0x47CF66: mov     eax, [esi+8]
0x47CF69: push    0FFFFFFFFh; nPriority
0x47CF6B: push    eax; hThread
0x47CF6C: call    dword ptr ds:0A280ECh
0x47CF72: mov     ecx, [esi+4]; lpCriticalSection
0x47CF75: mov     byte ptr [esi+18h], 1
0x47CF79: call    NiLeaveCriticalSection_0
0x47CF7E: mov     ecx, [esi+8]
0x47CF81: push    ecx; hThread
0x47CF82: call    dword ptr ds:0A280F0h
0x47CF88: pop     esi
0x47CF89: retn
0x47CF8A: mov     ecx, [esi+4]; lpCriticalSection
0x47CF8D: pop     esi
0x47CF8E: jmp     NiLeaveCriticalSection_0
