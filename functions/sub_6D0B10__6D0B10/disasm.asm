0x6D0B10: movzx   eax, [esp+arg_4]
0x6D0B15: mov     ecx, [ecx+54h]
0x6D0B18: push    ebx
0x6D0B19: mov     ebx, [esp+4+arg_0]
0x6D0B1D: push    esi
0x6D0B1E: mov     esi, [ecx+eax*4]
0x6D0B21: cmp     esi, ebx
0x6D0B23: push    edi
0x6D0B24: lea     edi, [ecx+eax*4]
0x6D0B27: jz      short loc_6D0B59
0x6D0B29: test    esi, esi
0x6D0B2B: jz      short loc_6D0B49
0x6D0B2D: lea     edx, [esi+4]
0x6D0B30: push    edx; lpAddend
0x6D0B31: call    dword ptr ds:0A2807Ch
0x6D0B37: test    eax, eax
0x6D0B39: jnz     short loc_6D0B49
0x6D0B3B: test    esi, esi
0x6D0B3D: jz      short loc_6D0B49
0x6D0B3F: mov     eax, [esi]
0x6D0B41: mov     edx, [eax]
0x6D0B43: push    1
0x6D0B45: mov     ecx, esi
0x6D0B47: call    edx
0x6D0B49: test    ebx, ebx
0x6D0B4B: mov     [edi], ebx
0x6D0B4D: jz      short loc_6D0B59
0x6D0B4F: add     ebx, 4
0x6D0B52: push    ebx; lpAddend
0x6D0B53: call    dword ptr ds:0A28078h
0x6D0B59: pop     edi
0x6D0B5A: pop     esi
0x6D0B5B: pop     ebx
0x6D0B5C: retn    8
