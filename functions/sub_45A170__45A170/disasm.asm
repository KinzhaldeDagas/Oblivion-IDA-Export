0x45A170: mov     eax, ds:0B33B00h
0x45A175: mov     al, [eax+7Ch]
0x45A178: cmp     al, 1Fh
0x45A17A: jb      short loc_45A183
0x45A17C: cmp     al, 5Ah ; 'Z'
0x45A17E: jnb     short loc_45A183
0x45A180: mov     al, 1
0x45A182: retn
0x45A183: xor     al, al
0x45A185: retn
