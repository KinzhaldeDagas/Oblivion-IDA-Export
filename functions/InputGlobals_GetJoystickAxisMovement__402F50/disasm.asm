0x402F50: mov     eax, [esp+whichDevice]
0x402F54: lea     eax, [eax+eax*4]
0x402F57: shl     eax, 5
0x402F5A: lea     ecx, [eax+ecx+30h]
0x402F5E: mov     eax, [esp+a3]
0x402F62: add     eax, 0FFFFFFFFh; switch 6 cases
0x402F65: cmp     eax, 5
0x402F68: ja      short def_402F6A
0x402F6A: jmp     ds:jpt_402F6A[eax*4]; switch jump
0x402F71: mov     eax, [ecx]; jumptable 00402F6A case 1
0x402F73: retn    8
0x402F76: mov     eax, [ecx+4]; jumptable 00402F6A case 2
0x402F79: retn    8
0x402F7C: mov     eax, [ecx+8]; jumptable 00402F6A case 3
0x402F7F: retn    8
0x402F82: mov     eax, [ecx+0Ch]; jumptable 00402F6A case 4
0x402F85: retn    8
0x402F88: mov     eax, [ecx+10h]; jumptable 00402F6A case 5
0x402F8B: retn    8
0x402F8E: mov     eax, [ecx+14h]; jumptable 00402F6A case 6
0x402F91: retn    8
