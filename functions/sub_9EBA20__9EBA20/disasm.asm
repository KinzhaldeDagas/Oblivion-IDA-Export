0x9EBA20: push    3; Initializes Oblivion iLevelUp07Mult; native default 3.
0x9EBA22: push    offset aIlevelup07mult; "iLevelUp07Mult"
0x9EBA27: mov     ecx, offset g_iLevelUp07Mult; self
0x9EBA2C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EBA31: push    offset sub_A1F3C0; void (__cdecl *)()
0x9EBA36: call    _atexit
0x9EBA3B: pop     ecx
0x9EBA3C: retn
