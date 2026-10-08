0x9F0A90: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0A95: push    offset aSstrengthdescr; "sStrengthDescription"
0x9F0A9A: mov     ecx, offset stru_B38590; self
0x9F0A9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0AA4: push    offset sub_A21240; void (__cdecl *)()
0x9F0AA9: call    _atexit
0x9F0AAE: pop     ecx
0x9F0AAF: retn
