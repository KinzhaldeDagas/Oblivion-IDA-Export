0x9F9680: push    offset aIntelligence; "Intelligence"
0x9F9685: push    offset aSattributena_0; "sAttributeNameIntelligence"
0x9F968A: mov     ecx, 0B3A03Ch; self
0x9F968F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9694: push    offset sub_A238B0; void (__cdecl *)()
0x9F9699: call    _atexit
0x9F969E: pop     ecx
0x9F969F: retn
