0x75FA90: push    ebx
0x75FA91: mov     ebx, [esp+4+a2]
0x75FA95: push    esi
0x75FA96: push    edi
0x75FA97: mov     edi, ecx
0x75FA99: mov     esi, [edi]
0x75FA9B: cmp     esi, ebx
0x75FA9D: jz      short loc_75FACF
0x75FA9F: test    esi, esi
0x75FAA1: jz      short loc_75FABF
0x75FAA3: lea     eax, [esi+4]
0x75FAA6: push    eax; lpAddend
0x75FAA7: call    dword ptr ds:0A2807Ch
0x75FAAD: test    eax, eax
0x75FAAF: jnz     short loc_75FABF
0x75FAB1: test    esi, esi
0x75FAB3: jz      short loc_75FABF
0x75FAB5: mov     edx, [esi]
0x75FAB7: mov     eax, [edx]
0x75FAB9: push    1
0x75FABB: mov     ecx, esi
0x75FABD: call    eax
0x75FABF: test    ebx, ebx
0x75FAC1: mov     [edi], ebx
0x75FAC3: jz      short loc_75FACF
0x75FAC5: add     ebx, 4
0x75FAC8: push    ebx; lpAddend
0x75FAC9: call    dword ptr ds:0A28078h
0x75FACF: mov     eax, edi
0x75FAD1: pop     edi
0x75FAD2: pop     esi
0x75FAD3: pop     ebx
0x75FAD4: retn    4
