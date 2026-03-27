0x77FE50: mov     eax, ds:0B29FB8h
0x77FE55: cmp     eax, 0FFFFFFFFh
0x77FE58: push    edi
0x77FE59: mov     edi, ecx
0x77FE5B: mov     ecx, offset dword_B29FB8
0x77FE60: jz      short loc_77FE9E
0x77FE62: push    ebx
0x77FE63: push    esi
0x77FE64: mov     esi, ecx
0x77FE66: mov     edx, [ecx+4]
0x77FE69: mov     [edi+eax*8+120h], edx
0x77FE70: mov     [edi+eax*8+124h], edx
0x77FE77: mov     ebx, [ecx+4]
0x77FE7A: mov     eax, [edi+0FF8h]
0x77FE80: mov     ecx, [ecx]
0x77FE82: mov     edx, [eax]
0x77FE84: mov     edx, [edx+0E4h]
0x77FE8A: push    ebx
0x77FE8B: push    ecx
0x77FE8C: push    eax
0x77FE8D: call    edx
0x77FE8F: mov     eax, [esi+8]
0x77FE92: add     esi, 8
0x77FE95: cmp     eax, 0FFFFFFFFh
0x77FE98: mov     ecx, esi
0x77FE9A: jnz     short loc_77FE66
0x77FE9C: pop     esi
0x77FE9D: pop     ebx
0x77FE9E: pop     edi
0x77FE9F: retn
