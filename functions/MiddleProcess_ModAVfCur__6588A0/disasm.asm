0x6588A0: fld     [esp+arg_8]
0x6588A4: mov     eax, [esp+actorValue]
0x6588A8: push    0; allowPositive
0x6588AA: push    ecx
0x6588AB: fstp    [esp+8+delta]; delta
0x6588AE: push    eax; actorValue
0x6588AF: add     ecx, 70h ; 'p'; self
0x6588B2: call    AVCollection_AdjustValue
0x6588B7: retn    0Ch
