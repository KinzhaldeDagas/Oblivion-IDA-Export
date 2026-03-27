0x5660F0: push    esi
0x5660F1: mov     esi, ecx
0x5660F3: mov     ecx, [esi+24h]
0x5660F6: test    ecx, ecx
0x5660F8: jz      short loc_5660FF
0x5660FA: call    sub_569AB0
0x5660FF: mov     ecx, [esi+28h]
0x566102: test    ecx, ecx
0x566104: pop     esi
0x566105: jz      short locret_56610C
0x566107: jmp     loc_56A080
0x56610C: retn
