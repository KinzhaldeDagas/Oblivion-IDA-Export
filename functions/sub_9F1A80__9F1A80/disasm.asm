0x9F1A80: push    offset aYourSkillLev_0; "Your skill level is not high enough to "...
0x9F1A85: push    offset aSskillleveltoo; "sSkillLevelTooLow"
0x9F1A8A: mov     ecx, offset stru_B38988; self
0x9F1A8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1A94: push    offset sub_A21A30; void (__cdecl *)()
0x9F1A99: call    _atexit
0x9F1A9E: pop     ecx
0x9F1A9F: retn
