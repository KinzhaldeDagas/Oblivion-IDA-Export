0x9F0B30: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0B35: push    offset aSendurancedesc; "sEnduranceDescription"
0x9F0B3A: mov     ecx, offset stru_B385B8; self
0x9F0B3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0B44: push    offset sub_A21290; void (__cdecl *)()
0x9F0B49: call    _atexit
0x9F0B4E: pop     ecx
0x9F0B4F: retn
