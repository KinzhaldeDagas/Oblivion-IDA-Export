0x747BE0: push    esi
0x747BE1: xor     esi, esi
0x747BE3: cmp     ds:0B403B8h, esi
0x747BE9: jbe     short loc_747C04
0x747BEB: jmp     short loc_747BF0
0x747BED: align 10h
0x747BF0: mov     eax, ds:0B40338h[esi*4]
0x747BF7: call    eax
0x747BF9: add     esi, 1
0x747BFC: cmp     esi, ds:0B403B8h
0x747C02: jb      short loc_747BF0
0x747C04: mov     eax, ds:0B403C0h
0x747C09: test    eax, eax
0x747C0B: pop     esi
0x747C0C: jz      short loc_747C10
0x747C0E: call    eax
0x747C10: jmp     loc_748A10
