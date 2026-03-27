0x56A360: mov     eax, [esp+arg_0]
0x56A364: cmp     eax, 4; switch 5 cases
0x56A367: ja      short ActorValue_GetMasterySkill___def_56A369
0x56A369: jmp     ds:jpt_56A369[eax*4]; switch jump
0x56A370: xor     eax, eax; jumptable 0056A369 case 0
0x56A372: retn
0x56A373: mov     eax, ds:0B3A4F8h; jumptable 0056A369 case 1
0x56A378: retn
0x56A379: mov     eax, ds:0B3A500h; jumptable 0056A369 case 2
0x56A37E: retn
0x56A37F: mov     eax, ds:0B3A508h; jumptable 0056A369 case 3
0x56A384: retn
0x56A385: mov     eax, ds:0B3A510h; jumptable 0056A369 case 4
0x56A38A: retn
