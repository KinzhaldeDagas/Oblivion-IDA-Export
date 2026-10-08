0x4346D0: mov     eax, ecx; QueuedTreeModel IO dispatch helper: forwards this queued entry to ioManager vtable slot 0x3C.
0x4346D2: mov     ecx, ds:0B33A10h
0x4346D8: mov     edx, [ecx]
0x4346DA: push    eax
0x4346DB: mov     eax, [edx+3Ch]
0x4346DE: call    eax
0x4346E0: retn
