0x9F8DD0: mov     eax, 1
0x9F8DD5: push    0; lpName
0x9F8DD7: push    eax; lMaximumCount
0x9F8DD8: mov     ds:0B39B88h, eax
0x9F8DDD: mov     dword ptr unk_B39B8C, eax
0x9F8DE2: mov     eax, ds:0B39B88h
0x9F8DE7: push    eax; lInitialCount
0x9F8DE8: push    0; lpSemaphoreAttributes
0x9F8DEA: call    ds:CreateSemaphoreA
0x9F8DF0: push    offset sub_A23300; void (__cdecl *)()
0x9F8DF5: mov     ds:0B39B90h, eax
0x9F8DFA: call    _atexit
0x9F8DFF: pop     ecx
0x9F8E00: retn
