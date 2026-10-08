0x9EB9A0: push    2; Initializes Oblivion iLevelUp03Mult; native default 2.
0x9EB9A2: push    offset aIlevelup03mult; "iLevelUp03Mult"
0x9EB9A7: mov     ecx, offset g_iLevelUp03Mult; self
0x9EB9AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB9B1: push    offset sub_A1F380; void (__cdecl *)()
0x9EB9B6: call    _atexit
0x9EB9BB: pop     ecx
0x9EB9BC: retn
