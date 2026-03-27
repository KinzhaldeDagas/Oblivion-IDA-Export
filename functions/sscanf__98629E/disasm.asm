0x98629E: push    esi
0x98629F: mov     esi, [esp+4+Src]
0x9862A3: lea     eax, [esp+4+arg_8]
0x9862A7: push    eax
0x9862A8: push    0
0x9862AA: push    [esp+0Ch+Format]
0x9862AE: push    offset __input_l
0x9862B3: call    _vscan_fn
0x9862B8: add     esp, 10h
0x9862BB: pop     esi
0x9862BC: retn
