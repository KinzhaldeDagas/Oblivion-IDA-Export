0x9D7E40: mov     eax, ds:DefaultHeapSzie
0x9D7E45: push    0
0x9D7E47: shl     eax, 14h
0x9D7E4A: push    eax
0x9D7E4B: mov     ecx, offset FormHeap
0x9D7E50: call    MemoryHeap_constr??
0x9D7E55: push    offset sub_A16400; void (__cdecl *)()
0x9D7E5A: call    _atexit
0x9D7E5F: pop     ecx
0x9D7E60: retn
