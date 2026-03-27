0x4AECE0: mov     al, [esp+arg_0]
0x4AECE4: cmp     al, 5Ah ; 'Z'
0x4AECE6: ja      short loc_4AECF5
0x4AECE8: cmp     al, [ecx+3Dh]
0x4AECEB: jb      short loc_4AECF5
0x4AECED: mov     [ecx+3Eh], al
0x4AECF0: mov     al, 1
0x4AECF2: retn    4
0x4AECF5: xor     al, al
0x4AECF7: retn    4
