0x9EDD40: push    23789h; defaultValue
0x9EDD45: push    offset aIclasscrusader; "iClassCrusader"
0x9EDD4A: mov     ecx, 0B37CA8h; self
0x9EDD4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EDD54: push    offset sub_A20070; void (__cdecl *)()
0x9EDD59: call    _atexit
0x9EDD5E: pop     ecx
0x9EDD5F: retn
