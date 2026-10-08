0x9F0C50: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0C55: push    offset aSstealthdescri; "sStealthDescription"
0x9F0C5A: mov     ecx, offset stru_B38600; self
0x9F0C5F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0C64: push    offset sub_A21320; void (__cdecl *)()
0x9F0C69: call    _atexit
0x9F0C6E: pop     ecx
0x9F0C6F: retn
