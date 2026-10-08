0x401F20: mov     eax, [esp+arg_0]; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x401F24: test    eax, eax
0x401F26: jz      short locret_401F33
0x401F28: push    eax
0x401F29: mov     ecx, offset FormHeap
0x401F2E: call    MemoryHeap_Free
0x401F33: retn
