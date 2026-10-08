0x9F6DF0: push    offset aChinShallowDee; "Chin shallow/deep"
0x9F6DF5: push    offset aSchinshallow; "sChinshallow"
0x9F6DFA: mov     ecx, offset stru_B390F0; self
0x9F6DFF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6E04: push    offset sub_A22900; void (__cdecl *)()
0x9F6E09: call    _atexit
0x9F6E0E: pop     ecx
0x9F6E0F: retn
