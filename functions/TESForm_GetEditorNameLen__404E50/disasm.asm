0x404E50: cmp     byte_B333F4, 0
0x404E57: jnz     short loc_404E84
0x404E59: mov     byte_B333F4, 1
0x404E60: mov     eax, [ecx]
0x404E62: mov     edx, [eax+0D4h]
0x404E68: call    edx
0x404E6A: test    eax, eax
0x404E6C: mov     byte_B333F4, 0
0x404E73: jz      short loc_404E84
0x404E75: lea     edx, [eax+1]
0x404E78: mov     cl, [eax]
0x404E7A: add     eax, 1
0x404E7D: test    cl, cl
0x404E7F: jnz     short loc_404E78
0x404E81: sub     eax, edx
0x404E83: retn
0x404E84: xor     eax, eax
0x404E86: retn
