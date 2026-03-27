0x9F0A90: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0A95: push    offset aSstrengthdescr; "sStrengthDescription"
0x9F0A9A: mov     ecx, offset unk_B38590
0x9F0A9F: call    GameSetting_ConstrAndReg
0x9F0AA4: push    offset sub_A21240; void (__cdecl *)()
0x9F0AA9: call    _atexit
0x9F0AAE: pop     ecx
0x9F0AAF: retn
