0x9F7D40: push    offset aTalk; "Talk"
0x9F7D45: push    offset aSvampiretalk; "sVampireTalk"
0x9F7D4A: mov     ecx, offset stru_B394B8; self
0x9F7D4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7D54: push    offset sub_A23090; void (__cdecl *)()
0x9F7D59: call    _atexit
0x9F7D5E: pop     ecx
0x9F7D5F: retn
