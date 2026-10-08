0x658880: fild    [esp+arg_8]
0x658884: mov     eax, [esp+actorValue]
0x658888: push    0; allowPositive
0x65888A: push    ecx
0x65888B: fstp    [esp+8+delta]; delta
0x65888E: push    eax; actorValue
0x65888F: add     ecx, 70h ; 'p'; self
0x658892: call    AVCollection_AdjustValue
0x658897: retn    0Ch
