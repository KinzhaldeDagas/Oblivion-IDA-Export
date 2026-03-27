0x6E6710: cmp     [esp+arg_0], 0
0x6E6716: jnz     short loc_6E6730
0x6E6718: mov     eax, [ecx]
0x6E671A: mov     edx, [eax+9Ch]
0x6E6720: push    0
0x6E6722: call    edx
0x6E6724: xor     ecx, ecx
0x6E6726: cmp     ecx, eax
0x6E6728: sbb     eax, eax
0x6E672A: add     eax, 1
0x6E672D: retn    4
0x6E6730: xor     al, al
0x6E6732: retn    4
