0x9F6B90: push    offset aEyebrows; "Eyebrows"
0x9F6B95: push    offset aSeyebrows; "sEyebrows"
0x9F6B9A: mov     ecx, offset stru_B39058; self
0x9F6B9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6BA4: push    offset sub_A227D0; void (__cdecl *)()
0x9F6BA9: call    _atexit
0x9F6BAE: pop     ecx
0x9F6BAF: retn
