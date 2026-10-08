0xA1C100: mov     eax, dword_B361CC+3Ch
0xA1C105: test    eax, eax
0xA1C107: jz      short locret_A1C110
0xA1C109: push    eax
0xA1C10A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1C10F: pop     ecx
0xA1C110: retn
