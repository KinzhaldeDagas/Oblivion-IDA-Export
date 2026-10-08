0x49F550: mov     ecx, ds:0B33B00h; Returns native serialized BSAnimGroupSequence state size: 20 bytes for save versions >= 0x71, otherwise 24 bytes.
0x49F556: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x49F55A: mov     eax, 8
0x49F55F: jnb     short loc_49F566
0x49F561: mov     eax, 0Ch
0x49F566: add     eax, 0Ch
0x49F569: retn
