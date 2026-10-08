0x9EBA40: push    4; Initializes Oblivion iLevelUp08Mult; native default 4.
0x9EBA42: push    offset aIlevelup08mult; "iLevelUp08Mult"
0x9EBA47: mov     ecx, offset g_iLevelUp08Mult; self
0x9EBA4C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBA51: push    offset sub_A1F3D0; void (__cdecl *)()
0x9EBA56: call    _atexit
0x9EBA5B: pop     ecx
0x9EBA5C: retn
