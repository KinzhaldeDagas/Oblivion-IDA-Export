0x4A3520: mov     al, [esp+arg_0]
0x4A3524: cmp     al, 64h ; 'd'
0x4A3526: ja      short loc_4A3530
0x4A3528: mov     [ecx+6], al
0x4A352B: mov     al, 1
0x4A352D: retn    4
0x4A3530: xor     al, al
0x4A3532: retn    4
