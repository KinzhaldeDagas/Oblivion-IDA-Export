0x628DD0: mov     eax, [ecx]
0x628DD2: mov     edx, [eax+4D0h]
0x628DD8: call    edx
0x628DDA: cmp     eax, 4; switch 5 cases
0x628DDD: ja      short def_628DDF
0x628DDF: jmp     ds:jpt_628DDF[eax*4]; switch jump
0x628DE6: mov     eax, offset aDefault_0; jumptable 00628DDF case 0
0x628DEB: retn
0x628DEC: mov     eax, offset aAction; jumptable 00628DDF case 1
0x628DF1: retn
0x628DF2: mov     eax, offset aScript_0; jumptable 00628DDF case 2
0x628DF7: retn
0x628DF8: mov     eax, offset aCombat; jumptable 00628DDF case 3
0x628DFD: retn
0x628DFE: mov     eax, offset aDialog; jumptable 00628DDF case 4
0x628E03: retn
