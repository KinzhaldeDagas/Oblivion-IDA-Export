0x401F00: mov     eax, [esp+Size]
0x401F04: push    1; int
0x401F06: push    eax; Size
0x401F07: mov     ecx, offset FormHeap
0x401F0C: call    MemoryHeap_Allocate
0x401F11: retn
