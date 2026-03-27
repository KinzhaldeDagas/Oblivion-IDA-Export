0x673A90: push    ebx
0x673A91: mov     ebx, [esp+4+arg_4]
0x673A95: cmp     ebx, 3; switch 4 cases
0x673A98: push    esi
0x673A99: push    edi
0x673A9A: ja      short def_673A9C
0x673A9C: jmp     ds:jpt_673A9C[ebx*4]; switch jump
0x673AA3: lea     esi, [ecx+68h]; jumptable 00673A9C case 0
0x673AA6: jmp     short loc_673AB8
0x673AA8: mov     esi, ecx; jumptable 00673A9C case 1
0x673AAA: jmp     short loc_673AB8
0x673AAC: lea     esi, [ecx+0Ch]; jumptable 00673A9C case 2
0x673AAF: jmp     short loc_673AB8
0x673AB1: lea     esi, [ecx+18h]; jumptable 00673A9C case 3
0x673AB4: jmp     short loc_673AB8
