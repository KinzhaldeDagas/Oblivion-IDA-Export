0x693B80: mov     eax, [esp+arg_0]
0x693B84: push    esi
0x693B85: push    eax
0x693B86: mov     esi, ecx
0x693B88: call    ActiveEffect_Base_LoadEffect
0x693B8D: mov     ecx, ds:0B33B00h; self
0x693B93: push    1; byteCount
0x693B95: add     esi, 3Ch ; '<'
0x693B98: push    esi; destination
0x693B99: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x693B9E: pop     esi
0x693B9F: retn    4
