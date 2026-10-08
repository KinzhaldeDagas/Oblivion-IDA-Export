0x9DF520: push    offset aNewLifeFestiva; "New Life Festival"
0x9DF525: push    offset aSholidaynewlif; "sHolidayNewLifeFestival"
0x9DF52A: mov     ecx, 0B35184h; self
0x9DF52F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF534: push    offset sub_A1A050; void (__cdecl *)()
0x9DF539: call    _atexit
0x9DF53E: pop     ecx
0x9DF53F: retn
