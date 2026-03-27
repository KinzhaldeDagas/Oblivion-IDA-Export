0x452230: mov     eax, [esp+arg_0]
0x452234: push    esi
0x452235: mov     esi, ecx
0x452237: push    eax; void *
0x452238: mov     ecx, offset FormHeap
0x45223D: call    MemoryHeap_Free_checked
0x452242: mov     dword ptr [esi+14h], 0
0x452249: pop     esi
0x45224A: retn    4
