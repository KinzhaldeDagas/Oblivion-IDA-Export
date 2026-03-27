0x4BCB70: push    ebx
0x4BCB71: mov     ebx, [esp+4+arg_0]
0x4BCB75: push    esi
0x4BCB76: push    edi
0x4BCB77: mov     edi, ecx
0x4BCB79: mov     esi, [edi]
0x4BCB7B: cmp     esi, ebx
0x4BCB7D: jz      short loc_4BCBAF
0x4BCB7F: test    esi, esi
0x4BCB81: jz      short loc_4BCB9F
0x4BCB83: lea     eax, [esi+8]
0x4BCB86: push    eax; lpAddend
0x4BCB87: call    dword ptr ds:0A2807Ch
0x4BCB8D: test    eax, eax
0x4BCB8F: jnz     short loc_4BCB9F
0x4BCB91: test    esi, esi
0x4BCB93: jz      short loc_4BCB9F
0x4BCB95: mov     edx, [esi]
0x4BCB97: mov     eax, [edx]
0x4BCB99: push    1
0x4BCB9B: mov     ecx, esi
0x4BCB9D: call    eax
0x4BCB9F: test    ebx, ebx
0x4BCBA1: mov     [edi], ebx
0x4BCBA3: jz      short loc_4BCBAF
0x4BCBA5: add     ebx, 8
0x4BCBA8: push    ebx; lpAddend
0x4BCBA9: call    dword ptr ds:0A28078h
0x4BCBAF: mov     eax, edi
0x4BCBB1: pop     edi
0x4BCBB2: pop     esi
0x4BCBB3: pop     ebx
0x4BCBB4: retn    4
