0x9E3E00: push    offset aCharactersIm_2; "Characters\\Imperial\\EyeLeftHuman.NIF"
0x9E3E05: push    offset aSracelefteyemo; "sRaceLeftEyeModel"
0x9E3E0A: mov     ecx, offset stru_B36350; self
0x9E3E0F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3E14: push    offset sub_A1C350; void (__cdecl *)()
0x9E3E19: call    _atexit
0x9E3E1E: pop     ecx
0x9E3E1F: retn
