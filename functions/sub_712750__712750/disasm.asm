0x712750: mov     ecx, [ecx+254h]
0x712756: test    ecx, ecx
0x712758: jz      short loc_712761
0x71275A: mov     eax, [ecx]
0x71275C: mov     eax, [eax+4]
0x71275F: jmp     eax
0x712761: xor     eax, eax
0x712763: retn    8
