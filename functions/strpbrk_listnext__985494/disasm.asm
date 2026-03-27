0x985494: mov     al, [edx]
0x985496: or      al, al
0x985498: jz      short _strpbrk___listdone
0x98549A: add     edx, 1
0x98549D: bts     [esp+0], eax
0x9854A1: jmp     short _strpbrk___listnext
