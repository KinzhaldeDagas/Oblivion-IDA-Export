0x9DF560: push    offset aFirstPlanting; "First Planting"
0x9DF565: push    offset aSholidayfirstp; "sHolidayFirstPlanting"
0x9DF56A: mov     ecx, 0B35194h; self
0x9DF56F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF574: push    offset sub_A1A070; void (__cdecl *)()
0x9DF579: call    _atexit
0x9DF57E: pop     ecx
0x9DF57F: retn
