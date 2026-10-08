0x468B80: test    byte ptr [esp+Dst], 8
0x468B85: jz      short locret_468BA1
0x468B87: add     ecx, 4
0x468B8A: mov     [esp+Dst], ecx; destination
0x468B8E: mov     ecx, ds:0B33B00h; self
0x468B94: mov     [esp+Size], 8; byteCount
0x468B9C: jmp     SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x468BA1: retn    8
