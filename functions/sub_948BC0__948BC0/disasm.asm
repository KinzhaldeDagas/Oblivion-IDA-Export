0x948BC0: mov     edx, [esp+arg_0]
0x948BC4: mov     ecx, [edx+54h]
0x948BC7: dec     ecx; switch 9 cases
0x948BC8: cmp     ecx, 8
0x948BCB: mov     eax, 1
0x948BD0: ja      short def_948BD2
0x948BD2: jmp     ds:jpt_948BD2[ecx*4]; switch jump
0x948BD9: mov     ecx, [edx+50h]; jumptable 00948BD2 case 6
0x948BDC: mov     eax, [ecx+10h]
0x948BDF: add     eax, [ecx+4]
0x948BE2: lea     eax, [eax+eax*2]
0x948BE5: lea     eax, ds:25h[eax*4]
0x948BEC: retn
0x948BED: mov     eax, 35h ; '5'; jumptable 00948BD2 cases 1,5
0x948BF2: retn
0x948BF3: mov     eax, 41h ; 'A'; jumptable 00948BD2 cases 8,9
0x948BF8: retn
0x948BF9: mov     eax, 19h; jumptable 00948BD2 case 3
0x948BFE: retn
0x948BFF: mov     eax, 25h ; '%'; jumptable 00948BD2 case 4
0x948C04: retn
0x948C05: mov     eax, 29h ; ')'; jumptable 00948BD2 cases 2,7
