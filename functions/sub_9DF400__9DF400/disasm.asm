0x9DF400: push    offset aSunSDusk; "Sun's Dusk"
0x9DF405: push    offset aSmonthsunsdusk; "sMonthSunsDusk"
0x9DF40A: mov     ecx, 0B3513Ch; self
0x9DF40F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF414: push    offset sub_A19FC0; void (__cdecl *)()
0x9DF419: call    _atexit
0x9DF41E: pop     ecx
0x9DF41F: retn
