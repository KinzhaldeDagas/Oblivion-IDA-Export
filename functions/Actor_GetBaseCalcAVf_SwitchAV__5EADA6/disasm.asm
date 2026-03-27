0x5EADA6: lea     eax, [ebp-25h]
0x5EADA9: cmp     eax, 2
0x5EADAC: ja      short loc_5EAD50
0x5EADAE: mov     eax, ebp
0x5EADB0: sub     eax, 25h ; '%'
0x5EADB3: jz      short Actor_GetBaseCalcAVf___GetBounty
0x5EADB5: sub     eax, 1
0x5EADB8: jz      short Actor_GetBaseCalcAVf___GetFame
0x5EADBA: sub     eax, 1
0x5EADBD: jnz     short loc_5EAD50
