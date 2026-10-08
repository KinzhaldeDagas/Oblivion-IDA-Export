0x9F7710: push    offset aShaircolor0; "sHairColor0"
0x9F7715: push    offset aShaircolor0; "sHairColor0"
0x9F771A: mov     ecx, offset stru_B39338; self
0x9F771F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7724: push    offset sub_A22D90; void (__cdecl *)()
0x9F7729: call    _atexit
0x9F772E: pop     ecx
0x9F772F: retn
