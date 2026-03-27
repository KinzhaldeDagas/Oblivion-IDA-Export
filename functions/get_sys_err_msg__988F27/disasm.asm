0x988F27: push    esi
0x988F28: mov     esi, [esp+4+arg_0]
0x988F2C: test    esi, esi
0x988F2E: jl      short loc_988F39
0x988F30: call    sub_99987A
0x988F35: cmp     esi, [eax]
0x988F37: jl      short loc_988F40
0x988F39: call    sub_99987A
0x988F3E: mov     esi, [eax]
0x988F40: call    sub_999880
0x988F45: mov     eax, [eax+esi*4]
0x988F48: pop     esi
0x988F49: retn
