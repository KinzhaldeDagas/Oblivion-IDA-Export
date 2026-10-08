0x9DF360: push    offset aMidYear; "Mid Year"
0x9DF365: push    offset aSmonthmidyear; "sMonthMidYear"
0x9DF36A: mov     ecx, 0B35114h; self
0x9DF36F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF374: push    offset sub_A19F70; void (__cdecl *)()
0x9DF379: call    _atexit
0x9DF37E: pop     ecx
0x9DF37F: retn
