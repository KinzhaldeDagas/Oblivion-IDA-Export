0x68E73D: mov     ecx, [esi+8]
0x68E740: mov     edx, [ecx]
0x68E742: mov     eax, [edx+18h]
0x68E745: push    edi
0x68E746: call    eax
0x68E748: cmp     eax, 8
0x68E74B: jnz     short loc_68E759
0x68E74D: mov     eax, [esi+8]
0x68E750: test    eax, eax
0x68E752: jz      short loc_68E759
0x68E754: lea     edi, [eax-24h]
0x68E757: jmp     short ActiveEffect_Base_ProcessEffect___TestPotion
0x68E759: xor     edi, edi
