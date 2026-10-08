0x9E3E80: push    offset aCharacters__12; "Characters\\_Male\\Body.egt"
0x9E3E85: push    offset aSracebodytextu; "sRaceBodyTextureModel"
0x9E3E8A: mov     ecx, offset stru_B36370; self
0x9E3E8F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3E94: push    offset sub_A1C390; void (__cdecl *)()
0x9E3E99: call    _atexit
0x9E3E9E: pop     ecx
0x9E3E9F: retn
