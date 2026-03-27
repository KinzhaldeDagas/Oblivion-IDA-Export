0x7C5A10: push    ebx
0x7C5A11: push    esi
0x7C5A12: mov     ebx, ecx
0x7C5A14: mov     esi, [ebx+130h]
0x7C5A1A: push    edi
0x7C5A1B: mov     edi, [esp+0Ch+arg_0]
0x7C5A1F: cmp     esi, edi
0x7C5A21: jz      short loc_7C5A57
0x7C5A23: test    esi, esi
0x7C5A25: jz      short loc_7C5A43
0x7C5A27: lea     eax, [esi+4]
0x7C5A2A: push    eax; lpAddend
0x7C5A2B: call    dword ptr ds:0A2807Ch
0x7C5A31: test    eax, eax
0x7C5A33: jnz     short loc_7C5A43
0x7C5A35: test    esi, esi
0x7C5A37: jz      short loc_7C5A43
0x7C5A39: mov     edx, [esi]
0x7C5A3B: mov     eax, [edx]
0x7C5A3D: push    1
0x7C5A3F: mov     ecx, esi
0x7C5A41: call    eax
0x7C5A43: test    edi, edi
0x7C5A45: mov     [ebx+130h], edi
0x7C5A4B: jz      short loc_7C5A57
0x7C5A4D: add     edi, 4
0x7C5A50: push    edi; lpAddend
0x7C5A51: call    dword ptr ds:0A28078h
0x7C5A57: pop     edi
0x7C5A58: pop     esi
0x7C5A59: pop     ebx
0x7C5A5A: retn    4
