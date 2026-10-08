0x9F78D0: push    offset aShaircolor14; "sHairColor14"
0x9F78D5: push    offset aShaircolor14; "sHairColor14"
0x9F78DA: mov     ecx, offset stru_B393A8; self
0x9F78DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F78E4: push    offset sub_A22E70; void (__cdecl *)()
0x9F78E9: call    _atexit
0x9F78EE: pop     ecx
0x9F78EF: retn
