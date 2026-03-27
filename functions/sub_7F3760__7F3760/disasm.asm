0x7F3760: mov     eax, ds:0B468FCh
0x7F3765: test    eax, eax
0x7F3767: jnz     short locret_7F3783
0x7F3769: cmp     dword ptr ds:0B42F48h, 2
0x7F3770: setl    al
0x7F3773: sub     eax, 1
0x7F3776: and     eax, 0A0h
0x7F377B: add     eax, 4Bh ; 'K'
0x7F377E: mov     ds:0B468FCh, eax
0x7F3783: retn
