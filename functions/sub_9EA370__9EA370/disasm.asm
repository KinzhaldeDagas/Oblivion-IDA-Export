0x9EA370: push    5; defaultValue
0x9EA372: push    offset aIperkmarksmank; "iPerkMarksmanKnockdownChance"
0x9EA377: mov     ecx, 0B37240h; self
0x9EA37C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EA381: push    offset sub_A1EBA0; void (__cdecl *)()
0x9EA386: call    _atexit
0x9EA38B: pop     ecx
0x9EA38C: retn
