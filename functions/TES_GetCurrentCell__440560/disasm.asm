0x440560: mov     eax, [ecx+34h]
0x440563: test    eax, eax
0x440565: jnz     short locret_440586
0x440567: mov     edx, [ecx+20h]
0x44056A: cmp     edx, 7FFFFFFFh
0x440570: jz      short loc_440584
0x440572: mov     eax, [ecx+24h]
0x440575: cmp     eax, 7FFFFFFFh
0x44057A: jz      short loc_440584
0x44057C: push    eax; a3
0x44057D: push    edx; a2
0x44057E: call    TES_GetCellFromCoords
0x440583: retn
0x440584: xor     eax, eax
0x440586: retn
