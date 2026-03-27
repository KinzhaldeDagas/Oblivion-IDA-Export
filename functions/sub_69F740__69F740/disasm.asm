0x69F740: mov     eax, [esp+arg_0]
0x69F744: push    eax
0x69F745: call    MobileObject_ModifiedFormSize
0x69F74A: mov     ecx, ds:0B33B00h
0x69F750: mov     cl, [ecx+7Ch]
0x69F753: add     ax, 0Ch
0x69F757: cmp     cl, 48h ; 'H'
0x69F75A: movzx   eax, ax
0x69F75D: jb      short loc_69F762
0x69F75F: add     eax, 4
0x69F762: cmp     cl, 64h ; 'd'
0x69F765: jb      short locret_69F76A
0x69F767: add     eax, 4
0x69F76A: retn    4
