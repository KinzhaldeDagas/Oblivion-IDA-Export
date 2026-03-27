0x401170: mov     eax, [esp+dwSize]
0x401174: push    4; flAllocationType
0x401176: push    1000h; flAllocationType
0x40117B: push    eax; dwSize
0x40117C: push    0; lpAddress
0x40117E: call    ds:VirtualAlloc
0x401184: retn    4
