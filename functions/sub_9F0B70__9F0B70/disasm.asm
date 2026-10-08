0x9F0B70: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B75: push    offset aSluckdescripti; "sLuckDescription"
0x9F0B7A: mov     ecx, offset stru_B385C8; self
0x9F0B7F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0B84: push    offset sub_A212B0; void (__cdecl *)()
0x9F0B89: call    _atexit
0x9F0B8E: pop     ecx
0x9F0B8F: retn
