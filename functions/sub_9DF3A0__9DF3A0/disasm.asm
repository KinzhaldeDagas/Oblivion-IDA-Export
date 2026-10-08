0x9DF3A0: push    offset aLastSeed; "Last Seed"
0x9DF3A5: push    offset aSmonthlastseed; "sMonthLastSeed"
0x9DF3AA: mov     ecx, 0B35124h; self
0x9DF3AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF3B4: push    offset sub_A19F90; void (__cdecl *)()
0x9DF3B9: call    _atexit
0x9DF3BE: pop     ecx
0x9DF3BF: retn
