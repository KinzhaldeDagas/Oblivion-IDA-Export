0x9DF6A0: push    offset aWarriorSFestiv; "Warrior's Festival"
0x9DF6A5: push    offset aSholidaywarrio; "sHolidayWarriorsFestival"
0x9DF6AA: mov     ecx, 0B351E4h; self
0x9DF6AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF6B4: push    offset sub_A1A110; void (__cdecl *)()
0x9DF6B9: call    _atexit
0x9DF6BE: pop     ecx
0x9DF6BF: retn
