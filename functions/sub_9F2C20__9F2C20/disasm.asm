0x9F2C20: push    offset aHigh; "High"
0x9F2C25: push    offset aShigh; "sHigh"
0x9F2C2A: mov     ecx, offset stru_B38D90; self
0x9F2C2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2C34: push    offset sub_A22240; void (__cdecl *)()
0x9F2C39: call    _atexit
0x9F2C3E: pop     ecx
0x9F2C3F: retn
