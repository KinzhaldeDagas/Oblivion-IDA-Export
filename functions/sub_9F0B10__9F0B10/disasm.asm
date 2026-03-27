0x9F0B10: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B15: push    offset aSspeeddescript; "sSpeedDescription"
0x9F0B1A: mov     ecx, offset unk_B385B0
0x9F0B1F: call    GameSetting_ConstrAndReg
0x9F0B24: push    offset sub_A21280; void (__cdecl *)()
0x9F0B29: call    _atexit
0x9F0B2E: pop     ecx
0x9F0B2F: retn
