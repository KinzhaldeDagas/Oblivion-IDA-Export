0x9DF640: push    offset aTalesAndTallow; "Tales and Tallows"
0x9DF645: push    offset aSholidaytalesa; "sHolidayTalesAndTallows"
0x9DF64A: mov     ecx, 0B351CCh; self
0x9DF64F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF654: push    offset sub_A1A0E0; void (__cdecl *)()
0x9DF659: call    _atexit
0x9DF65E: pop     ecx
0x9DF65F: retn
