0x9F1A60: push    offset aSkillOf_0; "skill of"
0x9F1A65: push    offset aSspellmaking_0; "sSpellmakingRequire2"
0x9F1A6A: mov     ecx, offset stru_B38980; self
0x9F1A6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1A74: push    offset sub_A21A20; void (__cdecl *)()
0x9F1A79: call    _atexit
0x9F1A7E: pop     ecx
0x9F1A7F: retn
