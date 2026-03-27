0x4F9DF0: push    ebx
0x4F9DF1: push    esi
0x4F9DF2: mov     esi, ecx
0x4F9DF4: mov     eax, [esi+30h]
0x4F9DF7: push    eax; void *
0x4F9DF8: mov     ecx, offset FormHeap
0x4F9DFD: call    MemoryHeap_Free_checked
0x4F9E02: mov     ebx, [esp+8+arg_0]
0x4F9E06: test    ebx, ebx
0x4F9E08: mov     dword ptr [esi+30h], 0
0x4F9E0F: mov     [esi+20h], ebx
0x4F9E12: jz      short loc_4F9E43
0x4F9E14: push    edi
0x4F9E15: push    1
0x4F9E17: push    ebx
0x4F9E18: mov     ecx, offset FormHeap
0x4F9E1D: call    j_MemoryHeap_Alloc
0x4F9E22: push    ebx
0x4F9E23: mov     edi, eax
0x4F9E25: push    0
0x4F9E27: push    edi
0x4F9E28: call    __memset
0x4F9E2D: mov     ecx, [esi+20h]
0x4F9E30: mov     edx, [esp+18h+Src]
0x4F9E34: push    ecx; Size
0x4F9E35: push    edx; Src
0x4F9E36: push    edi; Dst
0x4F9E37: mov     [esi+30h], edi
0x4F9E3A: call    _memcpy
0x4F9E3F: add     esp, 18h
0x4F9E42: pop     edi
0x4F9E43: pop     esi
0x4F9E44: pop     ebx
0x4F9E45: retn    8
