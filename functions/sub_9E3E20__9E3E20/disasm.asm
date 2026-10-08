0x9E3E20: push    offset aCharactersIm_3; "Characters\\Imperial\\EyeRightHuman.NIF"
0x9E3E25: push    offset aSracerighteyem; "sRaceRightEyeModel"
0x9E3E2A: mov     ecx, offset stru_B36358; self
0x9E3E2F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3E34: push    offset sub_A1C360; void (__cdecl *)()
0x9E3E39: call    _atexit
0x9E3E3E: pop     ecx
0x9E3E3F: retn
