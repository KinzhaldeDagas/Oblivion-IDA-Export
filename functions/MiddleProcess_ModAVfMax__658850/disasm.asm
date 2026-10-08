0x658850: fld     [esp+arg_8]
0x658854: mov     eax, [esp+actorValue]
0x658858: push    1; allowPositive
0x65885A: push    ecx
0x65885B: fstp    [esp+8+delta]; delta
0x65885E: push    eax; actorValue
0x65885F: add     ecx, 94h ; '”'; self
0x658865: call    AVCollection_AdjustValue
0x65886A: retn    0Ch
