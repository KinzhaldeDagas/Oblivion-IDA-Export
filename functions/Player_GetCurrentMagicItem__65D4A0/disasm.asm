0x65D4A0: mov     eax, [ecx+624h]
0x65D4A6: test    eax, eax
0x65D4A8: jnz     short locret_65D4B9
0x65D4AA: call    Magic_GetDefaultPlayerSpell
0x65D4AF: test    eax, eax
0x65D4B1: jz      short loc_65D4B7
0x65D4B3: add     eax, 18h
0x65D4B6: retn
0x65D4B7: xor     eax, eax
0x65D4B9: retn
