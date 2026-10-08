0x9E3D00: push    offset aCharacters_m_2; "Characters\\_Male\\UpperBody.NIF"
0x9E3D05: push    offset aSracemaleupper; "sRaceMaleUpperBodyModel"
0x9E3D0A: mov     ecx, 0B36310h; self
0x9E3D0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3D14: push    offset sub_A1C2D0; void (__cdecl *)()
0x9E3D19: call    _atexit
0x9E3D1E: pop     ecx
0x9E3D1F: retn
