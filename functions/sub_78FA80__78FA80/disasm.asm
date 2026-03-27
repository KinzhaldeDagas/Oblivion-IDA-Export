0x78FA80: mov     edx, [ecx+4]
0x78FA83: test    edx, edx
0x78FA85: jnz     short loc_78FA8A
0x78FA87: xor     eax, eax
0x78FA89: retn
0x78FA8A: mov     eax, [ecx+8]
0x78FA8D: sub     eax, edx
0x78FA8F: sar     eax, 2
0x78FA92: retn
