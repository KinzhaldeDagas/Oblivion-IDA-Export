0x6B74F0: test    ecx, ecx
0x6B74F2: mov     eax, ecx
0x6B74F4: jz      short locret_6B751D
0x6B74F6: push    esi
0x6B74F7: mov     esi, [esp+4+arg_0]
0x6B74FB: jmp     short loc_6B7500
0x6B74FD: align 10h
0x6B7500: mov     edx, [eax+4]
0x6B7503: test    edx, edx
0x6B7505: jnz     short loc_6B750B
0x6B7507: cmp     [eax], edx
0x6B7509: jz      short loc_6B751C
0x6B750B: cmp     esi, [eax]
0x6B750D: jz      short loc_6B7519
0x6B750F: mov     eax, edx
0x6B7511: test    eax, eax
0x6B7513: jnz     short loc_6B7500
0x6B7515: pop     esi
0x6B7516: retn    4
0x6B7519: mov     [ecx+8], eax
0x6B751C: pop     esi
0x6B751D: retn    4
