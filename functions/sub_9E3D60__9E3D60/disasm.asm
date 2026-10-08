0x9E3D60: push    offset aCharacters_m_5; "Characters\\_Male\\Foot.NIF"
0x9E3D65: push    offset aSracemalefootm; "sRaceMaleFootModel"
0x9E3D6A: mov     ecx, offset stru_B36328; self
0x9E3D6F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3D74: push    offset sub_A1C300; void (__cdecl *)()
0x9E3D79: call    _atexit
0x9E3D7E: pop     ecx
0x9E3D7F: retn
