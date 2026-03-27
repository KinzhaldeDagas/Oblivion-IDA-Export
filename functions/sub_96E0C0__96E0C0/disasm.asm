0x96E0C0: cmp     [esp+arg_0], 0A000106h
0x96E0C8: jnb     short def_96E0D2
0x96E0CA: mov     eax, [ecx+24h]
0x96E0CD: cmp     eax, 4; switch 5 cases
0x96E0D0: ja      short def_96E0D2
0x96E0D2: jmp     ds:jpt_96E0D2[eax*4]; switch jump
0x96E0D9: mov     dword ptr [ecx+24h], 3; jumptable 0096E0D2 case 0
0x96E0E0: cmp     dword ptr [ecx+2Ch], 0
0x96E0E4: jz      short loc_96E0F0
0x96E0E6: push    2
0x96E0E8: call    sub_95A2B0
0x96E0ED: retn    8
0x96E0F0: push    0
0x96E0F2: call    sub_95A2B0
0x96E0F7: retn    8
0x96E0FA: mov     dword ptr [ecx+24h], 3; jumptable 0096E0D2 case 1
0x96E101: retn    8
0x96E104: mov     dword ptr [ecx+24h], 0; jumptable 0096E0D2 case 2
0x96E10B: jmp     short loc_96E0E0
0x96E10D: mov     dword ptr [ecx+24h], 2; jumptable 0096E0D2 case 3
0x96E114: jmp     short loc_96E0E0
0x96E116: mov     dword ptr [ecx+24h], 2; jumptable 0096E0D2 case 4
