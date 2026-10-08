0x9DF580: push    offset aJesterSDay; "Jester's Day"
0x9DF585: push    offset aSholidayjester; "sHolidayJestersDay"
0x9DF58A: mov     ecx, 0B3519Ch; self
0x9DF58F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF594: push    offset sub_A1A080; void (__cdecl *)()
0x9DF599: call    _atexit
0x9DF59E: pop     ecx
0x9DF59F: retn
