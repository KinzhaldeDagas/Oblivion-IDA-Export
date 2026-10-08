0x9EB9E0: push    3; Initializes Oblivion iLevelUp05Mult; native default 3.
0x9EB9E2: push    offset aIlevelup05mult; "iLevelUp05Mult"
0x9EB9E7: mov     ecx, offset g_iLevelUp05Mult; self
0x9EB9EC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB9F1: push    offset sub_A1F3A0; void (__cdecl *)()
0x9EB9F6: call    _atexit
0x9EB9FB: pop     ecx
0x9EB9FC: retn
