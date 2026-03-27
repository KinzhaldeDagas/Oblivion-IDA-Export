0x4C99A0: test    byte ptr [ecx+24h], 1
0x4C99A4: jz      short loc_4C99B1
0x4C99A6: mov     eax, [ecx+3Ch]
0x4C99A9: test    eax, eax
0x4C99AB: jz      short loc_4C99B1
0x4C99AD: mov     eax, [eax+18h]
0x4C99B0: retn
0x4C99B1: xor     eax, eax
0x4C99B3: retn
