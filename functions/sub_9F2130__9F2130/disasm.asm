0x9F2130: push    offset aYouAreUnableTo; "You are unable to wait here. An alarm i"...
0x9F2135: push    offset aSnowaitwhileal; "sNoWaitWhileAlarmSounding"
0x9F213A: mov     ecx, offset stru_B38AD8; self
0x9F213F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2144: push    offset sub_A21CD0; void (__cdecl *)()
0x9F2149: call    _atexit
0x9F214E: pop     ecx
0x9F214F: retn
