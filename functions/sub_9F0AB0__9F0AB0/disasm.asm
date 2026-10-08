0x9F0AB0: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0AB5: push    offset aSintellegenced; "sIntellegenceDescription"
0x9F0ABA: mov     ecx, offset stru_B38598; self
0x9F0ABF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0AC4: push    offset sub_A21250; void (__cdecl *)()
0x9F0AC9: call    _atexit
0x9F0ACE: pop     ecx
0x9F0ACF: retn
