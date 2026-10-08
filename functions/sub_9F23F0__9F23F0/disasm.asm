0x9F23F0: push    offset aHotkey; "Hotkey"
0x9F23F5: push    offset aSquickkeystrin; "sQuickKeyString"
0x9F23FA: mov     ecx, offset stru_B38B88; self
0x9F23FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2404: push    offset sub_A21E30; void (__cdecl *)()
0x9F2409: call    _atexit
0x9F240E: pop     ecx
0x9F240F: retn
