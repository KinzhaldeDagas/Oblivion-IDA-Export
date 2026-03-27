0x6B6A50: push    edi
0x6B6A51: mov     edi, ecx
0x6B6A53: cmp     dword ptr [edi+50h], 0
0x6B6A57: jz      short loc_6B6A92
0x6B6A59: mov     eax, [edi+50h]
0x6B6A5C: mov     ecx, [eax]
0x6B6A5E: push    esi
0x6B6A5F: mov     esi, [esp+8+arg_0]
0x6B6A63: mov     edx, esi
0x6B6A65: or      edx, 8
0x6B6A68: push    edx
0x6B6A69: push    0
0x6B6A6B: push    0
0x6B6A6D: push    eax
0x6B6A6E: mov     eax, [ecx+30h]
0x6B6A71: call    eax
0x6B6A73: cmp     eax, 80070057h
0x6B6A78: jnz     short loc_6B6A8D
0x6B6A7A: mov     eax, [edi+50h]
0x6B6A7D: mov     ecx, [eax]
0x6B6A7F: mov     edx, [ecx+30h]
0x6B6A82: or      esi, 4
0x6B6A85: push    esi
0x6B6A86: push    0
0x6B6A88: push    0
0x6B6A8A: push    eax
0x6B6A8B: call    edx
0x6B6A8D: pop     esi
0x6B6A8E: pop     edi
0x6B6A8F: retn    4
0x6B6A92: mov     eax, 80004005h
0x6B6A97: pop     edi
0x6B6A98: retn    4
