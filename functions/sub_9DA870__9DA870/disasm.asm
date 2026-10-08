0x9DA870: push    offset aVeryHard; "Very Hard"
0x9DA875: push    offset aSlocklevelna_3; "sLockLevelNameVeryHard"
0x9DA87A: mov     ecx, 0B338A8h; self
0x9DA87F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA884: push    offset sub_A17970; void (__cdecl *)()
0x9DA889: call    _atexit
0x9DA88E: pop     ecx
0x9DA88F: retn
