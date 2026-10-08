0x9EDD60: push    2378Ah; defaultValue
0x9EDD65: push    offset aIclassscout; "iClassScout"
0x9EDD6A: mov     ecx, 0B37CB0h; self
0x9EDD6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDD74: push    offset sub_A20080; void (__cdecl *)()
0x9EDD79: call    _atexit
0x9EDD7E: pop     ecx
0x9EDD7F: retn
