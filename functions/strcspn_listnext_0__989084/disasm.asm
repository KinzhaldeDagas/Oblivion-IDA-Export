0x989084: mov     al, [edx]
0x989086: or      al, al
0x989088: jz      short _strcspn___listdone_0
0x98908A: add     edx, 1
0x98908D: bts     [esp+0], eax
0x989091: jmp     short _strcspn___listnext_0
