0x9F7A90: push    2D2322h; defaultValue
0x9F7A95: push    offset aIhaircolor12; "iHairColor12"
0x9F7A9A: mov     ecx, offset stru_B39418; self
0x9F7A9F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F7AA4: push    offset sub_A22F50; void (__cdecl *)()
0x9F7AA9: call    _atexit
0x9F7AAE: pop     ecx
0x9F7AAF: retn
