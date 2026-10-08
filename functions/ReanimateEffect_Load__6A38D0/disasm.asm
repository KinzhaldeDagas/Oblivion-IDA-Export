0x6A38D0: mov     eax, [esp+arg_0]
0x6A38D4: push    esi
0x6A38D5: push    eax
0x6A38D6: mov     esi, ecx
0x6A38D8: call    ActiveEffect_Base_LoadEffect
0x6A38DD: push    4; byteCount
0x6A38DF: lea     ecx, [esi+3Ch]
0x6A38E2: push    ecx; destination
0x6A38E3: mov     ecx, ds:0B33B00h; self
0x6A38E9: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A38EE: mov     ecx, ds:0B33B00h; self
0x6A38F4: push    4; byteCount
0x6A38F6: lea     edx, [esi+40h]
0x6A38F9: push    edx; destination
0x6A38FA: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A38FF: mov     ecx, ds:0B33B00h; self
0x6A3905: push    0Ch; byteCount
0x6A3907: lea     eax, [esi+44h]
0x6A390A: push    eax; destination
0x6A390B: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A3910: mov     ecx, ds:0B33B00h; self
0x6A3916: push    10h; byteCount
0x6A3918: add     esi, 50h ; 'P'
0x6A391B: push    esi; destination
0x6A391C: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A3921: pop     esi
0x6A3922: retn    4
