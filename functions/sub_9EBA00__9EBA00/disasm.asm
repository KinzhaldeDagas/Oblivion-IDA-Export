0x9EBA00: push    3; Initializes Oblivion iLevelUp06Mult; native default 3.
0x9EBA02: push    offset aIlevelup06mult; "iLevelUp06Mult"
0x9EBA07: mov     ecx, offset g_iLevelUp06Mult; self
0x9EBA0C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBA11: push    offset sub_A1F3B0; void (__cdecl *)()
0x9EBA16: call    _atexit
0x9EBA1B: pop     ecx
0x9EBA1C: retn
