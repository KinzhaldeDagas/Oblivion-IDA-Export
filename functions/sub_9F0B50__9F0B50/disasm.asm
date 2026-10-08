0x9F0B50: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B55: push    offset aSpersonalityde; "sPersonalityDescription"
0x9F0B5A: mov     ecx, offset stru_B385C0; self
0x9F0B5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0B64: push    offset sub_A212A0; void (__cdecl *)()
0x9F0B69: call    _atexit
0x9F0B6E: pop     ecx
0x9F0B6F: retn
