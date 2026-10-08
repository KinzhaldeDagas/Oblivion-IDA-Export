0x9F7750: push    offset aShaircolor2; "sHairColor2"
0x9F7755: push    offset aShaircolor2; "sHairColor2"
0x9F775A: mov     ecx, offset stru_B39348; self
0x9F775F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7764: push    offset sub_A22DB0; void (__cdecl *)()
0x9F7769: call    _atexit
0x9F776E: pop     ecx
0x9F776F: retn
