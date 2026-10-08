0x9F6F90: push    offset aJawNeckSlopeHi; "Jaw-Neck slope high/low"
0x9F6F95: push    offset aSjawneck; "sJawNeck"
0x9F6F9A: mov     ecx, offset stru_B39158; self
0x9F6F9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6FA4: push    offset sub_A229D0; void (__cdecl *)()
0x9F6FA9: call    _atexit
0x9F6FAE: pop     ecx
0x9F6FAF: retn
