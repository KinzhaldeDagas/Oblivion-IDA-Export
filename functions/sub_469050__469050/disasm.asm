0x469050: movzx   eax, word ptr [ecx+4]
0x469054: mov     cl, al
0x469056: shr     cl, 6
0x469059: test    cl, 1
0x46905C: jnz     short loc_469070
0x46905E: mov     dl, al
0x469060: shr     dl, 7
0x469063: test    dl, 1
0x469066: jnz     short loc_469070
0x469068: test    ah, 1
0x46906B: jnz     short loc_469070
0x46906D: xor     eax, eax
0x46906F: retn
0x469070: mov     eax, 1
0x469075: retn
