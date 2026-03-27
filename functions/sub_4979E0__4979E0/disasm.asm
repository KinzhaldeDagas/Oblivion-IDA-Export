0x4979E0: mov     eax, [esp+arg_0]
0x4979E4: cmp     eax, 11h; switch 18 cases
0x4979E7: ja      short def_4979E9; jumptable 004979E9 default case, case 0
0x4979E9: jmp     ds:jpt_4979E9[eax*4]; switch jump
0x4979F0: mov     eax, 14h; jumptable 004979E9 case 1
0x4979F5: retn
0x4979F6: mov     eax, 15h; jumptable 004979E9 case 2
0x4979FB: retn
0x4979FC: mov     eax, 16h; jumptable 004979E9 case 3
0x497A01: retn
0x497A02: mov     eax, 17h; jumptable 004979E9 case 4
0x497A07: retn
0x497A08: mov     eax, 18h; jumptable 004979E9 case 5
0x497A0D: retn
0x497A0E: mov     eax, 19h; jumptable 004979E9 case 6
0x497A13: retn
0x497A14: mov     eax, 1Ah; jumptable 004979E9 case 7
0x497A19: retn
0x497A1A: mov     eax, 1Bh; jumptable 004979E9 case 8
0x497A1F: retn
0x497A20: mov     eax, 1Ch; jumptable 004979E9 case 9
0x497A25: retn
0x497A26: mov     eax, 1Dh; jumptable 004979E9 case 10
0x497A2B: retn
0x497A2C: mov     eax, 1Eh; jumptable 004979E9 case 11
0x497A31: retn
0x497A32: mov     eax, 6Fh ; 'o'; jumptable 004979E9 case 12
0x497A37: retn
0x497A38: mov     eax, 70h ; 'p'; jumptable 004979E9 case 13
0x497A3D: retn
0x497A3E: mov     eax, 71h ; 'q'; jumptable 004979E9 case 14
0x497A43: retn
0x497A44: mov     eax, 72h ; 'r'; jumptable 004979E9 case 15
0x497A49: retn
0x497A4A: mov     eax, 73h ; 's'; jumptable 004979E9 case 16
0x497A4F: retn
0x497A50: mov     eax, 74h ; 't'; jumptable 004979E9 case 17
0x497A55: retn
0x497A56: xor     eax, eax; jumptable 004979E9 default case, case 0
0x497A58: retn
