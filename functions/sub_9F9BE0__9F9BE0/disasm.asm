0x9F9BE0: push    offset aSpeedDescripti; "Speed Description"
0x9F9BE5: push    offset aSattributede_3; "sAttributeDescSpeed"
0x9F9BEA: mov     ecx, offset stru_B3A194; self
0x9F9BEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F9BF4: push    offset sub_A23B60; void (__cdecl *)()
0x9F9BF9: call    _atexit
0x9F9BFE: pop     ecx
0x9F9BFF: retn
