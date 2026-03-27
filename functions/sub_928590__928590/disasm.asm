0x928590: mov     eax, [ecx+0Ch]
0x928593: test    eax, eax
0x928595: jz      short loc_9285A9
0x928597: mov     al, [ecx+14h]
0x92859A: test    al, al
0x92859C: jz      short loc_9285A9
0x92859E: mov     eax, [esp+arg_0]
0x9285A2: mov     cl, 1
0x9285A4: mov     [eax], cl
0x9285A6: retn    4
0x9285A9: mov     eax, [esp+arg_0]
0x9285AD: xor     cl, cl
0x9285AF: mov     [eax], cl
0x9285B1: retn    4
