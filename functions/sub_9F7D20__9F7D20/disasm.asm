0x9F7D20: push    offset aFeed; "Feed"
0x9F7D25: push    offset aSvampirefeed; "sVampireFeed"
0x9F7D2A: mov     ecx, offset stru_B394B0; self
0x9F7D2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7D34: push    offset sub_A23080; void (__cdecl *)()
0x9F7D39: call    _atexit
0x9F7D3E: pop     ecx
0x9F7D3F: retn
