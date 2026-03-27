0x6B7C00: mov     eax, [ecx+8]
0x6B7C03: test    eax, eax
0x6B7C05: jz      short loc_6B7C0D
0x6B7C07: mov     eax, [eax+4]
0x6B7C0A: mov     [ecx+8], eax
0x6B7C0D: xor     eax, eax
0x6B7C0F: cmp     [ecx+8], eax
0x6B7C12: setnz   al
0x6B7C15: retn
