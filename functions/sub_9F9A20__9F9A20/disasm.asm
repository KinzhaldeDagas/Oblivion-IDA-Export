0x9F9A20: push    offset aSecurity; "Security"
0x9F9A25: push    offset aSskillnamesecu; "sSkillNameSecurity"
0x9F9A2A: mov     ecx, offset g_sSkillNameSecurity; self
0x9F9A2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9A34: push    offset sub_A23A80; void (__cdecl *)()
0x9F9A39: call    _atexit
0x9F9A3E: pop     ecx
0x9F9A3F: retn
