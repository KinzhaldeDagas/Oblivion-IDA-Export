0x9F0B10: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B15: push    offset aSspeeddescript; "sSpeedDescription"
0x9F0B1A: mov     ecx, offset stru_B385B0; self
0x9F0B1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0B24: push    offset sub_A21280; void (__cdecl *)()
0x9F0B29: call    _atexit
0x9F0B2E: pop     ecx
0x9F0B2F: retn
