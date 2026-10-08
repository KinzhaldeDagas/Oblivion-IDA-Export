0x9DF5A0: push    offset aSecondPlanting; "Second Planting"
0x9DF5A5: push    offset aSholidaysecond; "sHolidaySecondPlanting"
0x9DF5AA: mov     ecx, 0B351A4h; self
0x9DF5AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF5B4: push    offset sub_A1A090; void (__cdecl *)()
0x9DF5B9: call    _atexit
0x9DF5BE: pop     ecx
0x9DF5BF: retn
