0x605ED0: lea     eax, [ecx+1Ch]
0x605ED3: test    eax, eax
0x605ED5: jz      short loc_605EEB
0x605ED7: mov     ecx, [esp+arg_0]
0x605EDB: jmp     short loc_605EE0
0x605EDD: align 10h
0x605EE0: cmp     [eax], ecx
0x605EE2: jz      short loc_605EEB
0x605EE4: mov     eax, [eax+4]
0x605EE7: test    eax, eax
0x605EE9: jnz     short loc_605EE0
0x605EEB: xor     ecx, ecx
0x605EED: test    eax, eax
0x605EEF: setnz   cl
0x605EF2: mov     al, cl
0x605EF4: retn    4
