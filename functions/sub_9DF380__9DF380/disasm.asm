0x9DF380: push    offset aSunSHeight; "Sun's Height"
0x9DF385: push    offset aSmonthsunsheig; "sMonthSunsHeight"
0x9DF38A: mov     ecx, 0B3511Ch; self
0x9DF38F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF394: push    offset sub_A19F80; void (__cdecl *)()
0x9DF399: call    _atexit
0x9DF39E: pop     ecx
0x9DF39F: retn
