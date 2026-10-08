0x725870: mov     eax, ds:0B3FD88h
0x725875: push    eax
0x725876: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x72587B: add     esp, 4
0x72587E: mov     dword ptr ds:0B3FD88h, 0
0x725888: retn
