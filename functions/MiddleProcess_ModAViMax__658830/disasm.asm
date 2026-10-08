0x658830: fild    [esp+arg_8]
0x658834: mov     eax, [esp+actorValue]
0x658838: push    1; allowPositive
0x65883A: push    ecx
0x65883B: fstp    [esp+8+delta]; delta
0x65883E: push    eax; actorValue
0x65883F: add     ecx, 94h ; '”'; self
0x658845: call    AVCollection_AdjustValue
0x65884A: retn    0Ch
