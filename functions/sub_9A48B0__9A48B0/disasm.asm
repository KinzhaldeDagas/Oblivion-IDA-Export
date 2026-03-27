0x9A48B0: mov     eax, [esp+arg_0]
0x9A48B4: add     eax, 0FFFFFFFFh; switch 87 cases
0x9A48B7: cmp     eax, 56h
0x9A48BA: ja      short def_9A48C3
0x9A48BC: movzx   eax, ds:byte_9A4900[eax]
0x9A48C3: jmp     ds:jpt_9A48C3[eax*4]; switch jump
0x9A48CA: xor     eax, eax; jumptable 009A48C3 cases 1-24,37-68
0x9A48CC: cmp     [esp+arg_4], 3
0x9A48D1: setnz   al
0x9A48D4: add     eax, 8
0x9A48D7: retn
0x9A48D8: mov     eax, 9; jumptable 009A48C3 cases 25-32,34,36
0x9A48DD: retn
0x9A48DE: mov     eax, 8; jumptable 009A48C3 cases 33,35
0x9A48E3: retn
0x9A48E4: mov     eax, 7; jumptable 009A48C3 cases 69-87
0x9A48E9: retn
