0x9E3DA0: push    offset aCharacters_m_7; "Characters\\_Male\\FemaleLowerBody.NIF"
0x9E3DA5: push    offset aSracefemalelow; "sRaceFemaleLowerBodyModel"
0x9E3DAA: mov     ecx, offset stru_B36338; self
0x9E3DAF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E3DB4: push    offset sub_A1C320; void (__cdecl *)()
0x9E3DB9: call    _atexit
0x9E3DBE: pop     ecx
0x9E3DBF: retn
