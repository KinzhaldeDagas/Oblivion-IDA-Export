0x9F2600: push    offset aReloadTheCurre; "Reload the current save game?"
0x9F2605: push    offset aSmiscplayerdea; "sMiscPlayerDeadMessage"
0x9F260A: mov     ecx, offset stru_B38C08; self
0x9F260F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2614: push    offset sub_A21F30; void (__cdecl *)()
0x9F2619: call    _atexit
0x9F261E: pop     ecx
0x9F261F: retn
