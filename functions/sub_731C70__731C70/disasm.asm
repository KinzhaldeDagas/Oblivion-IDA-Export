0x731C70: mov     eax, [esp+arg_4]
0x731C74: mov     ecx, [eax+0B0h]
0x731C7A: push    esi
0x731C7B: mov     esi, [esp+4+arg_0]
0x731C7F: mov     eax, [esi]
0x731C81: test    eax, eax
0x731C83: jz      short loc_731CD4
0x731C85: mov     edx, [eax+4]
0x731C88: mov     edx, [edx+0B0h]
0x731C8E: cmp     ecx, edx
0x731C90: jl      short loc_731CD4
0x731C92: jnz     short loc_731CA3
0x731C94: mov     ecx, [eax]
0x731C96: push    eax
0x731C97: mov     [esi], ecx
0x731C99: call    FormHeapFree
0x731C9E: add     esp, 4
0x731CA1: pop     esi
0x731CA2: retn
0x731CA3: mov     edx, eax
0x731CA5: mov     eax, [eax]
0x731CA7: test    eax, eax
0x731CA9: jz      short loc_731CD4
0x731CAB: jmp     short loc_731CB0
0x731CAD: align 10h
0x731CB0: mov     esi, [eax+4]
0x731CB3: cmp     ecx, [esi+0B0h]
0x731CB9: jle     short loc_731CC5
0x731CBB: mov     edx, eax
0x731CBD: mov     eax, [eax]
0x731CBF: test    eax, eax
0x731CC1: jnz     short loc_731CB0
0x731CC3: pop     esi
0x731CC4: retn
0x731CC5: jnz     short loc_731CD4
0x731CC7: mov     ecx, [eax]
0x731CC9: push    eax
0x731CCA: mov     [edx], ecx
0x731CCC: call    FormHeapFree
0x731CD1: add     esp, 4
0x731CD4: pop     esi
0x731CD5: retn
