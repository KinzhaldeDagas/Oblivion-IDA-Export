0x4D7010: cmp     [esp+arg_0], 0
0x4D7015: mov     eax, [ecx+8]
0x4D7018: jz      short loc_4D7025
0x4D701A: or      eax, 80000h
0x4D701F: mov     [ecx+8], eax
0x4D7022: retn    4
0x4D7025: and     eax, 0FFF7FFFFh
0x4D702A: mov     [ecx+8], eax
0x4D702D: retn    4
