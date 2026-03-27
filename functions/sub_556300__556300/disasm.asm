0x556300: mov     edx, [ecx+4]
0x556303: test    edx, edx
0x556305: jnz     short loc_55630A
0x556307: xor     eax, eax
0x556309: retn
0x55630A: mov     eax, [ecx+8]
0x55630D: sub     eax, edx
0x55630F: sar     eax, 6
0x556312: retn
