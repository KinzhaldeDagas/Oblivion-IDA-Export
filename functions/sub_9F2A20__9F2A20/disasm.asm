0x9F2A20: push    offset aFor; defaultValue
0x9F2A25: push    offset aSfor; "sFor"
0x9F2A2A: mov     ecx, offset stru_B38D10; self
0x9F2A2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F2A34: push    offset sub_A22140; void (__cdecl *)()
0x9F2A39: call    _atexit
0x9F2A3E: pop     ecx
0x9F2A3F: retn
