0x68E5B6: mov     al, [ecx+7Ch]
0x68E5B9: cmp     al, 48h ; 'H'
0x68E5BB: jb      short ActiveEffect_Base_LoadEffect___Lowbit_Unk14
0x68E5BD: push    4; byteCount
0x68E5BF: add     ebp, 14h
0x68E5C2: push    ebp; destination
0x68E5C3: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x68E5C8: jmp     short ActiveEffect_Base_LoadEffect___Epilogue
