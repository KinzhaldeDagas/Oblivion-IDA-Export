0x68E75B: mov     ecx, [esi+8]
0x68E75E: mov     edx, [ecx]
0x68E760: mov     eax, [edx+18h]
0x68E763: call    eax
0x68E765: cmp     eax, 7
0x68E768: jnz     short loc_68E776
0x68E76A: mov     eax, [esi+8]
0x68E76D: test    eax, eax
0x68E76F: jz      short loc_68E776
0x68E771: lea     ecx, [eax-24h]
0x68E774: jmp     short ActiveEffect_Base_ProcessEffect___TestEdible
0x68E776: xor     ecx, ecx
