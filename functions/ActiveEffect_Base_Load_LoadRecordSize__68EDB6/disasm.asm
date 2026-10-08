0x68EDB6: push    2; byteCount
0x68EDB8: lea     eax, [esp+4]
0x68EDBC: push    eax; destination
0x68EDBD: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x68EDC2: mov     ecx, ds:0B33B00h
