0x9DF680: push    offset aEmperorSBirthd; "Emperor's Birthday"
0x9DF685: push    offset aSholidayempero; "sHolidayEmperorsBirthday"
0x9DF68A: mov     ecx, 0B351DCh; self
0x9DF68F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF694: push    offset sub_A1A100; void (__cdecl *)()
0x9DF699: call    _atexit
0x9DF69E: pop     ecx
0x9DF69F: retn
