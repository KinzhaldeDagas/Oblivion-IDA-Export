0x503CE0: cmp     byte ptr ds:0B43070h, 0
0x503CE7: jz      short loc_503CFB
0x503CE9: cmp     byte ptr ds:0B431E4h, 0
0x503CF0: setz    al
0x503CF3: mov     ds:0B431E4h, al
0x503CF8: mov     al, 1
0x503CFA: retn
0x503CFB: cmp     byte ptr ds:0B4610Ch, 0
0x503D02: mov     al, 1
0x503D04: setz    cl
0x503D07: mov     ds:0B4610Ch, cl
0x503D0D: retn
