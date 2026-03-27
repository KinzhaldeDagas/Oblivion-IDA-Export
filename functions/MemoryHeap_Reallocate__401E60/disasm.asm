0x401E60: push    ebx
0x401E61: mov     ebx, [esp+4+Src]
0x401E65: push    ebp
0x401E66: push    esi
0x401E67: push    edi
0x401E68: push    ebx; Memory
0x401E69: mov     esi, ecx
0x401E6B: call    MemoryHeap_SizeOf
0x401E70: mov     ebp, eax
0x401E72: test    ebp, ebp
0x401E74: jz      short loc_401ECC
0x401E76: mov     edi, [esp+10h+NewSize]
0x401E7A: cmp     edi, 8
0x401E7D: jnb     short loc_401E84
0x401E7F: mov     edi, 8
0x401E84: mov     esi, [esi+4]
0x401E87: lea     eax, [esi-1]
0x401E8A: test    edi, eax
0x401E8C: jz      short loc_401E94
0x401E8E: add     edi, esi
0x401E90: not     eax
0x401E92: and     edi, eax
0x401E94: push    1; int
0x401E96: push    edi; Size
0x401E97: mov     ecx, offset FormHeap
0x401E9C: call    MemoryHeap_Allocate
0x401EA1: cmp     ebp, edi
0x401EA3: mov     esi, eax
0x401EA5: jle     short loc_401EA9
0x401EA7: mov     ebp, edi
0x401EA9: push    ebp; Size
0x401EAA: push    ebx; Src
0x401EAB: push    esi; Dst
0x401EAC: call    _memcpy
0x401EB1: add     esp, 0Ch
0x401EB4: test    ebx, ebx
0x401EB6: jz      short loc_401EC3
0x401EB8: push    ebx
0x401EB9: mov     ecx, offset FormHeap
0x401EBE: call    MemoryHeap_Free
0x401EC3: pop     edi
0x401EC4: mov     eax, esi
0x401EC6: pop     esi
0x401EC7: pop     ebp
0x401EC8: pop     ebx
0x401EC9: retn    8
0x401ECC: push    ebx; Memory
0x401ECD: call    __msize
0x401ED2: mov     edx, [esi]
0x401ED4: neg     eax
0x401ED6: add     esp, 4
0x401ED9: push    eax
0x401EDA: mov     eax, [edx]
0x401EDC: mov     ecx, esi
0x401EDE: call    eax
0x401EE0: mov     edx, [esi]
0x401EE2: mov     edi, [esp+10h+NewSize]
0x401EE6: mov     eax, [edx]
0x401EE8: push    edi
0x401EE9: mov     ecx, esi
0x401EEB: call    eax
0x401EED: push    edi; NewSize
0x401EEE: push    ebx; Memory
0x401EEF: call    _realloc
0x401EF4: add     esp, 8
0x401EF7: pop     edi
0x401EF8: pop     esi
0x401EF9: pop     ebp
0x401EFA: pop     ebx
0x401EFB: retn    8
