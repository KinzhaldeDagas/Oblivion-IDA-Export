0x46ABD0: mov     eax, [esp+arg_0]
0x46ABD4: test    eax, eax
0x46ABD6: jz      short loc_46ABE2
0x46ABD8: cmp     eax, 7FFh
0x46ABDD: ja      short loc_46ABE2
0x46ABDF: mov     al, 1
0x46ABE1: retn
0x46ABE2: xor     al, al
0x46ABE4: retn
