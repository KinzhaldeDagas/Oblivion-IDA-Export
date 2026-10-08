0x9DF6E0: push    offset aOldLifeFestiva; "Old Life Festival"
0x9DF6E5: push    offset aSholidayoldlif; "sHolidayOldLifeFestival"
0x9DF6EA: mov     ecx, 0B351F4h; self
0x9DF6EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF6F4: push    offset sub_A1A130; void (__cdecl *)()
0x9DF6F9: call    _atexit
0x9DF6FE: pop     ecx
0x9DF6FF: retn
