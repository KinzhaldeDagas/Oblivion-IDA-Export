0x9DF720: push    offset aSummer; "Summer"
0x9DF725: push    offset aSseasonsummer; "sSeasonSummer"
0x9DF72A: mov     ecx, 0B35204h; self
0x9DF72F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF734: push    offset sub_A1A150; void (__cdecl *)()
0x9DF739: call    _atexit
0x9DF73E: pop     ecx
0x9DF73F: retn
