0x9F0AD0: push    offset aNeedAGamesetti; "Need a gamesetting description."
0x9F0AD5: push    offset aSwillpowerdesc; "sWillPowerDescription"
0x9F0ADA: mov     ecx, offset stru_B385A0; self
0x9F0ADF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0AE4: push    offset sub_A21260; void (__cdecl *)()
0x9F0AE9: call    _atexit
0x9F0AEE: pop     ecx
0x9F0AEF: retn
