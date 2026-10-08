0x9F9D40: push    offset aBlockDescripti; "Block Description"
0x9F9D45: push    offset aSskilldescbloc; "sSkillDescBlock"
0x9F9D4A: mov     ecx, offset stru_B3A1EC; self
0x9F9D4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9D54: push    offset sub_A23C10; void (__cdecl *)()
0x9F9D59: call    _atexit
0x9F9D5E: pop     ecx
0x9F9D5F: retn
