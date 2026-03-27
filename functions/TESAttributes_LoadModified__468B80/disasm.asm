0x468B80: test    byte ptr [esp+Dst], 8
0x468B85: jz      short locret_468BA1
0x468B87: add     ecx, 4
0x468B8A: mov     [esp+Dst], ecx; Dst
0x468B8E: mov     ecx, ds:0B33B00h
0x468B94: mov     [esp+Size], 8; Size
0x468B9C: jmp     SaveLoad_LoadData
0x468BA1: retn    8
