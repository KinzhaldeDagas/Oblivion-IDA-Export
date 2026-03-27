0x611CE0: mov     eax, [ecx+58h]
0x611CE3: mov     eax, [eax+8]
0x611CE6: test    eax, eax
0x611CE8: jz      short loc_611CF3
0x611CEA: cmp     byte ptr [eax+20h], 1Bh
0x611CEE: jnz     short loc_611CF3
0x611CF0: mov     al, 1
0x611CF2: retn
0x611CF3: xor     al, al
0x611CF5: retn
