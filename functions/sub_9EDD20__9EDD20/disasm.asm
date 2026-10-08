0x9EDD20: push    23788h; defaultValue
0x9EDD25: push    offset aIclassbarbaria; "iClassBarbarian"
0x9EDD2A: mov     ecx, 0B37CA0h; self
0x9EDD2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDD34: push    offset sub_A20060; void (__cdecl *)()
0x9EDD39: call    _atexit
0x9EDD3E: pop     ecx
0x9EDD3F: retn
