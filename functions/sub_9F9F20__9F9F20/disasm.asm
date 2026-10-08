0x9F9F20: push    offset aSecurityDescri; "Security Description"
0x9F9F25: push    offset aSskilldescsecu; "sSkillDescSecurity"
0x9F9F2A: mov     ecx, offset stru_B3A264; self
0x9F9F2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9F34: push    offset sub_A23D00; void (__cdecl *)()
0x9F9F39: call    _atexit
0x9F9F3E: pop     ecx
0x9F9F3F: retn
