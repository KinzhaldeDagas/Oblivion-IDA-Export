0x98765B: cmp     word ptr ds:400000h, 5A4Dh
0x987664: jnz     short loc_987699
0x987666: mov     eax, ds:40003Ch
0x98766B: cmp     dword ptr [eax+400000h], 4550h
0x987675: jnz     short loc_987699
0x987677: cmp     word ptr [eax+400018h], 10Bh
0x987680: jnz     short loc_987699
0x987682: cmp     dword ptr [eax+400074h], 0Eh
0x987689: jbe     short loc_987699
0x98768B: xor     ecx, ecx
0x98768D: cmp     [eax+4000E8h], ecx
0x987693: setnz   cl
0x987696: mov     eax, ecx
0x987698: retn
0x987699: xor     eax, eax
0x98769B: retn
