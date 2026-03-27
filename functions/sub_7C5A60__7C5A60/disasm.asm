0x7C5A60: push    ebx
0x7C5A61: push    esi
0x7C5A62: mov     ebx, ecx
0x7C5A64: mov     esi, [ebx+140h]
0x7C5A6A: push    edi
0x7C5A6B: mov     edi, [esp+0Ch+arg_0]
0x7C5A6F: cmp     esi, edi
0x7C5A71: jz      short loc_7C5AA7
0x7C5A73: test    esi, esi
0x7C5A75: jz      short loc_7C5A93
0x7C5A77: lea     eax, [esi+4]
0x7C5A7A: push    eax; lpAddend
0x7C5A7B: call    dword ptr ds:0A2807Ch
0x7C5A81: test    eax, eax
0x7C5A83: jnz     short loc_7C5A93
0x7C5A85: test    esi, esi
0x7C5A87: jz      short loc_7C5A93
0x7C5A89: mov     edx, [esi]
0x7C5A8B: mov     eax, [edx]
0x7C5A8D: push    1
0x7C5A8F: mov     ecx, esi
0x7C5A91: call    eax
0x7C5A93: test    edi, edi
0x7C5A95: mov     [ebx+140h], edi
0x7C5A9B: jz      short loc_7C5AA7
0x7C5A9D: add     edi, 4
0x7C5AA0: push    edi; lpAddend
0x7C5AA1: call    dword ptr ds:0A28078h
0x7C5AA7: pop     edi
0x7C5AA8: pop     esi
0x7C5AA9: pop     ebx
0x7C5AAA: retn    4
