0x9F7810: push    offset aShaircolor8; "sHairColor8"
0x9F7815: push    offset aShaircolor8; "sHairColor8"
0x9F781A: mov     ecx, offset stru_B39378; self
0x9F781F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7824: push    offset sub_A22E10; void (__cdecl *)()
0x9F7829: call    _atexit
0x9F782E: pop     ecx
0x9F782F: retn
