0x9F07D0: push    offset aDiseasesContra; "Diseases Contracted: "
0x9F07D5: push    offset aSmiscdiseasesc; "sMiscDiseasesContracted"
0x9F07DA: mov     ecx, offset stru_B384E0; self
0x9F07DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F07E4: push    offset sub_A210E0; void (__cdecl *)()
0x9F07E9: call    _atexit
0x9F07EE: pop     ecx
0x9F07EF: retn
