0x9DF300: push    offset aFirstSeed; "First Seed"
0x9DF305: push    offset aSmonthfirstsee; "sMonthFirstSeed"
0x9DF30A: mov     ecx, 0B350FCh; self
0x9DF30F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF314: push    offset sub_A19F40; void (__cdecl *)()
0x9DF319: call    _atexit
0x9DF31E: pop     ecx
0x9DF31F: retn
