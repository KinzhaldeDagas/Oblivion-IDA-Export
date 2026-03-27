0x787810: mov     edx, [ecx+8]
0x787813: test    edx, edx
0x787815: jnz     short loc_787821
0x787817: xor     eax, eax
0x787819: cmp     [ecx], eax
0x78781B: sbb     eax, eax
0x78781D: add     eax, 1
0x787820: retn
0x787821: mov     eax, [ecx+0Ch]
0x787824: sub     eax, edx
0x787826: cmp     [ecx], eax
0x787828: sbb     eax, eax
0x78782A: add     eax, 1
0x78782D: retn
