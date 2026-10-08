0x67ED20: movzx   eax, byte ptr [ecx+10h]; Verified returns stateFlags bit 0x10, used as an actor-specific cached underwater result.
0x67ED24: shr     eax, 4
0x67ED27: and     al, 1
0x67ED29: retn
