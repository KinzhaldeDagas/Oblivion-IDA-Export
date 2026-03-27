0x5E6160: mov     eax, [ecx]
0x5E6162: mov     edx, [eax+330h]
0x5E6168: call    edx
0x5E616A: test    eax, eax
0x5E616C: jz      short loc_5E6181
0x5E616E: mov     eax, [eax+70h]
0x5E6171: cmp     eax, 5
0x5E6174: jz      short loc_5E617B
0x5E6176: cmp     eax, 6
0x5E6179: jnz     short loc_5E6181
0x5E617B: mov     eax, 1
0x5E6180: retn
0x5E6181: xor     eax, eax
0x5E6183: retn
