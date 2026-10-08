0x67ECF0: movzx   eax, byte ptr [ecx+10h]; Verified returns stateFlags bit 0x08, the PathGrid loader's below-water point flag.
0x67ECF4: shr     eax, 3
0x67ECF7: and     al, 1
0x67ECF9: retn
