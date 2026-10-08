0x732A20: mov     eax, [ecx+4]
0x732A23: push    eax
0x732A24: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x732A29: pop     ecx
0x732A2A: retn
