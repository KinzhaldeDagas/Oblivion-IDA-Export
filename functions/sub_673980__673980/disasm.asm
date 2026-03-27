0x673980: mov     ecx, [esp+arg_0]
0x673984: or      eax, 0FFFFFFFFh
0x673987: cmp     ecx, 27h; switch 40 cases
0x67398A: ja      short def_67398C
0x67398C: jmp     ds:jpt_67398C[ecx*4]; switch jump
0x673993: mov     eax, 3; jumptable 0067398C cases 1-3,6,9,13,17,18,20,23
0x673998: retn
0x673999: mov     eax, 4; jumptable 0067398C cases 4,5,10,22,26,28,30,32
0x67399E: retn
0x67399F: mov     eax, 5; jumptable 0067398C cases 8,11,27,33
0x6739A4: retn
0x6739A5: mov     eax, 2; jumptable 0067398C cases 0,7,12,14-16,19,21,24,25,29,31,34-39
