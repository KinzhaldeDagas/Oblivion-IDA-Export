0x6DFA70: push    ebx
0x6DFA71: mov     ebx, [esp+4+arg_0]
0x6DFA75: push    edi
0x6DFA76: push    ebx
0x6DFA77: mov     edi, ecx
0x6DFA79: call    sub_6E7270
0x6DFA7E: test    al, al
0x6DFA80: jnz     short loc_6DFA87
0x6DFA82: pop     edi
0x6DFA83: pop     ebx
0x6DFA84: retn    4
0x6DFA87: push    esi
0x6DFA88: xor     esi, esi
0x6DFA8A: add     edi, 38h ; '8'
0x6DFA8D: lea     ecx, [ecx+0]
0x6DFA90: mov     ecx, [edi]
0x6DFA92: test    ecx, ecx
0x6DFA94: jz      short loc_6DFAA2
0x6DFA96: mov     eax, [ecx]
0x6DFA98: mov     edx, [eax+24h]
0x6DFA9B: push    ebx
0x6DFA9C: call    edx
0x6DFA9E: test    al, al
0x6DFAA0: jz      short loc_6DFAB5
0x6DFAA2: add     esi, 1
0x6DFAA5: add     edi, 4
0x6DFAA8: cmp     esi, 3
0x6DFAAB: jb      short loc_6DFA90
0x6DFAAD: pop     esi
0x6DFAAE: pop     edi
0x6DFAAF: mov     al, 1
0x6DFAB1: pop     ebx
0x6DFAB2: retn    4
0x6DFAB5: pop     esi
0x6DFAB6: pop     edi
0x6DFAB7: xor     al, al
0x6DFAB9: pop     ebx
0x6DFABA: retn    4
