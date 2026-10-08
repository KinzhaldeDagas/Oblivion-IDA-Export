0x9DF2E0: push    offset aSunSDawn; "Sun's Dawn"
0x9DF2E5: push    offset aSmonthsunsdawn; "sMonthSunsDawn"
0x9DF2EA: mov     ecx, 0B350F4h; self
0x9DF2EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF2F4: push    offset sub_A19F30; void (__cdecl *)()
0x9DF2F9: call    _atexit
0x9DF2FE: pop     ecx
0x9DF2FF: retn
