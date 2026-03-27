0x469920: test    byte ptr [ecx+4], 1
0x469924: jz      short loc_469941
0x469926: cmp     dword ptr [ecx+8], 0
0x46992A: lea     eax, [ecx+8]
0x46992D: jz      short loc_469941
0x46992F: mov     ecx, [esp+a2]
0x469933: mov     edx, [eax]
0x469935: cmp     [edx+4], ecx
0x469938: jz      short loc_469946
0x46993A: mov     eax, [eax+4]
0x46993D: test    eax, eax
0x46993F: jnz     short loc_469933
0x469941: xor     al, al
0x469943: retn    4
0x469946: mov     al, 1
0x469948: retn    4
