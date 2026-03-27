0x673A50: mov     eax, ecx
0x673A52: mov     ecx, [esp+a2]
0x673A56: cmp     ecx, 3; switch 4 cases
0x673A59: ja      short def_673A5B; jumptable 00673A5B default case
0x673A5B: jmp     ds:jpt_673A5B[ecx*4]; switch jump
0x673A62: add     eax, 68h ; 'h'; jumptable 00673A5B case 0
0x673A65: retn    4
0x673A68: add     eax, 0Ch; jumptable 00673A5B case 2
0x673A6B: retn    4
0x673A6E: add     eax, 18h; jumptable 00673A5B case 3
0x673A71: retn    4
0x673A74: xor     eax, eax; jumptable 00673A5B default case
0x673A76: retn    4; jumptable 00673A5B case 1
