0x5E33B0: cmp     [esp+arg_0], 0
0x5E33B5: mov     eax, [ecx+0B0h]
0x5E33BB: jz      short loc_5E33CC
0x5E33BD: cmp     eax, 2
0x5E33C0: jz      short Actor_IsDead___Return_True
0x5E33C2: cmp     eax, 1
0x5E33C5: jnz     short Actor_IsDead___Return_False
0x5E33C7: mov     al, 1
0x5E33C9: retn    4
0x5E33CC: cmp     eax, 2
0x5E33CF: jz      short Actor_IsDead___Return_True
0x5E33D1: cmp     eax, 1
0x5E33D4: jz      short Actor_IsDead___Return_True
0x5E33D6: cmp     eax, 6
0x5E33D9: jz      short Actor_IsDead___Return_True
0x5E33DB: xor     al, al
0x5E33DD: retn    4
