0x9EB960: push    2; Initializes Oblivion iLevelUp01Mult; native default 2.
0x9EB962: push    offset aIlevelup01mult; "iLevelUp01Mult"
0x9EB967: mov     ecx, offset g_iLevelUp01Mult; self
0x9EB96C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EB971: push    offset sub_A1F360; void (__cdecl *)()
0x9EB976: call    _atexit
0x9EB97B: pop     ecx
0x9EB97C: retn
