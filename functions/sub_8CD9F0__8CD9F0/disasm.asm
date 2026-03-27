0x8CD9F0: mov     edx, [ecx+94h]
0x8CD9F6: push    esi
0x8CD9F7: xor     eax, eax
0x8CD9F9: test    edx, edx
0x8CD9FB: jle     short loc_8CDA13
0x8CD9FD: mov     ecx, [ecx+90h]
0x8CDA03: mov     esi, [esp+4+arg_4]
0x8CDA07: cmp     [ecx], esi
0x8CDA09: jz      short loc_8CDA1E
0x8CDA0B: inc     eax
0x8CDA0C: add     ecx, 4
0x8CDA0F: cmp     eax, edx
0x8CDA11: jl      short loc_8CDA07
0x8CDA13: mov     eax, [esp+4+arg_0]
0x8CDA17: mov     byte ptr [eax], 0
0x8CDA1A: pop     esi
0x8CDA1B: retn    8
0x8CDA1E: mov     eax, [esp+4+arg_0]
0x8CDA22: mov     byte ptr [eax], 1
0x8CDA25: pop     esi
0x8CDA26: retn    8
