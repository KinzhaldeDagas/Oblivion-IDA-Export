0x51AC80: mov     eax, [esp+arg_0]
0x51AC84: cmp     ax, 0FFh
0x51AC88: jnz     short loc_51AC8D
0x51AC8A: xor     al, al
0x51AC8C: retn
0x51AC8D: movzx   eax, al
0x51AC90: lea     eax, [eax+eax*8]
0x51AC93: mov     eax, ds:0B102ECh[eax*4]
0x51AC9A: cmp     eax, 5
0x51AC9D: jz      short loc_51ACB1
0x51AC9F: cmp     eax, 4
0x51ACA2: jz      short loc_51ACB1
0x51ACA4: cmp     eax, 7
0x51ACA7: jz      short loc_51ACB1
0x51ACA9: cmp     eax, 6
0x51ACAC: jz      short loc_51ACB1
0x51ACAE: xor     eax, eax
0x51ACB0: retn
0x51ACB1: mov     eax, 1
0x51ACB6: retn
