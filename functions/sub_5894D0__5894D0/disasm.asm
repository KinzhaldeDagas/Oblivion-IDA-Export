0x5894D0: test    ecx, ecx
0x5894D2: jz      short loc_5894EB
0x5894D4: cmp     dword ptr [ecx+24h], 0
0x5894D8: jnz     short loc_5894E4
0x5894DA: mov     ecx, [ecx+10h]
0x5894DD: test    ecx, ecx
0x5894DF: jnz     short loc_5894D4
0x5894E1: xor     eax, eax
0x5894E3: retn
0x5894E4: mov     eax, [ecx+24h]
0x5894E7: test    eax, eax
0x5894E9: jnz     short locret_5894ED
0x5894EB: xor     eax, eax
0x5894ED: retn
