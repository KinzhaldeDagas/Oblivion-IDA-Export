0x41DF10: cmp     [esp+arg_0], 0
0x41DF15: jz      short loc_41DF22
0x41DF17: mov     al, [ecx+0Bh]
0x41DF1A: shr     al, 4
0x41DF1D: and     al, 1
0x41DF1F: retn    4
0x41DF22: test    byte ptr [ecx+0Bh], 18h
0x41DF26: jnz     short loc_41DF2D
0x41DF28: xor     al, al
0x41DF2A: retn    4
0x41DF2D: mov     al, 1
0x41DF2F: retn    4
