0x5E1370: cmp     [esp+arg_0], 0
0x5E1375: jz      short loc_5E138A
0x5E1377: mov     eax, [ecx+0C4h]
0x5E137D: or      eax, [esp+arg_4]
0x5E1381: mov     [ecx+0C4h], eax
0x5E1387: retn    8
0x5E138A: mov     eax, [esp+arg_4]
0x5E138E: not     eax
0x5E1390: and     eax, [ecx+0C4h]
0x5E1396: mov     [ecx+0C4h], eax
0x5E139C: retn    8
