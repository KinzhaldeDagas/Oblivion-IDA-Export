0x9F9B60: push    offset aStrengthDescri; "Strength Description"
0x9F9B65: push    offset aSattributedesc; "sAttributeDescStrength"
0x9F9B6A: mov     ecx, 0B3A174h; self
0x9F9B6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9B74: push    offset sub_A23B20; void (__cdecl *)()
0x9F9B79: call    _atexit
0x9F9B7E: pop     ecx
0x9F9B7F: retn
