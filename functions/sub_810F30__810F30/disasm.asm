0x810F30: push    ebx
0x810F31: mov     ebx, ecx
0x810F33: cmp     dword ptr [ebx+24h], 0
0x810F37: push    esi
0x810F38: push    edi
0x810F39: jz      short loc_810F5B
0x810F3B: lea     esi, [ebx+8Ch]
0x810F41: mov     edi, 4
0x810F46: mov     ecx, [esi]
0x810F48: test    ecx, ecx
0x810F4A: jz      short loc_810F53
0x810F4C: mov     eax, [ecx]
0x810F4E: mov     edx, [eax+5Ch]
0x810F51: call    edx
0x810F53: add     esi, 4
0x810F56: sub     edi, 1
0x810F59: jnz     short loc_810F46
0x810F5B: lea     esi, [ebx+9Ch]
0x810F61: mov     edi, 2
0x810F66: mov     ecx, [esi]
0x810F68: test    ecx, ecx
0x810F6A: jz      short loc_810F73
0x810F6C: mov     eax, [ecx]
0x810F6E: mov     edx, [eax+44h]
0x810F71: call    edx
0x810F73: add     esi, 4
0x810F76: sub     edi, 1
0x810F79: jnz     short loc_810F66
0x810F7B: pop     edi
0x810F7C: pop     esi
0x810F7D: mov     ecx, ebx
0x810F7F: pop     ebx
0x810F80: jmp     sub_77A4A0
