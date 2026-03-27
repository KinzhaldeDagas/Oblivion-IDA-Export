0x51CEC0: mov     eax, [ecx+28h]
0x51CEC3: shr     eax, 8
0x51CEC6: test    al, 1
0x51CEC8: jnz     short loc_51CEEF
0x51CECA: lea     ebx, [ebx+0]
0x51CED0: mov     edx, [ecx+28h]
0x51CED3: shr     edx, 8
0x51CED6: test    dl, 1
0x51CED9: jnz     short loc_51CF09
0x51CEDB: mov     ecx, [ecx+100h]
0x51CEE1: test    ecx, ecx
0x51CEE3: jz      short loc_51CF09
0x51CEE5: mov     eax, [ecx+28h]
0x51CEE8: shr     eax, 8
0x51CEEB: test    al, 1
0x51CEED: jz      short loc_51CED0
0x51CEEF: mov     edx, [ecx+28h]
0x51CEF2: shr     edx, 8
0x51CEF5: test    dl, 1
0x51CEF8: jz      short loc_51CF09
0x51CEFA: mov     ecx, [ecx+100h]
0x51CF00: test    ecx, ecx
0x51CF02: jz      short loc_51CF09
0x51CF04: jmp     loc_519900
0x51CF09: xor     eax, eax
0x51CF0B: retn    4
