0x54AFB0: mov     eax, [esp+arg_0]
0x54AFB4: cmp     eax, 3; switch 4 cases
0x54AFB7: ja      short def_54AFB9
0x54AFB9: jmp     ds:jpt_54AFB9[eax*4]; switch jump
0x54AFC0: cmp     dword ptr [ecx+30h], 0; jumptable 0054AFB9 case 1
0x54AFC4: setz    al
0x54AFC7: retn    4
0x54AFCA: cmp     dword ptr [ecx+0E8h], 0; jumptable 0054AFB9 case 0
0x54AFD1: setz    al
0x54AFD4: retn    4
0x54AFD7: cmp     dword ptr [ecx+8Ch], 0; jumptable 0054AFB9 case 2
0x54AFDE: setz    al
0x54AFE1: retn    4
0x54AFE4: cmp     dword ptr [ecx+144h], 0; jumptable 0054AFB9 case 3
0x54AFEB: setz    al
0x54AFEE: retn    4
