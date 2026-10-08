0x9F03F0: push    offset aDaysPassed; "Days Passed:"
0x9F03F5: push    offset aSmiscgamedaysp; "sMiscGameDaysPlayed"
0x9F03FA: mov     ecx, offset stru_B383E8; self
0x9F03FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0404: push    offset sub_A20EF0; void (__cdecl *)()
0x9F0409: call    _atexit
0x9F040E: pop     ecx
0x9F040F: retn
