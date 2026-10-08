0x9F7170: push    offset aNoseFlatPointe; "Nose flat/pointed"
0x9F7175: push    offset aSnoseflat; "sNoseflat"
0x9F717A: mov     ecx, offset stru_B391D0; self
0x9F717F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7184: push    offset sub_A22AC0; void (__cdecl *)()
0x9F7189: call    _atexit
0x9F718E: pop     ecx
0x9F718F: retn
