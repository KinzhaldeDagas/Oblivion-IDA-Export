0x401000: push    esi
0x401001: mov     esi, ecx
0x401003: push    esi; lpCriticalSection
0x401004: call    ds:InitializeCriticalSection
0x40100A: mov     eax, esi
0x40100C: pop     esi
0x40100D: retn
