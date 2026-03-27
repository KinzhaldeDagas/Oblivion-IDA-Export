0x4AECC0: mov     al, [esp+arg_0]
0x4AECC4: cmp     al, 5Ah ; 'Z'
0x4AECC6: ja      short loc_4AECD5
0x4AECC8: cmp     al, [ecx+3Eh]
0x4AECCB: ja      short loc_4AECD5
0x4AECCD: mov     [ecx+3Dh], al
0x4AECD0: mov     al, 1
0x4AECD2: retn    4
0x4AECD5: xor     al, al
0x4AECD7: retn    4
