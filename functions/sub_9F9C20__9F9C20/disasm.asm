0x9F9C20: push    offset aPersonalityDes; "Personality Description"
0x9F9C25: push    offset aSattributede_5; "sAttributeDescPersonality"
0x9F9C2A: mov     ecx, offset stru_B3A1A4; self
0x9F9C2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9C34: push    offset sub_A23B80; void (__cdecl *)()
0x9F9C39: call    _atexit
0x9F9C3E: pop     ecx
0x9F9C3F: retn
