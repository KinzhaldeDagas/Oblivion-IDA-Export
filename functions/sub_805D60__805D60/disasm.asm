0x805D60: push    ebx
0x805D61: push    esi
0x805D62: mov     esi, ecx
0x805D64: push    edi
0x805D65: lea     edi, [esi+7Ch]
0x805D68: mov     ebx, 2
0x805D6D: lea     ecx, [ecx+0]
0x805D70: mov     ecx, [edi]
0x805D72: mov     eax, [esi]
0x805D74: mov     edx, [eax+94h]
0x805D7A: push    ecx
0x805D7B: mov     ecx, esi
0x805D7D: call    edx
0x805D7F: add     edi, 4
0x805D82: sub     ebx, 1
0x805D85: jnz     short loc_805D70
0x805D87: pop     edi
0x805D88: pop     esi
0x805D89: pop     ebx
0x805D8A: retn
