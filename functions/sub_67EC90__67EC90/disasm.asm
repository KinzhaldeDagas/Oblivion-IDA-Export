0x67EC90: movzx   eax, byte ptr [ecx+10h]; Verified returns stateFlags bit 0x02; graph searches set it after processing a node and use it to avoid reprocessing.
0x67EC94: shr     eax, 1
0x67EC96: and     al, 1
0x67EC98: retn
