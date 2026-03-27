0x7877B0: mov     eax, [ecx+6Ch]
0x7877B3: test    eax, eax
0x7877B5: jnz     short loc_7877C5
0x7877B7: xor     ecx, ecx
0x7877B9: mov     eax, 0AAAAAAABh
0x7877BE: mul     ecx
0x7877C0: mov     eax, edx
0x7877C2: shr     eax, 1
0x7877C4: retn
0x7877C5: mov     ecx, [ecx+70h]
0x7877C8: sub     ecx, eax
0x7877CA: sar     ecx, 2
0x7877CD: mov     eax, 0AAAAAAABh
0x7877D2: mul     ecx
0x7877D4: mov     eax, edx
0x7877D6: shr     eax, 1
0x7877D8: retn
