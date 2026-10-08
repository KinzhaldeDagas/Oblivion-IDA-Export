0x69DBF0: push    esi; Verified load callback arguments: ownerActiveEffect is stored at +0x18 and targetReference at +0x1C; it restores elapsedSeconds and bFinished, plus durationSeconds on version 0x72+.
0x69DBF1: mov     esi, ecx
0x69DBF3: mov     ecx, ds:0B33B00h; self
0x69DBF9: push    4; byteCount
0x69DBFB: lea     eax, [esi+20h]
0x69DBFE: push    eax; destination
0x69DBFF: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x69DC04: push    1; byteCount
0x69DC06: lea     ecx, [esi+24h]
0x69DC09: push    ecx; destination
0x69DC0A: mov     ecx, ds:0B33B00h; self
0x69DC10: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x69DC15: mov     ecx, ds:0B33B00h; self
0x69DC1B: cmp     byte ptr [ecx+7Ch], 72h ; 'r'
0x69DC1F: jb      short loc_69DC3E
0x69DC21: push    4; byteCount
0x69DC23: lea     edx, [esi+8]
0x69DC26: push    edx; destination
0x69DC27: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x69DC2C: mov     eax, [esp+4+ownerActiveEffect]
0x69DC30: mov     ecx, [esp+4+targetReference]
0x69DC34: mov     [esi+18h], eax
0x69DC37: mov     [esi+1Ch], ecx
0x69DC3A: pop     esi
0x69DC3B: retn    8
0x69DC3E: mov     edx, [esp+4+ownerActiveEffect]
0x69DC42: mov     eax, [esp+4+targetReference]
0x69DC46: mov     [esi+18h], edx
0x69DC49: mov     [esi+1Ch], eax
0x69DC4C: pop     esi
0x69DC4D: retn    8
