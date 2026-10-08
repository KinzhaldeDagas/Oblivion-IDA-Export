0x590110: mov     dword ptr [ecx+44h], 0
0x590117: mov     [esp+sibling], 0; sibling
0x59011F: jmp     Tile__Init; Verified: initializes base Tile, optionally attaches to supplied parent via 0x58D1C0, then optionally names it. First argument after receiver is Tile* parent, not float; disassembly uses integer pointer test and push.
