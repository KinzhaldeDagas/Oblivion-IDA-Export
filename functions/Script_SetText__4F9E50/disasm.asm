0x4F9E50: push    ebp
0x4F9E51: mov     ebp, ecx
0x4F9E53: mov     eax, [ebp+2Ch]
0x4F9E56: test    eax, eax
0x4F9E58: jz      short loc_4F9E65
0x4F9E5A: push    eax; void *
0x4F9E5B: mov     ecx, offset FormHeap
0x4F9E60: call    MemoryHeap_Free_checked
0x4F9E65: mov     eax, [esp+4+Src]
0x4F9E69: test    eax, eax
0x4F9E6B: jz      short loc_4F9EB4
0x4F9E6D: lea     edx, [eax+1]
0x4F9E70: mov     cl, [eax]
0x4F9E72: add     eax, 1
0x4F9E75: test    cl, cl
0x4F9E77: jnz     short loc_4F9E70
0x4F9E79: push    ebx
0x4F9E7A: push    esi
0x4F9E7B: push    edi
0x4F9E7C: sub     eax, edx
0x4F9E7E: mov     edi, eax
0x4F9E80: push    1
0x4F9E82: lea     ebx, [edi+1]
0x4F9E85: push    ebx
0x4F9E86: mov     ecx, offset FormHeap
0x4F9E8B: call    j_MemoryHeap_Alloc
0x4F9E90: push    ebx
0x4F9E91: mov     esi, eax
0x4F9E93: push    0
0x4F9E95: push    esi
0x4F9E96: call    __memset
0x4F9E9B: mov     eax, [esp+1Ch+Src]
0x4F9E9F: push    edi; Size
0x4F9EA0: push    eax; Src
0x4F9EA1: push    esi; Dst
0x4F9EA2: mov     [ebp+2Ch], esi
0x4F9EA5: call    _memcpy
0x4F9EAA: add     esp, 18h
0x4F9EAD: pop     edi
0x4F9EAE: pop     esi
0x4F9EAF: pop     ebx
0x4F9EB0: pop     ebp
0x4F9EB1: retn    4
0x4F9EB4: mov     dword ptr [ebp+2Ch], 0
0x4F9EBB: pop     ebp
0x4F9EBC: retn    4
