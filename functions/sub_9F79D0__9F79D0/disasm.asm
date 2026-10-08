0x9F79D0: push    33474Dh; defaultValue
0x9F79D5: push    offset aIhaircolor06; "iHairColor06"
0x9F79DA: mov     ecx, offset stru_B393E8; self
0x9F79DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F79E4: push    offset sub_A22EF0; void (__cdecl *)()
0x9F79E9: call    _atexit
0x9F79EE: pop     ecx
0x9F79EF: retn
