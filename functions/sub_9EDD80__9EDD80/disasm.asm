0x9EDD80: push    2378Bh; defaultValue
0x9EDD85: push    offset aIclassarcher; "iClassArcher"
0x9EDD8A: mov     ecx, 0B37CB8h; self
0x9EDD8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDD94: push    offset sub_A20090; void (__cdecl *)()
0x9EDD99: call    _atexit
0x9EDD9E: pop     ecx
0x9EDD9F: retn
