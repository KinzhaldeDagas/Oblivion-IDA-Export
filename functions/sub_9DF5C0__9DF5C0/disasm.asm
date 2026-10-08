0x9DF5C0: push    offset aMidYearCelebra; "Mid Year Celebration"
0x9DF5C5: push    offset aSholidaymidyea; "sHolidayMidYearCelebration"
0x9DF5CA: mov     ecx, 0B351ACh; self
0x9DF5CF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF5D4: push    offset sub_A1A0A0; void (__cdecl *)()
0x9DF5D9: call    _atexit
0x9DF5DE: pop     ecx
0x9DF5DF: retn
