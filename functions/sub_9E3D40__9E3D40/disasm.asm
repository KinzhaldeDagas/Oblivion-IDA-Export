0x9E3D40: push    offset aCharacters_m_4; "Characters\\_Male\\Hand.NIF"
0x9E3D45: push    offset aSracemalehandm; "sRaceMaleHandModel"
0x9E3D4A: mov     ecx, offset stru_B36320; self
0x9E3D4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3D54: push    offset sub_A1C2F0; void (__cdecl *)()
0x9E3D59: call    _atexit
0x9E3D5E: pop     ecx
0x9E3D5F: retn
