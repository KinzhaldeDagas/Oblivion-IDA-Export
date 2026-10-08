0x9F9B80: push    offset aIntelligenceDe; "Intelligence Description"
0x9F9B85: push    offset aSattributede_0; "sAttributeDescIntelligence"
0x9F9B8A: mov     ecx, 0B3A17Ch; self
0x9F9B8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9B94: push    offset sub_A23B30; void (__cdecl *)()
0x9F9B99: call    _atexit
0x9F9B9E: pop     ecx
0x9F9B9F: retn
