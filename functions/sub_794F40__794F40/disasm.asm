0x794F40: push    ebx
0x794F41: push    esi
0x794F42: mov     esi, ecx
0x794F44: mov     ebx, [esi+8]
0x794F47: cmp     [esi+4], ebx
0x794F4A: push    edi
0x794F4B: jbe     short loc_794F52
0x794F4D: call    __invalid_parameter_noinfo
0x794F52: mov     edi, [esi+4]
0x794F55: cmp     edi, [esi+8]
0x794F58: jbe     short loc_794F5F
0x794F5A: call    __invalid_parameter_noinfo
0x794F5F: cmp     edi, ebx
0x794F61: jz      short loc_794F85
0x794F63: mov     eax, [esi+8]
0x794F66: sub     eax, ebx
0x794F68: sar     eax, 1
0x794F6A: test    eax, eax
0x794F6C: lea     ecx, [eax+eax]
0x794F6F: push    ebp; MaxCount
0x794F70: lea     ebp, [ecx+edi]
0x794F73: jle     short loc_794F81
0x794F75: push    ecx; Src
0x794F76: push    ebx; Src
0x794F77: push    ecx; DstSize
0x794F78: push    edi; Dst
0x794F79: call    _memmove_s
0x794F7E: add     esp, 10h
0x794F81: mov     [esi+8], ebp
0x794F84: pop     ebp
0x794F85: pop     edi
0x794F86: pop     esi
0x794F87: pop     ebx
0x794F88: retn
