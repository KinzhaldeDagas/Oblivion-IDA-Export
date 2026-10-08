0x6A49C0: mov     eax, [esp+arg_0]
0x6A49C4: push    esi
0x6A49C5: push    eax
0x6A49C6: mov     esi, ecx
0x6A49C8: call    ActiveEffect_Base_LoadEffect
0x6A49CD: mov     ecx, ds:0B33B00h; self
0x6A49D3: cmp     byte ptr [ecx+7Ch], 6Eh ; 'n'
0x6A49D7: jb      short loc_6A49E4
0x6A49D9: push    4; byteCount
0x6A49DB: add     esi, 3Ch ; '<'
0x6A49DE: push    esi; destination
0x6A49DF: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x6A49E4: pop     esi
0x6A49E5: retn    4
