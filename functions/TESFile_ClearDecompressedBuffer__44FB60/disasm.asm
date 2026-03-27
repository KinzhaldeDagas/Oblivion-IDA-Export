0x44FB60: push    esi
0x44FB61: mov     esi, ecx
0x44FB63: mov     eax, [esi+414h]
0x44FB69: test    eax, eax
0x44FB6B: jz      short loc_44FB8C
0x44FB6D: push    eax; void *
0x44FB6E: mov     ecx, offset FormHeap
0x44FB73: call    MemoryHeap_Free_checked
0x44FB78: mov     dword ptr [esi+414h], 0
0x44FB82: mov     dword ptr [esi+418h], 0
0x44FB8C: pop     esi
0x44FB8D: retn
