0x9EBA80: push    5; Initializes Oblivion iLevelUp10Mult; native default 5.
0x9EBA82: push    offset aIlevelup10mult; "iLevelUp10Mult"
0x9EBA87: mov     ecx, offset g_iLevelUp10Mult; self
0x9EBA8C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBA91: push    offset sub_A1F3F0; void (__cdecl *)()
0x9EBA96: call    _atexit
0x9EBA9B: pop     ecx
0x9EBA9C: retn
