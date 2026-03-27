0x747BA0: call    sub_7489F0
0x747BA5: mov     eax, ds:0B403BCh
0x747BAA: test    eax, eax
0x747BAC: jz      short loc_747BB0
0x747BAE: call    eax
0x747BB0: push    esi
0x747BB1: xor     esi, esi
0x747BB3: cmp     ds:0B403B8h, esi
0x747BB9: jbe     short loc_747BD4
0x747BBB: jmp     short loc_747BC0
0x747BBD: align 10h
0x747BC0: mov     eax, ds:0B40378h[esi*4]
0x747BC7: call    eax
0x747BC9: add     esi, 1
0x747BCC: cmp     esi, ds:0B403B8h
0x747BD2: jb      short loc_747BC0
0x747BD4: pop     esi
0x747BD5: retn
