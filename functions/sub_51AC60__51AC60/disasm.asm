0x51AC60: movzx   eax, word ptr [ecx+8]; Anim key weapon-prefix extractor. Returns the weapon prefix nibble from key word bits 0x0F00.
0x51AC64: shr     eax, 8
0x51AC67: and     eax, 0Fh
0x51AC6A: retn
