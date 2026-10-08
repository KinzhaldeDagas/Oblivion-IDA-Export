0x9EB980: push    2; Initializes Oblivion iLevelUp02Mult; native default 2.
0x9EB982: push    offset aIlevelup02mult; "iLevelUp02Mult"
0x9EB987: mov     ecx, offset g_iLevelUp02Mult; self
0x9EB98C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB991: push    offset sub_A1F370; void (__cdecl *)()
0x9EB996: call    _atexit
0x9EB99B: pop     ecx
0x9EB99C: retn
