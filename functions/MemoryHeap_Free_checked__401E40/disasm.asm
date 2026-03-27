0x401E40: mov     eax, [esp+arg_0]
0x401E44: test    eax, eax
0x401E46: jz      short MemoryHeap_Free_checked___Done
0x401E48: mov     [esp+arg_0], eax
0x401E4C: jmp     MemoryHeap_Free
0x401E51: retn    4
