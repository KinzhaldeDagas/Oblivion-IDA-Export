0x5361B0: mov     eax, [esp+arg_0]
0x5361B4: cmp     eax, 1Dh; switch 30 cases
0x5361B7: ja      short def_5361C0; jumptable 005361C0 default case, cases 0,10,15,25
0x5361B9: movzx   eax, ds:byte_536240[eax]
0x5361C0: jmp     ds:jpt_5361C0[eax*4]; switch jump
0x5361C7: mov     eax, ds:0B37158h; jumptable 005361C0 cases 1,16
0x5361CC: retn
0x5361CD: mov     eax, ds:0B37160h; jumptable 005361C0 cases 2,17
0x5361D2: retn
0x5361D3: mov     eax, ds:0B37168h; jumptable 005361C0 cases 3,18
0x5361D8: retn
0x5361D9: mov     eax, ds:0B37170h; jumptable 005361C0 cases 4,19
0x5361DE: retn
0x5361DF: mov     eax, ds:0B37178h; jumptable 005361C0 cases 5,11,20,26
0x5361E4: retn
0x5361E5: mov     eax, ds:0B37180h; jumptable 005361C0 cases 6,21
0x5361EA: retn
0x5361EB: mov     eax, ds:0B37188h; jumptable 005361C0 cases 7,22
0x5361F0: retn
0x5361F1: mov     eax, ds:0B37190h; jumptable 005361C0 cases 8,23
0x5361F6: retn
0x5361F7: mov     eax, ds:0B37198h; jumptable 005361C0 cases 9,12,24,27
0x5361FC: retn
0x5361FD: mov     eax, ds:0B371A0h; jumptable 005361C0 cases 13,28
0x536202: retn
0x536203: mov     eax, ds:0B371A8h; jumptable 005361C0 cases 14,29
0x536208: retn
0x536209: mov     eax, ds:0B37150h; jumptable 005361C0 default case, cases 0,10,15,25
0x53620E: retn
