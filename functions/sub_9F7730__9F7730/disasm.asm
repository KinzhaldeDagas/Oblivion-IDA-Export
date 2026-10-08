0x9F7730: push    offset aShaircolor1; "sHairColor1"
0x9F7735: push    offset aShaircolor1; "sHairColor1"
0x9F773A: mov     ecx, offset stru_B39340; self
0x9F773F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7744: push    offset sub_A22DA0; void (__cdecl *)()
0x9F7749: call    _atexit
0x9F774E: pop     ecx
0x9F774F: retn
