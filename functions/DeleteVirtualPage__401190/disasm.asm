0x401190: mov     eax, [esp+lpAddress]
0x401194: push    8000h; dwFreeType
0x401199: push    0; dwSize
0x40119B: push    eax; lpAddress
0x40119C: call    ds:VirtualFree
0x4011A2: retn    4
