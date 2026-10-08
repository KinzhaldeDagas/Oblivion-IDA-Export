0x411F40: add     ecx, 4
0x411F43: push    20h ; ' '; byteCount
0x411F45: push    ecx; destination
0x411F46: mov     ecx, g_TESSaveLoadGame; self
0x411F4C: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x411F51: retn    4
