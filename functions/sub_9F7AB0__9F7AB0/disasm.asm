0x9F7AB0: push    222C31h; defaultValue
0x9F7AB5: push    offset aIhaircolor13; "iHairColor13"
0x9F7ABA: mov     ecx, offset stru_B39420; self
0x9F7ABF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7AC4: push    offset sub_A22F60; void (__cdecl *)()
0x9F7AC9: call    _atexit
0x9F7ACE: pop     ecx
0x9F7ACF: retn
