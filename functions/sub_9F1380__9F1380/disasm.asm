0x9F1380: push    offset aNewGame; "New Game"
0x9F1385: push    offset aSnewgame; "sNewGame"
0x9F138A: mov     ecx, offset stru_B387C8; self
0x9F138F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1394: push    offset sub_A216B0; void (__cdecl *)()
0x9F1399: call    _atexit
0x9F139E: pop     ecx
0x9F139F: retn
