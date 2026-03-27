0x4B4C80: mov     al, [ecx+6Ah]
0x4B4C83: and     al, 80h
0x4B4C85: neg     al
0x4B4C87: sbb     eax, eax
0x4B4C89: and     eax, 0FFFFFFF7h
0x4B4C8C: add     eax, 1Bh
0x4B4C8F: retn
