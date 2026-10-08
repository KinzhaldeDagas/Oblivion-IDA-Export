0x9E2210: push    0; defaultValue
0x9E2212: push    offset aIlevitemleveld; "iLevItemLevelDifferenceMax"
0x9E2217: mov     ecx, 0B35AB8h; self
0x9E221C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E2221: push    offset sub_A1B3B0; void (__cdecl *)()
0x9E2226: call    _atexit
0x9E222B: pop     ecx
0x9E222C: retn
