0x9DF3E0: push    offset aFrostFall; "Frost Fall"
0x9DF3E5: push    offset aSmonthfrostfal; "sMonthFrostFall"
0x9DF3EA: mov     ecx, 0B35134h; self
0x9DF3EF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF3F4: push    offset sub_A19FB0; void (__cdecl *)()
0x9DF3F9: call    _atexit
0x9DF3FE: pop     ecx
0x9DF3FF: retn
