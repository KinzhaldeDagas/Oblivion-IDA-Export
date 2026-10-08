0x9E3D80: push    offset aCharacters_m_6; "Characters\\_Male\\FemaleUpperBody.NIF"
0x9E3D85: push    offset aSracefemaleupp; "sRaceFemaleUpperBodyModel"
0x9E3D8A: mov     ecx, offset stru_B36330; self
0x9E3D8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3D94: push    offset sub_A1C310; void (__cdecl *)()
0x9E3D99: call    _atexit
0x9E3D9E: pop     ecx
0x9E3D9F: retn
