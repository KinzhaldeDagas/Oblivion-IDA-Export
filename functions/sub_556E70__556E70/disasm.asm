0x556E70: push    ebx
0x556E71: push    esi
0x556E72: mov     esi, ecx
0x556E74: mov     ebx, [esi+8]
0x556E77: cmp     [esi+4], ebx
0x556E7A: push    edi
0x556E7B: jbe     short loc_556E82
0x556E7D: call    __invalid_parameter_noinfo
0x556E82: mov     edi, [esi+4]
0x556E85: cmp     edi, [esi+8]
0x556E88: jbe     short loc_556E8F
0x556E8A: call    __invalid_parameter_noinfo
0x556E8F: cmp     edi, ebx
0x556E91: jz      short loc_556EB0
0x556E93: mov     eax, [esi+8]
0x556E96: sub     eax, ebx
0x556E98: test    eax, eax
0x556E9A: push    ebp; MaxCount
0x556E9B: lea     ebp, [eax+edi]
0x556E9E: jle     short loc_556EAC
0x556EA0: push    eax; Src
0x556EA1: push    ebx; Src
0x556EA2: push    eax; DstSize
0x556EA3: push    edi; Dst
0x556EA4: call    _memmove_s
0x556EA9: add     esp, 10h
0x556EAC: mov     [esi+8], ebp
0x556EAF: pop     ebp
0x556EB0: pop     edi
0x556EB1: pop     esi
0x556EB2: pop     ebx
0x556EB3: retn
