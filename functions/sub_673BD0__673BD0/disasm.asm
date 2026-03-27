0x673BD0: mov     eax, [esp+arg_0]
0x673BD4: cmp     eax, 3; switch 4 cases
0x673BD7: ja      short def_673BD9
0x673BD9: jmp     ds:jpt_673BD9[eax*4]; switch jump
0x673BE0: add     ecx, 68h ; 'h'; jumptable 00673BD9 case 0
0x673BE3: jmp     short loc_673BED; jumptable 00673BD9 case 1
0x673BE5: add     ecx, 0Ch; jumptable 00673BD9 case 2
0x673BE8: jmp     short loc_673BED; jumptable 00673BD9 case 1
0x673BEA: add     ecx, 18h; jumptable 00673BD9 case 3
0x673BED: test    ecx, ecx; jumptable 00673BD9 case 1
0x673BEF: jz      short def_673BD9
0x673BF1: call    sub_67B430
