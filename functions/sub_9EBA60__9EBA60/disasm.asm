0x9EBA60: push    4; Initializes Oblivion iLevelUp09Mult; native default 4.
0x9EBA62: push    offset aIlevelup09mult; "iLevelUp09Mult"
0x9EBA67: mov     ecx, offset g_iLevelUp09Mult; self
0x9EBA6C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBA71: push    offset sub_A1F3E0; void (__cdecl *)()
0x9EBA76: call    _atexit
0x9EBA7B: pop     ecx
0x9EBA7C: retn
