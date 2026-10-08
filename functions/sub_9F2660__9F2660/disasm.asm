0x9F2660: push    offset aYouHaveDiscove; "You have discovered"
0x9F2665: push    offset aSdiscoveredtex; "sDiscoveredText"
0x9F266A: mov     ecx, offset stru_B38C20; self
0x9F266F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2674: push    offset sub_A21F60; void (__cdecl *)()
0x9F2679: call    _atexit
0x9F267E: pop     ecx
0x9F267F: retn
