0x7AEC60: push    ebx
0x7AEC61: push    esi
0x7AEC62: mov     ebx, ecx
0x7AEC64: mov     esi, [ebx+44h]
0x7AEC67: push    edi
0x7AEC68: mov     edi, [esp+0Ch+a2]
0x7AEC6C: cmp     esi, edi
0x7AEC6E: jz      short loc_7AECA1
0x7AEC70: test    esi, esi
0x7AEC72: jz      short loc_7AEC90
0x7AEC74: lea     eax, [esi+4]
0x7AEC77: push    eax; lpAddend
0x7AEC78: call    dword ptr ds:0A2807Ch
0x7AEC7E: test    eax, eax
0x7AEC80: jnz     short loc_7AEC90
0x7AEC82: test    esi, esi
0x7AEC84: jz      short loc_7AEC90
0x7AEC86: mov     edx, [esi]
0x7AEC88: mov     eax, [edx]
0x7AEC8A: push    1
0x7AEC8C: mov     ecx, esi
0x7AEC8E: call    eax
0x7AEC90: test    edi, edi
0x7AEC92: mov     [ebx+44h], edi
0x7AEC95: jz      short loc_7AECA1
0x7AEC97: add     edi, 4
0x7AEC9A: push    edi; lpAddend
0x7AEC9B: call    dword ptr ds:0A28078h
0x7AECA1: pop     edi
0x7AECA2: pop     esi
0x7AECA3: pop     ebx
0x7AECA4: retn    4
