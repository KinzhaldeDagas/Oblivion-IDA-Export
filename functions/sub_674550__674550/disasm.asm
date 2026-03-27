0x674550: push    esi
0x674551: mov     esi, ecx
0x674553: call    sub_579440
0x674558: mov     eax, [esp+4+arg_4]
0x67455C: cmp     eax, 3; switch 4 cases
0x67455F: ja      short def_674561
0x674561: jmp     ds:jpt_674561[eax*4]; switch jump
0x674568: lea     ecx, [esi+68h]; jumptable 00674561 case 0
0x67456B: jmp     short loc_67457D
0x67456D: mov     ecx, esi; jumptable 00674561 case 1
0x67456F: jmp     short loc_67457D
0x674571: lea     ecx, [esi+0Ch]; jumptable 00674561 case 2
0x674574: jmp     short loc_67457D
0x674576: lea     ecx, [esi+18h]; jumptable 00674561 case 3
0x674579: jmp     short loc_67457D
