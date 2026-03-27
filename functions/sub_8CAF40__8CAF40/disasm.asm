0x8CAF40: push    esi
0x8CAF41: mov     esi, [ecx+6Ch]
0x8CAF44: xor     eax, eax
0x8CAF46: test    esi, esi
0x8CAF48: jle     short loc_8CAF78
0x8CAF4A: mov     edx, [ecx+68h]
0x8CAF4D: push    edi
0x8CAF4E: mov     edi, [esp+8+arg_0]
0x8CAF52: cmp     [edx], edi
0x8CAF54: jz      short loc_8CAF63
0x8CAF56: inc     eax
0x8CAF57: add     edx, 4
0x8CAF5A: cmp     eax, esi
0x8CAF5C: jl      short loc_8CAF52
0x8CAF5E: pop     edi
0x8CAF5F: pop     esi
0x8CAF60: retn    4
0x8CAF63: test    eax, eax
0x8CAF65: jl      short loc_8CAF77
0x8CAF67: mov     edx, [ecx+6Ch]
0x8CAF6A: dec     edx
0x8CAF6B: mov     [ecx+6Ch], edx
0x8CAF6E: mov     ecx, [ecx+68h]
0x8CAF71: mov     edx, [ecx+edx*4]
0x8CAF74: mov     [ecx+eax*4], edx
0x8CAF77: pop     edi
0x8CAF78: pop     esi
0x8CAF79: retn    4
