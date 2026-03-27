0x89FE90: mov     al, [esp+arg_0]
0x89FE94: cmp     al, 41h ; 'A'
0x89FE96: jz      short loc_89FEAC
0x89FE98: cmp     al, 61h ; 'a'
0x89FE9A: jz      short loc_89FEAC
0x89FE9C: test    ecx, ecx
0x89FE9E: jz      short loc_89FEBC
0x89FEA0: mov     ecx, [ecx+8]
0x89FEA3: test    ecx, ecx
0x89FEA5: jz      short loc_89FEBC
0x89FEA7: mov     eax, [ecx+1Ch]
0x89FEAA: jmp     short loc_89FEBE
0x89FEAC: test    ecx, ecx
0x89FEAE: jz      short loc_89FEBC
0x89FEB0: mov     ecx, [ecx+8]
0x89FEB3: test    ecx, ecx
0x89FEB5: jz      short loc_89FEBC
0x89FEB7: mov     eax, [ecx+18h]
0x89FEBA: jmp     short loc_89FEBE
0x89FEBC: xor     eax, eax
0x89FEBE: test    eax, eax
0x89FEC0: jz      short loc_89FEC8
0x89FEC2: mov     eax, [eax+0Ch]
0x89FEC5: retn    4
0x89FEC8: xor     eax, eax
0x89FECA: retn    4
