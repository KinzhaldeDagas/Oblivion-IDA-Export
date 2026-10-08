0x9F1300: push    offset aYouCanTQuicklo; "You can't Quickload while the game is p"...
0x9F1305: push    offset aScantquickload; "sCantQuickLoad"
0x9F130A: mov     ecx, offset stru_B387A8; self
0x9F130F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1314: push    offset sub_A21670; void (__cdecl *)()
0x9F1319: call    _atexit
0x9F131E: pop     ecx
0x9F131F: retn
