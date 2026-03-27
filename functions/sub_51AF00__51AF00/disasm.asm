0x51AF00: movzx   eax, byte ptr [ecx+8]
0x51AF04: and     eax, 0FFh
0x51AF09: cmp     eax, 21h; switch 34 cases
0x51AF0C: ja      short def_51AF15; jumptable 0051AF15 default case, cases 2-26,28-32
0x51AF0E: movzx   eax, ds:byte_51AF2C[eax]
0x51AF15: jmp     ds:jpt_51AF15[eax*4]; switch jump
0x51AF1C: mov     al, 1; jumptable 0051AF15 cases 0,1,27,33
0x51AF1E: retn
0x51AF1F: xor     al, al; jumptable 0051AF15 default case, cases 2-26,28-32
0x51AF21: retn
