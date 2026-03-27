0x508180: cmp     byte ptr ds:0B42F3Eh, 0
0x508187: jz      short loc_5081AA
0x508189: cmp     byte ptr ds:0B42E84h, 0
0x508190: jz      short loc_5081AA
0x508192: cmp     dword ptr ds:0B42F48h, 2
0x508199: jl      short loc_5081AA
0x50819B: cmp     byte ptr ds:0B42CDCh, 0
0x5081A2: setz    al
0x5081A5: mov     ds:0B42CDCh, al
0x5081AA: mov     al, 1
0x5081AC: retn
