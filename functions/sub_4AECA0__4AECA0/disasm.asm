0x4AECA0: mov     al, [esp+arg_0]
0x4AECA4: cmp     al, 64h ; 'd'
0x4AECA6: ja      short loc_4AECB0
0x4AECA8: mov     [ecx+3Ch], al
0x4AECAB: mov     al, 1
0x4AECAD: retn    4
0x4AECB0: xor     al, al
0x4AECB2: retn    4
