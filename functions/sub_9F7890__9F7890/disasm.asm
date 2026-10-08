0x9F7890: push    offset aShaircolor12; "sHairColor12"
0x9F7895: push    offset aShaircolor12; "sHairColor12"
0x9F789A: mov     ecx, offset stru_B39398; self
0x9F789F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F78A4: push    offset sub_A22E50; void (__cdecl *)()
0x9F78A9: call    _atexit
0x9F78AE: pop     ecx
0x9F78AF: retn
