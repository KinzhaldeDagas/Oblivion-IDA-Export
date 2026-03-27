0x46AF30: mov     eax, ds:0B33C14h
0x46AF35: push    eax; void *
0x46AF36: mov     ecx, offset FormHeap
0x46AF3B: call    MemoryHeap_Free_checked
0x46AF40: mov     dword ptr ds:0B33C14h, 0
0x46AF4A: retn
