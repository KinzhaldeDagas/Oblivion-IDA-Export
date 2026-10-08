0x9E3E40: push    offset aCharacters__10; "Characters\\_Male\\UpperBodyHumanMale.e"...
0x9E3E45: push    offset aSracemaleupp_0; "sRaceMaleUpperBodyTextureModel"
0x9E3E4A: mov     ecx, offset stru_B36360; self
0x9E3E4F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3E54: push    offset sub_A1C370; void (__cdecl *)()
0x9E3E59: call    _atexit
0x9E3E5E: pop     ecx
0x9E3E5F: retn
