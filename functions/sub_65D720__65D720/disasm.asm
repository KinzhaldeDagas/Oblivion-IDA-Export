0x65D720: mov     eax, [ecx+5DCh]
0x65D726: test    eax, eax
0x65D728: jnz     short locret_65D741
0x65D72A: cmp     [ecx+588h], al
0x65D730: jnz     short loc_65D73C
0x65D732: mov     eax, [ecx+5CCh]
0x65D738: test    eax, eax
0x65D73A: jnz     short locret_65D741
0x65D73C: jmp     TESObjectREFR_GetAnimData
0x65D741: retn
