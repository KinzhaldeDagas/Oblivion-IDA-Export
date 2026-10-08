0x9F0C10: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0C15: push    offset aScombatdescrip; "sCombatDescription"
0x9F0C1A: mov     ecx, offset stru_B385F0; self
0x9F0C1F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0C24: push    offset sub_A21300; void (__cdecl *)()
0x9F0C29: call    _atexit
0x9F0C2E: pop     ecx
0x9F0C2F: retn
