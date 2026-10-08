0x9DF620: push    offset aHarvestSEnd; "Harvest's End"
0x9DF625: push    offset aSholidayharves; "sHolidayHarvestsEnd"
0x9DF62A: mov     ecx, 0B351C4h; self
0x9DF62F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF634: push    offset sub_A1A0D0; void (__cdecl *)()
0x9DF639: call    _atexit
0x9DF63E: pop     ecx
0x9DF63F: retn
