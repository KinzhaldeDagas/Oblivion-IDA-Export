0x7E2D60: mov     eax, ds:0B4600Ch
0x7E2D65: test    eax, eax
0x7E2D67: jnz     short locret_7E2D81
0x7E2D69: cmp     dword ptr ds:0B42F48h, 2
0x7E2D70: setl    al
0x7E2D73: sub     eax, 1
0x7E2D76: and     eax, 50h
0x7E2D79: add     eax, 28h ; '('
0x7E2D7C: mov     ds:0B4600Ch, eax
0x7E2D81: retn
