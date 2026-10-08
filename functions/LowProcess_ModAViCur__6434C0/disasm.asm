0x6434C0: mov     eax, [esp+actorValue]
0x6434C4: cmp     eax, 8
0x6434C7: jl      short locret_6434E1
0x6434C9: cmp     eax, 0Ah
0x6434CC: jg      short locret_6434E1
0x6434CE: fild    [esp+arg_8]
0x6434D2: push    0; allowPositive
0x6434D4: push    ecx
0x6434D5: add     ecx, 70h ; 'p'; self
0x6434D8: fstp    [esp+8+delta]; delta
0x6434DB: push    eax; actorValue
0x6434DC: call    AVCollection_AdjustValue
0x6434E1: retn    0Ch
