0x674860: mov     edx, [esp+arg_0]
0x674864: test    edx, edx
0x674866: jz      short loc_6748A1
0x674868: cmp     edx, ds:0B333C4h
0x67486E: jz      short loc_6748A1
0x674870: lea     eax, [ecx+60h]
0x674873: test    eax, eax
0x674875: push    esi
0x674876: jz      short loc_674895
0x674878: mov     esi, [esp+4+arg_4]
0x67487C: lea     esp, [esp+0]
0x674880: mov     ecx, [eax]
0x674882: test    ecx, ecx
0x674884: jz      short loc_674895
0x674886: test    esi, esi
0x674888: jle     short loc_674895
0x67488A: cmp     ecx, edx
0x67488C: jz      short loc_67489B
0x67488E: mov     eax, [eax+4]
0x674891: test    eax, eax
0x674893: jnz     short loc_674880
0x674895: xor     al, al
0x674897: pop     esi
0x674898: retn    8
0x67489B: mov     al, 1
0x67489D: pop     esi
0x67489E: retn    8
0x6748A1: mov     al, 1
0x6748A3: retn    8
