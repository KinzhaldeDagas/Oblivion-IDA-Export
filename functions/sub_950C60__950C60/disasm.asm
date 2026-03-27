0x950C60: mov     eax, [esp+arg_0]
0x950C64: push    esi
0x950C65: push    edi
0x950C66: mov     edi, [ecx+14h]
0x950C69: xor     esi, esi
0x950C6B: test    edi, edi
0x950C6D: mov     edx, eax
0x950C6F: jle     short loc_950C93
0x950C71: xor     edi, edi
0x950C73: push    ebx
0x950C74: mov     ebx, [ecx+10h]
0x950C77: movaps  xmm0, xmmword ptr [ebx+edi]
0x950C7B: movaps  xmmword ptr [edx], xmm0
0x950C7E: mov     ebx, [ecx+0Ch]
0x950C81: mov     [edx+0Ch], ebx
0x950C84: mov     ebx, [ecx+14h]
0x950C87: add     edx, 10h
0x950C8A: inc     esi
0x950C8B: add     edi, 10h
0x950C8E: cmp     esi, ebx
0x950C90: jl      short loc_950C74
0x950C92: pop     ebx
0x950C93: pop     edi
0x950C94: pop     esi
0x950C95: retn    4
